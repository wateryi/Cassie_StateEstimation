/*
 * Automatically Generated from Mathematica.
 * Tue 8 Jan 2019 23:02:13 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jp_VectorNav_to_LeftToeBottom_src.h"

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
  double t4;
  double t45;
  double t385;
  double t558;
  double t676;
  double t703;
  double t706;
  double t839;
  double t1521;
  double t1644;
  double t1673;
  double t1693;
  double t1836;
  double t1881;
  double t1906;
  double t2149;
  double t2192;
  double t2207;
  double t2290;
  double t2311;
  double t2331;
  double t2408;
  double t2639;
  double t2658;
  double t2750;
  double t3013;
  double t3040;
  double t3115;
  double t3146;
  double t3216;
  double t3236;
  double t3301;
  double t3385;
  double t3410;
  double t3411;
  double t3597;
  double t3627;
  double t3645;
  double t3774;
  double t3977;
  double t4022;
  double t4109;
  double t4160;
  double t4176;
  double t4198;
  double t4394;
  double t4407;
  double t4547;
  double t102;
  double t281;
  double t315;
  double t429;
  double t542;
  double t704;
  double t756;
  double t796;
  double t1041;
  double t1051;
  double t1144;
  double t1679;
  double t1791;
  double t1819;
  double t2059;
  double t2098;
  double t2115;
  double t2392;
  double t2514;
  double t2558;
  double t4892;
  double t4895;
  double t4927;
  double t4953;
  double t4989;
  double t5022;
  double t2888;
  double t2903;
  double t2985;
  double t3291;
  double t3373;
  double t3379;
  double t5122;
  double t5154;
  double t5158;
  double t5167;
  double t5194;
  double t5195;
  double t3479;
  double t3483;
  double t3567;
  double t4038;
  double t4132;
  double t4154;
  double t5205;
  double t5244;
  double t5260;
  double t5273;
  double t5284;
  double t5286;
  double t4270;
  double t4335;
  double t4362;
  double t5320;
  double t5324;
  double t5346;
  double t5406;
  double t5449;
  double t5467;
  double t5667;
  double t5673;
  double t5676;
  double t5702;
  double t5710;
  double t5725;
  double t5734;
  double t5748;
  double t5752;
  double t5783;
  double t5820;
  double t5822;
  double t5844;
  double t5857;
  double t5866;
  double t5870;
  double t5890;
  double t5903;
  double t6103;
  double t6104;
  double t6110;
  double t6127;
  double t6128;
  double t6157;
  double t6168;
  double t6169;
  double t6170;
  double t6176;
  double t6181;
  double t6189;
  double t6211;
  double t6216;
  double t6221;
  double t6232;
  double t6244;
  double t6245;
  double t6048;
  double t6052;
  double t6069;
  double t6317;
  double t6320;
  double t6325;
  double t6349;
  double t6351;
  double t6352;
  double t6365;
  double t6371;
  double t6372;
  double t6397;
  double t6405;
  double t6406;
  double t6429;
  double t6433;
  double t6442;
  double t6448;
  double t6454;
  double t6457;
  double t6544;
  double t6553;
  double t6562;
  double t6568;
  double t6571;
  double t6576;
  double t6586;
  double t6587;
  double t6596;
  double t6604;
  double t6606;
  double t6611;
  double t6642;
  double t6658;
  double t6660;
  double t6664;
  double t6677;
  double t6695;
  double t6505;
  double t6507;
  double t6515;
  double t6787;
  double t6796;
  double t6800;
  double t6819;
  double t6825;
  double t6831;
  double t6833;
  double t6838;
  double t6853;
  double t6858;
  double t6861;
  double t6867;
  double t6872;
  double t6875;
  double t6885;
  double t6887;
  double t6890;
  double t6895;
  double t6896;
  double t6899;
  double t6749;
  double t6770;
  double t6932;
  double t6933;
  double t6938;
  double t6946;
  double t6947;
  double t6948;
  double t6954;
  double t6956;
  double t6967;
  double t6970;
  double t6972;
  double t6975;
  double t6979;
  double t6982;
  double t6988;
  double t6989;
  double t6991;
  double t6997;
  double t6998;
  double t7001;
  double t6566;
  double t6583;
  double t6601;
  double t6640;
  double t6661;
  double t6698;
  double t6708;
  double t6710;
  double t6717;
  double t6720;
  double t6732;
  double t6735;
  double t6740;
  double t6742;
  double t7041;
  double t7042;
  double t7045;
  double t7050;
  double t7053;
  double t7063;
  double t7064;
  double t7070;
  double t7073;
  double t7074;
  double t7084;
  double t7086;
  double t7092;
  double t7093;
  double t7094;
  double t7102;
  double t7103;
  double t7107;
  double t7140;
  double t7142;
  double t7143;
  double t7149;
  double t7155;
  double t7175;
  double t7177;
  double t7188;
  double t7190;
  double t7193;
  double t7220;
  double t7221;
  double t7222;
  double t7234;
  double t7235;
  double t7237;
  double t7245;
  double t7246;
  double t7249;
  double t7298;
  double t7312;
  double t7317;
  double t7322;
  double t7324;
  double t7330;
  double t7333;
  double t7336;
  double t7339;
  double t7340;
  double t7344;
  double t7346;
  double t7347;
  double t7272;
  double t7275;
  double t7282;
  double t7294;
  double t7297;
  double t7385;
  double t7390;
  double t7397;
  double t7398;
  double t7401;
  double t7406;
  double t7410;
  double t7455;
  double t7457;
  double t7458;
  double t7462;
  double t7468;
  double t7470;
  double t7471;
  double t7479;
  double t7484;
  double t7487;
  double t7490;
  double t7494;
  double t7496;
  double t7544;
  double t7545;
  double t7547;
  double t7566;
  double t7567;
  double t7570;
  double t7586;
  double t7534;
  double t7538;
  double t7540;
  double t7550;
  double t7557;
  double t7631;
  double t7634;
  double t5519;
  double t7655;
  double t7656;
  double t7658;
  double t7662;
  double t7663;
  double t7665;
  double t7666;
  double t7592;
  double t7694;
  double t7695;
  double t7696;
  double t7610;
  double t7688;
  double t7689;
  double t7691;
  double t7692;
  double t7693;
  double t7636;
  double t5527;
  double t5563;
  double t7674;
  double t7734;
  double t7736;
  double t7739;
  double t7681;
  t4 = Sin(var1[0]);
  t45 = Cos(var1[1]);
  t385 = Sin(var1[1]);
  t558 = Cos(var1[2]);
  t676 = -1.*t558;
  t703 = 1. + t676;
  t706 = Sin(var1[2]);
  t839 = Cos(var1[0]);
  t1521 = Cos(var1[3]);
  t1644 = -1.*t1521;
  t1673 = 1. + t1644;
  t1693 = Sin(var1[3]);
  t1836 = -1.*t558*t4*t385;
  t1881 = -1.*t839*t706;
  t1906 = t1836 + t1881;
  t2149 = -1.*t839*t558;
  t2192 = t4*t385*t706;
  t2207 = t2149 + t2192;
  t2290 = Cos(var1[4]);
  t2311 = -1.*t2290;
  t2331 = 1. + t2311;
  t2408 = Sin(var1[4]);
  t2639 = -1.*t1693*t1906;
  t2658 = t1521*t2207;
  t2750 = t2639 + t2658;
  t3013 = t1521*t1906;
  t3040 = t1693*t2207;
  t3115 = t3013 + t3040;
  t3146 = Cos(var1[5]);
  t3216 = -1.*t3146;
  t3236 = 1. + t3216;
  t3301 = Sin(var1[5]);
  t3385 = t2408*t2750;
  t3410 = t2290*t3115;
  t3411 = t3385 + t3410;
  t3597 = t2290*t2750;
  t3627 = -1.*t2408*t3115;
  t3645 = t3597 + t3627;
  t3774 = Cos(var1[6]);
  t3977 = -1.*t3774;
  t4022 = 1. + t3977;
  t4109 = Sin(var1[6]);
  t4160 = -1.*t3301*t3411;
  t4176 = t3146*t3645;
  t4198 = t4160 + t4176;
  t4394 = t3146*t3411;
  t4407 = t3301*t3645;
  t4547 = t4394 + t4407;
  t102 = -1.*t45;
  t281 = 1. + t102;
  t315 = 0.135*t281;
  t429 = 0.049*t385;
  t542 = 0. + t315 + t429;
  t704 = -0.049*t703;
  t756 = -0.09*t706;
  t796 = 0. + t704 + t756;
  t1041 = -0.09*t703;
  t1051 = 0.049*t706;
  t1144 = 0. + t1041 + t1051;
  t1679 = -0.049*t1673;
  t1791 = -0.21*t1693;
  t1819 = 0. + t1679 + t1791;
  t2059 = -0.21*t1673;
  t2098 = 0.049*t1693;
  t2115 = 0. + t2059 + t2098;
  t2392 = -0.2707*t2331;
  t2514 = 0.0016*t2408;
  t2558 = 0. + t2392 + t2514;
  t4892 = t839*t558*t385;
  t4895 = -1.*t4*t706;
  t4927 = t4892 + t4895;
  t4953 = -1.*t558*t4;
  t4989 = -1.*t839*t385*t706;
  t5022 = t4953 + t4989;
  t2888 = -0.0016*t2331;
  t2903 = -0.2707*t2408;
  t2985 = 0. + t2888 + t2903;
  t3291 = 0.0184*t3236;
  t3373 = -0.7055*t3301;
  t3379 = 0. + t3291 + t3373;
  t5122 = -1.*t1693*t4927;
  t5154 = t1521*t5022;
  t5158 = t5122 + t5154;
  t5167 = t1521*t4927;
  t5194 = t1693*t5022;
  t5195 = t5167 + t5194;
  t3479 = -0.7055*t3236;
  t3483 = -0.0184*t3301;
  t3567 = 0. + t3479 + t3483;
  t4038 = -1.1135*t4022;
  t4132 = 0.0216*t4109;
  t4154 = 0. + t4038 + t4132;
  t5205 = t2408*t5158;
  t5244 = t2290*t5195;
  t5260 = t5205 + t5244;
  t5273 = t2290*t5158;
  t5284 = -1.*t2408*t5195;
  t5286 = t5273 + t5284;
  t4270 = -0.0216*t4022;
  t4335 = -1.1135*t4109;
  t4362 = 0. + t4270 + t4335;
  t5320 = -1.*t3301*t5260;
  t5324 = t3146*t5286;
  t5346 = t5320 + t5324;
  t5406 = t3146*t5260;
  t5449 = t3301*t5286;
  t5467 = t5406 + t5449;
  t5667 = t558*t1693*t385;
  t5673 = t1521*t385*t706;
  t5676 = t5667 + t5673;
  t5702 = -1.*t1521*t558*t385;
  t5710 = t1693*t385*t706;
  t5725 = t5702 + t5710;
  t5734 = t2408*t5676;
  t5748 = t2290*t5725;
  t5752 = t5734 + t5748;
  t5783 = t2290*t5676;
  t5820 = -1.*t2408*t5725;
  t5822 = t5783 + t5820;
  t5844 = -1.*t3301*t5752;
  t5857 = t3146*t5822;
  t5866 = t5844 + t5857;
  t5870 = t3146*t5752;
  t5890 = t3301*t5822;
  t5903 = t5870 + t5890;
  t6103 = -1.*t839*t45*t558*t1693;
  t6104 = -1.*t1521*t839*t45*t706;
  t6110 = t6103 + t6104;
  t6127 = t1521*t839*t45*t558;
  t6128 = -1.*t839*t45*t1693*t706;
  t6157 = t6127 + t6128;
  t6168 = t2408*t6110;
  t6169 = t2290*t6157;
  t6170 = t6168 + t6169;
  t6176 = t2290*t6110;
  t6181 = -1.*t2408*t6157;
  t6189 = t6176 + t6181;
  t6211 = -1.*t3301*t6170;
  t6216 = t3146*t6189;
  t6221 = t6211 + t6216;
  t6232 = t3146*t6170;
  t6244 = t3301*t6189;
  t6245 = t6232 + t6244;
  t6048 = 0.049*t45;
  t6052 = 0.135*t385;
  t6069 = t6048 + t6052;
  t6317 = -1.*t45*t558*t1693*t4;
  t6320 = -1.*t1521*t45*t4*t706;
  t6325 = t6317 + t6320;
  t6349 = t1521*t45*t558*t4;
  t6351 = -1.*t45*t1693*t4*t706;
  t6352 = t6349 + t6351;
  t6365 = t2408*t6325;
  t6371 = t2290*t6352;
  t6372 = t6365 + t6371;
  t6397 = t2290*t6325;
  t6405 = -1.*t2408*t6352;
  t6406 = t6397 + t6405;
  t6429 = -1.*t3301*t6372;
  t6433 = t3146*t6406;
  t6442 = t6429 + t6433;
  t6448 = t3146*t6372;
  t6454 = t3301*t6406;
  t6457 = t6448 + t6454;
  t6544 = -1.*t45*t558*t1693;
  t6553 = -1.*t1521*t45*t706;
  t6562 = t6544 + t6553;
  t6568 = -1.*t1521*t45*t558;
  t6571 = t45*t1693*t706;
  t6576 = t6568 + t6571;
  t6586 = -1.*t2408*t6562;
  t6587 = t2290*t6576;
  t6596 = t6586 + t6587;
  t6604 = t2290*t6562;
  t6606 = t2408*t6576;
  t6611 = t6604 + t6606;
  t6642 = t3301*t6596;
  t6658 = t3146*t6611;
  t6660 = t6642 + t6658;
  t6664 = t3146*t6596;
  t6677 = -1.*t3301*t6611;
  t6695 = t6664 + t6677;
  t6505 = -0.09*t558;
  t6507 = -0.049*t706;
  t6515 = t6505 + t6507;
  t6787 = -1.*t839*t558*t385;
  t6796 = t4*t706;
  t6800 = t6787 + t6796;
  t6819 = t1693*t6800;
  t6825 = t6819 + t5154;
  t6831 = t1521*t6800;
  t6833 = -1.*t1693*t5022;
  t6838 = t6831 + t6833;
  t6853 = -1.*t2408*t6825;
  t6858 = t2290*t6838;
  t6861 = t6853 + t6858;
  t6867 = t2290*t6825;
  t6872 = t2408*t6838;
  t6875 = t6867 + t6872;
  t6885 = t3301*t6861;
  t6887 = t3146*t6875;
  t6890 = t6885 + t6887;
  t6895 = t3146*t6861;
  t6896 = -1.*t3301*t6875;
  t6899 = t6895 + t6896;
  t6749 = 0.049*t558;
  t6770 = t6749 + t756;
  t6932 = t839*t558;
  t6933 = -1.*t4*t385*t706;
  t6938 = t6932 + t6933;
  t6946 = t1693*t1906;
  t6947 = t1521*t6938;
  t6948 = t6946 + t6947;
  t6954 = -1.*t1693*t6938;
  t6956 = t3013 + t6954;
  t6967 = -1.*t2408*t6948;
  t6970 = t2290*t6956;
  t6972 = t6967 + t6970;
  t6975 = t2290*t6948;
  t6979 = t2408*t6956;
  t6982 = t6975 + t6979;
  t6988 = t3301*t6972;
  t6989 = t3146*t6982;
  t6991 = t6988 + t6989;
  t6997 = t3146*t6972;
  t6998 = -1.*t3301*t6982;
  t7001 = t6997 + t6998;
  t6566 = t2985*t6562;
  t6583 = t2558*t6576;
  t6601 = t3567*t6596;
  t6640 = t3379*t6611;
  t6661 = t4362*t6660;
  t6698 = t4154*t6695;
  t6708 = -1.*t4109*t6660;
  t6710 = t3774*t6695;
  t6717 = t6708 + t6710;
  t6720 = -1.1312*t6717;
  t6732 = t3774*t6660;
  t6735 = t4109*t6695;
  t6740 = t6732 + t6735;
  t6742 = 0.0306*t6740;
  t7041 = -0.21*t1521;
  t7042 = -0.049*t1693;
  t7045 = t7041 + t7042;
  t7050 = 0.049*t1521;
  t7053 = t7050 + t1791;
  t7063 = -1.*t1521*t4927;
  t7064 = t7063 + t6833;
  t7070 = -1.*t2408*t5158;
  t7073 = t2290*t7064;
  t7074 = t7070 + t7073;
  t7084 = t2408*t7064;
  t7086 = t5273 + t7084;
  t7092 = t3301*t7074;
  t7093 = t3146*t7086;
  t7094 = t7092 + t7093;
  t7102 = t3146*t7074;
  t7103 = -1.*t3301*t7086;
  t7107 = t7102 + t7103;
  t7140 = t558*t4*t385;
  t7142 = t839*t706;
  t7143 = t7140 + t7142;
  t7149 = -1.*t1693*t7143;
  t7155 = t7149 + t6947;
  t7175 = -1.*t1521*t7143;
  t7177 = t7175 + t6954;
  t7188 = -1.*t2408*t7155;
  t7190 = t2290*t7177;
  t7193 = t7188 + t7190;
  t7220 = t2290*t7155;
  t7221 = t2408*t7177;
  t7222 = t7220 + t7221;
  t7234 = t3301*t7193;
  t7235 = t3146*t7222;
  t7237 = t7234 + t7235;
  t7245 = t3146*t7193;
  t7246 = -1.*t3301*t7222;
  t7249 = t7245 + t7246;
  t7298 = t1521*t45*t558;
  t7312 = -1.*t45*t1693*t706;
  t7317 = t7298 + t7312;
  t7322 = -1.*t2290*t7317;
  t7324 = t6586 + t7322;
  t7330 = -1.*t2408*t7317;
  t7333 = t6604 + t7330;
  t7336 = t3301*t7324;
  t7339 = t3146*t7333;
  t7340 = t7336 + t7339;
  t7344 = t3146*t7324;
  t7346 = -1.*t3301*t7333;
  t7347 = t7344 + t7346;
  t7272 = 0.0016*t2290;
  t7275 = t7272 + t2903;
  t7282 = -0.2707*t2290;
  t7294 = -0.0016*t2408;
  t7297 = t7282 + t7294;
  t7385 = -1.*t2290*t5195;
  t7390 = t7070 + t7385;
  t7397 = t3301*t7390;
  t7398 = t7397 + t5324;
  t7401 = t3146*t7390;
  t7406 = -1.*t3301*t5286;
  t7410 = t7401 + t7406;
  t7455 = t1521*t7143;
  t7457 = t1693*t6938;
  t7458 = t7455 + t7457;
  t7462 = -1.*t2290*t7458;
  t7468 = t7188 + t7462;
  t7470 = -1.*t2408*t7458;
  t7471 = t7220 + t7470;
  t7479 = t3301*t7468;
  t7484 = t3146*t7471;
  t7487 = t7479 + t7484;
  t7490 = t3146*t7468;
  t7494 = -1.*t3301*t7471;
  t7496 = t7490 + t7494;
  t7544 = t2408*t6562;
  t7545 = t2290*t7317;
  t7547 = t7544 + t7545;
  t7566 = -1.*t3301*t7547;
  t7567 = t7566 + t7339;
  t7570 = -1.*t3146*t7547;
  t7586 = t7570 + t7346;
  t7534 = -0.7055*t3146;
  t7538 = 0.0184*t3301;
  t7540 = t7534 + t7538;
  t7550 = -0.0184*t3146;
  t7557 = t7550 + t3373;
  t7631 = -1.*t3146*t5260;
  t7634 = t7631 + t7406;
  t5519 = t3774*t5346;
  t7655 = t2408*t7155;
  t7656 = t2290*t7458;
  t7658 = t7655 + t7656;
  t7662 = -1.*t3301*t7658;
  t7663 = t7662 + t7484;
  t7665 = -1.*t3146*t7658;
  t7666 = t7665 + t7494;
  t7592 = -1.*t4109*t7567;
  t7694 = t3146*t7547;
  t7695 = t3301*t7333;
  t7696 = t7694 + t7695;
  t7610 = t3774*t7567;
  t7688 = 0.0216*t3774;
  t7689 = t7688 + t4335;
  t7691 = -1.1135*t3774;
  t7692 = -0.0216*t4109;
  t7693 = t7691 + t7692;
  t7636 = -1.*t4109*t5346;
  t5527 = -1.*t4109*t5467;
  t5563 = t5519 + t5527;
  t7674 = -1.*t4109*t7663;
  t7734 = t3146*t7658;
  t7736 = t3301*t7471;
  t7739 = t7734 + t7736;
  t7681 = t3774*t7663;
  p_output1[0]=0;
  p_output1[1]=t1819*t1906 + t2115*t2207 + t2558*t2750 + t2985*t3115 + t3379*t3411 + t3567*t3645 + 0.135*t4 + t4154*t4198 - 0.1305*t4*t45 + t4362*t4547 + 0.0306*(t4109*t4198 + t3774*t4547) - 1.1312*(t3774*t4198 - 1.*t4109*t4547) - 1.*t4*t542 - 1.*t385*t4*t796 - 1.*t1144*t839;
  p_output1[2]=-1.*t1144*t4 + t1819*t4927 + t2115*t5022 + t2558*t5158 + t2985*t5195 + t3379*t5260 + t3567*t5286 + t4154*t5346 + t4362*t5467 + 0.0306*(t4109*t5346 + t3774*t5467) - 1.1312*t5563 - 0.135*t839 + 0.1305*t45*t839 + t542*t839 + t385*t796*t839;
  p_output1[3]=-0.049*t385 + 0.004500000000000004*t45 - 1.*t1819*t385*t558 + t2558*t5676 + t2985*t5725 + t3379*t5752 + t3567*t5822 + t4154*t5866 + t4362*t5903 + 0.0306*(t4109*t5866 + t3774*t5903) - 1.1312*(t3774*t5866 - 1.*t4109*t5903) + t2115*t385*t706 - 1.*t385*t796;
  p_output1[4]=t2558*t6110 + t2985*t6157 + t3379*t6170 + t3567*t6189 + t4154*t6221 + t4362*t6245 + 0.0306*(t4109*t6221 + t3774*t6245) - 1.1312*(t3774*t6221 - 1.*t4109*t6245) - 0.1305*t385*t839 + t1819*t45*t558*t839 + t6069*t839 - 1.*t2115*t45*t706*t839 + t45*t796*t839;
  p_output1[5]=-0.1305*t385*t4 + t1819*t4*t45*t558 + t4*t6069 + t2558*t6325 + t2985*t6352 + t3379*t6372 + t3567*t6406 + t4154*t6442 + t4362*t6457 + 0.0306*(t4109*t6442 + t3774*t6457) - 1.1312*(t3774*t6442 - 1.*t4109*t6457) - 1.*t2115*t4*t45*t706 + t4*t45*t796;
  p_output1[6]=-1.*t2115*t45*t558 + t45*t6515 + t6566 + t6583 + t6601 + t6640 + t6661 + t6698 + t6720 + t6742 - 1.*t1819*t45*t706;
  p_output1[7]=t1819*t5022 - 1.*t4*t6770 + t2115*t6800 + t2985*t6825 + t2558*t6838 + t3567*t6861 + t3379*t6875 + t4362*t6890 + t4154*t6899 - 1.1312*(-1.*t4109*t6890 + t3774*t6899) + 0.0306*(t3774*t6890 + t4109*t6899) + t385*t6515*t839;
  p_output1[8]=t1906*t2115 + t385*t4*t6515 + t1819*t6938 + t2985*t6948 + t2558*t6956 + t3567*t6972 + t3379*t6982 + t4362*t6991 + t4154*t7001 - 1.1312*(-1.*t4109*t6991 + t3774*t7001) + 0.0306*(t3774*t6991 + t4109*t7001) + t6770*t839;
  p_output1[9]=t6566 + t6583 + t6601 + t6640 + t6661 + t6698 + t6720 + t6742 + t45*t558*t7045 - 1.*t45*t7053*t706;
  p_output1[10]=t2985*t5158 + t4927*t7045 + t5022*t7053 + t2558*t7064 + t3567*t7074 + t3379*t7086 + t4362*t7094 + t4154*t7107 - 1.1312*(-1.*t4109*t7094 + t3774*t7107) + 0.0306*(t3774*t7094 + t4109*t7107);
  p_output1[11]=t6938*t7053 + t7045*t7143 + t2985*t7155 + t2558*t7177 + t3567*t7193 + t3379*t7222 + t4362*t7237 + t4154*t7249 - 1.1312*(-1.*t4109*t7237 + t3774*t7249) + 0.0306*(t3774*t7237 + t4109*t7249);
  p_output1[12]=t6562*t7275 + t7297*t7317 + t3567*t7324 + t3379*t7333 + t4362*t7340 + t4154*t7347 - 1.1312*(-1.*t4109*t7340 + t3774*t7347) + 0.0306*(t3774*t7340 + t4109*t7347);
  p_output1[13]=t3379*t5286 + t5158*t7275 + t5195*t7297 + t3567*t7390 + t4362*t7398 + t4154*t7410 - 1.1312*(-1.*t4109*t7398 + t3774*t7410) + 0.0306*(t3774*t7398 + t4109*t7410);
  p_output1[14]=t7155*t7275 + t7297*t7458 + t3567*t7468 + t3379*t7471 + t4362*t7487 + t4154*t7496 - 1.1312*(-1.*t4109*t7487 + t3774*t7496) + 0.0306*(t3774*t7487 + t4109*t7496);
  p_output1[15]=t7540*t7547 + t7333*t7557 + t4362*t7567 + t4154*t7586 - 1.1312*(t3774*t7586 + t7592) + 0.0306*(t4109*t7586 + t7610);
  p_output1[16]=t4362*t5346 + t5260*t7540 + t5286*t7557 + t4154*t7634 + 0.0306*(t5519 + t4109*t7634) - 1.1312*(t3774*t7634 + t7636);
  p_output1[17]=t7471*t7557 + t7540*t7658 + t4362*t7663 + t4154*t7666 - 1.1312*(t3774*t7666 + t7674) + 0.0306*(t4109*t7666 + t7681);
  p_output1[18]=t7567*t7689 + t7693*t7696 - 1.1312*(t7592 - 1.*t3774*t7696) + 0.0306*(t7610 - 1.*t4109*t7696);
  p_output1[19]=0.0306*t5563 - 1.1312*(-1.*t3774*t5467 + t7636) + t5346*t7689 + t5467*t7693;
  p_output1[20]=t7663*t7689 + t7693*t7739 - 1.1312*(t7674 - 1.*t3774*t7739) + 0.0306*(t7681 - 1.*t4109*t7739);
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
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
}



void Jp_VectorNav_to_LeftToeBottom_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}