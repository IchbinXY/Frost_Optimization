/*
 * Automatically Generated from Mathematica.
 * Wed 29 May 2019 15:12:41 GMT-04:00
 */

#ifdef MATLAB_MEX_FILE
#include <stdexcept>
#include <cmath>
#include<math.h>
/**
 * Copied from Wolfram Mathematica C Definitions file mdefs.hpp
 * Changed marcos to inline functions (Eric Cousineau)
 */
inline double Power(double x, double y) { return pow(x, y); }
inline double Sqrt(double x) { return sqrt(x); }

inline double Abs(double x) { return fabs(x); }

inline double Exp(double x) { return exp(x); }
inline double Log(double x) { return log(x); }

inline double Sin(double x) { return sin(x); }
inline double Cos(double x) { return cos(x); }
inline double Tan(double x) { return tan(x); }

inline double ArcSin(double x) { return asin(x); }
inline double ArcCos(double x) { return acos(x); }
inline double ArcTan(double x) { return atan(x); }

/* update ArcTan function to use atan2 instead. */
inline double ArcTan(double x, double y) { return atan2(y,x); }

inline double Sinh(double x) { return sinh(x); }
inline double Cosh(double x) { return cosh(x); }
inline double Tanh(double x) { return tanh(x); }

const double E	= 2.71828182845904523536029;
const double Pi = 3.14159265358979323846264;
const double Degree = 0.01745329251994329576924;

inline double Sec(double x) { return 1/cos(x); }
inline double Csc(double x) { return 1/sin(x); }

#endif

/*
 * Sub functions
 */
