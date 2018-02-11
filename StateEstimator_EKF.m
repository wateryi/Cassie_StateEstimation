% State Estimator
classdef StateEstimator_EKF < matlab.System & matlab.system.mixin.Propagates %#codegen
    
    % Public, tunale properties
    properties
        static_bias_initialization = true;
        ekf_update_enabled = true;
        dt = 1/1000;
        
        % Enable Bias Estimation
        enable_bias_estimation = true;
        % Gyroscope Noise std
        gyro_noise_std = 0.1*ones(3,1);
        % Gyroscope Bias Noise std
        gyro_bias_noise_std = 0.1*ones(3,1);
        % Accelerometer Noise std
        accel_noise_std = 0.1*ones(3,1);
        % Accelerometer Bias Noise std
        accel_bias_noise_std = 0.1*ones(3,1);
        % Contact Noise std
        contact_noise_std = 0.1*ones(3,1);
        % Encoder Noise std
        encoder_noise_std = 0.1*ones(14,1);
        % Gyroscope Bias Initial Condition 
        gyro_bias_init = zeros(3,1);
        % Accelerometer Bias Initial Condition
        accel_bias_init = zeros(3,1);
    end
    
    % PROTECTED PROPERTIES ==================================================
    properties (Access = protected)
        params
    end % properties
    
    % Private variales
    properties(Access = private)
        mu_prev;
        Sigma_prev;
        filter_enabled;
        bias_initialized;
        ba0 = zeros(3,1);
        bg0 = zeros(3,1);
        a_init_vec;
        w_init_vec;
        imu_init_count = 1;
        flight_phase = true;
        t_liftoff = 0;
        
        % Sensor Covariances
        Qg;    % Gyro Covariance Matrix
        Qbg;   % Gyro bias Covariance Matrix
        Qa;    % Accel Covariance Matrix
        Qba;   % Accel Bias Covariance Matrix
        Qc;    % Contact Covariance Matrix
        Qe;    % Encoder Covariance Matrix
    end
    
    % Pre-computed constants
    properties(Access = private, Constant)
        % EKF Noise Parameters
        g = [0;0;-9.81];          % Gravity
        N = 21;
        imu_init_total_count = 1000;
    end
    
    % PROTECTED METHODS =====================================================
    methods (Access = protected)
        
        function setupImpl(obj)
            %SETUPIMPL Initialize System object.
            obj.params = CassieParameters;
            obj.mu_prev = [zeros(3,1); zeros(3,1); [1;0;0;0]; zeros(12,1)];
            obj.Sigma_prev = zeros(21);
            obj.filter_enabled = false;
            obj.bias_initialized = false;
            obj.a_init_vec = zeros(3, obj.imu_init_total_count);
            obj.w_init_vec = zeros(3, obj.imu_init_total_count);
            obj.t_liftoff = 0;
            
            % Initialize Sensor Covariances
            obj.Qg = diag(obj.gyro_noise_std.^2);          % Gyro Covariance Matrix
            obj.Qbg = diag(obj.gyro_bias_noise_std.^2);    % Gyro bias Covariance Matrix
            obj.Qa = diag(obj.accel_noise_std.^2);         % Accel Covariance Matrix
            obj.Qba = diag(obj.accel_bias_noise_std.^2);   % Accel Bias Covariance Matrix
            obj.Qc = diag(obj.contact_noise_std.^2);       % Contact Covariance Matrix
            obj.Qe = diag(obj.encoder_noise_std.^2);       % Encoder Covariance Matrix
            
            % Initialize bias estimates
            obj.bg0 = obj.gyro_bias_init;
            obj.ba0 = obj.accel_bias_init;
                        
        end % setupImpl
        
        function [mu, Sigma, enabled] = stepImpl(obj, EnableFilter, t, w, a, e, q_init, v_init, contact)
            % Function that creates a state vector from sensor readings.
            %
            %   Inputs:
            %       EnableFilter - flag to enable/disable the filter
            %       t            - time
            %       w            - angular velocity, {I}_w_{WI}
            %       a            - linear acceleration, {I}_a_{WI}
            %       e            - joint encoder positions
            %       e_dot        - joint encoder velocities
            %       contact      - contact indicator
            %
            %   Outputs:
            %       mu      - current state estimate, [{W}_p_{WI}, {W}_v_{WI}, R_{IW}, {W}_p_{WR}, {W}_p_{WL}, {I}_ba_{WI}, {I}_bw_{WI}]
            %       Sigma   - current covariance estimate 
            %       enabled - flag indicating when the filter is enabled
            %
            %   Author: Ross Hartley
            %   Date:   11/6/2017
            %
            
