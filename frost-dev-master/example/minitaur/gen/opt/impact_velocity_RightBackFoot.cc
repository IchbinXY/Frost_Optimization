/*
 * Automatically Generated from Mathematica.
 * Thu 30 May 2019 00:02:58 GMT-04:00
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
  double t2397;
  double t29312;
  double t29953;
  double t30647;
  double t30731;
  double t30980;
  double t31092;
  double t30210;
  double t30458;
  double t31101;
  double t31184;
  double t31275;
  double t31802;
  double t21721;
  double t30111;
  double t34377;
  double t31116;
  double t31283;
  double t31297;
  double t31642;
  double t31817;
  double t31883;
  double t36107;
  double t36852;
  double t36878;
  double t36901;
  double t32268;
  double t44793;
  double t44794;
  double t44795;
  double t44798;
  double t44799;
  double t44801;
  double t44803;
  double t44807;
  double t47353;
  double t44810;
  double t49927;
  double t49906;
  double t49952;
  double t49934;
  double t49937;
  double t51391;
  double t50653;
  double t51181;
  double t51214;
  double t51217;
  double t52456;
  double t51419;
  double t51436;
  double t52407;
  double t52411;
  double t52421;
  double t52425;
  double t52564;
  double t52659;
  double t51383;
  double t52649;
  double t52652;
  double t52460;
  double t51483;
  double t51545;
  double t52400;
  double t52404;
  double t52405;
  double t51366;
  double t51388;
  double t51389;
  double t51401;
  double t51404;
  double t49932;
  double t49938;
  double t50301;
  double t50619;
  double t50631;
  double t52739;
  double t52741;
  double t52660;
  double t52751;
  double t52754;
  double t52755;
  double t52777;
  double t52779;
  double t52784;
  double t52688;
  double t52634;
  double t52636;
  double t52723;
  double t52727;
  double t52730;
  double t52733;
  double t52927;
  double t52931;
  double t52944;
  double t52945;
  double t52951;
  double t52954;
  double t52956;
  double t52957;
  double t52969;
  double t52974;
  double t52985;
  double t52989;
  double t53062;
  double t53079;
  double t53080;
  double t53089;
  double t53099;
  double t53119;
  double t53355;
  double t53567;
  double t53769;
  double t54139;
  double t54247;
  double t54442;
  double t54466;
  double t56811;
  double t59433;
  double t59434;
  double t59444;
  double t59551;
  double t59594;
  double t59596;
  double t59615;
  double t59621;
  double t59623;
  double t59626;
  double t59644;
  double t59647;
  double t59696;
  double t59705;
  double t59833;
  double t59842;
  double t59843;
  double t59920;
  double t61191;
  double t61192;
  double t61214;
  double t61233;
  double t61235;
  double t61239;
  double t61243;
  double t61244;
  double t61245;
  double t61254;
  double t61338;
  double t61424;
  double t61500;
  double t61561;
  double t61562;
  double t30206;
  double t30487;
  double t30585;
  double t30613;
  double t32051;
  double t35406;
  double t35421;
  double t35446;
  double t36017;
  double t62565;
  double t62575;
  double t62583;
  double t44178;
  double t44681;
  double t44757;
  double t44779;
  double t44790;
  double t62564;
  double t62602;
  double t62620;
  double t62637;
  double t62666;
  double t62669;
  double t62670;
  double t44812;
  double t62703;
  double t62708;
  double t62734;
  double t62738;
  double t49058;
  double t69109;
  double t69111;
  double t69113;
  double t69114;
  double t69122;
  double t69124;
  double t69126;
  double t69127;
  double t69129;
  double t69133;
  double t70063;
  double t70066;
  double t70067;
  double t70158;
  double t70160;
  double t70466;
  double t70548;
  double t70549;
  double t70552;
  double t70554;
  double t70557;
  double t70562;
  double t70598;
  double t70674;
  double t70676;
  double t70679;
  double t70683;
  double t70833;
  double t70936;
  double t71128;
  double t71244;
  double t71248;
  double t71249;
  double t71625;
  double t71626;
  double t71627;
  double t71624;
  double t71629;
  double t71630;
  double t71631;
  double t71633;
  double t71651;
  double t71652;
  double t71716;
  double t71717;
  double t71718;
  double t71719;
  double t71832;
  double t71833;
  double t71834;
  double t71835;
  double t71837;
  double t71839;
  double t71840;
  double t71841;
  double t71849;
  double t71852;
  t2397 = Cos(var1[21]);
  t29312 = Sin(var1[21]);
  t29953 = -3.e-6*t29312;
  t30647 = Cos(var1[19]);
  t30731 = -1.*t30647;
  t30980 = 1. + t30731;
  t31092 = Cos(var1[4]);
  t30210 = 3.e-6*t2397;
  t30458 = t30210 + t29953;
  t31101 = Cos(var1[5]);
  t31184 = Sin(var1[19]);
  t31275 = Sin(var1[4]);
  t31802 = Sin(var1[5]);
  t21721 = -3.e-6*t2397;
  t30111 = t21721 + t29953;
  t34377 = -9.e-12*t29312;
  t31116 = 3.e-6*t30980*t31092*t31101;
  t31283 = -3.e-6*t31184*t31275;
  t31297 = -9.e-12*t30980;
  t31642 = 1. + t31297;
  t31817 = -1.*t31642*t31092*t31802;
  t31883 = t31116 + t31283 + t31817;
  t36107 = t30647*t31092*t31101;
  t36852 = t31184*t31275;
  t36878 = -3.e-6*t30980*t31092*t31802;
  t36901 = t36107 + t36852 + t36878;
  t32268 = -1.*t2397;
  t44793 = -1.*t31092*t31101*t31184;
  t44794 = -1.000000000009*t30980;
  t44795 = 1. + t44794;
  t44798 = t44795*t31275;
  t44799 = -3.e-6*t31092*t31184*t31802;
  t44801 = t44793 + t44798 + t44799;
  t44803 = 3.e-6*t29312;
  t44807 = t30210 + t44803;
  t47353 = t21721 + t44803;
  t44810 = 9.e-12*t29312;
  t49927 = 1. + t32268;
  t49906 = 3.e-13*var1[21];
  t49952 = -9.e-12*t49927;
  t49934 = -3.e-6*t49927;
  t49937 = t49934 + t29953;
  t51391 = t49934 + t44803;
  t50653 = -1.*t30647*t31092*t31101;
  t51181 = -1.000000000009*t31184*t31275;
  t51214 = -3.e-6*t30647*t31092*t31802;
  t51217 = t50653 + t51181 + t51214;
  t52456 = 3.e-6*t49927;
  t51419 = t30647*t31275;
  t51436 = t44793 + t51419 + t44799;
  t52407 = 3.e-6*t31092*t31101*t31184;
  t52411 = -3.e-6*t30647*t31275;
  t52421 = 9.e-12*t31092*t31184*t31802;
  t52425 = t52407 + t52411 + t52421;
  t52564 = t52456 + t29953;
  t52659 = 9.e-12*t49927;
  t51383 = -1.*t29312;
  t52649 = -1.000000000009*t49927;
  t52652 = 1. + t52649;
  t52460 = t52456 + t44803;
  t51483 = 1.e-7*var1[21];
  t51545 = 5.4e-18*t49927;
  t52400 = -0.200000000003*t49937;
  t52404 = 0.100000000003*t51391;
  t52405 = t51483 + t51545 + t52400 + t52404;
  t51366 = -0.2000000000048*t49927;
  t51388 = t49952 + t51383;
  t51389 = 0.100000000003*t51388;
  t51401 = 3.e-7*t51391;
  t51404 = t49906 + t51366 + t51389 + t51401;
  t49932 = 0.1000000000039*t49927;
  t49938 = 3.e-7*t49937;
  t50301 = t49952 + t29312;
  t50619 = -0.200000000003*t50301;
  t50631 = t49906 + t49932 + t49938 + t50619;
  t52739 = -1.*t31642*t31092*t31101;
  t52741 = t52739 + t36878;
  t52660 = t52659 + t29312;
  t52751 = -3.e-6*t30980*t31092*t31101;
  t52754 = -1.*t30647*t31092*t31802;
  t52755 = t52751 + t52754;
  t52777 = -3.e-6*t31092*t31101*t31184;
  t52779 = t31092*t31184*t31802;
  t52784 = t52777 + t52779;
  t52688 = t52659 + t51383;
  t52634 = -1.8e-11*t49927;
  t52636 = 1. + t52634;
  t52723 = -1.8e-12*t30980;
  t52727 = -1. + t30647;
  t52730 = 0.2*t52727;
  t52733 = t52723 + t52730;
  t52927 = -3.e-6*t31092*t31184;
  t52931 = -3.e-6*t30980*t31101*t31275;
  t52944 = t31642*t31275*t31802;
  t52945 = t52927 + t52931 + t52944;
  t52951 = t31092*t31184;
  t52954 = -1.*t30647*t31101*t31275;
  t52956 = 3.e-6*t30980*t31275*t31802;
  t52957 = t52951 + t52954 + t52956;
  t52969 = t44795*t31092;
  t52974 = t31101*t31184*t31275;
  t52985 = 3.e-6*t31184*t31275*t31802;
  t52989 = t52969 + t52974 + t52985;
  t53062 = Sin(var1[3]);
  t53079 = 3.e-6*t30980*t31092*t31101*t53062;
  t53080 = -3.e-6*t31184*t53062*t31275;
  t53089 = -1.*t31642*t31092*t53062*t31802;
  t53099 = t53079 + t53080 + t53089;
  t53119 = t30647*t31092*t31101*t53062;
  t53355 = t31184*t53062*t31275;
  t53567 = -3.e-6*t30980*t31092*t53062*t31802;
  t53769 = t53119 + t53355 + t53567;
  t54139 = -1.*t31092*t31101*t31184*t53062;
  t54247 = t44795*t53062*t31275;
  t54442 = -3.e-6*t31092*t31184*t53062*t31802;
  t54466 = t54139 + t54247 + t54442;
  t56811 = Cos(var1[3]);
  t59433 = t56811*t31101*t31275;
  t59434 = -1.*t53062*t31802;
  t59444 = t59433 + t59434;
  t59551 = -1.*t31101*t53062;
  t59594 = -1.*t56811*t31275*t31802;
  t59596 = t59551 + t59594;
  t59615 = 3.e-6*t56811*t31092*t31184;
  t59621 = 3.e-6*t30980*t59444;
  t59623 = t31642*t59596;
  t59626 = t59615 + t59621 + t59623;
  t59644 = -1.*t56811*t31092*t31184;
  t59647 = t30647*t59444;
  t59696 = 3.e-6*t30980*t59596;
  t59705 = t59644 + t59647 + t59696;
  t59833 = -1.*t44795*t56811*t31092;
  t59842 = -1.*t31184*t59444;
  t59843 = 3.e-6*t31184*t59596;
  t59920 = t59833 + t59842 + t59843;
  t61191 = -1.*t31101*t53062*t31275;
  t61192 = -1.*t56811*t31802;
  t61214 = t61191 + t61192;
  t61233 = t56811*t31101;
  t61235 = -1.*t53062*t31275*t31802;
  t61239 = t61233 + t61235;
  t61243 = t31642*t61214;
  t61244 = 3.e-6*t30980*t61239;
  t61245 = t61243 + t61244;
  t61254 = 3.e-6*t30980*t61214;
  t61338 = t30647*t61239;
  t61424 = t61254 + t61338;
  t61500 = 3.e-6*t31184*t61214;
  t61561 = -1.*t31184*t61239;
  t61562 = t61500 + t61561;
  t30206 = -0.200000000003*t30111;
  t30487 = 0.100000000003*t30458;
  t30585 = 5.4e-18*t29312;
  t30613 = 1.e-7 + t30206 + t30487 + t30585;
  t32051 = 3.e-7*t30458;
  t35406 = t32268 + t34377;
  t35421 = 0.100000000003*t35406;
  t35446 = -0.2000000000048*t29312;
  t36017 = 3.e-13 + t32051 + t35421 + t35446;
  t62565 = t31101*t53062*t31275;
  t62575 = t56811*t31802;
  t62583 = t62565 + t62575;
  t44178 = 3.e-7*t30111;
  t44681 = t2397 + t34377;
  t44757 = -0.200000000003*t44681;
  t44779 = 0.1000000000039*t29312;
  t44790 = 3.e-13 + t44178 + t44757 + t44779;
  t62564 = 3.e-6*t31092*t31184*t53062;
  t62602 = 3.e-6*t30980*t62583;
  t62620 = t31642*t61239;
  t62637 = t62564 + t62602 + t62620;
  t62666 = -1.*t31092*t31184*t53062;
  t62669 = t30647*t62583;
  t62670 = t62666 + t62669 + t61244;
  t44812 = t32268 + t44810;
  t62703 = -1.*t44795*t31092*t53062;
  t62708 = -1.*t31184*t62583;
  t62734 = 3.e-6*t31184*t61239;
  t62738 = t62703 + t62708 + t62734;
  t49058 = t2397 + t44810;
  t69109 = 1.000000000009*t31092*t31184*t53062;
  t69111 = -1.*t30647*t62583;
  t69113 = 3.e-6*t30647*t61239;
  t69114 = t69109 + t69111 + t69113;
  t69122 = 3.e-6*t30647*t31092*t53062;
  t69124 = 3.e-6*t31184*t62583;
  t69126 = -9.e-12*t31184*t61239;
  t69127 = t69122 + t69124 + t69126;
  t69129 = -1.*t30647*t31092*t53062;
  t69133 = t69129 + t62708 + t62734;
  t70063 = -3.e-6*t30980*t56811*t31092*t31101;
  t70066 = 3.e-6*t56811*t31184*t31275;
  t70067 = t31642*t56811*t31092*t31802;
  t70158 = t70063 + t70066 + t70067;
  t70160 = -1.*t30647*t56811*t31092*t31101;
  t70466 = -1.*t56811*t31184*t31275;
  t70548 = 3.e-6*t30980*t56811*t31092*t31802;
  t70549 = t70160 + t70466 + t70548;
  t70552 = t56811*t31092*t31101*t31184;
  t70554 = -1.*t44795*t56811*t31275;
  t70557 = 3.e-6*t56811*t31092*t31184*t31802;
  t70562 = t70552 + t70554 + t70557;
  t70598 = t31101*t53062;
  t70674 = t56811*t31275*t31802;
  t70676 = t70598 + t70674;
  t70679 = t31642*t59444;
  t70683 = 3.e-6*t30980*t70676;
  t70833 = t70679 + t70683;
  t70936 = t30647*t70676;
  t71128 = t59621 + t70936;
  t71244 = 3.e-6*t31184*t59444;
  t71248 = -1.*t31184*t70676;
  t71249 = t71244 + t71248;
  t71625 = -1.*t56811*t31101*t31275;
  t71626 = t53062*t31802;
  t71627 = t71625 + t71626;
  t71624 = -3.e-6*t56811*t31092*t31184;
  t71629 = 3.e-6*t30980*t71627;
  t71630 = t31642*t70676;
  t71631 = t71624 + t71629 + t71630;
  t71633 = t56811*t31092*t31184;
  t71651 = t30647*t71627;
  t71652 = t71633 + t71651 + t70683;
  t71716 = t44795*t56811*t31092;
  t71717 = -1.*t31184*t71627;
  t71718 = 3.e-6*t31184*t70676;
  t71719 = t71716 + t71717 + t71718;
  t71832 = -1.000000000009*t56811*t31092*t31184;
  t71833 = -1.*t30647*t71627;
  t71834 = 3.e-6*t30647*t70676;
  t71835 = t71832 + t71833 + t71834;
  t71837 = -3.e-6*t30647*t56811*t31092;
  t71839 = 3.e-6*t31184*t71627;
  t71840 = -9.e-12*t31184*t70676;
  t71841 = t71837 + t71839 + t71840;
  t71849 = t30647*t56811*t31092;
  t71852 = t71849 + t71717 + t71718;
  p_output1[0]=var2[0] + (0.2000000000018*t31092*t31184 + 6.000000000054e-7*t30980*t31275*t31802 - 1.*t31101*t31275*t52733 + t52405*t52945 + t51404*t52957 + t50631*t52989 - 0.099999*(t52636*t52945 + t52564*t52957 + t52460*t52989) - 0.3*(t52564*t52945 + t52660*t52957 + t52652*t52989) + 0.2*(-1.*t52460*t52945 - 1.*t52652*t52957 - 1.*t52688*t52989))*var2[4] + (-6.000000000054e-7*t30980*t31092*t31101 - 1.*t31092*t31802*t52733 + t52405*t52741 + t51404*t52755 + t50631*t52784 - 0.099999*(t52636*t52741 + t52564*t52755 + t52460*t52784) - 0.3*(t52564*t52741 + t52660*t52755 + t52652*t52784) + 0.2*(-1.*t52460*t52741 - 1.*t52652*t52755 - 1.*t52688*t52784))*var2[5] + (-0.2000000000018*t31092*t31101*t31184 + 0.2000000000018*t30647*t31275 - 6.000000000054e-7*t31092*t31184*t31802 + t50631*t51217 + t51404*t51436 + t52405*t52425 - 0.099999*(t51217*t52460 + t51436*t52564 + t52425*t52636) - 0.3*(t52425*t52564 + t51217*t52652 + t51436*t52660) + 0.2*(-1.*t52425*t52460 - 1.*t51436*t52652 - 1.*t51217*t52688))*var2[19] + (t30613*t31883 + t36017*t36901 + t44790*t44801 + 0.2*(1.000000000009*t29312*t36901 - 1.*t31883*t44807 - 1.*t44801*t44812) - 0.099999*(-1.8e-11*t29312*t31883 + t44801*t44807 + t36901*t47353) - 0.3*(-1.000000000009*t29312*t44801 + t31883*t47353 + t36901*t49058))*var2[21];
  p_output1[1]=var2[1] + (-0.2000000000018*t31092*t31184*t56811 + t52733*t59444 + 6.000000000054e-7*t30980*t59596 + t52405*t59626 + t51404*t59705 + t50631*t59920 - 0.099999*(t52636*t59626 + t52564*t59705 + t52460*t59920) - 0.3*(t52564*t59626 + t52660*t59705 + t52652*t59920) + 0.2*(-1.*t52460*t59626 - 1.*t52652*t59705 - 1.*t52688*t59920))*var2[3] + (0.2000000000018*t31184*t31275*t53062 - 6.000000000054e-7*t30980*t31092*t31802*t53062 + t31092*t31101*t52733*t53062 + t52405*t53099 + t51404*t53769 + t50631*t54466 - 0.099999*(t52636*t53099 + t52564*t53769 + t52460*t54466) - 0.3*(t52564*t53099 + t52660*t53769 + t52652*t54466) + 0.2*(-1.*t52460*t53099 - 1.*t52652*t53769 - 1.*t52688*t54466))*var2[4] + (6.000000000054e-7*t30980*t61214 + t52733*t61239 + t52405*t61245 + t51404*t61424 + t50631*t61562 - 0.099999*(t52636*t61245 + t52564*t61424 + t52460*t61562) - 0.3*(t52564*t61245 + t52660*t61424 + t52652*t61562) + 0.2*(-1.*t52460*t61245 - 1.*t52652*t61424 - 1.*t52688*t61562))*var2[5] + (-0.2000000000018*t30647*t31092*t53062 + 6.000000000054e-7*t31184*t61239 - 0.2000000000018*t31184*t62583 + t50631*t69114 + t52405*t69127 + t51404*t69133 - 0.099999*(t52460*t69114 + t52636*t69127 + t52564*t69133) + 0.2*(-1.*t52688*t69114 - 1.*t52460*t69127 - 1.*t52652*t69133) - 0.3*(t52652*t69114 + t52564*t69127 + t52660*t69133))*var2[19] + (t30613*t62637 + t36017*t62670 + t44790*t62738 - 0.3*(t47353*t62637 + t49058*t62670 - 1.000000000009*t29312*t62738) - 0.099999*(-1.8e-11*t29312*t62637 + t47353*t62670 + t44807*t62738) + 0.2*(-1.*t44807*t62637 + 1.000000000009*t29312*t62670 - 1.*t44812*t62738))*var2[21];
  p_output1[2]=var2[2] + (-0.2000000000018*t31092*t31184*t53062 + 6.000000000054e-7*t30980*t61239 + t52733*t62583 + t52405*t62637 + t51404*t62670 + t50631*t62738 - 0.099999*(t52636*t62637 + t52564*t62670 + t52460*t62738) - 0.3*(t52564*t62637 + t52660*t62670 + t52652*t62738) + 0.2*(-1.*t52460*t62637 - 1.*t52652*t62670 - 1.*t52688*t62738))*var2[3] + (-0.2000000000018*t31184*t31275*t56811 + 6.000000000054e-7*t30980*t31092*t31802*t56811 - 1.*t31092*t31101*t52733*t56811 + t52405*t70158 + t51404*t70549 + t50631*t70562 - 0.099999*(t52636*t70158 + t52564*t70549 + t52460*t70562) - 0.3*(t52564*t70158 + t52660*t70549 + t52652*t70562) + 0.2*(-1.*t52460*t70158 - 1.*t52652*t70549 - 1.*t52688*t70562))*var2[4] + (6.000000000054e-7*t30980*t59444 + t52733*t70676 + t52405*t70833 + t51404*t71128 + t50631*t71249 - 0.099999*(t52636*t70833 + t52564*t71128 + t52460*t71249) - 0.3*(t52564*t70833 + t52660*t71128 + t52652*t71249) + 0.2*(-1.*t52460*t70833 - 1.*t52652*t71128 - 1.*t52688*t71249))*var2[5] + (0.2000000000018*t30647*t31092*t56811 + 6.000000000054e-7*t31184*t70676 - 0.2000000000018*t31184*t71627 + t50631*t71835 + t52405*t71841 + t51404*t71852 - 0.099999*(t52460*t71835 + t52636*t71841 + t52564*t71852) + 0.2*(-1.*t52688*t71835 - 1.*t52460*t71841 - 1.*t52652*t71852) - 0.3*(t52652*t71835 + t52564*t71841 + t52660*t71852))*var2[19] + (t30613*t71631 + t36017*t71652 + t44790*t71719 - 0.3*(t47353*t71631 + t49058*t71652 - 1.000000000009*t29312*t71719) - 0.099999*(-1.8e-11*t29312*t71631 + t47353*t71652 + t44807*t71719) + 0.2*(-1.*t44807*t71631 + 1.000000000009*t29312*t71652 - 1.*t44812*t71719))*var2[21];
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

#include "impact_velocity_RightBackFoot.hh"

namespace Flight2
{

void impact_velocity_RightBackFoot_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
