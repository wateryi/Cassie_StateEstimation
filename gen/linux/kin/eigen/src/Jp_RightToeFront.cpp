/*
 * Automatically Generated from Mathematica.
 * Tue 8 Jan 2019 22:44:49 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jp_RightToeFront.h"

#ifdef _MSC_VER
  #define INLINE __forceinline /* use __forceinline (VC++ specific) */
#else
  #define INLINE static inline        /* use standard inline */
#endif

/**
 * Copied from Wolfram Mathematica C Definitions file mdefs.hpp
 * Changed marcos to inline functions (Eric Cousineau)
 */
INLINE double Power(double x, double y) { return pow(x, y); }
INLINE double Sqrt(double x) { return sqrt(x); }

INLINE double Abs(double x) { return fabs(x); }

INLINE double Exp(double x) { return exp(x); }
INLINE double Log(double x) { return log(x); }

INLINE double Sin(double x) { return sin(x); }
INLINE double Cos(double x) { return cos(x); }
INLINE double Tan(double x) { return tan(x); }

INLINE double Csc(double x) { return 1.0/sin(x); }
INLINE double Sec(double x) { return 1.0/cos(x); }

INLINE double ArcSin(double x) { return asin(x); }
INLINE double ArcCos(double x) { return acos(x); }


/* update ArcTan function to use atan2 instead. */
INLINE double ArcTan(double x, double y) { return atan2(y,x); }

INLINE double Sinh(double x) { return sinh(x); }
INLINE double Cosh(double x) { return cosh(x); }
INLINE double Tanh(double x) { return tanh(x); }

#define E 2.71828182845904523536029
#define Pi 3.14159265358979323846264
#define Degree 0.01745329251994329576924

/*
 * Sub functions
 */