%             if t > 140 && t < 150
%                 contact = [0;0];
%             end
            
            % Wait until valid encoder signal
            if norm(e) == 0
                EnableFilter = 0; % Keep filter disabled
            end
            
            % Initialize bias
            if obj.static_bias_initialization
                if ~obj.bias_initialized
                    if norm(a) > 0 && norm(w) > 0 % Wait for valid signal
                        if obj.imu_init_count <= obj.imu_init_total_count
                            % Accumulate vector of imu data
                            Rwi = Angles.Quaternion_to_Rotation(q_init);
                            obj.a_init_vec(:,obj.imu_init_count) = Rwi'*(Rwi*a + obj.g);
                            obj.w_init_vec(:,obj.imu_init_count) = w;
                            obj.imu_init_count = obj.imu_init_count + 1;
                        else
                            % Use imu data vector to estimate initial biases
                            obj.ba0 = mean(obj.a_init_vec,2);
                            obj.bg0 = mean(obj.w_init_vec,2);
                            obj.bias_initialized = true;
                        end
                    end
                    EnableFilter = 0; % Keep filter disabled until bias is initialized
                end
            else
                obj.bias_initialized = true;
            end
            
            % If filter is disabled, zero everything
            if ~EnableFilter
                obj.mu_prev = [zeros(6,1);[0;0;0;1]; zeros(6,1); zeros(6,1)];
                obj.Sigma_prev = eye(21,21);
                obj.filter_enabled = false;
            end
            
            % If filter is enabled, initialize filter is not already initialized
            if EnableFilter && ~obj.filter_enabled
                if contact(1) == 1
                    % Initialize with left foot at 0
                    Rwi = Angles.Quaternion_to_Rotation(q_init);
