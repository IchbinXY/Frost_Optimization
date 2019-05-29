/*
 * Automatically Generated from Mathematica.
 * Tue 28 May 2019 23:14:29 GMT-04:00
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
  double t352;
  double t410;
  double t574;
  double t801;
  double t978;
  double t793;
  double t840;
  double t1105;
  double t919;
  double t1170;
  double t2302;
  double t2403;
  double t2471;
  double t4479;
  double t8611;
  double t14030;
  double t21142;
  double t21181;
  double t21182;
  double t22344;
  double t27615;
  double t28610;
  double t28868;
  double t20939;
  double t21060;
  double t21064;
  double t21107;
  double t23723;
  double t31658;
  double t31715;
  double t32177;
  double t32367;
  double t34367;
  double t34431;
  double t48156;
  double t38405;
  double t43858;
  double t44186;
  double t44187;
  double t44537;
  double t44963;
  double t45227;
  double t48442;
  double t21120;
  double t38422;
  double t21909;
  double t42578;
  double t42720;
  double t48888;
  double t45297;
  double t49298;
  double t49384;
  double t49710;
  double t49853;
  double t50042;
  double t50363;
  double t21908;
  double t23860;
  double t25621;
  double t29344;
  double t30010;
  double t35805;
  double t38255;
  double t38608;
  double t39182;
  double t40475;
  double t50635;
  double t50735;
  double t50747;
  double t50751;
  double t46134;
  double t50780;
  double t50903;
  double t50905;
  double t50935;
  double t48829;
  double t48861;
  double t51017;
  double t51076;
  double t51077;
  double t51081;
  double t48936;
  double t48939;
  double t48958;
  double t48978;
  double t48983;
  double t49008;
  double t51519;
  double t51651;
  double t51722;
  double t51805;
  double t51881;
  double t51898;
  double t51935;
  double t51972;
  double t52133;
  double t52212;
  double t52220;
  double t52243;
  double t53431;
  double t53448;
  double t53533;
  double t53739;
  double t54243;
  double t54301;
  double t54612;
  double t54732;
  double t55141;
  double t55188;
  double t55219;
  double t55273;
  double t55803;
  double t55862;
  double t55891;
  double t55907;
  double t56378;
  double t56407;
  double t56429;
  double t56430;
  double t56441;
  double t56445;
  double t56465;
  double t56469;
  double t57435;
  double t57440;
  double t57480;
  double t57502;
  double t57503;
  double t57519;
  double t57679;
  double t57682;
  double t57700;
  double t60516;
  double t60521;
  double t60596;
  double t61029;
  double t61360;
  double t61462;
  double t61471;
  double t61485;
  double t61650;
  double t61687;
  double t61735;
  double t61994;
  double t61995;
  double t61996;
  double t62002;
  double t62029;
  double t62077;
  double t62095;
  double t62109;
  double t62127;
  double t62129;
  double t62147;
  double t62959;
  double t62980;
  double t63004;
  double t63019;
  double t62839;
  double t62891;
  double t62924;
  double t62925;
  double t63044;
  double t63046;
  double t63047;
  double t63050;
  double t63847;
  double t63859;
  double t63873;
  double t64062;
  double t64111;
  double t64224;
  double t64229;
  double t63968;
  double t63973;
  double t63975;
  double t63985;
  double t64248;
  double t64259;
  double t64262;
  double t64271;
  double t64552;
  double t64554;
  double t64586;
  double t64623;
  double t64521;
  double t64527;
  double t64698;
  double t64719;
  double t65330;
  double t65444;
  double t68713;
  double t68815;
  double t69082;
  double t69097;
  double t69463;
  double t69498;
  double t69501;
  double t69508;
  double t69284;
  double t69304;
  double t68234;
  double t68346;
  double t68497;
  double t68588;
  double t69782;
  double t70054;
  double t69775;
  double t68929;
  double t69098;
  double t69100;
  double t69126;
  double t69462;
  double t69469;
  double t69472;
  double t69476;
  double t69486;
  double t69540;
  double t69555;
  double t69563;
  double t69564;
  double t69589;
  double t73020;
  double t73029;
  double t73260;
  double t71899;
  double t72283;
  double t71419;
  double t71425;
  double t71623;
  double t71826;
  double t70069;
  double t70160;
  t352 = Cos(var1[6]);
  t410 = -1.*t352;
  t574 = 1. + t410;
  t801 = Cos(var1[5]);
  t978 = Sin(var1[3]);
  t793 = Cos(var1[3]);
  t840 = Sin(var1[4]);
  t1105 = Sin(var1[5]);
  t919 = t793*t801*t840;
  t1170 = -1.*t978*t1105;
  t2302 = t919 + t1170;
  t2403 = -1.*t801*t978;
  t2471 = -1.*t793*t840*t1105;
  t4479 = t2403 + t2471;
  t8611 = Cos(var1[4]);
  t14030 = Sin(var1[6]);
  t21142 = Cos(var1[8]);
  t21181 = -1.*t21142;
  t21182 = 1. + t21181;
  t22344 = Sin(var1[8]);
  t27615 = -3.e-6*t21182;
  t28610 = 3.e-6*t22344;
  t28868 = t27615 + t28610;
  t20939 = t352*t2302;
  t21060 = 3.e-6*t574*t4479;
  t21064 = -1.*t793*t8611*t14030;
  t21107 = t20939 + t21060 + t21064;
  t23723 = -1.*t22344;
  t31658 = 3.e-6*t574*t2302;
  t31715 = -9.e-12*t574;
  t32177 = 1. + t31715;
  t32367 = t32177*t4479;
  t34367 = 3.e-6*t793*t8611*t14030;
  t34431 = t31658 + t32367 + t34367;
  t48156 = 3.e-6*t21182;
  t38405 = -3.e-6*t22344;
  t43858 = -1.000000000009*t574;
  t44186 = 1. + t43858;
  t44187 = -1.*t793*t8611*t44186;
  t44537 = -1.*t2302*t14030;
  t44963 = 3.e-6*t4479*t14030;
  t45227 = t44187 + t44537 + t44963;
  t48442 = t48156 + t28610;
  t21120 = 9.e-13*var1[8];
  t38422 = t27615 + t38405;
  t21909 = -9.e-12*t21182;
  t42578 = -1.000000000009*t21182;
  t42720 = 1. + t42578;
  t48888 = t48156 + t38405;
  t45297 = 9.e-12*t21182;
  t49298 = t801*t978*t840;
  t49384 = t793*t1105;
  t49710 = t49298 + t49384;
  t49853 = t793*t801;
  t50042 = -1.*t978*t840*t1105;
  t50363 = t49853 + t50042;
  t21908 = 0.2000000000018*t21182;
  t23860 = t21909 + t23723;
  t25621 = 0.1*t23860;
  t29344 = -9.e-7*t28868;
  t30010 = t21120 + t21908 + t25621 + t29344;
  t35805 = 3.e-7*var1[8];
  t38255 = -1.62e-17*t21182;
  t38608 = 0.2*t38422;
  t39182 = 0.1*t28868;
  t40475 = t35805 + t38255 + t38608 + t39182;
  t50635 = t352*t49710;
  t50735 = 3.e-6*t574*t50363;
  t50747 = -1.*t8611*t978*t14030;
  t50751 = t50635 + t50735 + t50747;
  t46134 = t45297 + t23723;
  t50780 = 3.e-6*t574*t49710;
  t50903 = t32177*t50363;
  t50905 = 3.e-6*t8611*t978*t14030;
  t50935 = t50780 + t50903 + t50905;
  t48829 = -1.8e-11*t21182;
  t48861 = 1. + t48829;
  t51017 = -1.*t8611*t44186*t978;
  t51076 = -1.*t49710*t14030;
  t51077 = 3.e-6*t50363*t14030;
  t51081 = t51017 + t51076 + t51077;
  t48936 = 0.1000000000009*t21182;
  t48939 = -9.e-7*t38422;
  t48958 = t21909 + t22344;
  t48978 = 0.2*t48958;
  t48983 = t21120 + t48936 + t48939 + t48978;
  t49008 = t45297 + t22344;
  t51519 = -1.*t801*t352*t840;
  t51651 = 3.e-6*t574*t840*t1105;
  t51722 = t8611*t14030;
  t51805 = t51519 + t51651 + t51722;
  t51881 = -3.e-6*t801*t574*t840;
  t51898 = t32177*t840*t1105;
  t51935 = -3.e-6*t8611*t14030;
  t51972 = t51881 + t51898 + t51935;
  t52133 = t8611*t44186;
  t52212 = t801*t840*t14030;
  t52220 = 3.e-6*t840*t1105*t14030;
  t52243 = t52133 + t52212 + t52220;
  t53431 = -1.*t793*t8611*t801*t352;
  t53448 = 3.e-6*t793*t8611*t574*t1105;
  t53533 = -1.*t793*t840*t14030;
  t53739 = t53431 + t53448 + t53533;
  t54243 = -3.e-6*t793*t8611*t801*t574;
  t54301 = t793*t8611*t32177*t1105;
  t54612 = 3.e-6*t793*t840*t14030;
  t54732 = t54243 + t54301 + t54612;
  t55141 = -1.*t793*t44186*t840;
  t55188 = t793*t8611*t801*t14030;
  t55219 = 3.e-6*t793*t8611*t1105*t14030;
  t55273 = t55141 + t55188 + t55219;
  t55803 = t8611*t801*t352*t978;
  t55862 = -3.e-6*t8611*t574*t978*t1105;
  t55891 = t978*t840*t14030;
  t55907 = t55803 + t55862 + t55891;
  t56378 = 3.e-6*t8611*t801*t574*t978;
  t56407 = -1.*t8611*t32177*t978*t1105;
  t56429 = -3.e-6*t978*t840*t14030;
  t56430 = t56378 + t56407 + t56429;
  t56441 = t44186*t978*t840;
  t56445 = -1.*t8611*t801*t978*t14030;
  t56465 = -3.e-6*t8611*t978*t1105*t14030;
  t56469 = t56441 + t56445 + t56465;
  t57435 = -3.e-6*t8611*t801*t574;
  t57440 = -1.*t8611*t352*t1105;
  t57480 = t57435 + t57440;
  t57502 = -1.*t8611*t801*t32177;
  t57503 = -3.e-6*t8611*t574*t1105;
  t57519 = t57502 + t57503;
  t57679 = -3.e-6*t8611*t801*t14030;
  t57682 = t8611*t1105*t14030;
  t57700 = t57679 + t57682;
  t60516 = t801*t978;
  t60521 = t793*t840*t1105;
  t60596 = t60516 + t60521;
  t61029 = t352*t60596;
  t61360 = t31658 + t61029;
  t61462 = t32177*t2302;
  t61471 = 3.e-6*t574*t60596;
  t61485 = t61462 + t61471;
  t61650 = 3.e-6*t2302*t14030;
  t61687 = -1.*t60596*t14030;
  t61735 = t61650 + t61687;
  t61994 = -1.*t801*t978*t840;
  t61995 = -1.*t793*t1105;
  t61996 = t61994 + t61995;
  t62002 = 3.e-6*t574*t61996;
  t62029 = t352*t50363;
  t62077 = t62002 + t62029;
  t62095 = t32177*t61996;
  t62109 = t62095 + t50735;
  t62127 = 3.e-6*t61996*t14030;
  t62129 = -1.*t50363*t14030;
  t62147 = t62127 + t62129;
  t62959 = -3.e-6*t352*t840;
  t62980 = 3.e-6*t8611*t801*t14030;
  t63004 = 9.e-12*t8611*t1105*t14030;
  t63019 = t62959 + t62980 + t63004;
  t62839 = t352*t840;
  t62891 = -1.*t8611*t801*t14030;
  t62924 = -3.e-6*t8611*t1105*t14030;
  t62925 = t62839 + t62891 + t62924;
  t63044 = -1.*t8611*t801*t352;
  t63046 = -3.e-6*t8611*t352*t1105;
  t63047 = -1.000000000009*t840*t14030;
  t63050 = t63044 + t63046 + t63047;
  t63847 = -1.*t793*t801*t840;
  t63859 = t978*t1105;
  t63873 = t63847 + t63859;
  t64062 = -3.e-6*t793*t8611*t352;
  t64111 = 3.e-6*t63873*t14030;
  t64224 = -9.e-12*t60596*t14030;
  t64229 = t64062 + t64111 + t64224;
  t63968 = t793*t8611*t352;
  t63973 = -1.*t63873*t14030;
  t63975 = 3.e-6*t60596*t14030;
  t63985 = t63968 + t63973 + t63975;
  t64248 = -1.*t352*t63873;
  t64259 = 3.e-6*t352*t60596;
  t64262 = -1.000000000009*t793*t8611*t14030;
  t64271 = t64248 + t64259 + t64262;
  t64552 = 3.e-6*t8611*t352*t978;
  t64554 = 3.e-6*t49710*t14030;
  t64586 = -9.e-12*t50363*t14030;
  t64623 = t64552 + t64554 + t64586;
  t64521 = -1.*t8611*t352*t978;
  t64527 = t64521 + t51076 + t51077;
  t64698 = -1.*t352*t49710;
  t64719 = 3.e-6*t352*t50363;
  t65330 = 1.000000000009*t8611*t978*t14030;
  t65444 = t64698 + t64719 + t65330;
  t68713 = -3.e-6*t21142;
  t68815 = t68713 + t38405;
  t69082 = 3.e-6*t21142;
  t69097 = t69082 + t38405;
  t69463 = -9.e-12*t22344;
  t69498 = t8611*t801*t352;
  t69501 = t840*t14030;
  t69508 = t69498 + t57503 + t69501;
  t69284 = t44186*t840;
  t69304 = t69284 + t62891 + t62924;
  t68234 = 3.e-6*t8611*t801*t574;
  t68346 = -1.*t8611*t32177*t1105;
  t68497 = -3.e-6*t840*t14030;
  t68588 = t68234 + t68346 + t68497;
  t69782 = t69082 + t28610;
  t70054 = 9.e-12*t22344;
  t69775 = t68713 + t28610;
  t68929 = 0.2*t68815;
  t69098 = 0.1*t69097;
  t69100 = -1.62e-17*t22344;
  t69126 = 3.e-7 + t68929 + t69098 + t69100;
  t69462 = -9.e-7*t68815;
  t69469 = t21142 + t69463;
  t69472 = 0.2*t69469;
  t69476 = 0.1000000000009*t22344;
  t69486 = 9.e-13 + t69462 + t69472 + t69476;
  t69540 = -9.e-7*t69097;
  t69555 = t21181 + t69463;
  t69563 = 0.1*t69555;
  t69564 = 0.2000000000018*t22344;
  t69589 = 9.e-13 + t69540 + t69563 + t69564;
  t73020 = t352*t63873;
  t73029 = t793*t8611*t14030;
  t73260 = t73020 + t61471 + t73029;
  t71899 = t793*t8611*t44186;
  t72283 = t71899 + t63973 + t63975;
  t71419 = 3.e-6*t574*t63873;
  t71425 = t32177*t60596;
  t71623 = -3.e-6*t793*t8611*t14030;
  t71826 = t71419 + t71425 + t71623;
  t70069 = t21181 + t70054;
  t70160 = t21142 + t70054;
  p_output1[0]=var2[0];
  p_output1[1]=var2[1];
  p_output1[2]=var2[2];
  p_output1[3]=(t21107*t30010 + t34431*t40475 + 0.2*(t21107*t42720 + t45227*t46134 + t34431*t48442) + 0.100001*(t45227*t48442 + t34431*t48861 + t21107*t48888) + t45227*t48983 - 0.3*(t42720*t45227 + t34431*t48888 + t21107*t49008) + 0.2000000000018*t2302*t574 - 6.000000000054e-7*t4479*t574 + 0.2000000000018*t14030*t793*t8611)*var2[1] + (t30010*t50751 + t40475*t50935 + t48983*t51081 - 0.3*(t49008*t50751 + t48888*t50935 + t42720*t51081) + 0.2*(t42720*t50751 + t48442*t50935 + t46134*t51081) + 0.100001*(t48888*t50751 + t48861*t50935 + t48442*t51081) + 0.2000000000018*t49710*t574 - 6.000000000054e-7*t50363*t574 + 0.2000000000018*t14030*t8611*t978)*var2[2];
  p_output1[4]=(t30010*t51805 + t40475*t51972 + t48983*t52243 - 0.3*(t49008*t51805 + t48888*t51972 + t42720*t52243) + 0.2*(t42720*t51805 + t48442*t51972 + t46134*t52243) + 0.100001*(t48888*t51805 + t48861*t51972 + t48442*t52243) - 6.000000000054e-7*t1105*t574*t840 - 0.2000000000018*t574*t801*t840 - 0.2000000000018*t14030*t8611)*var2[0] + (t30010*t55907 + t40475*t56430 + t48983*t56469 - 0.3*(t49008*t55907 + t48888*t56430 + t42720*t56469) + 0.2*(t42720*t55907 + t48442*t56430 + t46134*t56469) + 0.100001*(t48888*t55907 + t48861*t56430 + t48442*t56469) - 0.2000000000018*t14030*t840*t978 + 6.000000000054e-7*t1105*t574*t8611*t978 + 0.2000000000018*t574*t801*t8611*t978)*var2[1] + (t30010*t53739 + t40475*t54732 + t48983*t55273 - 0.3*(t49008*t53739 + t48888*t54732 + t42720*t55273) + 0.2*(t42720*t53739 + t48442*t54732 + t46134*t55273) + 0.100001*(t48888*t53739 + t48861*t54732 + t48442*t55273) + 0.2000000000018*t14030*t793*t840 - 6.000000000054e-7*t1105*t574*t793*t8611 - 0.2000000000018*t574*t793*t801*t8611)*var2[2];
  p_output1[5]=(t30010*t57480 + t40475*t57519 + t48983*t57700 - 0.3*(t49008*t57480 + t48888*t57519 + t42720*t57700) + 0.2*(t42720*t57480 + t48442*t57519 + t46134*t57700) + 0.100001*(t48888*t57480 + t48861*t57519 + t48442*t57700) - 0.2000000000018*t1105*t574*t8611 + 6.000000000054e-7*t574*t801*t8611)*var2[0] + (0.2000000000018*t50363*t574 - 6.000000000054e-7*t574*t61996 + t30010*t62077 + t40475*t62109 + t48983*t62147 - 0.3*(t49008*t62077 + t48888*t62109 + t42720*t62147) + 0.2*(t42720*t62077 + t48442*t62109 + t46134*t62147) + 0.100001*(t48888*t62077 + t48861*t62109 + t48442*t62147))*var2[1] + (-6.000000000054e-7*t2302*t574 + 0.2000000000018*t574*t60596 + t30010*t61360 + t40475*t61485 + t48983*t61735 - 0.3*(t49008*t61360 + t48888*t61485 + t42720*t61735) + 0.2*(t42720*t61360 + t48442*t61485 + t46134*t61735) + 0.100001*(t48888*t61360 + t48861*t61485 + t48442*t61735))*var2[2];
  p_output1[6]=(t30010*t62925 + t40475*t63019 + t48983*t63050 - 0.3*(t49008*t62925 + t48888*t63019 + t42720*t63050) + 0.2*(t42720*t62925 + t48442*t63019 + t46134*t63050) + 0.100001*(t48888*t62925 + t48861*t63019 + t48442*t63050) - 0.2000000000018*t352*t840 + 6.000000000054e-7*t1105*t14030*t8611 + 0.2000000000018*t14030*t801*t8611)*var2[0] + (0.2000000000018*t14030*t49710 - 6.000000000054e-7*t14030*t50363 + t30010*t64527 + t40475*t64623 + t48983*t65444 - 0.3*(t49008*t64527 + t48888*t64623 + t42720*t65444) + 0.2*(t42720*t64527 + t48442*t64623 + t46134*t65444) + 0.100001*(t48888*t64527 + t48861*t64623 + t48442*t65444) + 0.2000000000018*t352*t8611*t978)*var2[1] + (-6.000000000054e-7*t14030*t60596 + 0.2000000000018*t14030*t63873 + t30010*t63985 + t40475*t64229 + t48983*t64271 - 0.3*(t49008*t63985 + t48888*t64229 + t42720*t64271) + 0.2*(t42720*t63985 + t48442*t64229 + t46134*t64271) + 0.100001*(t48888*t63985 + t48861*t64229 + t48442*t64271) - 0.2000000000018*t352*t793*t8611)*var2[2];
  p_output1[7]=0;
  p_output1[8]=(t68588*t69126 + t69304*t69486 + t69508*t69589 + 0.100001*(-1.8e-11*t22344*t68588 + t69508*t69775 + t69304*t69782) + 0.2*(-1.000000000009*t22344*t69508 + t68588*t69782 + t69304*t70069) - 0.3*(-1.000000000009*t22344*t69304 + t68588*t69775 + t69508*t70160))*var2[0] + (t50935*t69126 + t51081*t69486 + t50751*t69589 + 0.100001*(-1.8e-11*t22344*t50935 + t50751*t69775 + t51081*t69782) + 0.2*(-1.000000000009*t22344*t50751 + t50935*t69782 + t51081*t70069) - 0.3*(-1.000000000009*t22344*t51081 + t50935*t69775 + t50751*t70160))*var2[1] + (t69126*t71826 + t69486*t72283 + t69589*t73260 + 0.2*(t69782*t71826 + t70069*t72283 - 1.000000000009*t22344*t73260) + 0.100001*(-1.8e-11*t22344*t71826 + t69782*t72283 + t69775*t73260) - 0.3*(t69775*t71826 - 1.000000000009*t22344*t72283 + t70160*t73260))*var2[2];
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
  p_output1[21]=0;
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
    ( !(mrows == 3 && ncols == 1) && 
      !(mrows == 1 && ncols == 3))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var2 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 22, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "fLeftFrontFoot_vec_FrontStance.hh"

namespace FrontStance
{

void fLeftFrontFoot_vec_FrontStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