static void output1(double *p_output1,const double *var1,const double *var2)
{
  double t320;
  double t829;
  double t9618;
  double t11296;
  double t11299;
  double t11306;
  double t11312;
  double t11100;
  double t11125;
  double t11313;
  double t11325;
  double t11326;
  double t11380;
  double t821;
  double t10350;
  double t11539;
  double t11323;
  double t11327;
  double t11348;
  double t11352;
  double t11383;
  double t11417;
  double t11563;
  double t11568;
  double t11573;
  double t11576;
  double t11537;
  double t11764;
  double t11825;
  double t11955;
  double t12075;
  double t12091;
  double t12137;
  double t12142;
  double t12144;
  double t12215;
  double t12170;
  double t12451;
  double t12446;
  double t12462;
  double t12459;
  double t12460;
  double t12570;
  double t12523;
  double t12539;
  double t12550;
  double t12563;
  double t12632;
  double t12573;
  double t12574;
  double t12593;
  double t12594;
  double t12599;
  double t12618;
  double t12643;
  double t12691;
  double t12566;
  double t12674;
  double t12680;
  double t12633;
  double t12576;
  double t12577;
  double t12578;
  double t12580;
  double t12583;
  double t12565;
  double t12568;
  double t12569;
  double t12571;
  double t12572;
  double t12452;
  double t12461;
  double t12468;
  double t12485;
  double t12501;
  double t12749;
  double t12750;
  double t12692;
  double t12753;
  double t12755;
  double t12757;
  double t12766;
  double t12784;
  double t12790;
  double t12725;
  double t12658;
  double t12662;
  double t12744;
  double t12745;
  double t12746;
  double t12747;
  double t12888;
  double t12889;
  double t12892;
  double t12896;
  double t12937;
  double t12982;
  double t12984;
  double t12986;
  double t12989;
  double t12991;
  double t12995;
  double t12997;
  double t13084;
  double t13089;
  double t13115;
  double t13116;
  double t13148;
  double t13171;
  double t13172;
  double t13174;
  double t13175;
  double t13177;
  double t13179;
  double t13180;
  double t13181;
  double t13287;
  double t13289;
  double t13291;
  double t13292;
  double t13301;
  double t13302;
  double t13304;
  double t13308;
  double t13309;
  double t13350;
  double t13368;
  double t13397;
  double t13410;
  double t13411;
  double t13414;
  double t13416;
  double t13418;
  double t13419;
  double t13422;
  double t13496;
  double t13499;
  double t13500;
  double t13503;
  double t13504;
  double t13508;
  double t13511;
  double t13512;
  double t13514;
  double t13516;
  double t13517;
  double t13522;
  double t13585;
  double t13587;
  double t13602;
  double t11092;
  double t11225;
  double t11248;
  double t11257;
  double t11523;
  double t11545;
  double t11546;
  double t11561;
  double t11562;
  double t13631;
  double t13633;
  double t13638;
  double t11582;
  double t11588;
  double t11603;
  double t11643;
  double t11745;
  double t13626;
  double t13648;
  double t13650;
  double t13652;
  double t13662;
  double t13666;
  double t13700;
  double t12171;
  double t13702;
  double t13703;
  double t13705;
  double t13706;
  double t12394;
  double t13774;
  double t13775;
  double t13776;
  double t13777;
  double t13779;
  double t13780;
  double t13782;
  double t13783;
  double t13786;
  double t13787;
  double t13958;
  double t13959;
  double t13961;
  double t13965;
  double t13971;
  double t13982;
  double t14206;
  double t14319;
  double t14407;
  double t14443;
  double t14444;
  double t14446;
  double t14739;
  double t14740;
  double t14911;
  double t14923;
  double t14941;
  double t14947;
  double t14950;
  double t14951;
  double t14958;
  double t14960;
  double t14961;
  double t15168;
  double t15175;
  double t15178;
  double t15116;
  double t15194;
  double t15242;
  double t15275;
  double t15305;
  double t15306;
  double t15310;
  double t15315;
  double t15320;
  double t15329;
  double t15340;
  double t15591;
  double t15592;
  double t15596;
  double t15606;
  double t15616;
  double t15619;
  double t15621;
  double t15623;
  double t15627;
  double t15643;
  t320 = Cos(var1[21]);
  t829 = Sin(var1[21]);
  t9618 = -3.e-6*t829;
  t11296 = Cos(var1[19]);
  t11299 = -1.*t11296;
  t11306 = 1. + t11299;
  t11312 = Cos(var1[4]);
  t11100 = 3.e-6*t320;
  t11125 = t11100 + t9618;
  t11313 = Cos(var1[5]);
  t11325 = Sin(var1[19]);
  t11326 = Sin(var1[4]);
  t11380 = Sin(var1[5]);
  t821 = -3.e-6*t320;
  t10350 = t821 + t9618;
  t11539 = -9.e-12*t829;
  t11323 = 3.e-6*t11306*t11312*t11313;
  t11327 = -3.e-6*t11325*t11326;
  t11348 = -9.e-12*t11306;
  t11352 = 1. + t11348;
  t11383 = -1.*t11352*t11312*t11380;
  t11417 = t11323 + t11327 + t11383;
  t11563 = t11296*t11312*t11313;
  t11568 = t11325*t11326;
  t11573 = -3.e-6*t11306*t11312*t11380;
  t11576 = t11563 + t11568 + t11573;
  t11537 = -1.*t320;
  t11764 = -1.*t11312*t11313*t11325;
  t11825 = -1.000000000009*t11306;
  t11955 = 1. + t11825;
  t12075 = t11955*t11326;
  t12091 = -3.e-6*t11312*t11325*t11380;
  t12137 = t11764 + t12075 + t12091;
  t12142 = 3.e-6*t829;
  t12144 = t11100 + t12142;
  t12215 = t821 + t12142;
  t12170 = 9.e-12*t829;
  t12451 = 1. + t11537;
  t12446 = 3.e-13*var1[21];
  t12462 = -9.e-12*t12451;
  t12459 = -3.e-6*t12451;
  t12460 = t12459 + t9618;
  t12570 = t12459 + t12142;
  t12523 = -1.*t11296*t11312*t11313;
  t12539 = -1.000000000009*t11325*t11326;
  t12550 = -3.e-6*t11296*t11312*t11380;
  t12563 = t12523 + t12539 + t12550;
  t12632 = 3.e-6*t12451;
  t12573 = t11296*t11326;
  t12574 = t11764 + t12573 + t12091;
  t12593 = 3.e-6*t11312*t11313*t11325;
  t12594 = -3.e-6*t11296*t11326;
  t12599 = 9.e-12*t11312*t11325*t11380;
  t12618 = t12593 + t12594 + t12599;
  t12643 = t12632 + t9618;
  t12691 = 9.e-12*t12451;
  t12566 = -1.*t829;
  t12674 = -1.000000000009*t12451;
  t12680 = 1. + t12674;
  t12633 = t12632 + t12142;
  t12576 = 1.e-7*var1[21];
  t12577 = 5.4e-18*t12451;
  t12578 = -0.200000000003*t12460;
  t12580 = 0.100000000003*t12570;
  t12583 = t12576 + t12577 + t12578 + t12580;
  t12565 = -0.2000000000048*t12451;
  t12568 = t12462 + t12566;
  t12569 = 0.100000000003*t12568;
  t12571 = 3.e-7*t12570;
  t12572 = t12446 + t12565 + t12569 + t12571;
  t12452 = 0.1000000000039*t12451;
  t12461 = 3.e-7*t12460;
  t12468 = t12462 + t829;
  t12485 = -0.200000000003*t12468;
  t12501 = t12446 + t12452 + t12461 + t12485;
  t12749 = -1.*t11352*t11312*t11313;
  t12750 = t12749 + t11573;
  t12692 = t12691 + t829;
  t12753 = -3.e-6*t11306*t11312*t11313;
  t12755 = -1.*t11296*t11312*t11380;
  t12757 = t12753 + t12755;
  t12766 = -3.e-6*t11312*t11313*t11325;
  t12784 = t11312*t11325*t11380;
  t12790 = t12766 + t12784;
  t12725 = t12691 + t12566;
  t12658 = -1.8e-11*t12451;
  t12662 = 1. + t12658;
  t12744 = -1.8e-12*t11306;
  t12745 = -1. + t11296;
  t12746 = 0.2*t12745;
  t12747 = t12744 + t12746;
  t12888 = -3.e-6*t11312*t11325;
  t12889 = -3.e-6*t11306*t11313*t11326;
  t12892 = t11352*t11326*t11380;
  t12896 = t12888 + t12889 + t12892;
  t12937 = t11312*t11325;
  t12982 = -1.*t11296*t11313*t11326;
  t12984 = 3.e-6*t11306*t11326*t11380;
  t12986 = t12937 + t12982 + t12984;
  t12989 = t11955*t11312;
  t12991 = t11313*t11325*t11326;
  t12995 = 3.e-6*t11325*t11326*t11380;
  t12997 = t12989 + t12991 + t12995;
  t13084 = Sin(var1[3]);
  t13089 = 3.e-6*t11306*t11312*t11313*t13084;
  t13115 = -3.e-6*t11325*t13084*t11326;
  t13116 = -1.*t11352*t11312*t13084*t11380;
  t13148 = t13089 + t13115 + t13116;
  t13171 = t11296*t11312*t11313*t13084;
  t13172 = t11325*t13084*t11326;
  t13174 = -3.e-6*t11306*t11312*t13084*t11380;
  t13175 = t13171 + t13172 + t13174;
  t13177 = -1.*t11312*t11313*t11325*t13084;
  t13179 = t11955*t13084*t11326;
  t13180 = -3.e-6*t11312*t11325*t13084*t11380;
  t13181 = t13177 + t13179 + t13180;
  t13287 = Cos(var1[3]);
  t13289 = t13287*t11313*t11326;
  t13291 = -1.*t13084*t11380;
  t13292 = t13289 + t13291;
  t13301 = -1.*t11313*t13084;
  t13302 = -1.*t13287*t11326*t11380;
  t13304 = t13301 + t13302;
  t13308 = 3.e-6*t13287*t11312*t11325;
  t13309 = 3.e-6*t11306*t13292;
  t13350 = t11352*t13304;
  t13368 = t13308 + t13309 + t13350;
  t13397 = -1.*t13287*t11312*t11325;
  t13410 = t11296*t13292;
  t13411 = 3.e-6*t11306*t13304;
  t13414 = t13397 + t13410 + t13411;
  t13416 = -1.*t11955*t13287*t11312;
  t13418 = -1.*t11325*t13292;
  t13419 = 3.e-6*t11325*t13304;
  t13422 = t13416 + t13418 + t13419;
  t13496 = -1.*t11313*t13084*t11326;
  t13499 = -1.*t13287*t11380;
  t13500 = t13496 + t13499;
  t13503 = t13287*t11313;
  t13504 = -1.*t13084*t11326*t11380;
  t13508 = t13503 + t13504;
  t13511 = t11352*t13500;
  t13512 = 3.e-6*t11306*t13508;
  t13514 = t13511 + t13512;
  t13516 = 3.e-6*t11306*t13500;
  t13517 = t11296*t13508;
  t13522 = t13516 + t13517;
  t13585 = 3.e-6*t11325*t13500;
  t13587 = -1.*t11325*t13508;
  t13602 = t13585 + t13587;
  t11092 = -0.200000000003*t10350;
  t11225 = 0.100000000003*t11125;
  t11248 = 5.4e-18*t829;
  t11257 = 1.e-7 + t11092 + t11225 + t11248;
  t11523 = 3.e-7*t11125;
  t11545 = t11537 + t11539;
  t11546 = 0.100000000003*t11545;
  t11561 = -0.2000000000048*t829;
  t11562 = 3.e-13 + t11523 + t11546 + t11561;
  t13631 = t11313*t13084*t11326;
  t13633 = t13287*t11380;
  t13638 = t13631 + t13633;
  t11582 = 3.e-7*t10350;
  t11588 = t320 + t11539;
  t11603 = -0.200000000003*t11588;
  t11643 = 0.1000000000039*t829;
  t11745 = 3.e-13 + t11582 + t11603 + t11643;
  t13626 = 3.e-6*t11312*t11325*t13084;
  t13648 = 3.e-6*t11306*t13638;
  t13650 = t11352*t13508;
  t13652 = t13626 + t13648 + t13650;
  t13662 = -1.*t11312*t11325*t13084;
  t13666 = t11296*t13638;
  t13700 = t13662 + t13666 + t13512;
  t12171 = t11537 + t12170;
  t13702 = -1.*t11955*t11312*t13084;
  t13703 = -1.*t11325*t13638;
  t13705 = 3.e-6*t11325*t13508;
  t13706 = t13702 + t13703 + t13705;
  t12394 = t320 + t12170;
  t13774 = 1.000000000009*t11312*t11325*t13084;
  t13775 = -1.*t11296*t13638;
  t13776 = 3.e-6*t11296*t13508;
  t13777 = t13774 + t13775 + t13776;
  t13779 = 3.e-6*t11296*t11312*t13084;
  t13780 = 3.e-6*t11325*t13638;
  t13782 = -9.e-12*t11325*t13508;
  t13783 = t13779 + t13780 + t13782;
  t13786 = -1.*t11296*t11312*t13084;
  t13787 = t13786 + t13703 + t13705;
  t13958 = -3.e-6*t11306*t13287*t11312*t11313;
  t13959 = 3.e-6*t13287*t11325*t11326;
  t13961 = t11352*t13287*t11312*t11380;
  t13965 = t13958 + t13959 + t13961;
  t13971 = -1.*t11296*t13287*t11312*t11313;
  t13982 = -1.*t13287*t11325*t11326;
  t14206 = 3.e-6*t11306*t13287*t11312*t11380;
  t14319 = t13971 + t13982 + t14206;
  t14407 = t13287*t11312*t11313*t11325;
  t14443 = -1.*t11955*t13287*t11326;
  t14444 = 3.e-6*t13287*t11312*t11325*t11380;
  t14446 = t14407 + t14443 + t14444;
  t14739 = t11313*t13084;
  t14740 = t13287*t11326*t11380;
  t14911 = t14739 + t14740;
  t14923 = t11352*t13292;
  t14941 = 3.e-6*t11306*t14911;
  t14947 = t14923 + t14941;
  t14950 = t11296*t14911;
  t14951 = t13309 + t14950;
  t14958 = 3.e-6*t11325*t13292;
  t14960 = -1.*t11325*t14911;
  t14961 = t14958 + t14960;
  t15168 = -1.*t13287*t11313*t11326;
  t15175 = t13084*t11380;
  t15178 = t15168 + t15175;
  t15116 = -3.e-6*t13287*t11312*t11325;
  t15194 = 3.e-6*t11306*t15178;
  t15242 = t11352*t14911;
  t15275 = t15116 + t15194 + t15242;
  t15305 = t13287*t11312*t11325;
  t15306 = t11296*t15178;
  t15310 = t15305 + t15306 + t14941;
  t15315 = t11955*t13287*t11312;
  t15320 = -1.*t11325*t15178;
  t15329 = 3.e-6*t11325*t14911;
  t15340 = t15315 + t15320 + t15329;
  t15591 = -1.000000000009*t13287*t11312*t11325;
  t15592 = -1.*t11296*t15178;
  t15596 = 3.e-6*t11296*t14911;
  t15606 = t15591 + t15592 + t15596;
  t15616 = -3.e-6*t11296*t13287*t11312;
  t15619 = 3.e-6*t11325*t15178;
  t15621 = -9.e-12*t11325*t14911;
  t15623 = t15616 + t15619 + t15621;
  t15627 = t11296*t13287*t11312;
  t15643 = t15627 + t15320 + t15329;
  p_output1[0]=var2[0] + (0.2000000000018*t11312*t11325 + 6.000000000054e-7*t11306*t11326*t11380 - 1.*t11313*t11326*t12747 + t12583*t12896 + t12572*t12986 + t12501*t12997 - 0.099999*(t12662*t12896 + t12643*t12986 + t12633*t12997) - 0.3*(t12643*t12896 + t12692*t12986 + t12680*t12997) + 0.2*(-1.*t12633*t12896 - 1.*t12680*t12986 - 1.*t12725*t12997))*var2[4] + (-6.000000000054e-7*t11306*t11312*t11313 - 1.*t11312*t11380*t12747 + t12583*t12750 + t12572*t12757 + t12501*t12790 - 0.099999*(t12662*t12750 + t12643*t12757 + t12633*t12790) - 0.3*(t12643*t12750 + t12692*t12757 + t12680*t12790) + 0.2*(-1.*t12633*t12750 - 1.*t12680*t12757 - 1.*t12725*t12790))*var2[5] + (-0.2000000000018*t11312*t11313*t11325 + 0.2000000000018*t11296*t11326 - 6.000000000054e-7*t11312*t11325*t11380 + t12501*t12563 + t12572*t12574 + t12583*t12618 - 0.099999*(t12563*t12633 + t12574*t12643 + t12618*t12662) - 0.3*(t12618*t12643 + t12563*t12680 + t12574*t12692) + 0.2*(-1.*t12618*t12633 - 1.*t12574*t12680 - 1.*t12563*t12725))*var2[19] + (t11257*t11417 + t11562*t11576 + t11745*t12137 - 0.099999*(t12137*t12144 + t11576*t12215 - 1.8e-11*t11417*t829) + 0.2*(-1.*t11417*t12144 - 1.*t12137*t12171 + 1.000000000009*t11576*t829) - 0.3*(t11417*t12215 + t11576*t12394 - 1.000000000009*t12137*t829))*var2[21];
  p_output1[1]=var2[1] + (-0.2000000000018*t11312*t11325*t13287 + t12747*t13292 + 6.000000000054e-7*t11306*t13304 + t12583*t13368 + t12572*t13414 + t12501*t13422 - 0.099999*(t12662*t13368 + t12643*t13414 + t12633*t13422) - 0.3*(t12643*t13368 + t12692*t13414 + t12680*t13422) + 0.2*(-1.*t12633*t13368 - 1.*t12680*t13414 - 1.*t12725*t13422))*var2[3] + (0.2000000000018*t11325*t11326*t13084 - 6.000000000054e-7*t11306*t11312*t11380*t13084 + t11312*t11313*t12747*t13084 + t12583*t13148 + t12572*t13175 + t12501*t13181 - 0.099999*(t12662*t13148 + t12643*t13175 + t12633*t13181) - 0.3*(t12643*t13148 + t12692*t13175 + t12680*t13181) + 0.2*(-1.*t12633*t13148 - 1.*t12680*t13175 - 1.*t12725*t13181))*var2[4] + (6.000000000054e-7*t11306*t13500 + t12747*t13508 + t12583*t13514 + t12572*t13522 + t12501*t13602 - 0.099999*(t12662*t13514 + t12643*t13522 + t12633*t13602) - 0.3*(t12643*t13514 + t12692*t13522 + t12680*t13602) + 0.2*(-1.*t12633*t13514 - 1.*t12680*t13522 - 1.*t12725*t13602))*var2[5] + (-0.2000000000018*t11296*t11312*t13084 + 6.000000000054e-7*t11325*t13508 - 0.2000000000018*t11325*t13638 + t12501*t13777 + t12583*t13783 + t12572*t13787 - 0.099999*(t12633*t13777 + t12662*t13783 + t12643*t13787) + 0.2*(-1.*t12725*t13777 - 1.*t12633*t13783 - 1.*t12680*t13787) - 0.3*(t12680*t13777 + t12643*t13783 + t12692*t13787))*var2[19] + (t11257*t13652 + t11562*t13700 + t11745*t13706 - 0.099999*(t12215*t13700 + t12144*t13706 - 1.8e-11*t13652*t829) + 0.2*(-1.*t12144*t13652 - 1.*t12171*t13706 + 1.000000000009*t13700*t829) - 0.3*(t12215*t13652 + t12394*t13700 - 1.000000000009*t13706*t829))*var2[21];
  p_output1[2]=var2[2] + (-0.2000000000018*t11312*t11325*t13084 + 6.000000000054e-7*t11306*t13508 + t12747*t13638 + t12583*t13652 + t12572*t13700 + t12501*t13706 - 0.099999*(t12662*t13652 + t12643*t13700 + t12633*t13706) - 0.3*(t12643*t13652 + t12692*t13700 + t12680*t13706) + 0.2*(-1.*t12633*t13652 - 1.*t12680*t13700 - 1.*t12725*t13706))*var2[3] + (-0.2000000000018*t11325*t11326*t13287 + 6.000000000054e-7*t11306*t11312*t11380*t13287 - 1.*t11312*t11313*t12747*t13287 + t12583*t13965 + t12572*t14319 + t12501*t14446 - 0.099999*(t12662*t13965 + t12643*t14319 + t12633*t14446) - 0.3*(t12643*t13965 + t12692*t14319 + t12680*t14446) + 0.2*(-1.*t12633*t13965 - 1.*t12680*t14319 - 1.*t12725*t14446))*var2[4] + (6.000000000054e-7*t11306*t13292 + t12747*t14911 + t12583*t14947 + t12572*t14951 + t12501*t14961 - 0.099999*(t12662*t14947 + t12643*t14951 + t12633*t14961) - 0.3*(t12643*t14947 + t12692*t14951 + t12680*t14961) + 0.2*(-1.*t12633*t14947 - 1.*t12680*t14951 - 1.*t12725*t14961))*var2[5] + (0.2000000000018*t11296*t11312*t13287 + 6.000000000054e-7*t11325*t14911 - 0.2000000000018*t11325*t15178 + t12501*t15606 + t12583*t15623 + t12572*t15643 - 0.099999*(t12633*t15606 + t12662*t15623 + t12643*t15643) + 0.2*(-1.*t12725*t15606 - 1.*t12633*t15623 - 1.*t12680*t15643) - 0.3*(t12680*t15606 + t12643*t15623 + t12692*t15643))*var2[19] + (t11257*t15275 + t11562*t15310 + t11745*t15340 - 0.099999*(t12215*t15310 + t12144*t15340 - 1.8e-11*t15275*t829) + 0.2*(-1.*t12144*t15275 - 1.*t12171*t15340 + 1.000000000009*t15310*t829) - 0.3*(t12215*t15275 + t12394*t15310 - 1.000000000009*t15340*t829))*var2[21];
}



#ifdef MATLAB_MEX_FILE

#include "mex.h"
/*
 * Main function
 */
void mexFunction( int nlhs, mxArray *plhs[],
                  int nrhs, const mxArray *prhs[] )
{
  size_t mrows, ncols;

  double *var1,*var2;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 2)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Two input(s) required (var1,var2).");
    }
  else if( nlhs > 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:maxlhs", "Too many output arguments.");
    }

  /*  The input must be a noncomplex double vector or scaler.  */
  mrows = mxGetM(prhs[0]);
  ncols = mxGetN(prhs[0]);
  if( !mxIsDouble(prhs[0]) || mxIsComplex(prhs[0]) ||
    ( !(mrows == 22 && ncols == 1) && 
      !(mrows == 1 && ncols == 22))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var1 is wrong.");
    }
  mrows = mxGetM(prhs[1]);
  ncols = mxGetN(prhs[1]);
  if( !mxIsDouble(prhs[1]) || mxIsComplex(prhs[1]) ||
    ( !(mrows == 22 && ncols == 1) && 
      !(mrows == 1 && ncols == 22))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var2 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "dh_RightBackFoot_BackStance.hh"

namespace BackStance
{

void dh_RightBackFoot_BackStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