%                     r0 = - Rwi * p_VectorNav_to_LeftToeBottom(e); % {W}_p_{WL}
                    r0 = zeros(3,1);
                    pR = r0 + Rwi * p_VectorNav_to_RightToeBottom(e); % {W}_p_{WR}
                    pL = r0 + Rwi * p_VectorNav_to_LeftToeBottom(e); % {W}_p_{WL}
                    obj.mu_prev = [r0; Rwi*v_init; Angles.Rotation_to_Quaternion(Rwi'); pR; pL; obj.ba0; obj.bg0];
                    obj.Sigma_prev = blkdiag(0.01*eye(3),0.1*eye(3), 0.1*eye(3), 0.1*eye(3), 0.1*eye(3), (5e-2*eye(3)).^2, (5e-3*eye(3)).^2);
                    obj.filter_enabled = true;
                    
                elseif contact(2) == 1
                    % Initialize with right foot at 0
                    Rwi = Angles.Quaternion_to_Rotation(q_init);
%                     r0 = - Rwi * p_VectorNav_to_RightToeBottom(e); % {W}_p_{WR}
                    r0 = zeros(3,1);
                    pR = r0 + Rwi * p_VectorNav_to_RightToeBottom(e); % {W}_p_{WR}
                    pL = r0 + Rwi * p_VectorNav_to_LeftToeBottom(e); % {W}_p_{WL}
                    obj.mu_prev = [r0; Rwi*v_init; Angles.Rotation_to_Quaternion(Rwi'); pR; pL; obj.ba0; obj.bg0];
                    obj.Sigma_prev = blkdiag(0.1*eye(3),0.1*eye(3), 0.1*eye(3), 0.1*eye(3), 0.1*eye(3), (5e-2*eye(3)).^2, (5e-3*eye(3)).^2);
                    obj.filter_enabled = true;
                end
                
                % Randomize Initial Condition
%                 obj.mu_prev(7:10) = Angles.Rotation_to_Quaternion( Angles.Euler_to_Rotation([0,0,pi] + deg2rad([0,0,0]))' );
%                 obj.mu_prev(4:6) = [0.5; -0.3; 0.7];
                obj.Sigma_prev(7:9,7:9) = (deg2rad(30)^2) * eye(3);
                obj.Sigma_prev(4:6,4:6) = (1^2) * eye(3);
                
            end

%             % Reset Filter if flight phase happens for longer than 100ms
%             if contact(1) ~= 1 && contact(2) ~= 1
%                 obj.flight_phase = true;
%             else
%                 obj.t_liftoff = t;
%                 obj.flight_phase = false;
%             end
%             if (t - obj.t_liftoff) > 0.1
%                 obj.filter_enabled = false;
%             end
            
            %% Predict state using IMU measurements
            [r, v, q, pR, pL, bf, bw] = obj.Separate_States(obj.mu_prev);
            
            % Bias corrected IMU information
            f_k = a - bf;    % {I}_a_{WI}
            w_k = w - bw;    % {I}_w_{WI}
            
            % Orientation of world frame wrt IMU frame
            C = Angles.Quaternion_to_Rotation(q);

            % Base Pose Dynamics
            r_p = r + v*obj.dt + 0.5*(C'*f_k + obj.g)*obj.dt^2;
            v_p = v + (C'*f_k + obj.g)*obj.dt;
            q_p = Angles.Quaternion_Multiply(Angles.expq(w_k*obj.dt), q);
            
            % Foot Position Dynamics
            Rwi = Angles.Quaternion_to_Rotation(q_p)';
            pR_off = r_p + Rwi * p_VectorNav_to_RightToeBottom(e); % {W}_p_{WR}
            pL_off = r_p + Rwi * p_VectorNav_to_LeftToeBottom(e);  % {W}_p_{WL}
            pR_p = contact(2)*pR + (1-contact(2))*pR_off;
            pL_p = contact(1)*pL + (1-contact(1))*pL_off;
            
            % Bias Dynamics
            bf_p = bf;
            bw_p = bw; 
            
            % Construct predicted state
            mu_pred = [r_p; v_p; q_p; pR_p; pL_p; bf_p; bw_p];
            
            % Linearized error dynamics
            Fc = [zeros(3),   eye(3),             zeros(3), zeros(3), zeros(3), zeros(3), zeros(3);
                  zeros(3), zeros(3), -C'*Angles.skew(f_k), zeros(3), zeros(3),      -C', zeros(3);
                  zeros(3), zeros(3),    -Angles.skew(w_k), zeros(3), zeros(3), zeros(3),  -eye(3);
                  zeros(3), zeros(3),             zeros(3), zeros(3), zeros(3), zeros(3), zeros(3);
                  zeros(3), zeros(3),             zeros(3), zeros(3), zeros(3), zeros(3), zeros(3);
                  zeros(3), zeros(3),             zeros(3), zeros(3), zeros(3), zeros(3), zeros(3);
                  zeros(3), zeros(3),             zeros(3), zeros(3), zeros(3), zeros(3), zeros(3)];
                      
            Lc = blkdiag(zeros(3), -C', -eye(3), C', C', eye(3), eye(3));
            
            hR_R = R_VectorNav_to_RightToeBottom(e);
            hR_L = R_VectorNav_to_LeftToeBottom(e);
            Q = blkdiag(zeros(3), obj.Qa, obj.Qg, hR_R*(obj.Qc+(1e4*eye(3).*(1-contact(2))))*hR_R', hR_L*(obj.Qc+(1e4*eye(3).*(1-contact(1))))*hR_L', obj.Qba, obj.Qbg); 
                      
            Fk = eye(21) + Fc*obj.dt; % Discretized
            Qk = Fk*Lc*Q*Lc'*Fk'*obj.dt; % Discretized

            % Predict Covariance
            Sigma_pred = zeros(21,21);
            if ~obj.enable_bias_estimation
                Sigma_pred(1:15,1:15) = Fk(1:15,1:15)*obj.Sigma_prev(1:15,1:15)*Fk(1:15,1:15)' + Qk(1:15,1:15);
            else
                Sigma_pred = Fk*obj.Sigma_prev*Fk' + Qk;
            end

            %% Update state using encoder measurements
            
            % Orientation of World wrt Body frame
            C = Angles.Quaternion_to_Rotation(q_p);
            
            if contact(2) == 1 && contact(1) == 1 && obj.ekf_update_enabled 
                % Double Support
                s_pR = p_VectorNav_to_RightToeBottom(e);
                s_pL = p_VectorNav_to_LeftToeBottom(e);

                y = [s_pR - C*(pR_p - r_p);
                     s_pL - C*(pL_p - r_p)];
                O = zeros(3);
                Hk = [-C, O, Angles.skew(C*(pR_p - r_p)), C, O, O, O;
                      -C, O, Angles.skew(C*(pL_p - r_p)), O, C, O, O];
                  
                JR = J_VectorNav_to_RightToeBottom(e);
                JL = J_VectorNav_to_LeftToeBottom(e);
                Rk = blkdiag(JR * obj.Qe * JR', JL * obj.Qe * JL');  
                
                % Compute measurement update
                S = Hk*Sigma_pred*Hk' + Rk;  % Innovation covariance
                K = (Sigma_pred*Hk')/S;    % Kalman gain
                x_delta = K*y;           % Correction vector
                
                % Update the state
                mu = obj.Compose(mu_pred, x_delta);
                
                % Update Covariance
                Sigma = zeros(21);
                if ~obj.enable_bias_estimation
                    tmp1 = K*Hk; 
                    tmp2 = K*Rk*K';
                    Sigma(1:15,1:15) = (eye(15) - tmp1(1:15,1:15))*Sigma_pred(1:15,1:15)*(eye(15) - tmp1(1:15,1:15))' + tmp2(1:15,1:15); % Joseph update form
                else
                    Sigma = (eye(obj.N) - K*Hk)*Sigma_pred*(eye(obj.N) - K*Hk)' + K*Rk*K'; % Joseph update form
                end

            elseif contact(2) == 1 && obj.ekf_update_enabled
                % Single Support Right    
                s_pR = p_VectorNav_to_RightToeBottom(e);

                y = s_pR - C*(pR_p - r_p);
                O = zeros(3);
                Hk = [-C, O, Angles.skew(C*(pR_p - r_p)), C, O, O, O];
                
                JR = J_VectorNav_to_RightToeBottom(e);
                Rk = JR * obj.Qe * JR';
                
                % Compute measurement update
                S = Hk*Sigma_pred*Hk' + Rk;  % Innovation covariance
                K = (Sigma_pred*Hk')/S;    % Kalman gain
                x_delta = K*y;           % Correction vector
                
                % Update the state
                mu = obj.Compose(mu_pred, x_delta);
                
                % Update Covariance
                Sigma = zeros(21);
                if ~obj.enable_bias_estimation
                    tmp1 = K*Hk; 
                    tmp2 = K*Rk*K';
                    Sigma(1:15,1:15) = (eye(15) - tmp1(1:15,1:15))*Sigma_pred(1:15,1:15)*(eye(15) - tmp1(1:15,1:15))' + tmp2(1:15,1:15); % Joseph update form
                else
                    Sigma = (eye(obj.N) - K*Hk)*Sigma_pred*(eye(obj.N) - K*Hk)' + K*Rk*K'; % Joseph update form
                end

            elseif contact(1) == 1 && obj.ekf_update_enabled
                % Single Support Left
                s_pL = p_VectorNav_to_LeftToeBottom(e);

                y = s_pL - C*(pL_p - r_p);
                O = zeros(3);
                Hk = [-C, O, Angles.skew(C*(pL_p - r_p)), O, C, O, O];

                JL = J_VectorNav_to_LeftToeBottom(e);
                Rk = JL * obj.Qe * JL';
                
                % Compute measurement update
                S = Hk*Sigma_pred*Hk' + Rk;  % Innovation covariance
                K = (Sigma_pred*Hk')/S;    % Kalman gain
                x_delta = K*y;           % Correction vector
                
                % Update the state
                mu = obj.Compose(mu_pred, x_delta);
                
                % Update Covariance
                Sigma = zeros(21);
                if ~obj.enable_bias_estimation
                    tmp1 = K*Hk; 
                    tmp2 = K*Rk*K';
                    Sigma(1:15,1:15) = (eye(15) - tmp1(1:15,1:15))*Sigma_pred(1:15,1:15)*(eye(15) - tmp1(1:15,1:15))' + tmp2(1:15,1:15); % Joseph update form
                else
                    Sigma = (eye(obj.N) - K*Hk)*Sigma_pred*(eye(obj.N) - K*Hk)' + K*Rk*K'; % Joseph update form
                end

            else
                % Flight (no measurements) or update disaled
                Sigma = Sigma_pred;
                mu = mu_pred;
            end
            
            % If filter is disabled, output initial values
            if ~obj.filter_enabled
                mu = zeros(22,1);
                mu(7:10) = Angles.Euler_to_Quaternion([0,0,0]);
                Sigma = eye(21); obj.Sigma_prev(16:21,16:21) = 1e-4*eye(6);
            end
            
            % Overwrite bias term if estimation is disabled
            if ~obj.enable_bias_estimation
                mu(17:22) = mu_pred(17:22);
            end
            
            % Store last values
            obj.mu_prev = mu;
            obj.Sigma_prev = Sigma;
            
            % Output enable flag
            enabled = double(obj.filter_enabled);
            
           

        end % stepImpl

        
        function [r, v, q, pR, pL, bf, bw] = Separate_States(~, mu) 
            % Separate state vector into components
            r = mu(1:3);    % Base Position
            v = mu(4:6);    % Base Velocity
            q = mu(7:10);   % Orientation
            pR = mu(11:13); % Right Foot Position
            pL = mu(14:16); % Left Foot Position
            bf = mu(17:19); % Accel Bias
            bw = mu(20:22); % Gyro Bias
        end
        
        function [mu] = Compose(obj, mu_bar, x_delta)
            % Update state prediction with error correction vector
            [r_bar, v_bar, q_bar, pR_bar, pL_bar, bf_bar, bw_bar] = obj.Separate_States(mu_bar);

            r = r_bar + x_delta(1:3);
            v = v_bar + x_delta(4:6);
            q = Angles.Quaternion_Multiply(Angles.expq(x_delta(7:9)), q_bar); 
            pR = pR_bar + x_delta(10:12);
            pL = pL_bar + x_delta(13:15);
            bf = bf_bar + x_delta(16:18);
            bw = bw_bar + x_delta(19:21);

            mu = [r; v; q; pR; pL; bf; bw];
        end
    
        
        %% Define Outputs
        function resetImpl(~)
            %RESETIMPL Reset System object states.
        end % resetImpl
        
        function [mu, Sigma, enabled] = getOutputSizeImpl(~)
            %GETOUTPUTSIZEIMPL Get sizes of output ports.
            mu = [22, 1];
            Sigma = [21,21];
            enabled = [1,1];
        end % getOutputSizeImpl
        
        function [mu, Sigma, enabled] = getOutputDataTypeImpl(~)
            %GETOUTPUTDATATYPEIMPL Get data types of output ports.
            mu = 'double';
            Sigma = 'double';
            enabled = 'double';
        end % getOutputDataTypeImpl
        
        function [mu, Sigma, enabled] = isOutputComplexImpl(~)
            %ISOUTPUTCOMPLEXIMPL Complexity of output ports.
            mu = false;
            Sigma = false;
            enabled = false;
        end % isOutputComplexImpl
        
        function [mu, Sigma, enabled] = isOutputFixedSizeImpl(~)
            %ISOUTPUTFIXEDSIZEIMPL Fixed-size or variale-size output ports.
            mu = true;
            Sigma = true;
            enabled = true;
        end % isOutputFixedSizeImpl
    end % methods
end % classdef