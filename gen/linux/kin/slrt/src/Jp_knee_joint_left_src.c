/*
 * Automatically Generated from Mathematica.
 * Tue 8 Jan 2019 22:43:33 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jp_knee_joint_left_src.h"

#ifdef _MSC_VER
  #define INLINE __forceinline /* use __forceinline (VC++ specific) */
#else
  #define INLINE static __inline__        /* use standard inline */
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
static void output1(double *p_output1,const double *var1)
{
  double t766;
  double t866;
  double t876;
  double t672;
  double t884;
  double t141;
  double t771;
  double t1299;
  double t1319;
  double t1466;
  double t1481;
  double t1515;
  double t1615;
  double t1986;
  double t2101;
  double t2179;
  double t2242;
  double t1695;
  double t1840;
  double t1929;
  double t2563;
  double t3201;
  double t3240;
  double t3272;
  double t3293;
  double t2998;
  double t3132;
  double t3166;
  double t3380;
  double t3386;
  double t3407;
  double t3701;
  double t3721;
  double t3727;
  double t3767;
  double t3813;
  double t3842;
  double t3897;
  double t4085;
  double t4109;
  double t4129;
  double t198;
  double t387;
  double t472;
  double t575;
  double t1625;
  double t1654;
  double t4853;
  double t4864;
  double t4900;
  double t4971;
  double t4976;
  double t5039;
  double t2185;
  double t2287;
  double t2324;
  double t2666;
  double t2752;
  double t2761;
  double t5277;
  double t5311;
  double t5334;
  double t3288;
  double t3310;
  double t3315;
  double t3570;
  double t3614;
  double t3636;
  double t3738;
  double t3776;
  double t3805;
  double t5839;
  double t5878;
  double t5972;
  double t6044;
  double t6091;
  double t6113;
  double t3976;
  double t3978;
  double t4078;
  double t6146;
  double t6153;
  double t6179;
  double t6449;
  double t6450;
  double t6484;
  double t6705;
  double t6751;
  double t6779;
  double t6809;
  double t6811;
  double t6814;
  double t6888;
  double t6921;
  double t6927;
  double t6944;
  double t6947;
  double t7000;
  double t7012;
  double t7022;
  double t7031;
  double t7183;
  double t7189;
  double t7195;
  double t7242;
  double t7246;
  double t7255;
  double t7263;
  double t7270;
  double t7273;
  double t7288;
  double t7299;
  double t7302;
  double t7309;
  double t7313;
  double t7316;
  double t7416;
  double t7419;
  double t7426;
  double t7461;
  double t7463;
  double t7473;
  double t7480;
  double t7487;
  double t7507;
  double t7512;
  double t7515;
  double t7519;
  double t7528;
  double t7529;
  double t7531;
  double t7570;
  double t7571;
  double t7573;
  double t7576;
  double t7577;
  double t7592;
  double t7596;
  double t7598;
  double t7603;
  double t7606;
  double t7612;
  double t7623;
  double t7625;
  double t7631;
  double t7665;
  double t7667;
  double t7670;
  double t7678;
  double t7683;
  double t7685;
  double t7693;
  double t7706;
  double t7716;
  double t7719;
  double t7721;
  double t7731;
  double t7738;
  double t7740;
  double t7783;
  double t7784;
  double t7785;
  double t7804;
  double t7805;
  double t7816;
  double t7825;
  double t7826;
  double t7827;
  double t7831;
  double t7832;
  double t7839;
  double t7960;
  double t7962;
  double t7966;
  double t7971;
  double t7975;
  double t7990;
  double t7996;
  double t8002;
  double t8032;
  double t8035;
  double t8041;
  double t8057;
  double t8061;
  double t8077;
  double t8078;
  double t8089;
  double t8091;
  double t8097;
  double t8118;
  double t8123;
  double t8126;
  double t7788;
  double t7789;
  double t7800;
  double t7821;
  double t7829;
  double t7841;
  double t7845;
  double t7879;
  double t7889;
  double t7890;
  double t7896;
  double t7907;
  double t7918;
  double t7919;
  double t5545;
  double t5609;
  double t5694;
  double t8168;
  double t8169;
  double t8170;
  double t8172;
  double t8173;
  double t8216;
  double t8217;
  double t8219;
  double t8223;
  double t8226;
  double t8227;
  double t8282;
  double t8285;
  double t8287;
  double t8293;
  double t8294;
  double t8295;
  double t8386;
  double t8389;
  double t8390;
  double t6541;
  double t8364;
  double t8367;
  double t8373;
  double t8378;
  double t8381;
  double t8444;
  double t8445;
  double t8447;
  double t8454;
  double t8475;
  double t8477;
  double t8489;
  double t8492;
  double t8495;
  double t8525;
  double t8530;
  double t8532;
  double t8538;
  double t8543;
  double t8545;
  double t8549;
  double t8550;
  double t8552;
  double t6530;
  double t6548;
  double t8419;
  double t8582;
  double t8583;
  double t8588;
  double t8590;
  double t8592;
  double t8608;
  double t8609;
  double t8610;
  double t8507;
  double t8516;
  double t8635;
  double t8637;
  double t8638;
  double t8560;
  double t8569;
  t766 = Cos(var1[5]);
  t866 = Sin(var1[3]);
  t876 = Sin(var1[4]);
  t672 = Cos(var1[3]);
  t884 = Sin(var1[5]);
  t141 = Cos(var1[6]);
  t771 = -1.*t672*t766;
  t1299 = -1.*t866*t876*t884;
  t1319 = t771 + t1299;
  t1466 = -1.*t766*t866*t876;
  t1481 = t672*t884;
  t1515 = t1466 + t1481;
  t1615 = Sin(var1[6]);
  t1986 = Cos(var1[7]);
  t2101 = -1.*t1986;
  t2179 = 1. + t2101;
  t2242 = Sin(var1[7]);
  t1695 = t141*t1319;
  t1840 = t1515*t1615;
  t1929 = t1695 + t1840;
  t2563 = Cos(var1[4]);
  t3201 = Cos(var1[8]);
  t3240 = -1.*t3201;
  t3272 = 1. + t3240;
  t3293 = Sin(var1[8]);
  t2998 = -1.*t2563*t1986*t866;
  t3132 = t1929*t2242;
  t3166 = t2998 + t3132;
  t3380 = t141*t1515;
  t3386 = -1.*t1319*t1615;
  t3407 = t3380 + t3386;
  t3701 = Cos(var1[9]);
  t3721 = -1.*t3701;
  t3727 = 1. + t3721;
  t3767 = Sin(var1[9]);
  t3813 = t3201*t3166;
  t3842 = t3407*t3293;
  t3897 = t3813 + t3842;
  t4085 = t3201*t3407;
  t4109 = -1.*t3166*t3293;
  t4129 = t4085 + t4109;
  t198 = -1.*t141;
  t387 = 1. + t198;
  t472 = 0.135*t387;
  t575 = 0. + t472;
  t1625 = -0.135*t1615;
  t1654 = 0. + t1625;
  t4853 = -1.*t766*t866;
  t4864 = t672*t876*t884;
  t4900 = t4853 + t4864;
  t4971 = t672*t766*t876;
  t4976 = t866*t884;
  t5039 = t4971 + t4976;
  t2185 = 0.135*t2179;
  t2287 = 0.049*t2242;
  t2324 = 0. + t2185 + t2287;
  t2666 = -0.049*t2179;
  t2752 = 0.135*t2242;
  t2761 = 0. + t2666 + t2752;
  t5277 = t141*t4900;
  t5311 = t5039*t1615;
  t5334 = t5277 + t5311;
  t3288 = -0.049*t3272;
  t3310 = -0.09*t3293;
  t3315 = 0. + t3288 + t3310;
  t3570 = -0.09*t3272;
  t3614 = 0.049*t3293;
  t3636 = 0. + t3570 + t3614;
  t3738 = -0.049*t3727;
  t3776 = -0.21*t3767;
  t3805 = 0. + t3738 + t3776;
  t5839 = t672*t2563*t1986;
  t5878 = t5334*t2242;
  t5972 = t5839 + t5878;
  t6044 = t141*t5039;
  t6091 = -1.*t4900*t1615;
  t6113 = t6044 + t6091;
  t3976 = -0.21*t3727;
  t3978 = 0.049*t3767;
  t4078 = 0. + t3976 + t3978;
  t6146 = t3201*t5972;
  t6153 = t6113*t3293;
  t6179 = t6146 + t6153;
  t6449 = t3201*t6113;
  t6450 = -1.*t5972*t3293;
  t6484 = t6449 + t6450;
  t6705 = t672*t2563*t141*t884;
  t6751 = t672*t2563*t766*t1615;
  t6779 = t6705 + t6751;
  t6809 = -1.*t672*t1986*t876;
  t6811 = t6779*t2242;
  t6814 = t6809 + t6811;
  t6888 = t672*t2563*t766*t141;
  t6921 = -1.*t672*t2563*t884*t1615;
  t6927 = t6888 + t6921;
  t6944 = t3201*t6814;
  t6947 = t6927*t3293;
  t7000 = t6944 + t6947;
  t7012 = t3201*t6927;
  t7022 = -1.*t6814*t3293;
  t7031 = t7012 + t7022;
  t7183 = t2563*t141*t866*t884;
  t7189 = t2563*t766*t866*t1615;
  t7195 = t7183 + t7189;
  t7242 = -1.*t1986*t866*t876;
  t7246 = t7195*t2242;
  t7255 = t7242 + t7246;
  t7263 = t2563*t766*t141*t866;
  t7270 = -1.*t2563*t866*t884*t1615;
  t7273 = t7263 + t7270;
  t7288 = t3201*t7255;
  t7299 = t7273*t3293;
  t7302 = t7288 + t7299;
  t7309 = t3201*t7273;
  t7313 = -1.*t7255*t3293;
  t7316 = t7309 + t7313;
  t7416 = -1.*t141*t876*t884;
  t7419 = -1.*t766*t876*t1615;
  t7426 = t7416 + t7419;
  t7461 = -1.*t2563*t1986;
  t7463 = t7426*t2242;
  t7473 = t7461 + t7463;
  t7480 = -1.*t766*t141*t876;
  t7487 = t876*t884*t1615;
  t7507 = t7480 + t7487;
  t7512 = t3201*t7473;
  t7515 = t7507*t3293;
  t7519 = t7512 + t7515;
  t7528 = t3201*t7507;
  t7529 = -1.*t7473*t3293;
  t7531 = t7528 + t7529;
  t7570 = t766*t866;
  t7571 = -1.*t672*t876*t884;
  t7573 = t7570 + t7571;
  t7576 = t7573*t1615;
  t7577 = t6044 + t7576;
  t7592 = t141*t7573;
  t7596 = -1.*t5039*t1615;
  t7598 = t7592 + t7596;
  t7603 = t3201*t7577*t2242;
  t7606 = t7598*t3293;
  t7612 = t7603 + t7606;
  t7623 = t3201*t7598;
  t7625 = -1.*t7577*t2242*t3293;
  t7631 = t7623 + t7625;
  t7665 = t766*t866*t876;
  t7667 = -1.*t672*t884;
  t7670 = t7665 + t7667;
  t7678 = t141*t7670;
  t7683 = t1319*t1615;
  t7685 = t7678 + t7683;
  t7693 = -1.*t7670*t1615;
  t7706 = t1695 + t7693;
  t7716 = t3201*t7685*t2242;
  t7719 = t7706*t3293;
  t7721 = t7716 + t7719;
  t7731 = t3201*t7706;
  t7738 = -1.*t7685*t2242*t3293;
  t7740 = t7731 + t7738;
  t7783 = t2563*t766*t141;
  t7784 = -1.*t2563*t884*t1615;
  t7785 = t7783 + t7784;
  t7804 = -1.*t2563*t141*t884;
  t7805 = -1.*t2563*t766*t1615;
  t7816 = t7804 + t7805;
  t7825 = t3201*t7785*t2242;
  t7826 = t7816*t3293;
  t7827 = t7825 + t7826;
  t7831 = t3201*t7816;
  t7832 = -1.*t7785*t2242*t3293;
  t7839 = t7831 + t7832;
  t7960 = -1.*t141*t4900;
  t7962 = t7960 + t7596;
  t7966 = t3201*t6113*t2242;
  t7971 = t7962*t3293;
  t7975 = t7966 + t7971;
  t7990 = t3201*t7962;
  t7996 = -1.*t6113*t2242*t3293;
  t8002 = t7990 + t7996;
  t8032 = t672*t766;
  t8035 = t866*t876*t884;
  t8041 = t8032 + t8035;
  t8057 = -1.*t8041*t1615;
  t8061 = t7678 + t8057;
  t8077 = -1.*t141*t8041;
  t8078 = t8077 + t7693;
  t8089 = t3201*t8061*t2242;
  t8091 = t8078*t3293;
  t8097 = t8089 + t8091;
  t8118 = t3201*t8078;
  t8123 = -1.*t8061*t2242*t3293;
  t8126 = t8118 + t8123;
  t7788 = 0.1305*t1986*t7785;
  t7789 = t7785*t2324;
  t7800 = t7785*t2242*t3315;
  t7821 = t7816*t3636;
  t7829 = t3805*t7827;
  t7841 = t4078*t7839;
  t7845 = -1.*t3767*t7827;
  t7879 = t3701*t7839;
  t7889 = t7845 + t7879;
  t7890 = -0.21*t7889;
  t7896 = t3701*t7827;
  t7907 = t3767*t7839;
  t7918 = t7896 + t7907;
  t7919 = -0.049*t7918;
  t5545 = t1986*t5334;
  t5609 = -1.*t672*t2563*t2242;
  t5694 = t5545 + t5609;
  t8168 = 0.135*t1986;
  t8169 = -0.049*t2242;
  t8170 = t8168 + t8169;
  t8172 = 0.049*t1986;
  t8173 = t8172 + t2752;
  t8216 = t141*t8041;
  t8217 = t7670*t1615;
  t8219 = t8216 + t8217;
  t8223 = t1986*t8219;
  t8226 = -1.*t2563*t866*t2242;
  t8227 = t8223 + t8226;
  t8282 = t2563*t141*t884;
  t8285 = t2563*t766*t1615;
  t8287 = t8282 + t8285;
  t8293 = t1986*t8287;
  t8294 = t876*t2242;
  t8295 = t8293 + t8294;
  t8386 = -1.*t3201*t5972;
  t8389 = -1.*t6113*t3293;
  t8390 = t8386 + t8389;
  t6541 = t3701*t6484;
  t8364 = 0.049*t3201;
  t8367 = t8364 + t3310;
  t8373 = -0.09*t3201;
  t8378 = -0.049*t3293;
  t8381 = t8373 + t8378;
  t8444 = t2563*t1986*t866;
  t8445 = t8219*t2242;
  t8447 = t8444 + t8445;
  t8454 = -1.*t3201*t8447;
  t8475 = -1.*t8061*t3293;
  t8477 = t8454 + t8475;
  t8489 = t3201*t8061;
  t8492 = -1.*t8447*t3293;
  t8495 = t8489 + t8492;
  t8525 = -1.*t1986*t876;
  t8530 = t8287*t2242;
  t8532 = t8525 + t8530;
  t8538 = -1.*t3201*t8532;
  t8543 = -1.*t7785*t3293;
  t8545 = t8538 + t8543;
  t8549 = t3201*t7785;
  t8550 = -1.*t8532*t3293;
  t8552 = t8549 + t8550;
  t6530 = -1.*t3767*t6179;
  t6548 = t6530 + t6541;
  t8419 = -1.*t3767*t6484;
  t8582 = -0.21*t3701;
  t8583 = -0.049*t3767;
  t8588 = t8582 + t8583;
  t8590 = 0.049*t3701;
  t8592 = t8590 + t3776;
  t8608 = t3201*t8447;
  t8609 = t8061*t3293;
  t8610 = t8608 + t8609;
  t8507 = t3701*t8495;
  t8516 = -1.*t3767*t8495;
  t8635 = t3201*t8532;
  t8637 = t7785*t3293;
  t8638 = t8635 + t8637;
  t8560 = t3701*t8552;
  t8569 = -1.*t3767*t8552;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=t1515*t1654 + t1929*t2324 + t3166*t3315 + t3407*t3636 + t3805*t3897 + t4078*t4129 - 0.21*(-1.*t3767*t3897 + t3701*t4129) - 0.049*(t3701*t3897 + t3767*t4129) + t1319*t575 - 1.*t2563*t2761*t866 + 0.1305*(t1929*t1986 + t2242*t2563*t866);
  p_output1[10]=t1654*t5039 + t2324*t5334 + 0.1305*t5694 + t4900*t575 + t3315*t5972 + t3636*t6113 + t3805*t6179 + t4078*t6484 - 0.049*(t3701*t6179 + t3767*t6484) - 0.21*t6548 + t2563*t2761*t672;
  p_output1[11]=0;
  p_output1[12]=t2324*t6779 + t3315*t6814 + t3636*t6927 + t3805*t7000 + t4078*t7031 - 0.21*(-1.*t3767*t7000 + t3701*t7031) - 0.049*(t3701*t7000 + t3767*t7031) + t1654*t2563*t672*t766 - 1.*t2761*t672*t876 + 0.1305*(t1986*t6779 + t2242*t672*t876) + t2563*t575*t672*t884;
  p_output1[13]=t2324*t7195 + t3315*t7255 + t3636*t7273 + t3805*t7302 + t4078*t7316 - 0.21*(-1.*t3767*t7302 + t3701*t7316) - 0.049*(t3701*t7302 + t3767*t7316) + t1654*t2563*t766*t866 - 1.*t2761*t866*t876 + 0.1305*(t1986*t7195 + t2242*t866*t876) + t2563*t575*t866*t884;
  p_output1[14]=-1.*t2563*t2761 + t2324*t7426 + 0.1305*(t2242*t2563 + t1986*t7426) + t3315*t7473 + t3636*t7507 + t3805*t7519 + t4078*t7531 - 0.21*(-1.*t3767*t7519 + t3701*t7531) - 0.049*(t3701*t7519 + t3767*t7531) - 1.*t1654*t766*t876 - 1.*t575*t876*t884;
  p_output1[15]=t5039*t575 + t1654*t7573 + 0.1305*t1986*t7577 + t2324*t7577 + t2242*t3315*t7577 + t3636*t7598 + t3805*t7612 + t4078*t7631 - 0.21*(-1.*t3767*t7612 + t3701*t7631) - 0.049*(t3701*t7612 + t3767*t7631);
  p_output1[16]=t1319*t1654 + t575*t7670 + 0.1305*t1986*t7685 + t2324*t7685 + t2242*t3315*t7685 + t3636*t7706 + t3805*t7721 + t4078*t7740 - 0.21*(-1.*t3767*t7721 + t3701*t7740) - 0.049*(t3701*t7721 + t3767*t7740);
  p_output1[17]=t2563*t575*t766 + t7788 + t7789 + t7800 + t7821 + t7829 + t7841 + t7890 + t7919 - 1.*t1654*t2563*t884;
  p_output1[18]=0.135*t1615*t4900 - 0.135*t141*t5039 + 0.1305*t1986*t6113 + t2324*t6113 + t2242*t3315*t6113 + t3636*t7962 + t3805*t7975 + t4078*t8002 - 0.21*(-1.*t3767*t7975 + t3701*t8002) - 0.049*(t3701*t7975 + t3767*t8002);
  p_output1[19]=-0.135*t141*t7670 + 0.135*t1615*t8041 + 0.1305*t1986*t8061 + t2324*t8061 + t2242*t3315*t8061 + t3636*t8078 + t3805*t8097 + t4078*t8126 - 0.21*(-1.*t3767*t8097 + t3701*t8126) - 0.049*(t3701*t8097 + t3767*t8126);
  p_output1[20]=-0.135*t141*t2563*t766 + t7788 + t7789 + t7800 + t7821 + t7829 + t7841 + t7890 + t7919 + 0.135*t1615*t2563*t884;
  p_output1[21]=t3315*t5694 + t3201*t3805*t5694 - 1.*t3293*t4078*t5694 - 0.21*(-1.*t3293*t3701*t5694 - 1.*t3201*t3767*t5694) - 0.049*(t3201*t3701*t5694 - 1.*t3293*t3767*t5694) + 0.1305*(-1.*t2242*t5334 - 1.*t1986*t2563*t672) + t2563*t672*t8170 + t5334*t8173;
  p_output1[22]=t8173*t8219 + 0.1305*(t2998 - 1.*t2242*t8219) + t3315*t8227 + t3201*t3805*t8227 - 1.*t3293*t4078*t8227 - 0.21*(-1.*t3293*t3701*t8227 - 1.*t3201*t3767*t8227) - 0.049*(t3201*t3701*t8227 - 1.*t3293*t3767*t8227) + t2563*t8170*t866;
  p_output1[23]=t8173*t8287 + t3315*t8295 + t3201*t3805*t8295 - 1.*t3293*t4078*t8295 - 0.21*(-1.*t3293*t3701*t8295 - 1.*t3201*t3767*t8295) - 0.049*(t3201*t3701*t8295 - 1.*t3293*t3767*t8295) - 1.*t8170*t876 + 0.1305*(-1.*t2242*t8287 + t1986*t876);
  p_output1[24]=t3805*t6484 + t6113*t8367 + t5972*t8381 + t4078*t8390 - 0.049*(t6541 + t3767*t8390) - 0.21*(t3701*t8390 + t8419);
  p_output1[25]=t8061*t8367 + t8381*t8447 + t4078*t8477 + t3805*t8495 - 0.049*(t3767*t8477 + t8507) - 0.21*(t3701*t8477 + t8516);
  p_output1[26]=t7785*t8367 + t8381*t8532 + t4078*t8545 + t3805*t8552 - 0.049*(t3767*t8545 + t8560) - 0.21*(t3701*t8545 + t8569);
  p_output1[27]=-0.049*t6548 - 0.21*(-1.*t3701*t6179 + t8419) + t6179*t8588 + t6484*t8592;
  p_output1[28]=t8495*t8592 + t8588*t8610 - 0.21*(t8516 - 1.*t3701*t8610) - 0.049*(t8507 - 1.*t3767*t8610);
  p_output1[29]=t8552*t8592 + t8588*t8638 - 0.21*(t8569 - 1.*t3701*t8638) - 0.049*(t8560 - 1.*t3767*t8638);
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=0;
  p_output1[37]=0;
  p_output1[38]=0;
  p_output1[39]=0;
  p_output1[40]=0;
  p_output1[41]=0;
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=0;
  p_output1[48]=0;
  p_output1[49]=0;
  p_output1[50]=0;
  p_output1[51]=0;
  p_output1[52]=0;
  p_output1[53]=0;
  p_output1[54]=0;
  p_output1[55]=0;
  p_output1[56]=0;
  p_output1[57]=0;
  p_output1[58]=0;
  p_output1[59]=0;
}



void Jp_knee_joint_left_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
