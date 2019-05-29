/*
 * Automatically Generated from Mathematica.
 * Wed 29 May 2019 15:16:59 GMT-04:00
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
  double t162;
  double t12690;
  double t12736;
  double t13188;
  double t16228;
  double t16255;
  double t16260;
  double t16142;
  double t12431;
  double t16183;
  double t16095;
  double t16232;
  double t16262;
  double t16327;
  double t16367;
  double t16602;
  double t16625;
  double t16629;
  double t16631;
  double t16634;
  double t16430;
  double t16431;
  double t16446;
  double t16500;
  double t16585;
  double t16598;
  double t16768;
  double t13220;
  double t15811;
  double t15850;
  double t16111;
  double t16190;
  double t16193;
  double t16638;
  double t16798;
  double t16835;
  double t16778;
  double t21125;
  double t21153;
  double t21156;
  double t21106;
  double t21113;
  double t21121;
  double t21133;
  double t21186;
  double t21233;
  double t23576;
  double t23429;
  double t23472;
  double t23502;
  double t24019;
  double t21123;
  double t22526;
  double t21129;
  double t23225;
  double t23389;
  double t24205;
  double t23510;
  double t21127;
  double t21134;
  double t21151;
  double t21158;
  double t21161;
  double t21862;
  double t21871;
  double t22665;
  double t23062;
  double t23114;
  double t25231;
  double t25237;
  double t25344;
  double t25684;
  double t23522;
  double t25990;
  double t25994;
  double t26013;
  double t26070;
  double t24106;
  double t24203;
  double t26150;
  double t26151;
  double t26152;
  double t26162;
  double t24230;
  double t24231;
  double t24255;
  double t24265;
  double t24269;
  double t24328;
  double t26429;
  double t26440;
  double t26566;
  double t26701;
  double t26383;
  double t26399;
  double t26766;
  double t26770;
  double t26774;
  double t26775;
  double t27485;
  double t27447;
  double t16293;
  double t16382;
  double t16411;
  double t16412;
  double t27456;
  double t27486;
  double t27490;
  double t27508;
  double t27528;
  double t27529;
  double t16600;
  double t16603;
  double t16618;
  double t16619;
  double t16620;
  double t16635;
  double t16677;
  double t16678;
  double t16718;
  double t16734;
  double t27537;
  double t27538;
  double t27539;
  double t27541;
  double t17013;
  double t27507;
  double t27530;
  double t27531;
  double t27532;
  double t27544;
  double t27545;
  double t27590;
  double t27591;
  double t18000;
  double t27616;
  double t27617;
  double t27618;
  double t27621;
  double t27622;
  double t27624;
  double t27626;
  double t27627;
  double t27640;
  double t27641;
  double t27642;
  double t27712;
  double t27713;
  double t27714;
  double t27718;
  double t27719;
  double t27720;
  double t27724;
  double t27725;
  double t27732;
  double t27733;
  double t27735;
  double t27739;
  double t27758;
  double t27759;
  double t27769;
  double t27771;
  double t27772;
  double t27774;
  double t27835;
  double t27836;
  double t27838;
  double t27839;
  double t27841;
  double t27842;
  double t27843;
  double t27844;
  double t27847;
  double t27848;
  double t27849;
  double t27850;
  double t27875;
  double t27876;
  double t27877;
  double t27878;
  double t27872;
  double t27873;
  double t27882;
  double t27883;
  double t27884;
  double t27885;
  double t27905;
  double t27906;
  double t27907;
  double t27909;
  double t27910;
  double t27911;
  double t27922;
  double t27923;
  double t27924;
  double t27931;
  double t27916;
  double t27917;
  double t27918;
  double t27919;
  double t27908;
  double t27912;
  double t27913;
  double t27914;
  double t27961;
  double t27962;
  double t27964;
  double t27965;
  double t27969;
  double t27970;
  double t27971;
  double t28019;
  double t28020;
  double t28021;
  double t28022;
  double t28024;
  double t28025;
  double t28026;
  double t28027;
  double t28030;
  double t28031;
  double t28032;
  double t28033;
  double t28059;
  double t28061;
  double t28062;
  double t28063;
  double t28056;
  double t28057;
  double t28067;
  double t28068;
  double t28069;
  double t28070;
  t162 = Cos(var1[4]);
  t12690 = Cos(var1[6]);
  t12736 = -1.*t12690;
  t13188 = 1. + t12736;
  t16228 = Cos(var1[8]);
  t16255 = Sin(var1[8]);
  t16260 = -3.e-6*t16255;
  t16142 = Sin(var1[4]);
  t12431 = Cos(var1[5]);
  t16183 = Sin(var1[6]);
  t16095 = Sin(var1[5]);
  t16232 = -3.e-6*t16228;
  t16262 = t16232 + t16260;
  t16327 = 3.e-6*t16228;
  t16367 = t16327 + t16260;
  t16602 = -9.e-12*t16255;
  t16625 = t162*t12431*t12690;
  t16629 = -3.e-6*t162*t13188*t16095;
  t16631 = t16142*t16183;
  t16634 = t16625 + t16629 + t16631;
  t16430 = -1.000000000009*t13188;
  t16431 = 1. + t16430;
  t16446 = t16431*t16142;
  t16500 = -1.*t162*t12431*t16183;
  t16585 = -3.e-6*t162*t16095*t16183;
  t16598 = t16446 + t16500 + t16585;
  t16768 = 3.e-6*t16255;
  t13220 = 3.e-6*t162*t12431*t13188;
  t15811 = -9.e-12*t13188;
  t15850 = 1. + t15811;
  t16111 = -1.*t162*t15850*t16095;
  t16190 = -3.e-6*t16142*t16183;
  t16193 = t13220 + t16111 + t16190;
  t16638 = -1.*t16228;
  t16798 = t16327 + t16768;
  t16835 = 9.e-12*t16255;
  t16778 = t16232 + t16768;
  t21125 = 1. + t16638;
  t21153 = -3.e-6*t21125;
  t21156 = t21153 + t16768;
  t21106 = -3.e-6*t162*t12431*t13188;
  t21113 = -1.*t162*t12690*t16095;
  t21121 = t21106 + t21113;
  t21133 = -1.*t16255;
  t21186 = -1.*t162*t12431*t15850;
  t21233 = t21186 + t16629;
  t23576 = 3.e-6*t21125;
  t23429 = -3.e-6*t162*t12431*t16183;
  t23472 = t162*t16095*t16183;
  t23502 = t23429 + t23472;
  t24019 = t23576 + t16768;
  t21123 = 9.e-13*var1[8];
  t22526 = t21153 + t16260;
  t21129 = -9.e-12*t21125;
  t23225 = -1.000000000009*t21125;
  t23389 = 1. + t23225;
  t24205 = t23576 + t16260;
  t23510 = 9.e-12*t21125;
  t21127 = 0.2000000000018*t21125;
  t21134 = t21129 + t21133;
  t21151 = 0.1*t21134;
  t21158 = -9.e-7*t21156;
  t21161 = t21123 + t21127 + t21151 + t21158;
  t21862 = 3.e-7*var1[8];
  t21871 = -1.62e-17*t21125;
  t22665 = 0.2*t22526;
  t23062 = 0.1*t21156;
  t23114 = t21862 + t21871 + t22665 + t23062;
  t25231 = -1.*t12431*t12690*t16142;
  t25237 = 3.e-6*t13188*t16142*t16095;
  t25344 = t162*t16183;
  t25684 = t25231 + t25237 + t25344;
  t23522 = t23510 + t21133;
  t25990 = -3.e-6*t12431*t13188*t16142;
  t25994 = t15850*t16142*t16095;
  t26013 = -3.e-6*t162*t16183;
  t26070 = t25990 + t25994 + t26013;
  t24106 = -1.8e-11*t21125;
  t24203 = 1. + t24106;
  t26150 = t162*t16431;
  t26151 = t12431*t16142*t16183;
  t26152 = 3.e-6*t16142*t16095*t16183;
  t26162 = t26150 + t26151 + t26152;
  t24230 = 0.1000000000009*t21125;
  t24231 = -9.e-7*t22526;
  t24255 = t21129 + t16255;
  t24265 = 0.2*t24255;
  t24269 = t21123 + t24230 + t24231 + t24265;
  t24328 = t23510 + t16255;
  t26429 = -3.e-6*t12690*t16142;
  t26440 = 3.e-6*t162*t12431*t16183;
  t26566 = 9.e-12*t162*t16095*t16183;
  t26701 = t26429 + t26440 + t26566;
  t26383 = t12690*t16142;
  t26399 = t26383 + t16500 + t16585;
  t26766 = -1.*t162*t12431*t12690;
  t26770 = -3.e-6*t162*t12690*t16095;
  t26774 = -1.000000000009*t16142*t16183;
  t26775 = t26766 + t26770 + t26774;
  t27485 = Cos(var1[3]);
  t27447 = Sin(var1[3]);
  t16293 = 0.2*t16262;
  t16382 = 0.1*t16367;
  t16411 = -1.62e-17*t16255;
  t16412 = 3.e-7 + t16293 + t16382 + t16411;
  t27456 = t12431*t27447*t16142;
  t27486 = t27485*t16095;
  t27490 = t27456 + t27486;
  t27508 = t27485*t12431;
  t27528 = -1.*t27447*t16142*t16095;
  t27529 = t27508 + t27528;
  t16600 = -9.e-7*t16262;
  t16603 = t16228 + t16602;
  t16618 = 0.2*t16603;
  t16619 = 0.1000000000009*t16255;
  t16620 = 9.e-13 + t16600 + t16618 + t16619;
  t16635 = -9.e-7*t16367;
  t16677 = t16638 + t16602;
  t16678 = 0.1*t16677;
  t16718 = 0.2000000000018*t16255;
  t16734 = 9.e-13 + t16635 + t16678 + t16718;
  t27537 = -1.*t162*t16431*t27447;
  t27538 = -1.*t27490*t16183;
  t27539 = 3.e-6*t27529*t16183;
  t27541 = t27537 + t27538 + t27539;
  t17013 = t16638 + t16835;
  t27507 = 3.e-6*t13188*t27490;
  t27530 = t15850*t27529;
  t27531 = 3.e-6*t162*t27447*t16183;
  t27532 = t27507 + t27530 + t27531;
  t27544 = t12690*t27490;
  t27545 = 3.e-6*t13188*t27529;
  t27590 = -1.*t162*t27447*t16183;
  t27591 = t27544 + t27545 + t27590;
  t18000 = t16228 + t16835;
  t27616 = -1.*t12431*t27447*t16142;
  t27617 = -1.*t27485*t16095;
  t27618 = t27616 + t27617;
  t27621 = 3.e-6*t13188*t27618;
  t27622 = t12690*t27529;
  t27624 = t27621 + t27622;
  t27626 = t15850*t27618;
  t27627 = t27626 + t27545;
  t27640 = 3.e-6*t27618*t16183;
  t27641 = -1.*t27529*t16183;
  t27642 = t27640 + t27641;
  t27712 = t27485*t12431*t16142;
  t27713 = -1.*t27447*t16095;
  t27714 = t27712 + t27713;
  t27718 = -1.*t12431*t27447;
  t27719 = -1.*t27485*t16142*t16095;
  t27720 = t27718 + t27719;
  t27724 = t12690*t27714;
  t27725 = 3.e-6*t13188*t27720;
  t27732 = -1.*t27485*t162*t16183;
  t27733 = t27724 + t27725 + t27732;
  t27735 = 3.e-6*t13188*t27714;
  t27739 = t15850*t27720;
  t27758 = 3.e-6*t27485*t162*t16183;
  t27759 = t27735 + t27739 + t27758;
  t27769 = -1.*t27485*t162*t16431;
  t27771 = -1.*t27714*t16183;
  t27772 = 3.e-6*t27720*t16183;
  t27774 = t27769 + t27771 + t27772;
  t27835 = t162*t12431*t12690*t27447;
  t27836 = -3.e-6*t162*t13188*t27447*t16095;
  t27838 = t27447*t16142*t16183;
  t27839 = t27835 + t27836 + t27838;
  t27841 = 3.e-6*t162*t12431*t13188*t27447;
  t27842 = -1.*t162*t15850*t27447*t16095;
  t27843 = -3.e-6*t27447*t16142*t16183;
  t27844 = t27841 + t27842 + t27843;
  t27847 = t16431*t27447*t16142;
  t27848 = -1.*t162*t12431*t27447*t16183;
  t27849 = -3.e-6*t162*t27447*t16095*t16183;
  t27850 = t27847 + t27848 + t27849;
  t27875 = 3.e-6*t162*t12690*t27447;
  t27876 = 3.e-6*t27490*t16183;
  t27877 = -9.e-12*t27529*t16183;
  t27878 = t27875 + t27876 + t27877;
  t27872 = -1.*t162*t12690*t27447;
  t27873 = t27872 + t27538 + t27539;
  t27882 = -1.*t12690*t27490;
  t27883 = 3.e-6*t12690*t27529;
  t27884 = 1.000000000009*t162*t27447*t16183;
  t27885 = t27882 + t27883 + t27884;
  t27905 = -1.*t27485*t12431*t16142;
  t27906 = t27447*t16095;
  t27907 = t27905 + t27906;
  t27909 = t12431*t27447;
  t27910 = t27485*t16142*t16095;
  t27911 = t27909 + t27910;
  t27922 = t12690*t27907;
  t27923 = 3.e-6*t13188*t27911;
  t27924 = t27485*t162*t16183;
  t27931 = t27922 + t27923 + t27924;
  t27916 = t27485*t162*t16431;
  t27917 = -1.*t27907*t16183;
  t27918 = 3.e-6*t27911*t16183;
  t27919 = t27916 + t27917 + t27918;
  t27908 = 3.e-6*t13188*t27907;
  t27912 = t15850*t27911;
  t27913 = -3.e-6*t27485*t162*t16183;
  t27914 = t27908 + t27912 + t27913;
  t27961 = t12690*t27911;
  t27962 = t27735 + t27961;
  t27964 = t15850*t27714;
  t27965 = t27964 + t27923;
  t27969 = 3.e-6*t27714*t16183;
  t27970 = -1.*t27911*t16183;
  t27971 = t27969 + t27970;
  t28019 = -1.*t27485*t162*t12431*t12690;
  t28020 = 3.e-6*t27485*t162*t13188*t16095;
  t28021 = -1.*t27485*t16142*t16183;
  t28022 = t28019 + t28020 + t28021;
  t28024 = -3.e-6*t27485*t162*t12431*t13188;
  t28025 = t27485*t162*t15850*t16095;
  t28026 = 3.e-6*t27485*t16142*t16183;
  t28027 = t28024 + t28025 + t28026;
  t28030 = -1.*t27485*t16431*t16142;
  t28031 = t27485*t162*t12431*t16183;
  t28032 = 3.e-6*t27485*t162*t16095*t16183;
  t28033 = t28030 + t28031 + t28032;
  t28059 = -3.e-6*t27485*t162*t12690;
  t28061 = 3.e-6*t27907*t16183;
  t28062 = -9.e-12*t27911*t16183;
  t28063 = t28059 + t28061 + t28062;
  t28056 = t27485*t162*t12690;
  t28057 = t28056 + t27917 + t27918;
  t28067 = -1.*t12690*t27907;
  t28068 = 3.e-6*t12690*t27911;
  t28069 = -1.000000000009*t27485*t162*t16183;
  t28070 = t28067 + t28068 + t28069;
  p_output1[0]=var2[0] + (-0.2000000000018*t12431*t13188*t16142 - 6.000000000054e-7*t13188*t16095*t16142 - 0.2000000000018*t16183*t162 + t21161*t25684 + t23114*t26070 + t24269*t26162 - 0.3*(t24328*t25684 + t24205*t26070 + t23389*t26162) + 0.2*(t23389*t25684 + t24019*t26070 + t23522*t26162) + 0.100001*(t24205*t25684 + t24203*t26070 + t24019*t26162))*var2[4] + (6.000000000054e-7*t12431*t13188*t162 - 0.2000000000018*t13188*t16095*t162 + t21121*t21161 + t21233*t23114 + 0.2*(t21121*t23389 + t23502*t23522 + t21233*t24019) + 0.100001*(t23502*t24019 + t21233*t24203 + t21121*t24205) + t23502*t24269 - 0.3*(t23389*t23502 + t21233*t24205 + t21121*t24328))*var2[5] + (-0.2000000000018*t12690*t16142 + 0.2000000000018*t12431*t16183*t162 + 6.000000000054e-7*t16095*t16183*t162 + t21161*t26399 + t23114*t26701 + t24269*t26775 - 0.3*(t24328*t26399 + t24205*t26701 + t23389*t26775) + 0.2*(t23389*t26399 + t24019*t26701 + t23522*t26775) + 0.100001*(t24205*t26399 + t24203*t26701 + t24019*t26775))*var2[6] + (t16193*t16412 + t16598*t16620 + t16634*t16734 + 0.100001*(-1.8e-11*t16193*t16255 + t16634*t16778 + t16598*t16798) + 0.2*(-1.000000000009*t16255*t16634 + t16193*t16798 + t16598*t17013) - 0.3*(-1.000000000009*t16255*t16598 + t16193*t16778 + t16634*t18000))*var2[8];
  p_output1[1]=var2[1] + (0.2000000000018*t16183*t162*t27485 + 0.2000000000018*t13188*t27714 - 6.000000000054e-7*t13188*t27720 + t21161*t27733 + t23114*t27759 + t24269*t27774 - 0.3*(t24328*t27733 + t24205*t27759 + t23389*t27774) + 0.2*(t23389*t27733 + t24019*t27759 + t23522*t27774) + 0.100001*(t24205*t27733 + t24203*t27759 + t24019*t27774))*var2[3] + (-0.2000000000018*t16142*t16183*t27447 + 0.2000000000018*t12431*t13188*t162*t27447 + 6.000000000054e-7*t13188*t16095*t162*t27447 + t21161*t27839 + t23114*t27844 + t24269*t27850 - 0.3*(t24328*t27839 + t24205*t27844 + t23389*t27850) + 0.2*(t23389*t27839 + t24019*t27844 + t23522*t27850) + 0.100001*(t24205*t27839 + t24203*t27844 + t24019*t27850))*var2[4] + (0.2000000000018*t13188*t27529 - 6.000000000054e-7*t13188*t27618 + t21161*t27624 + t23114*t27627 + t24269*t27642 - 0.3*(t24328*t27624 + t24205*t27627 + t23389*t27642) + 0.2*(t23389*t27624 + t24019*t27627 + t23522*t27642) + 0.100001*(t24205*t27624 + t24203*t27627 + t24019*t27642))*var2[5] + (0.2000000000018*t12690*t162*t27447 + 0.2000000000018*t16183*t27490 - 6.000000000054e-7*t16183*t27529 + t21161*t27873 + t23114*t27878 + t24269*t27885 - 0.3*(t24328*t27873 + t24205*t27878 + t23389*t27885) + 0.2*(t23389*t27873 + t24019*t27878 + t23522*t27885) + 0.100001*(t24205*t27873 + t24203*t27878 + t24019*t27885))*var2[6] + (t16412*t27532 + t16620*t27541 + t16734*t27591 + 0.2*(t16798*t27532 + t17013*t27541 - 1.000000000009*t16255*t27591) + 0.100001*(-1.8e-11*t16255*t27532 + t16798*t27541 + t16778*t27591) - 0.3*(t16778*t27532 - 1.000000000009*t16255*t27541 + t18000*t27591))*var2[8];
  p_output1[2]=var2[2] + (0.2000000000018*t16183*t162*t27447 + 0.2000000000018*t13188*t27490 - 6.000000000054e-7*t13188*t27529 + t23114*t27532 + t24269*t27541 + t21161*t27591 + 0.2*(t24019*t27532 + t23522*t27541 + t23389*t27591) + 0.100001*(t24203*t27532 + t24019*t27541 + t24205*t27591) - 0.3*(t24205*t27532 + t23389*t27541 + t24328*t27591))*var2[3] + (0.2000000000018*t16142*t16183*t27485 - 0.2000000000018*t12431*t13188*t162*t27485 - 6.000000000054e-7*t13188*t16095*t162*t27485 + t21161*t28022 + t23114*t28027 + t24269*t28033 - 0.3*(t24328*t28022 + t24205*t28027 + t23389*t28033) + 0.2*(t23389*t28022 + t24019*t28027 + t23522*t28033) + 0.100001*(t24205*t28022 + t24203*t28027 + t24019*t28033))*var2[4] + (-6.000000000054e-7*t13188*t27714 + 0.2000000000018*t13188*t27911 + t21161*t27962 + t23114*t27965 + t24269*t27971 - 0.3*(t24328*t27962 + t24205*t27965 + t23389*t27971) + 0.2*(t23389*t27962 + t24019*t27965 + t23522*t27971) + 0.100001*(t24205*t27962 + t24203*t27965 + t24019*t27971))*var2[5] + (-0.2000000000018*t12690*t162*t27485 + 0.2000000000018*t16183*t27907 - 6.000000000054e-7*t16183*t27911 + t21161*t28057 + t23114*t28063 + t24269*t28070 - 0.3*(t24328*t28057 + t24205*t28063 + t23389*t28070) + 0.2*(t23389*t28057 + t24019*t28063 + t23522*t28070) + 0.100001*(t24205*t28057 + t24203*t28063 + t24019*t28070))*var2[6] + (t16412*t27914 + t16620*t27919 + t16734*t27931 + 0.2*(t16798*t27914 + t17013*t27919 - 1.000000000009*t16255*t27931) + 0.100001*(-1.8e-11*t16255*t27914 + t16798*t27919 + t16778*t27931) - 0.3*(t16778*t27914 - 1.000000000009*t16255*t27919 + t18000*t27931))*var2[8];
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

#include "impact_velocity_LeftFrontFoot.hh"

namespace Flight2
{

void impact_velocity_LeftFrontFoot_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