static void output1(Eigen::Matrix<double,3,20> &p_output1, const Eigen::Matrix<double,20,1> &var1)
{
  double t433;
  double t809;
  double t670;
  double t697;
  double t853;
  double t32;
  double t43;
  double t53;
  double t146;
  double t523;
  double t725;
  double t865;
  double t940;
  double t1054;
  double t1239;
  double t1336;
  double t1340;
  double t8;
  double t1583;
  double t1592;
  double t1600;
  double t1639;
  double t1673;
  double t1679;
  double t1703;
  double t1790;
  double t1793;
  double t1820;
  double t2140;
  double t2152;
  double t2157;
  double t2281;
  double t2301;
  double t2404;
  double t2520;
  double t2671;
  double t2675;
  double t2707;
  double t2780;
  double t2796;
  double t2813;
  double t2834;
  double t2845;
  double t2865;
  double t2888;
  double t3001;
  double t3046;
  double t3169;
  double t3277;
  double t3292;
  double t3334;
  double t3393;
  double t3422;
  double t3439;
  double t3495;
  double t3533;
  double t3538;
  double t3544;
  double t3661;
  double t3667;
  double t3676;
  double t3700;
  double t3714;
  double t3729;
  double t3782;
  double t3847;
  double t3928;
  double t3930;
  double t3965;
  double t3969;
  double t3979;
  double t69;
  double t341;
  double t425;
  double t603;
  double t644;
  double t1087;
  double t1111;
  double t1151;
  double t1225;
  double t1482;
  double t1489;
  double t1533;
  double t4192;
  double t4194;
  double t4213;
  double t4222;
  double t4237;
  double t4261;
  double t1692;
  double t1707;
  double t1738;
  double t4273;
  double t4275;
  double t4281;
  double t2019;
  double t2056;
  double t2079;
  double t2465;
  double t2590;
  double t2670;
  double t4318;
  double t4320;
  double t4335;
  double t4396;
  double t4429;
  double t4451;
  double t2739;
  double t2750;
  double t2756;
  double t2868;
  double t2908;
  double t2954;
  double t4473;
  double t4496;
  double t4507;
  double t4516;
  double t4528;
  double t4529;
  double t3267;
  double t3268;
  double t3276;
  double t3482;
  double t3507;
  double t3529;
  double t4562;
  double t4587;
  double t4588;
  double t4593;
  double t4601;
  double t4617;
  double t3619;
  double t3627;
  double t3631;
  double t3781;
  double t3787;
  double t3822;
  double t4623;
  double t4633;
  double t4637;
  double t4669;
  double t4673;
  double t4676;
  double t3939;
  double t3943;
  double t3954;
  double t4689;
  double t4692;
  double t4693;
  double t4738;
  double t4762;
  double t4778;
  double t4980;
  double t4981;
  double t4999;
  double t5043;
  double t5050;
  double t5071;
  double t5118;
  double t5121;
  double t5123;
  double t5131;
  double t5135;
  double t5170;
  double t5194;
  double t5209;
  double t5223;
  double t5235;
  double t5249;
  double t5250;
  double t5270;
  double t5271;
  double t5282;
  double t5288;
  double t5291;
  double t5292;
  double t5300;
  double t5301;
  double t5302;
  double t5304;
  double t5309;
  double t5310;
  double t5316;
  double t5320;
  double t5325;
  double t5457;
  double t5463;
  double t5464;
  double t5468;
  double t5474;
  double t5491;
  double t5545;
  double t5546;
  double t5549;
  double t5562;
  double t5564;
  double t5565;
  double t5576;
  double t5582;
  double t5584;
  double t5596;
  double t5598;
  double t5600;
  double t5608;
  double t5609;
  double t5612;
  double t5627;
  double t5630;
  double t5645;
  double t5658;
  double t5660;
  double t5661;
  double t5685;
  double t5690;
  double t5696;
  double t5718;
  double t5726;
  double t5735;
  double t5852;
  double t5860;
  double t5868;
  double t5876;
  double t5888;
  double t5891;
  double t5913;
  double t5915;
  double t5918;
  double t5930;
  double t5934;
  double t5946;
  double t5956;
  double t5957;
  double t5961;
  double t5983;
  double t5984;
  double t5985;
  double t6022;
  double t6027;
  double t6028;
  double t6056;
  double t6059;
  double t6060;
  double t6068;
  double t6069;
  double t6070;
  double t6084;
  double t6087;
  double t6094;
  double t6104;
  double t6114;
  double t6119;
  double t6182;
  double t6187;
  double t6190;
  double t6207;
  double t6212;
  double t6193;
  double t6201;
  double t6204;
  double t6233;
  double t6238;
  double t6244;
  double t6251;
  double t6257;
  double t6261;
  double t6295;
  double t6305;
  double t6320;
  double t6340;
  double t6343;
  double t6352;
  double t6354;
  double t6362;
  double t6365;
  double t6385;
  double t6389;
  double t6404;
  double t6424;
  double t6434;
  double t6454;
  double t6472;
  double t6480;
  double t6481;
  double t6537;
  double t6538;
  double t6555;
  double t6603;
  double t6613;
  double t6614;
  double t6585;
  double t6594;
  double t6657;
  double t6663;
  double t6665;
  double t6681;
  double t6696;
  double t6701;
  double t6716;
  double t6720;
  double t6728;
  double t6737;
  double t6742;
  double t6747;
  double t6762;
  double t6763;
  double t6783;
  double t6795;
  double t6798;
  double t6802;
  double t6809;
  double t6812;
  double t6821;
  double t6829;
  double t6835;
  double t6836;
  double t6957;
  double t6961;
  double t6973;
  double t6897;
  double t6901;
  double t6917;
  double t7021;
  double t7029;
  double t7042;
  double t7053;
  double t7058;
  double t7063;
  double t7069;
  double t7073;
  double t7079;
  double t7084;
  double t7089;
  double t7102;
  double t7132;
  double t7141;
  double t7157;
  double t7168;
  double t7170;
  double t7182;
  double t7185;
  double t7188;
  double t7194;
  double t7198;
  double t7219;
  double t7225;
  double t7273;
  double t7286;
  double t7306;
  double t7313;
  double t7320;
  double t7337;
  double t7338;
  double t7339;
  double t7345;
  double t7348;
  double t7350;
  double t7362;
  double t7366;
  double t7371;
  double t7382;
  double t7387;
  double t7388;
  double t7394;
  double t7398;
  double t7410;
  double t7416;
  double t7418;
  double t7419;
  double t7429;
  double t7442;
  double t7443;
  double t7505;
  double t7508;
  double t7520;
  double t7559;
  double t7560;
  double t7526;
  double t7538;
  double t7583;
  double t7587;
  double t7595;
  double t7599;
  double t7609;
  double t7612;
  double t7632;
  double t7644;
  double t7645;
  double t7647;
  double t7649;
  double t7650;
  double t7668;
  double t7670;
  double t7679;
  double t7690;
  double t7691;
  double t7692;
  double t7696;
  double t7697;
  double t7698;
  double t7703;
  double t7704;
  double t7720;
  double t6921;
  double t6980;
  double t6995;
  double t6996;
  double t7044;
  double t7067;
  double t7081;
  double t7124;
  double t7164;
  double t7184;
  double t7197;
  double t7226;
  double t7229;
  double t7231;
  double t7242;
  double t7246;
  double t7247;
  double t7251;
  double t7254;
  double t7257;
  double t4357;
  double t4364;
  double t4391;
  double t7888;
  double t7889;
  double t7892;
  double t7899;
  double t7900;
  double t7901;
  double t7907;
  double t7914;
  double t7921;
  double t7931;
  double t7937;
  double t7939;
  double t7956;
  double t7959;
  double t7961;
  double t7968;
  double t7984;
  double t7985;
  double t7807;
  double t7819;
  double t7822;
  double t7829;
  double t7832;
  double t8067;
  double t8070;
  double t8079;
  double t8101;
  double t8102;
  double t8103;
  double t8129;
  double t8134;
  double t8135;
  double t8146;
  double t8149;
  double t8152;
  double t8154;
  double t8161;
  double t8162;
  double t8173;
  double t8174;
  double t8176;
  double t8188;
  double t8189;
  double t8191;
  double t8197;
  double t8199;
  double t8203;
  double t8271;
  double t8280;
  double t8281;
  double t8289;
  double t8293;
  double t8298;
  double t8338;
  double t8362;
  double t8369;
  double t8378;
  double t8400;
  double t8404;
  double t8411;
  double t8412;
  double t8424;
  double t8433;
  double t8437;
  double t8446;
  double t8457;
  double t8465;
  double t8473;
  double t8484;
  double t8489;
  double t8505;
  double t8602;
  double t8614;
  double t8615;
  double t8629;
  double t8630;
  double t8633;
  double t8638;
  double t8641;
  double t8653;
  double t8657;
  double t8666;
  double t8677;
  double t8682;
  double t8686;
  double t8695;
  double t8697;
  double t8702;
  double t8722;
  double t8728;
  double t8740;
  double t8565;
  double t8567;
  double t8573;
  double t8575;
  double t8577;
  double t8801;
  double t8806;
  double t8809;
  double t8834;
  double t8835;
  double t8838;
  double t8848;
  double t8855;
  double t8859;
  double t8869;
  double t8871;
  double t8877;
  double t8883;
  double t8886;
  double t8892;
  double t8906;
  double t8907;
  double t8914;
  double t8935;
  double t8946;
  double t8950;
  double t8967;
  double t8974;
  double t8979;
  double t8996;
  double t8997;
  double t8998;
  double t9029;
  double t9031;
  double t9037;
  double t9041;
  double t9044;
  double t9049;
  double t9058;
  double t9063;
  double t9069;
  double t9079;
  double t9080;
  double t9081;
  double t9088;
  double t9093;
  double t9097;
  double t9104;
  double t9113;
  double t9114;
  double t9123;
  double t9125;
  double t9128;
  double t9136;
  double t9148;
  double t9154;
  double t9157;
  double t9159;
  double t9167;
  double t9254;
  double t9263;
  double t9277;
  double t9282;
  double t9290;
  double t9303;
  double t9304;
  double t9310;
  double t9312;
  double t9319;
  double t9323;
  double t9324;
  double t9332;
  double t9214;
  double t9223;
  double t9224;
  double t9240;
  double t9241;
  double t9391;
  double t9401;
  double t9409;
  double t9429;
  double t9430;
  double t9447;
  double t9452;
  double t9463;
  double t9468;
  double t9471;
  double t9478;
  double t9479;
  double t9483;
  double t9487;
  double t9488;
  double t9489;
  double t9494;
  double t9497;
  double t9499;
  double t9532;
  double t9535;
  double t9537;
  double t9546;
  double t9550;
  double t9553;
  double t9555;
  double t9568;
  double t9569;
  double t9574;
  double t9581;
  double t9588;
  double t9589;
  double t9591;
  double t9595;
  double t9596;
  double t9599;
  double t9600;
  double t9604;
  double t9697;
  double t9703;
  double t9707;
  double t9711;
  double t9717;
  double t9718;
  double t9723;
  double t9667;
  double t9676;
  double t9682;
  double t9693;
  double t9695;
  double t9808;
  double t9813;
  double t9815;
  double t9822;
  double t9823;
  double t9834;
  double t9847;
  double t9860;
  double t9861;
  double t9876;
  double t9882;
  double t9884;
  double t9890;
  double t9919;
  double t9924;
  double t9928;
  double t9936;
  double t9937;
  double t9963;
  double t9964;
  double t9968;
  double t9969;
  double t9985;
  double t9997;
  double t9998;
  double t10004;
  double t10083;
  double t10085;
  double t4845;
  double t10058;
  double t10064;
  double t10067;
  double t10073;
  double t10075;
  double t10114;
  double t10116;
  double t10121;
  double t10125;
  double t10126;
  double t10134;
  double t10135;
  double t10205;
  double t10215;
  double t10216;
  double t10226;
  double t10233;
  double t10241;
  double t10244;
  double t10090;
  double t4857;
  double t4877;
  double t10284;
  double t10290;
  double t10293;
  double t10297;
  double t10315;
  double t10149;
  double t10335;
  double t10339;
  double t10341;
  double t10174;
  double t10254;
  double t10361;
  double t10363;
  double t10367;
  double t10272;
  t433 = Sin(var1[3]);
  t809 = Cos(var1[3]);
  t670 = Cos(var1[5]);
  t697 = Sin(var1[4]);
  t853 = Sin(var1[5]);
  t32 = Cos(var1[14]);
  t43 = -1.*t32;
  t53 = 1. + t43;
  t146 = Sin(var1[14]);
  t523 = Sin(var1[13]);
  t725 = -1.*t670*t433*t697;
  t865 = t809*t853;
  t940 = t725 + t865;
  t1054 = Cos(var1[13]);
  t1239 = -1.*t809*t670;
  t1336 = -1.*t433*t697*t853;
  t1340 = t1239 + t1336;
  t8 = Cos(var1[4]);
  t1583 = t523*t940;
  t1592 = t1054*t1340;
  t1600 = t1583 + t1592;
  t1639 = Cos(var1[15]);
  t1673 = -1.*t1639;
  t1679 = 1. + t1673;
  t1703 = Sin(var1[15]);
  t1790 = t1054*t940;
  t1793 = -1.*t523*t1340;
  t1820 = t1790 + t1793;
  t2140 = -1.*t32*t8*t433;
  t2152 = t146*t1600;
  t2157 = t2140 + t2152;
  t2281 = Cos(var1[16]);
  t2301 = -1.*t2281;
  t2404 = 1. + t2301;
  t2520 = Sin(var1[16]);
  t2671 = t1703*t1820;
  t2675 = t1639*t2157;
  t2707 = t2671 + t2675;
  t2780 = t1639*t1820;
  t2796 = -1.*t1703*t2157;
  t2813 = t2780 + t2796;
  t2834 = Cos(var1[17]);
  t2845 = -1.*t2834;
  t2865 = 1. + t2845;
  t2888 = Sin(var1[17]);
  t3001 = -1.*t2520*t2707;
  t3046 = t2281*t2813;
  t3169 = t3001 + t3046;
  t3277 = t2281*t2707;
  t3292 = t2520*t2813;
  t3334 = t3277 + t3292;
  t3393 = Cos(var1[18]);
  t3422 = -1.*t3393;
  t3439 = 1. + t3422;
  t3495 = Sin(var1[18]);
  t3533 = t2888*t3169;
  t3538 = t2834*t3334;
  t3544 = t3533 + t3538;
  t3661 = t2834*t3169;
  t3667 = -1.*t2888*t3334;
  t3676 = t3661 + t3667;
  t3700 = Cos(var1[19]);
  t3714 = -1.*t3700;
  t3729 = 1. + t3714;
  t3782 = Sin(var1[19]);
  t3847 = -1.*t3495*t3544;
  t3928 = t3393*t3676;
  t3930 = t3847 + t3928;
  t3965 = t3393*t3544;
  t3969 = t3495*t3676;
  t3979 = t3965 + t3969;
  t69 = -0.049*t53;
  t341 = -0.135*t146;
  t425 = 0. + t69 + t341;
  t603 = 0.135*t523;
  t644 = 0. + t603;
  t1087 = -1.*t1054;
  t1111 = 1. + t1087;
  t1151 = -0.135*t1111;
  t1225 = 0. + t1151;
  t1482 = -0.135*t53;
  t1489 = 0.049*t146;
  t1533 = 0. + t1482 + t1489;
  t4192 = t809*t670*t697;
  t4194 = t433*t853;
  t4213 = t4192 + t4194;
  t4222 = -1.*t670*t433;
  t4237 = t809*t697*t853;
  t4261 = t4222 + t4237;
  t1692 = -0.09*t1679;
  t1707 = 0.049*t1703;
  t1738 = 0. + t1692 + t1707;
  t4273 = t523*t4213;
  t4275 = t1054*t4261;
  t4281 = t4273 + t4275;
  t2019 = -0.049*t1679;
  t2056 = -0.09*t1703;
  t2079 = 0. + t2019 + t2056;
  t2465 = -0.049*t2404;
  t2590 = -0.21*t2520;
  t2670 = 0. + t2465 + t2590;
  t4318 = t1054*t4213;
  t4320 = -1.*t523*t4261;
  t4335 = t4318 + t4320;
  t4396 = t32*t809*t8;
  t4429 = t146*t4281;
  t4451 = t4396 + t4429;
  t2739 = -0.21*t2404;
  t2750 = 0.049*t2520;
  t2756 = 0. + t2739 + t2750;
  t2868 = -0.2707*t2865;
  t2908 = 0.0016*t2888;
  t2954 = 0. + t2868 + t2908;
  t4473 = t1703*t4335;
  t4496 = t1639*t4451;
  t4507 = t4473 + t4496;
  t4516 = t1639*t4335;
  t4528 = -1.*t1703*t4451;
  t4529 = t4516 + t4528;
  t3267 = -0.0016*t2865;
  t3268 = -0.2707*t2888;
  t3276 = 0. + t3267 + t3268;
  t3482 = 0.0184*t3439;
  t3507 = -0.7055*t3495;
  t3529 = 0. + t3482 + t3507;
  t4562 = -1.*t2520*t4507;
  t4587 = t2281*t4529;
  t4588 = t4562 + t4587;
  t4593 = t2281*t4507;
  t4601 = t2520*t4529;
  t4617 = t4593 + t4601;
  t3619 = -0.7055*t3439;
  t3627 = -0.0184*t3495;
  t3631 = 0. + t3619 + t3627;
  t3781 = -1.1135*t3729;
  t3787 = 0.0216*t3782;
  t3822 = 0. + t3781 + t3787;
  t4623 = t2888*t4588;
  t4633 = t2834*t4617;
  t4637 = t4623 + t4633;
  t4669 = t2834*t4588;
  t4673 = -1.*t2888*t4617;
  t4676 = t4669 + t4673;
  t3939 = -0.0216*t3729;
  t3943 = -1.1135*t3782;
  t3954 = 0. + t3939 + t3943;
  t4689 = -1.*t3495*t4637;
  t4692 = t3393*t4676;
  t4693 = t4689 + t4692;
  t4738 = t3393*t4637;
  t4762 = t3495*t4676;
  t4778 = t4738 + t4762;
  t4980 = t809*t8*t670*t523;
  t4981 = t1054*t809*t8*t853;
  t4999 = t4980 + t4981;
  t5043 = t1054*t809*t8*t670;
  t5050 = -1.*t809*t8*t523*t853;
  t5071 = t5043 + t5050;
  t5118 = -1.*t32*t809*t697;
  t5121 = t146*t4999;
  t5123 = t5118 + t5121;
  t5131 = t1703*t5071;
  t5135 = t1639*t5123;
  t5170 = t5131 + t5135;
  t5194 = t1639*t5071;
  t5209 = -1.*t1703*t5123;
  t5223 = t5194 + t5209;
  t5235 = -1.*t2520*t5170;
  t5249 = t2281*t5223;
  t5250 = t5235 + t5249;
  t5270 = t2281*t5170;
  t5271 = t2520*t5223;
  t5282 = t5270 + t5271;
  t5288 = t2888*t5250;
  t5291 = t2834*t5282;
  t5292 = t5288 + t5291;
  t5300 = t2834*t5250;
  t5301 = -1.*t2888*t5282;
  t5302 = t5300 + t5301;
  t5304 = -1.*t3495*t5292;
  t5309 = t3393*t5302;
  t5310 = t5304 + t5309;
  t5316 = t3393*t5292;
  t5320 = t3495*t5302;
  t5325 = t5316 + t5320;
  t5457 = t8*t670*t523*t433;
  t5463 = t1054*t8*t433*t853;
  t5464 = t5457 + t5463;
  t5468 = t1054*t8*t670*t433;
  t5474 = -1.*t8*t523*t433*t853;
  t5491 = t5468 + t5474;
  t5545 = -1.*t32*t433*t697;
  t5546 = t146*t5464;
  t5549 = t5545 + t5546;
  t5562 = t1703*t5491;
  t5564 = t1639*t5549;
  t5565 = t5562 + t5564;
  t5576 = t1639*t5491;
  t5582 = -1.*t1703*t5549;
  t5584 = t5576 + t5582;
  t5596 = -1.*t2520*t5565;
  t5598 = t2281*t5584;
  t5600 = t5596 + t5598;
  t5608 = t2281*t5565;
  t5609 = t2520*t5584;
  t5612 = t5608 + t5609;
  t5627 = t2888*t5600;
  t5630 = t2834*t5612;
  t5645 = t5627 + t5630;
  t5658 = t2834*t5600;
  t5660 = -1.*t2888*t5612;
  t5661 = t5658 + t5660;
  t5685 = -1.*t3495*t5645;
  t5690 = t3393*t5661;
  t5696 = t5685 + t5690;
  t5718 = t3393*t5645;
  t5726 = t3495*t5661;
  t5735 = t5718 + t5726;
  t5852 = -1.*t670*t523*t697;
  t5860 = -1.*t1054*t697*t853;
  t5868 = t5852 + t5860;
  t5876 = -1.*t1054*t670*t697;
  t5888 = t523*t697*t853;
  t5891 = t5876 + t5888;
  t5913 = -1.*t32*t8;
  t5915 = t146*t5868;
  t5918 = t5913 + t5915;
  t5930 = t1703*t5891;
  t5934 = t1639*t5918;
  t5946 = t5930 + t5934;
  t5956 = t1639*t5891;
  t5957 = -1.*t1703*t5918;
  t5961 = t5956 + t5957;
  t5983 = -1.*t2520*t5946;
  t5984 = t2281*t5961;
  t5985 = t5983 + t5984;
  t6022 = t2281*t5946;
  t6027 = t2520*t5961;
  t6028 = t6022 + t6027;
  t6056 = t2888*t5985;
  t6059 = t2834*t6028;
  t6060 = t6056 + t6059;
  t6068 = t2834*t5985;
  t6069 = -1.*t2888*t6028;
  t6070 = t6068 + t6069;
  t6084 = -1.*t3495*t6060;
  t6087 = t3393*t6070;
  t6094 = t6084 + t6087;
  t6104 = t3393*t6060;
  t6114 = t3495*t6070;
  t6119 = t6104 + t6114;
  t6182 = t670*t433;
  t6187 = -1.*t809*t697*t853;
  t6190 = t6182 + t6187;
  t6207 = t523*t6190;
  t6212 = t4318 + t6207;
  t6193 = -1.*t523*t4213;
  t6201 = t1054*t6190;
  t6204 = t6193 + t6201;
  t6233 = t1703*t6204;
  t6238 = t1639*t146*t6212;
  t6244 = t6233 + t6238;
  t6251 = t1639*t6204;
  t6257 = -1.*t146*t1703*t6212;
  t6261 = t6251 + t6257;
  t6295 = -1.*t2520*t6244;
  t6305 = t2281*t6261;
  t6320 = t6295 + t6305;
  t6340 = t2281*t6244;
  t6343 = t2520*t6261;
  t6352 = t6340 + t6343;
  t6354 = t2888*t6320;
  t6362 = t2834*t6352;
  t6365 = t6354 + t6362;
  t6385 = t2834*t6320;
  t6389 = -1.*t2888*t6352;
  t6404 = t6385 + t6389;
  t6424 = -1.*t3495*t6365;
  t6434 = t3393*t6404;
  t6454 = t6424 + t6434;
  t6472 = t3393*t6365;
  t6480 = t3495*t6404;
  t6481 = t6472 + t6480;
  t6537 = t670*t433*t697;
  t6538 = -1.*t809*t853;
  t6555 = t6537 + t6538;
  t6603 = t1054*t6555;
  t6613 = t523*t1340;
  t6614 = t6603 + t6613;
  t6585 = -1.*t523*t6555;
  t6594 = t6585 + t1592;
  t6657 = t1703*t6594;
  t6663 = t1639*t146*t6614;
  t6665 = t6657 + t6663;
  t6681 = t1639*t6594;
  t6696 = -1.*t146*t1703*t6614;
  t6701 = t6681 + t6696;
  t6716 = -1.*t2520*t6665;
  t6720 = t2281*t6701;
  t6728 = t6716 + t6720;
  t6737 = t2281*t6665;
  t6742 = t2520*t6701;
  t6747 = t6737 + t6742;
  t6762 = t2888*t6728;
  t6763 = t2834*t6747;
  t6783 = t6762 + t6763;
  t6795 = t2834*t6728;
  t6798 = -1.*t2888*t6747;
  t6802 = t6795 + t6798;
  t6809 = -1.*t3495*t6783;
  t6812 = t3393*t6802;
  t6821 = t6809 + t6812;
  t6829 = t3393*t6783;
  t6835 = t3495*t6802;
  t6836 = t6829 + t6835;
  t6957 = t1054*t8*t670;
  t6961 = -1.*t8*t523*t853;
  t6973 = t6957 + t6961;
  t6897 = -1.*t8*t670*t523;
  t6901 = -1.*t1054*t8*t853;
  t6917 = t6897 + t6901;
  t7021 = t1703*t6917;
  t7029 = t1639*t146*t6973;
  t7042 = t7021 + t7029;
  t7053 = t1639*t6917;
  t7058 = -1.*t146*t1703*t6973;
  t7063 = t7053 + t7058;
  t7069 = -1.*t2520*t7042;
  t7073 = t2281*t7063;
  t7079 = t7069 + t7073;
  t7084 = t2281*t7042;
  t7089 = t2520*t7063;
  t7102 = t7084 + t7089;
  t7132 = t2888*t7079;
  t7141 = t2834*t7102;
  t7157 = t7132 + t7141;
  t7168 = t2834*t7079;
  t7170 = -1.*t2888*t7102;
  t7182 = t7168 + t7170;
  t7185 = -1.*t3495*t7157;
  t7188 = t3393*t7182;
  t7194 = t7185 + t7188;
  t7198 = t3393*t7157;
  t7219 = t3495*t7182;
  t7225 = t7198 + t7219;
  t7273 = -1.*t1054*t4261;
  t7286 = t6193 + t7273;
  t7306 = t1703*t7286;
  t7313 = t1639*t146*t4335;
  t7320 = t7306 + t7313;
  t7337 = t1639*t7286;
  t7338 = -1.*t146*t1703*t4335;
  t7339 = t7337 + t7338;
  t7345 = -1.*t2520*t7320;
  t7348 = t2281*t7339;
  t7350 = t7345 + t7348;
  t7362 = t2281*t7320;
  t7366 = t2520*t7339;
  t7371 = t7362 + t7366;
  t7382 = t2888*t7350;
  t7387 = t2834*t7371;
  t7388 = t7382 + t7387;
  t7394 = t2834*t7350;
  t7398 = -1.*t2888*t7371;
  t7410 = t7394 + t7398;
  t7416 = -1.*t3495*t7388;
  t7418 = t3393*t7410;
  t7419 = t7416 + t7418;
  t7429 = t3393*t7388;
  t7442 = t3495*t7410;
  t7443 = t7429 + t7442;
  t7505 = t809*t670;
  t7508 = t433*t697*t853;
  t7520 = t7505 + t7508;
  t7559 = -1.*t523*t7520;
  t7560 = t6603 + t7559;
  t7526 = -1.*t1054*t7520;
  t7538 = t6585 + t7526;
  t7583 = t1703*t7538;
  t7587 = t1639*t146*t7560;
  t7595 = t7583 + t7587;
  t7599 = t1639*t7538;
  t7609 = -1.*t146*t1703*t7560;
  t7612 = t7599 + t7609;
  t7632 = -1.*t2520*t7595;
  t7644 = t2281*t7612;
  t7645 = t7632 + t7644;
  t7647 = t2281*t7595;
  t7649 = t2520*t7612;
  t7650 = t7647 + t7649;
  t7668 = t2888*t7645;
  t7670 = t2834*t7650;
  t7679 = t7668 + t7670;
  t7690 = t2834*t7645;
  t7691 = -1.*t2888*t7650;
  t7692 = t7690 + t7691;
  t7696 = -1.*t3495*t7679;
  t7697 = t3393*t7692;
  t7698 = t7696 + t7697;
  t7703 = t3393*t7679;
  t7704 = t3495*t7692;
  t7720 = t7703 + t7704;
  t6921 = t1738*t6917;
  t6980 = -0.1305*t32*t6973;
  t6995 = t1533*t6973;
  t6996 = t146*t2079*t6973;
  t7044 = t2670*t7042;
  t7067 = t2756*t7063;
  t7081 = t2954*t7079;
  t7124 = t3276*t7102;
  t7164 = t3529*t7157;
  t7184 = t3631*t7182;
  t7197 = t3822*t7194;
  t7226 = t3954*t7225;
  t7229 = t3782*t7194;
  t7231 = t3700*t7225;
  t7242 = t7229 + t7231;
  t7246 = 0.088451*t7242;
  t7247 = t3700*t7194;
  t7251 = -1.*t3782*t7225;
  t7254 = t7247 + t7251;
  t7257 = -1.062256*t7254;
  t4357 = -1.*t809*t8*t146;
  t4364 = t32*t4281;
  t4391 = t4357 + t4364;
  t7888 = -1.*t2281*t1703*t4391;
  t7889 = -1.*t1639*t2520*t4391;
  t7892 = t7888 + t7889;
  t7899 = t1639*t2281*t4391;
  t7900 = -1.*t1703*t2520*t4391;
  t7901 = t7899 + t7900;
  t7907 = t2888*t7892;
  t7914 = t2834*t7901;
  t7921 = t7907 + t7914;
  t7931 = t2834*t7892;
  t7937 = -1.*t2888*t7901;
  t7939 = t7931 + t7937;
  t7956 = -1.*t3495*t7921;
  t7959 = t3393*t7939;
  t7961 = t7956 + t7959;
  t7968 = t3393*t7921;
  t7984 = t3495*t7939;
  t7985 = t7968 + t7984;
  t7807 = -0.135*t32;
  t7819 = -0.049*t146;
  t7822 = t7807 + t7819;
  t7829 = 0.049*t32;
  t7832 = t7829 + t341;
  t8067 = t523*t6555;
  t8070 = t1054*t7520;
  t8079 = t8067 + t8070;
  t8101 = -1.*t8*t146*t433;
  t8102 = t32*t8079;
  t8103 = t8101 + t8102;
  t8129 = -1.*t2281*t1703*t8103;
  t8134 = -1.*t1639*t2520*t8103;
  t8135 = t8129 + t8134;
  t8146 = t1639*t2281*t8103;
  t8149 = -1.*t1703*t2520*t8103;
  t8152 = t8146 + t8149;
  t8154 = t2888*t8135;
  t8161 = t2834*t8152;
  t8162 = t8154 + t8161;
  t8173 = t2834*t8135;
  t8174 = -1.*t2888*t8152;
  t8176 = t8173 + t8174;
  t8188 = -1.*t3495*t8162;
  t8189 = t3393*t8176;
  t8191 = t8188 + t8189;
  t8197 = t3393*t8162;
  t8199 = t3495*t8176;
  t8203 = t8197 + t8199;
  t8271 = t8*t670*t523;
  t8280 = t1054*t8*t853;
  t8281 = t8271 + t8280;
  t8289 = t146*t697;
  t8293 = t32*t8281;
  t8298 = t8289 + t8293;
  t8338 = -1.*t2281*t1703*t8298;
  t8362 = -1.*t1639*t2520*t8298;
  t8369 = t8338 + t8362;
  t8378 = t1639*t2281*t8298;
  t8400 = -1.*t1703*t2520*t8298;
  t8404 = t8378 + t8400;
  t8411 = t2888*t8369;
  t8412 = t2834*t8404;
  t8424 = t8411 + t8412;
  t8433 = t2834*t8369;
  t8437 = -1.*t2888*t8404;
  t8446 = t8433 + t8437;
  t8457 = -1.*t3495*t8424;
  t8465 = t3393*t8446;
  t8473 = t8457 + t8465;
  t8484 = t3393*t8424;
  t8489 = t3495*t8446;
  t8505 = t8484 + t8489;
  t8602 = -1.*t1703*t4335;
  t8614 = -1.*t1639*t4451;
  t8615 = t8602 + t8614;
  t8629 = t2520*t8615;
  t8630 = t8629 + t4587;
  t8633 = t2281*t8615;
  t8638 = -1.*t2520*t4529;
  t8641 = t8633 + t8638;
  t8653 = -1.*t2888*t8630;
  t8657 = t2834*t8641;
  t8666 = t8653 + t8657;
  t8677 = t2834*t8630;
  t8682 = t2888*t8641;
  t8686 = t8677 + t8682;
  t8695 = t3495*t8666;
  t8697 = t3393*t8686;
  t8702 = t8695 + t8697;
  t8722 = t3393*t8666;
  t8728 = -1.*t3495*t8686;
  t8740 = t8722 + t8728;
  t8565 = 0.049*t1639;
  t8567 = t8565 + t2056;
  t8573 = -0.09*t1639;
  t8575 = -0.049*t1703;
  t8577 = t8573 + t8575;
  t8801 = t32*t8*t433;
  t8806 = t146*t8079;
  t8809 = t8801 + t8806;
  t8834 = -1.*t1703*t7560;
  t8835 = -1.*t1639*t8809;
  t8838 = t8834 + t8835;
  t8848 = t1639*t7560;
  t8855 = -1.*t1703*t8809;
  t8859 = t8848 + t8855;
  t8869 = t2520*t8838;
  t8871 = t2281*t8859;
  t8877 = t8869 + t8871;
  t8883 = t2281*t8838;
  t8886 = -1.*t2520*t8859;
  t8892 = t8883 + t8886;
  t8906 = -1.*t2888*t8877;
  t8907 = t2834*t8892;
  t8914 = t8906 + t8907;
  t8935 = t2834*t8877;
  t8946 = t2888*t8892;
  t8950 = t8935 + t8946;
  t8967 = t3495*t8914;
  t8974 = t3393*t8950;
  t8979 = t8967 + t8974;
  t8996 = t3393*t8914;
  t8997 = -1.*t3495*t8950;
  t8998 = t8996 + t8997;
  t9029 = -1.*t32*t697;
  t9031 = t146*t8281;
  t9037 = t9029 + t9031;
  t9041 = -1.*t1703*t6973;
  t9044 = -1.*t1639*t9037;
  t9049 = t9041 + t9044;
  t9058 = t1639*t6973;
  t9063 = -1.*t1703*t9037;
  t9069 = t9058 + t9063;
  t9079 = t2520*t9049;
  t9080 = t2281*t9069;
  t9081 = t9079 + t9080;
  t9088 = t2281*t9049;
  t9093 = -1.*t2520*t9069;
  t9097 = t9088 + t9093;
  t9104 = -1.*t2888*t9081;
  t9113 = t2834*t9097;
  t9114 = t9104 + t9113;
  t9123 = t2834*t9081;
  t9125 = t2888*t9097;
  t9128 = t9123 + t9125;
  t9136 = t3495*t9114;
  t9148 = t3393*t9128;
  t9154 = t9136 + t9148;
  t9157 = t3393*t9114;
  t9159 = -1.*t3495*t9128;
  t9167 = t9157 + t9159;
  t9254 = -1.*t2281*t4507;
  t9263 = t9254 + t8638;
  t9277 = -1.*t2888*t4588;
  t9282 = t2834*t9263;
  t9290 = t9277 + t9282;
  t9303 = t2888*t9263;
  t9304 = t4669 + t9303;
  t9310 = t3495*t9290;
  t9312 = t3393*t9304;
  t9319 = t9310 + t9312;
  t9323 = t3393*t9290;
  t9324 = -1.*t3495*t9304;
  t9332 = t9323 + t9324;
  t9214 = -0.21*t2281;
  t9223 = -0.049*t2520;
  t9224 = t9214 + t9223;
  t9240 = 0.049*t2281;
  t9241 = t9240 + t2590;
  t9391 = t1703*t7560;
  t9401 = t1639*t8809;
  t9409 = t9391 + t9401;
  t9429 = -1.*t2520*t9409;
  t9430 = t9429 + t8871;
  t9447 = -1.*t2281*t9409;
  t9452 = t9447 + t8886;
  t9463 = -1.*t2888*t9430;
  t9468 = t2834*t9452;
  t9471 = t9463 + t9468;
  t9478 = t2834*t9430;
  t9479 = t2888*t9452;
  t9483 = t9478 + t9479;
  t9487 = t3495*t9471;
  t9488 = t3393*t9483;
  t9489 = t9487 + t9488;
  t9494 = t3393*t9471;
  t9497 = -1.*t3495*t9483;
  t9499 = t9494 + t9497;
  t9532 = t1703*t6973;
  t9535 = t1639*t9037;
  t9537 = t9532 + t9535;
  t9546 = -1.*t2520*t9537;
  t9550 = t9546 + t9080;
  t9553 = -1.*t2281*t9537;
  t9555 = t9553 + t9093;
  t9568 = -1.*t2888*t9550;
  t9569 = t2834*t9555;
  t9574 = t9568 + t9569;
  t9581 = t2834*t9550;
  t9588 = t2888*t9555;
  t9589 = t9581 + t9588;
  t9591 = t3495*t9574;
  t9595 = t3393*t9589;
  t9596 = t9591 + t9595;
  t9599 = t3393*t9574;
  t9600 = -1.*t3495*t9589;
  t9604 = t9599 + t9600;
  t9697 = -1.*t2834*t4617;
  t9703 = t9277 + t9697;
  t9707 = t3495*t9703;
  t9711 = t9707 + t4692;
  t9717 = t3393*t9703;
  t9718 = -1.*t3495*t4676;
  t9723 = t9717 + t9718;
  t9667 = 0.0016*t2834;
  t9676 = t9667 + t3268;
  t9682 = -0.2707*t2834;
  t9693 = -0.0016*t2888;
  t9695 = t9682 + t9693;
  t9808 = t2281*t9409;
  t9813 = t2520*t8859;
  t9815 = t9808 + t9813;
  t9822 = -1.*t2834*t9815;
  t9823 = t9463 + t9822;
  t9834 = -1.*t2888*t9815;
  t9847 = t9478 + t9834;
  t9860 = t3495*t9823;
  t9861 = t3393*t9847;
  t9876 = t9860 + t9861;
  t9882 = t3393*t9823;
  t9884 = -1.*t3495*t9847;
  t9890 = t9882 + t9884;
  t9919 = t2281*t9537;
  t9924 = t2520*t9069;
  t9928 = t9919 + t9924;
  t9936 = -1.*t2834*t9928;
  t9937 = t9568 + t9936;
  t9963 = -1.*t2888*t9928;
  t9964 = t9581 + t9963;
  t9968 = t3495*t9937;
  t9969 = t3393*t9964;
  t9985 = t9968 + t9969;
  t9997 = t3393*t9937;
  t9998 = -1.*t3495*t9964;
  t10004 = t9997 + t9998;
  t10083 = -1.*t3393*t4637;
  t10085 = t10083 + t9718;
  t4845 = t3700*t4693;
  t10058 = -0.7055*t3393;
  t10064 = 0.0184*t3495;
  t10067 = t10058 + t10064;
  t10073 = -0.0184*t3393;
  t10075 = t10073 + t3507;
  t10114 = t2888*t9430;
  t10116 = t2834*t9815;
  t10121 = t10114 + t10116;
  t10125 = -1.*t3495*t10121;
  t10126 = t10125 + t9861;
  t10134 = -1.*t3393*t10121;
  t10135 = t10134 + t9884;
  t10205 = t2888*t9550;
  t10215 = t2834*t9928;
  t10216 = t10205 + t10215;
  t10226 = -1.*t3495*t10216;
  t10233 = t10226 + t9969;
  t10241 = -1.*t3393*t10216;
  t10244 = t10241 + t9998;
  t10090 = -1.*t3782*t4693;
  t4857 = -1.*t3782*t4778;
  t4877 = t4845 + t4857;
  t10284 = 0.0216*t3700;
  t10290 = t10284 + t3943;
  t10293 = -1.1135*t3700;
  t10297 = -0.0216*t3782;
  t10315 = t10293 + t10297;
  t10149 = -1.*t3782*t10126;
  t10335 = t3393*t10121;
  t10339 = t3495*t9847;
  t10341 = t10335 + t10339;
  t10174 = t3700*t10126;
  t10254 = -1.*t3782*t10233;
  t10361 = t3393*t10216;
  t10363 = t3495*t9964;
  t10367 = t10361 + t10363;
  t10272 = t3700*t10233;

  p_output1(0)=1.;
  p_output1(1)=0;
  p_output1(2)=0;
  p_output1(3)=0;
  p_output1(4)=1.;
  p_output1(5)=0;
  p_output1(6)=0;
  p_output1(7)=0;
  p_output1(8)=1.;
  p_output1(9)=t1225*t1340 + t1533*t1600 + t1738*t1820 + t2079*t2157 + t2670*t2707 + t2756*t2813 + t2954*t3169 + t3276*t3334 + t3529*t3544 + t3631*t3676 + t3822*t3930 + t3954*t3979 + 0.088451*(t3782*t3930 + t3700*t3979) - 1.062256*(t3700*t3930 - 1.*t3782*t3979) - 1.*t425*t433*t8 - 0.1305*(t1600*t32 + t146*t433*t8) + t644*t940;
  p_output1(10)=t1225*t4261 + t1533*t4281 + t1738*t4335 - 0.1305*t4391 + t2079*t4451 + t2670*t4507 + t2756*t4529 + t2954*t4588 + t3276*t4617 + t3529*t4637 + t3631*t4676 + t3822*t4693 + t3954*t4778 + 0.088451*(t3782*t4693 + t3700*t4778) - 1.062256*t4877 + t4213*t644 + t425*t8*t809;
  p_output1(11)=0;
  p_output1(12)=t1533*t4999 + t1738*t5071 + t2079*t5123 + t2670*t5170 + t2756*t5223 + t2954*t5250 + t3276*t5282 + t3529*t5292 + t3631*t5302 + t3822*t5310 + t3954*t5325 + 0.088451*(t3782*t5310 + t3700*t5325) - 1.062256*(t3700*t5310 - 1.*t3782*t5325) - 1.*t425*t697*t809 + t644*t670*t8*t809 - 0.1305*(t32*t4999 + t146*t697*t809) + t1225*t8*t809*t853;
  p_output1(13)=t1533*t5464 + t1738*t5491 + t2079*t5549 + t2670*t5565 + t2756*t5584 + t2954*t5600 + t3276*t5612 + t3529*t5645 + t3631*t5661 + t3822*t5696 + t3954*t5735 + 0.088451*(t3782*t5696 + t3700*t5735) - 1.062256*(t3700*t5696 - 1.*t3782*t5735) - 1.*t425*t433*t697 - 0.1305*(t32*t5464 + t146*t433*t697) + t433*t644*t670*t8 + t1225*t433*t8*t853;
  p_output1(14)=t1533*t5868 + t1738*t5891 + t2079*t5918 + t2670*t5946 + t2756*t5961 + t2954*t5985 + t3276*t6028 + t3529*t6060 + t3631*t6070 + t3822*t6094 + t3954*t6119 + 0.088451*(t3782*t6094 + t3700*t6119) - 1.062256*(t3700*t6094 - 1.*t3782*t6119) - 1.*t644*t670*t697 - 1.*t425*t8 - 0.1305*(t32*t5868 + t146*t8) - 1.*t1225*t697*t853;
  p_output1(15)=t1225*t4213 + t1738*t6204 + t1533*t6212 + t146*t2079*t6212 - 0.1305*t32*t6212 + t2670*t6244 + t2756*t6261 + t2954*t6320 + t3276*t6352 + t3529*t6365 + t3631*t6404 + t6190*t644 + t3822*t6454 + t3954*t6481 + 0.088451*(t3782*t6454 + t3700*t6481) - 1.062256*(t3700*t6454 - 1.*t3782*t6481);
  p_output1(16)=t1340*t644 + t1225*t6555 + t1738*t6594 + t1533*t6614 + t146*t2079*t6614 - 0.1305*t32*t6614 + t2670*t6665 + t2756*t6701 + t2954*t6728 + t3276*t6747 + t3529*t6783 + t3631*t6802 + t3822*t6821 + t3954*t6836 + 0.088451*(t3782*t6821 + t3700*t6836) - 1.062256*(t3700*t6821 - 1.*t3782*t6836);
  p_output1(17)=t6921 + t6980 + t6995 + t6996 + t7044 + t7067 + t7081 + t7124 + t7164 + t7184 + t7197 + t7226 + t7246 + t7257 + t1225*t670*t8 - 1.*t644*t8*t853;
  p_output1(18)=0;
  p_output1(19)=0;
  p_output1(20)=0;
  p_output1(21)=0;
  p_output1(22)=0;
  p_output1(23)=0;
  p_output1(24)=0;
  p_output1(25)=0;
  p_output1(26)=0;
  p_output1(27)=0;
  p_output1(28)=0;
  p_output1(29)=0;
  p_output1(30)=0;
  p_output1(31)=0;
  p_output1(32)=0;
  p_output1(33)=0;
  p_output1(34)=0;
  p_output1(35)=0;
  p_output1(36)=0;
  p_output1(37)=0;
  p_output1(38)=0;
  p_output1(39)=0.135*t1054*t4213 + t1533*t4335 + t146*t2079*t4335 - 0.1305*t32*t4335 - 0.135*t4261*t523 + t1738*t7286 + t2670*t7320 + t2756*t7339 + t2954*t7350 + t3276*t7371 + t3529*t7388 + t3631*t7410 + t3822*t7419 + t3954*t7443 + 0.088451*(t3782*t7419 + t3700*t7443) - 1.062256*(t3700*t7419 - 1.*t3782*t7443);
  p_output1(40)=0.135*t1054*t6555 - 0.135*t523*t7520 + t1738*t7538 + t1533*t7560 + t146*t2079*t7560 - 0.1305*t32*t7560 + t2670*t7595 + t2756*t7612 + t2954*t7645 + t3276*t7650 + t3529*t7679 + t3631*t7692 + t3822*t7698 + t3954*t7720 + 0.088451*(t3782*t7698 + t3700*t7720) - 1.062256*(t3700*t7698 - 1.*t3782*t7720);
  p_output1(41)=t6921 + t6980 + t6995 + t6996 + t7044 + t7067 + t7081 + t7124 + t7164 + t7184 + t7197 + t7226 + t7246 + t7257 + 0.135*t1054*t670*t8 - 0.135*t523*t8*t853;
  p_output1(42)=t2079*t4391 + t1639*t2670*t4391 - 1.*t1703*t2756*t4391 + t4281*t7832 + t2954*t7892 + t3276*t7901 + t3529*t7921 + t3631*t7939 + t3822*t7961 + t3954*t7985 + 0.088451*(t3782*t7961 + t3700*t7985) - 1.062256*(t3700*t7961 - 1.*t3782*t7985) + t7822*t8*t809 - 0.1305*(-1.*t146*t4281 - 1.*t32*t8*t809);
  p_output1(43)=t433*t7822*t8 + t7832*t8079 - 0.1305*(t2140 - 1.*t146*t8079) + t2079*t8103 + t1639*t2670*t8103 - 1.*t1703*t2756*t8103 + t2954*t8135 + t3276*t8152 + t3529*t8162 + t3631*t8176 + t3822*t8191 + t3954*t8203 + 0.088451*(t3782*t8191 + t3700*t8203) - 1.062256*(t3700*t8191 - 1.*t3782*t8203);
  p_output1(44)=-1.*t697*t7822 + t7832*t8281 - 0.1305*(t32*t697 - 1.*t146*t8281) + t2079*t8298 + t1639*t2670*t8298 - 1.*t1703*t2756*t8298 + t2954*t8369 + t3276*t8404 + t3529*t8424 + t3631*t8446 + t3822*t8473 + t3954*t8505 + 0.088451*(t3782*t8473 + t3700*t8505) - 1.062256*(t3700*t8473 - 1.*t3782*t8505);
  p_output1(45)=t2670*t4529 + t4335*t8567 + t4451*t8577 + t2756*t8615 + t3276*t8630 + t2954*t8641 + t3631*t8666 + t3529*t8686 + t3954*t8702 + t3822*t8740 - 1.062256*(-1.*t3782*t8702 + t3700*t8740) + 0.088451*(t3700*t8702 + t3782*t8740);
  p_output1(46)=t7560*t8567 + t8577*t8809 + t2756*t8838 + t2670*t8859 + t3276*t8877 + t2954*t8892 + t3631*t8914 + t3529*t8950 + t3954*t8979 + t3822*t8998 - 1.062256*(-1.*t3782*t8979 + t3700*t8998) + 0.088451*(t3700*t8979 + t3782*t8998);
  p_output1(47)=t6973*t8567 + t8577*t9037 + t2756*t9049 + t2670*t9069 + t3276*t9081 + t2954*t9097 + t3631*t9114 + t3529*t9128 + t3954*t9154 + t3822*t9167 - 1.062256*(-1.*t3782*t9154 + t3700*t9167) + 0.088451*(t3700*t9154 + t3782*t9167);
  p_output1(48)=t3276*t4588 + t4507*t9224 + t4529*t9241 + t2954*t9263 + t3631*t9290 + t3529*t9304 + t3954*t9319 + t3822*t9332 - 1.062256*(-1.*t3782*t9319 + t3700*t9332) + 0.088451*(t3700*t9319 + t3782*t9332);
  p_output1(49)=t8859*t9241 + t9224*t9409 + t3276*t9430 + t2954*t9452 + t3631*t9471 + t3529*t9483 + t3954*t9489 + t3822*t9499 - 1.062256*(-1.*t3782*t9489 + t3700*t9499) + 0.088451*(t3700*t9489 + t3782*t9499);
  p_output1(50)=t9069*t9241 + t9224*t9537 + t3276*t9550 + t2954*t9555 + t3631*t9574 + t3529*t9589 + t3954*t9596 + t3822*t9604 - 1.062256*(-1.*t3782*t9596 + t3700*t9604) + 0.088451*(t3700*t9596 + t3782*t9604);
  p_output1(51)=t3529*t4676 + t4588*t9676 + t4617*t9695 + t3631*t9703 + t3954*t9711 + t3822*t9723 - 1.062256*(-1.*t3782*t9711 + t3700*t9723) + 0.088451*(t3700*t9711 + t3782*t9723);
  p_output1(52)=t9430*t9676 + t9695*t9815 + t3631*t9823 + t3529*t9847 + t3954*t9876 + t3822*t9890 - 1.062256*(-1.*t3782*t9876 + t3700*t9890) + 0.088451*(t3700*t9876 + t3782*t9890);
  p_output1(53)=t10004*t3822 + t9550*t9676 + t9695*t9928 + t3631*t9937 + t3529*t9964 + t3954*t9985 + 0.088451*(t10004*t3782 + t3700*t9985) - 1.062256*(t10004*t3700 - 1.*t3782*t9985);
  p_output1(54)=-1.062256*(t10090 + t10085*t3700) + t10085*t3822 + t10067*t4637 + t10075*t4676 + t3954*t4693 + 0.088451*(t10085*t3782 + t4845);
  p_output1(55)=t10067*t10121 - 1.062256*(t10149 + t10135*t3700) + 0.088451*(t10174 + t10135*t3782) + t10135*t3822 + t10126*t3954 + t10075*t9847;
  p_output1(56)=t10067*t10216 - 1.062256*(t10254 + t10244*t3700) + 0.088451*(t10272 + t10244*t3782) + t10244*t3822 + t10233*t3954 + t10075*t9964;
  p_output1(57)=t10290*t4693 + t10315*t4778 - 1.062256*(t10090 - 1.*t3700*t4778) + 0.088451*t4877;
  p_output1(58)=t10126*t10290 + t10315*t10341 - 1.062256*(t10149 - 1.*t10341*t3700) + 0.088451*(t10174 - 1.*t10341*t3782);
  p_output1(59)=t10233*t10290 + t10315*t10367 - 1.062256*(t10254 - 1.*t10367*t3700) + 0.088451*(t10272 - 1.*t10367*t3782);
}


       
Eigen::Matrix<double,3,20> Jp_RightToeFront(const Eigen::Matrix<double,20,1> &var1)
//void Jp_RightToeFront(Eigen::Matrix<double,3,20> &p_output1, const Eigen::Matrix<double,20,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,20>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



