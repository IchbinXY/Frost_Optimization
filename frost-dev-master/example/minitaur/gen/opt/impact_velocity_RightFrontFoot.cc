/*
 * Automatically Generated from Mathematica.
 * Tue 28 May 2019 22:49:36 GMT-04:00
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
  double t213;
  double t523;
  double t687;
  double t859;
  double t863;
  double t879;
  double t894;
  double t738;
  double t793;
  double t908;
  double t1064;
  double t1619;
  double t2289;
  double t413;
  double t724;
  double t2333;
  double t926;
  double t2282;
  double t2283;
  double t2284;
  double t2290;
  double t2293;
  double t2356;
  double t2357;
  double t2358;
  double t2366;
  double t2319;
  double t2815;
  double t2961;
  double t2964;
  double t2965;
  double t2978;
  double t2979;
  double t2991;
  double t2995;
  double t3105;
  double t3016;
  double t4378;
  double t4261;
  double t4602;
  double t4390;
  double t4399;
  double t5230;
  double t4730;
  double t4737;
  double t4748;
  double t4765;
  double t7093;
  double t5467;
  double t5611;
  double t6746;
  double t6766;
  double t6935;
  double t6970;
  double t7153;
  double t7226;
  double t5126;
  double t7219;
  double t7222;
  double t7101;
  double t6162;
  double t6185;
  double t6219;
  double t6220;
  double t6463;
  double t5097;
  double t5137;
  double t5142;
  double t5289;
  double t5304;
  double t4387;
  double t4410;
  double t4610;
  double t4617;
  double t4676;
  double t8118;
  double t8202;
  double t7227;
  double t8292;
  double t8398;
  double t8620;
  double t8628;
  double t8741;
  double t8744;
  double t7288;
  double t7162;
  double t7180;
  double t13959;
  double t13999;
  double t14000;
  double t14127;
  double t14129;
  double t14159;
  double t14192;
  double t14199;
  double t14203;
  double t14204;
  double t14205;
  double t14206;
  double t14231;
  double t14235;
  double t14236;
  double t14284;
  double t14285;
  double t14346;
  double t14347;
  double t14355;
  double t14357;
  double t14359;
  double t14361;
  double t14365;
  double t14368;
  double t14500;
  double t14502;
  double t14503;
  double t14504;
  double t14506;
  double t14507;
  double t14508;
  double t14511;
  double t14515;
  double t14516;
  double t14523;
  double t14526;
  double t14527;
  double t14528;
  double t14529;
  double t14532;
  double t14533;
  double t14534;
  double t14535;
  double t14570;
  double t14574;
  double t14575;
  double t14611;
  double t14617;
  double t14620;
  double t14622;
  double t14625;
  double t14662;
  double t14804;
  double t14839;
  double t14840;
  double t14876;
  double t14909;
  double t14952;
  double t729;
  double t806;
  double t807;
  double t829;
  double t2312;
  double t2336;
  double t2340;
  double t2352;
  double t2354;
  double t15267;
  double t15342;
  double t15462;
  double t2455;
  double t2628;
  double t2758;
  double t2786;
  double t2803;
  double t15266;
  double t15483;
  double t16347;
  double t16443;
  double t17203;
  double t17204;
  double t17936;
  double t3045;
  double t18667;
  double t18719;
  double t19547;
  double t19558;
  double t3649;
  double t22561;
  double t22583;
  double t22595;
  double t22597;
  double t22610;
  double t22613;
  double t22614;
  double t22615;
  double t22619;
  double t22631;
  double t22947;
  double t22948;
  double t22951;
  double t22955;
  double t22957;
  double t22958;
  double t22963;
  double t22964;
  double t23020;
  double t23023;
  double t23135;
  double t23138;
  double t23479;
  double t23484;
  double t23488;
  double t23492;
  double t23500;
  double t23502;
  double t23513;
  double t23517;
  double t23559;
  double t23562;
  double t23568;
  double t27658;
  double t27662;
  double t27666;
  double t27656;
  double t29402;
  double t29609;
  double t29626;
  double t29675;
  double t29713;
  double t29720;
  double t29777;
  double t29791;
  double t29796;
  double t29804;
  double t30409;
  double t30414;
  double t30417;
  double t30418;
  double t30429;
  double t30434;
  double t30437;
  double t30444;
  double t30447;
  double t30454;
  t213 = Cos(var1[17]);
  t523 = Sin(var1[17]);
  t687 = -3.e-6*t523;
  t859 = Cos(var1[15]);
  t863 = -1.*t859;
  t879 = 1. + t863;
  t894 = Cos(var1[4]);
  t738 = 3.e-6*t213;
  t793 = t738 + t687;
  t908 = Cos(var1[5]);
  t1064 = Sin(var1[15]);
  t1619 = Sin(var1[4]);
  t2289 = Sin(var1[5]);
  t413 = -3.e-6*t213;
  t724 = t413 + t687;
  t2333 = -9.e-12*t523;
  t926 = 3.e-6*t879*t894*t908;
  t2282 = -3.e-6*t1064*t1619;
  t2283 = -9.e-12*t879;
  t2284 = 1. + t2283;
  t2290 = -1.*t2284*t894*t2289;
  t2293 = t926 + t2282 + t2290;
  t2356 = t859*t894*t908;
  t2357 = t1064*t1619;
  t2358 = -3.e-6*t879*t894*t2289;
  t2366 = t2356 + t2357 + t2358;
  t2319 = -1.*t213;
  t2815 = -1.*t894*t908*t1064;
  t2961 = -1.000000000009*t879;
  t2964 = 1. + t2961;
  t2965 = t2964*t1619;
  t2978 = -3.e-6*t894*t1064*t2289;
  t2979 = t2815 + t2965 + t2978;
  t2991 = 3.e-6*t523;
  t2995 = t738 + t2991;
  t3105 = t413 + t2991;
  t3016 = 9.e-12*t523;
  t4378 = 1. + t2319;
  t4261 = 9.e-13*var1[17];
  t4602 = -9.e-12*t4378;
  t4390 = -3.e-6*t4378;
  t4399 = t4390 + t687;
  t5230 = t4390 + t2991;
  t4730 = -1.*t859*t894*t908;
  t4737 = -1.000000000009*t1064*t1619;
  t4748 = -3.e-6*t859*t894*t2289;
  t4765 = t4730 + t4737 + t4748;
  t7093 = 3.e-6*t4378;
  t5467 = t859*t1619;
  t5611 = t2815 + t5467 + t2978;
  t6746 = 3.e-6*t894*t908*t1064;
  t6766 = -3.e-6*t859*t1619;
  t6935 = 9.e-12*t894*t1064*t2289;
  t6970 = t6746 + t6766 + t6935;
  t7153 = t7093 + t687;
  t7226 = 9.e-12*t4378;
  t5126 = -1.*t523;
  t7219 = -1.000000000009*t4378;
  t7222 = 1. + t7219;
  t7101 = t7093 + t2991;
  t6162 = 3.e-7*var1[17];
  t6185 = -1.62e-17*t4378;
  t6219 = 0.2*t4399;
  t6220 = 0.1*t5230;
  t6463 = t6162 + t6185 + t6219 + t6220;
  t5097 = 0.2000000000018*t4378;
  t5137 = t4602 + t5126;
  t5142 = 0.1*t5137;
  t5289 = -9.e-7*t5230;
  t5304 = t4261 + t5097 + t5142 + t5289;
  t4387 = 0.1000000000009*t4378;
  t4410 = -9.e-7*t4399;
  t4610 = t4602 + t523;
  t4617 = 0.2*t4610;
  t4676 = t4261 + t4387 + t4410 + t4617;
  t8118 = -1.*t2284*t894*t908;
  t8202 = t8118 + t2358;
  t7227 = t7226 + t523;
  t8292 = -3.e-6*t879*t894*t908;
  t8398 = -1.*t859*t894*t2289;
  t8620 = t8292 + t8398;
  t8628 = -3.e-6*t894*t908*t1064;
  t8741 = t894*t1064*t2289;
  t8744 = t8628 + t8741;
  t7288 = t7226 + t5126;
  t7162 = -1.8e-11*t4378;
  t7180 = 1. + t7162;
  t13959 = -3.e-6*t894*t1064;
  t13999 = -3.e-6*t879*t908*t1619;
  t14000 = t2284*t1619*t2289;
  t14127 = t13959 + t13999 + t14000;
  t14129 = t894*t1064;
  t14159 = -1.*t859*t908*t1619;
  t14192 = 3.e-6*t879*t1619*t2289;
  t14199 = t14129 + t14159 + t14192;
  t14203 = t2964*t894;
  t14204 = t908*t1064*t1619;
  t14205 = 3.e-6*t1064*t1619*t2289;
  t14206 = t14203 + t14204 + t14205;
  t14231 = Sin(var1[3]);
  t14235 = 3.e-6*t879*t894*t908*t14231;
  t14236 = -3.e-6*t1064*t14231*t1619;
  t14284 = -1.*t2284*t894*t14231*t2289;
  t14285 = t14235 + t14236 + t14284;
  t14346 = t859*t894*t908*t14231;
  t14347 = t1064*t14231*t1619;
  t14355 = -3.e-6*t879*t894*t14231*t2289;
  t14357 = t14346 + t14347 + t14355;
  t14359 = -1.*t894*t908*t1064*t14231;
  t14361 = t2964*t14231*t1619;
  t14365 = -3.e-6*t894*t1064*t14231*t2289;
  t14368 = t14359 + t14361 + t14365;
  t14500 = Cos(var1[3]);
  t14502 = t14500*t908*t1619;
  t14503 = -1.*t14231*t2289;
  t14504 = t14502 + t14503;
  t14506 = -1.*t908*t14231;
  t14507 = -1.*t14500*t1619*t2289;
  t14508 = t14506 + t14507;
  t14511 = 3.e-6*t14500*t894*t1064;
  t14515 = 3.e-6*t879*t14504;
  t14516 = t2284*t14508;
  t14523 = t14511 + t14515 + t14516;
  t14526 = -1.*t14500*t894*t1064;
  t14527 = t859*t14504;
  t14528 = 3.e-6*t879*t14508;
  t14529 = t14526 + t14527 + t14528;
  t14532 = -1.*t2964*t14500*t894;
  t14533 = -1.*t1064*t14504;
  t14534 = 3.e-6*t1064*t14508;
  t14535 = t14532 + t14533 + t14534;
  t14570 = -1.*t908*t14231*t1619;
  t14574 = -1.*t14500*t2289;
  t14575 = t14570 + t14574;
  t14611 = t14500*t908;
  t14617 = -1.*t14231*t1619*t2289;
  t14620 = t14611 + t14617;
  t14622 = t2284*t14575;
  t14625 = 3.e-6*t879*t14620;
  t14662 = t14622 + t14625;
  t14804 = 3.e-6*t879*t14575;
  t14839 = t859*t14620;
  t14840 = t14804 + t14839;
  t14876 = 3.e-6*t1064*t14575;
  t14909 = -1.*t1064*t14620;
  t14952 = t14876 + t14909;
  t729 = 0.2*t724;
  t806 = 0.1*t793;
  t807 = -1.62e-17*t523;
  t829 = 3.e-7 + t729 + t806 + t807;
  t2312 = -9.e-7*t793;
  t2336 = t2319 + t2333;
  t2340 = 0.1*t2336;
  t2352 = 0.2000000000018*t523;
  t2354 = 9.e-13 + t2312 + t2340 + t2352;
  t15267 = t908*t14231*t1619;
  t15342 = t14500*t2289;
  t15462 = t15267 + t15342;
  t2455 = -9.e-7*t724;
  t2628 = t213 + t2333;
  t2758 = 0.2*t2628;
  t2786 = 0.1000000000009*t523;
  t2803 = 9.e-13 + t2455 + t2758 + t2786;
  t15266 = 3.e-6*t894*t1064*t14231;
  t15483 = 3.e-6*t879*t15462;
  t16347 = t2284*t14620;
  t16443 = t15266 + t15483 + t16347;
  t17203 = -1.*t894*t1064*t14231;
  t17204 = t859*t15462;
  t17936 = t17203 + t17204 + t14625;
  t3045 = t2319 + t3016;
  t18667 = -1.*t2964*t894*t14231;
  t18719 = -1.*t1064*t15462;
  t19547 = 3.e-6*t1064*t14620;
  t19558 = t18667 + t18719 + t19547;
  t3649 = t213 + t3016;
  t22561 = 1.000000000009*t894*t1064*t14231;
  t22583 = -1.*t859*t15462;
  t22595 = 3.e-6*t859*t14620;
  t22597 = t22561 + t22583 + t22595;
  t22610 = 3.e-6*t859*t894*t14231;
  t22613 = 3.e-6*t1064*t15462;
  t22614 = -9.e-12*t1064*t14620;
  t22615 = t22610 + t22613 + t22614;
  t22619 = -1.*t859*t894*t14231;
  t22631 = t22619 + t18719 + t19547;
  t22947 = -3.e-6*t879*t14500*t894*t908;
  t22948 = 3.e-6*t14500*t1064*t1619;
  t22951 = t2284*t14500*t894*t2289;
  t22955 = t22947 + t22948 + t22951;
  t22957 = -1.*t859*t14500*t894*t908;
  t22958 = -1.*t14500*t1064*t1619;
  t22963 = 3.e-6*t879*t14500*t894*t2289;
  t22964 = t22957 + t22958 + t22963;
  t23020 = t14500*t894*t908*t1064;
  t23023 = -1.*t2964*t14500*t1619;
  t23135 = 3.e-6*t14500*t894*t1064*t2289;
  t23138 = t23020 + t23023 + t23135;
  t23479 = t908*t14231;
  t23484 = t14500*t1619*t2289;
  t23488 = t23479 + t23484;
  t23492 = t2284*t14504;
  t23500 = 3.e-6*t879*t23488;
  t23502 = t23492 + t23500;
  t23513 = t859*t23488;
  t23517 = t14515 + t23513;
  t23559 = 3.e-6*t1064*t14504;
  t23562 = -1.*t1064*t23488;
  t23568 = t23559 + t23562;
  t27658 = -1.*t14500*t908*t1619;
  t27662 = t14231*t2289;
  t27666 = t27658 + t27662;
  t27656 = -3.e-6*t14500*t894*t1064;
  t29402 = 3.e-6*t879*t27666;
  t29609 = t2284*t23488;
  t29626 = t27656 + t29402 + t29609;
  t29675 = t14500*t894*t1064;
  t29713 = t859*t27666;
  t29720 = t29675 + t29713 + t23500;
  t29777 = t2964*t14500*t894;
  t29791 = -1.*t1064*t27666;
  t29796 = 3.e-6*t1064*t23488;
  t29804 = t29777 + t29791 + t29796;
  t30409 = -1.000000000009*t14500*t894*t1064;
  t30414 = -1.*t859*t27666;
  t30417 = 3.e-6*t859*t23488;
  t30418 = t30409 + t30414 + t30417;
  t30429 = -3.e-6*t859*t14500*t894;
  t30434 = 3.e-6*t1064*t27666;
  t30437 = -9.e-12*t1064*t23488;
  t30444 = t30429 + t30434 + t30437;
  t30447 = t859*t14500*t894;
  t30454 = t30447 + t29791 + t29796;
  p_output1[0]=var2[0] + (t14206*t4676 + t14199*t5304 + t14127*t6463 - 0.099999*(t14206*t7101 + t14199*t7153 + t14127*t7180) - 0.3*(t14127*t7153 + t14206*t7222 + t14199*t7227) + 0.2*(t14127*t7101 + t14199*t7222 + t14206*t7288) - 6.000000000054e-7*t1619*t2289*t879 - 0.2000000000018*t1064*t894 - 0.2000000000018*t1619*t879*t908)*var2[4] + (t6463*t8202 + t5304*t8620 + t4676*t8744 - 0.099999*(t7180*t8202 + t7153*t8620 + t7101*t8744) - 0.3*(t7153*t8202 + t7227*t8620 + t7222*t8744) + 0.2*(t7101*t8202 + t7222*t8620 + t7288*t8744) - 0.2000000000018*t2289*t879*t894 + 6.000000000054e-7*t879*t894*t908)*var2[5] + (t4676*t4765 + t5304*t5611 + t6463*t6970 - 0.099999*(t4765*t7101 + t5611*t7153 + t6970*t7180) - 0.3*(t6970*t7153 + t4765*t7222 + t5611*t7227) + 0.2*(t6970*t7101 + t5611*t7222 + t4765*t7288) - 0.2000000000018*t1619*t859 + 6.000000000054e-7*t1064*t2289*t894 + 0.2000000000018*t1064*t894*t908)*var2[15] + (t2354*t2366 + t2803*t2979 - 0.099999*(t2979*t2995 + t2366*t3105 - 1.8e-11*t2293*t523) + 0.2*(t2293*t2995 + t2979*t3045 - 1.000000000009*t2366*t523) - 0.3*(t2293*t3105 + t2366*t3649 - 1.000000000009*t2979*t523) + t2293*t829)*var2[17];
  p_output1[1]=var2[1] + (t14535*t4676 + t14529*t5304 + t14523*t6463 - 0.099999*(t14535*t7101 + t14529*t7153 + t14523*t7180) - 0.3*(t14523*t7153 + t14535*t7222 + t14529*t7227) + 0.2*(t14523*t7101 + t14529*t7222 + t14535*t7288) + 0.2000000000018*t14504*t879 - 6.000000000054e-7*t14508*t879 + 0.2000000000018*t1064*t14500*t894)*var2[3] + (-0.2000000000018*t1064*t14231*t1619 + t14368*t4676 + t14357*t5304 + t14285*t6463 - 0.099999*(t14368*t7101 + t14357*t7153 + t14285*t7180) - 0.3*(t14285*t7153 + t14368*t7222 + t14357*t7227) + 0.2*(t14285*t7101 + t14357*t7222 + t14368*t7288) + 6.000000000054e-7*t14231*t2289*t879*t894 + 0.2000000000018*t14231*t879*t894*t908)*var2[4] + (t14952*t4676 + t14840*t5304 + t14662*t6463 - 0.099999*(t14952*t7101 + t14840*t7153 + t14662*t7180) - 0.3*(t14662*t7153 + t14952*t7222 + t14840*t7227) + 0.2*(t14662*t7101 + t14840*t7222 + t14952*t7288) - 6.000000000054e-7*t14575*t879 + 0.2000000000018*t14620*t879)*var2[5] + (-6.000000000054e-7*t1064*t14620 + 0.2000000000018*t1064*t15462 + t22597*t4676 + t22631*t5304 + t22615*t6463 - 0.099999*(t22597*t7101 + t22631*t7153 + t22615*t7180) - 0.3*(t22615*t7153 + t22597*t7222 + t22631*t7227) + 0.2*(t22615*t7101 + t22631*t7222 + t22597*t7288) + 0.2000000000018*t14231*t859*t894)*var2[15] + (t17936*t2354 + t19558*t2803 - 0.099999*(t19558*t2995 + t17936*t3105 - 1.8e-11*t16443*t523) + 0.2*(t16443*t2995 + t19558*t3045 - 1.000000000009*t17936*t523) - 0.3*(t16443*t3105 + t17936*t3649 - 1.000000000009*t19558*t523) + t16443*t829)*var2[17];
  p_output1[2]=var2[2] + (t19558*t4676 + t17936*t5304 + t16443*t6463 - 0.099999*(t19558*t7101 + t17936*t7153 + t16443*t7180) - 0.3*(t16443*t7153 + t19558*t7222 + t17936*t7227) + 0.2*(t16443*t7101 + t17936*t7222 + t19558*t7288) - 6.000000000054e-7*t14620*t879 + 0.2000000000018*t15462*t879 + 0.2000000000018*t1064*t14231*t894)*var2[3] + (0.2000000000018*t1064*t14500*t1619 + t23138*t4676 + t22964*t5304 + t22955*t6463 - 0.099999*(t23138*t7101 + t22964*t7153 + t22955*t7180) - 0.3*(t22955*t7153 + t23138*t7222 + t22964*t7227) + 0.2*(t22955*t7101 + t22964*t7222 + t23138*t7288) - 6.000000000054e-7*t14500*t2289*t879*t894 - 0.2000000000018*t14500*t879*t894*t908)*var2[4] + (t23568*t4676 + t23517*t5304 + t23502*t6463 - 0.099999*(t23568*t7101 + t23517*t7153 + t23502*t7180) - 0.3*(t23502*t7153 + t23568*t7222 + t23517*t7227) + 0.2*(t23502*t7101 + t23517*t7222 + t23568*t7288) - 6.000000000054e-7*t14504*t879 + 0.2000000000018*t23488*t879)*var2[5] + (-6.000000000054e-7*t1064*t23488 + 0.2000000000018*t1064*t27666 + t30418*t4676 + t30454*t5304 + t30444*t6463 - 0.099999*(t30418*t7101 + t30454*t7153 + t30444*t7180) - 0.3*(t30444*t7153 + t30418*t7222 + t30454*t7227) + 0.2*(t30444*t7101 + t30454*t7222 + t30418*t7288) - 0.2000000000018*t14500*t859*t894)*var2[15] + (t2354*t29720 + t2803*t29804 - 0.099999*(t29804*t2995 + t29720*t3105 - 1.8e-11*t29626*t523) + 0.2*(t29626*t2995 + t29804*t3045 - 1.000000000009*t29720*t523) - 0.3*(t29626*t3105 + t29720*t3649 - 1.000000000009*t29804*t523) + t29626*t829)*var2[17];
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

#include "impact_velocity_RightFrontFoot.hh"

namespace Flight2
{

void impact_velocity_RightFrontFoot_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
