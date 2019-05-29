/*
 * Automatically Generated from Mathematica.
 * Tue 28 May 2019 23:14:24 GMT-04:00
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
  double t282;
  double t579;
  double t670;
  double t673;
  double t707;
  double t750;
  double t731;
  double t787;
  double t850;
  double t858;
  double t860;
  double t898;
  double t903;
  double t355;
  double t361;
  double t736;
  double t795;
  double t799;
  double t830;
  double t835;
  double t839;
  double t924;
  double t928;
  double t986;
  double t904;
  double t907;
  double t1020;
  double t947;
  double t948;
  double t951;
  double t952;
  double t955;
  double t960;
  double t1089;
  double t1091;
  double t1096;
  double t1097;
  double t1153;
  double t1154;
  double t1157;
  double t1166;
  double t1167;
  double t1168;
  double t1172;
  double t19604;
  double t23099;
  double t6536;
  double t1021;
  double t1173;
  double t31678;
  double t846;
  double t889;
  double t915;
  double t940;
  double t944;
  double t46635;
  double t46803;
  double t46805;
  double t48377;
  double t48421;
  double t48444;
  double t995;
  double t1084;
  double t1085;
  double t1087;
  double t1088;
  double t1115;
  double t1118;
  double t1149;
  double t1150;
  double t1151;
  double t48689;
  double t48733;
  double t48734;
  double t48757;
  double t13179;
  double t48760;
  double t48761;
  double t48765;
  double t48797;
  double t48816;
  double t48821;
  double t48822;
  double t48824;
  double t38241;
  double t41423;
  double t41615;
  double t50184;
  double t50217;
  double t50340;
  double t50353;
  double t50368;
  double t50412;
  double t50420;
  double t50444;
  double t50636;
  double t50683;
  double t50732;
  double t50733;
  double t51117;
  double t51123;
  double t51125;
  double t51134;
  double t51182;
  double t51186;
  double t51190;
  double t51193;
  double t51199;
  double t51200;
  double t51206;
  double t51207;
  double t52311;
  double t52325;
  double t52341;
  double t52376;
  double t52435;
  double t52598;
  double t52601;
  double t52606;
  double t52662;
  double t52689;
  double t52693;
  double t52695;
  double t55037;
  double t55041;
  double t55063;
  double t55158;
  double t55176;
  double t55179;
  double t55192;
  double t55203;
  double t55210;
  double t55808;
  double t55827;
  double t55851;
  double t56020;
  double t56148;
  double t56340;
  double t56395;
  double t56404;
  double t56409;
  double t56418;
  double t56428;
  double t56902;
  double t56927;
  double t57065;
  double t57196;
  double t57199;
  double t57242;
  double t57355;
  double t57356;
  double t57361;
  double t57370;
  double t57392;
  double t57844;
  double t57884;
  double t57924;
  double t58352;
  double t58443;
  double t58664;
  double t58925;
  double t59035;
  double t59549;
  double t59556;
  double t59616;
  double t59644;
  double t61488;
  double t61534;
  double t61621;
  double t61652;
  double t61653;
  double t61656;
  double t61666;
  double t61721;
  double t61724;
  double t61727;
  double t61734;
  double t61753;
  double t61755;
  double t61764;
  double t61813;
  double t62018;
  double t62022;
  double t62025;
  double t62028;
  double t62032;
  double t62036;
  double t62052;
  double t62057;
  double t62079;
  double t62082;
  double t62253;
  double t62259;
  double t62223;
  double t62246;
  double t62330;
  double t62275;
  double t62277;
  double t62301;
  double t62308;
  double t62368;
  double t62386;
  double t62395;
  double t62591;
  double t62594;
  double t62645;
  double t62944;
  double t62793;
  double t62248;
  double t62262;
  double t62267;
  double t62271;
  double t62319;
  double t62342;
  double t62351;
  double t62353;
  double t62357;
  double t62402;
  double t62407;
  double t62410;
  double t62504;
  double t62505;
  double t63071;
  double t63106;
  double t63110;
  double t63115;
  double t63133;
  double t63394;
  double t63475;
  double t62800;
  double t63595;
  double t63599;
  double t63033;
  t282 = Cos(var1[3]);
  t579 = Cos(var1[15]);
  t670 = -1.*t579;
  t673 = 1. + t670;
  t707 = Cos(var1[5]);
  t750 = Sin(var1[3]);
  t731 = Sin(var1[4]);
  t787 = Sin(var1[5]);
  t850 = Cos(var1[17]);
  t858 = -1.*t850;
  t860 = 1. + t858;
  t898 = -3.e-6*t860;
  t903 = Sin(var1[17]);
  t355 = Cos(var1[4]);
  t361 = Sin(var1[15]);
  t736 = t282*t707*t731;
  t795 = -1.*t750*t787;
  t799 = t736 + t795;
  t830 = -1.*t707*t750;
  t835 = -1.*t282*t731*t787;
  t839 = t830 + t835;
  t924 = 3.e-6*t903;
  t928 = t898 + t924;
  t986 = 9.e-13*var1[17];
  t904 = -3.e-6*t903;
  t907 = t898 + t904;
  t1020 = -9.e-12*t860;
  t947 = 3.e-6*t282*t355*t361;
  t948 = 3.e-6*t673*t799;
  t951 = -9.e-12*t673;
  t952 = 1. + t951;
  t955 = t952*t839;
  t960 = t947 + t948 + t955;
  t1089 = -1.*t282*t355*t361;
  t1091 = t579*t799;
  t1096 = 3.e-6*t673*t839;
  t1097 = t1089 + t1091 + t1096;
  t1153 = -1.000000000009*t673;
  t1154 = 1. + t1153;
  t1157 = -1.*t1154*t282*t355;
  t1166 = -1.*t361*t799;
  t1167 = 3.e-6*t361*t839;
  t1168 = t1157 + t1166 + t1167;
  t1172 = 3.e-6*t860;
  t19604 = -1.000000000009*t860;
  t23099 = 1. + t19604;
  t6536 = 9.e-12*t860;
  t1021 = -1.*t903;
  t1173 = t1172 + t904;
  t31678 = t1172 + t924;
  t846 = 3.e-7*var1[17];
  t889 = -1.62e-17*t860;
  t915 = 0.2*t907;
  t940 = 0.1*t928;
  t944 = t846 + t889 + t915 + t940;
  t46635 = t707*t750*t731;
  t46803 = t282*t787;
  t46805 = t46635 + t46803;
  t48377 = t282*t707;
  t48421 = -1.*t750*t731*t787;
  t48444 = t48377 + t48421;
  t995 = 0.2000000000018*t860;
  t1084 = t1020 + t1021;
  t1085 = 0.1*t1084;
  t1087 = -9.e-7*t928;
  t1088 = t986 + t995 + t1085 + t1087;
  t1115 = 0.1000000000009*t860;
  t1118 = -9.e-7*t907;
  t1149 = t1020 + t903;
  t1150 = 0.2*t1149;
  t1151 = t986 + t1115 + t1118 + t1150;
  t48689 = 3.e-6*t355*t361*t750;
  t48733 = 3.e-6*t673*t46805;
  t48734 = t952*t48444;
  t48757 = t48689 + t48733 + t48734;
  t13179 = t6536 + t903;
  t48760 = -1.*t355*t361*t750;
  t48761 = t579*t46805;
  t48765 = 3.e-6*t673*t48444;
  t48797 = t48760 + t48761 + t48765;
  t48816 = -1.*t1154*t355*t750;
  t48821 = -1.*t361*t46805;
  t48822 = 3.e-6*t361*t48444;
  t48824 = t48816 + t48821 + t48822;
  t38241 = t6536 + t1021;
  t41423 = -1.8e-11*t860;
  t41615 = 1. + t41423;
  t50184 = -3.e-6*t673*t282*t355*t707;
  t50217 = 3.e-6*t282*t361*t731;
  t50340 = t952*t282*t355*t787;
  t50353 = t50184 + t50217 + t50340;
  t50368 = -1.*t579*t282*t355*t707;
  t50412 = -1.*t282*t361*t731;
  t50420 = 3.e-6*t673*t282*t355*t787;
  t50444 = t50368 + t50412 + t50420;
  t50636 = t282*t355*t707*t361;
  t50683 = -1.*t1154*t282*t731;
  t50732 = 3.e-6*t282*t355*t361*t787;
  t50733 = t50636 + t50683 + t50732;
  t51117 = 3.e-6*t673*t355*t707*t750;
  t51123 = -3.e-6*t361*t750*t731;
  t51125 = -1.*t952*t355*t750*t787;
  t51134 = t51117 + t51123 + t51125;
  t51182 = t579*t355*t707*t750;
  t51186 = t361*t750*t731;
  t51190 = -3.e-6*t673*t355*t750*t787;
  t51193 = t51182 + t51186 + t51190;
  t51199 = -1.*t355*t707*t361*t750;
  t51200 = t1154*t750*t731;
  t51206 = -3.e-6*t355*t361*t750*t787;
  t51207 = t51199 + t51200 + t51206;
  t52311 = -3.e-6*t355*t361;
  t52325 = -3.e-6*t673*t707*t731;
  t52341 = t952*t731*t787;
  t52376 = t52311 + t52325 + t52341;
  t52435 = t355*t361;
  t52598 = -1.*t579*t707*t731;
  t52601 = 3.e-6*t673*t731*t787;
  t52606 = t52435 + t52598 + t52601;
  t52662 = t1154*t355;
  t52689 = t707*t361*t731;
  t52693 = 3.e-6*t361*t731*t787;
  t52695 = t52662 + t52689 + t52693;
  t55037 = -1.*t952*t355*t707;
  t55041 = -3.e-6*t673*t355*t787;
  t55063 = t55037 + t55041;
  t55158 = -3.e-6*t673*t355*t707;
  t55176 = -1.*t579*t355*t787;
  t55179 = t55158 + t55176;
  t55192 = -3.e-6*t355*t707*t361;
  t55203 = t355*t361*t787;
  t55210 = t55192 + t55203;
  t55808 = t707*t750;
  t55827 = t282*t731*t787;
  t55851 = t55808 + t55827;
  t56020 = t952*t799;
  t56148 = 3.e-6*t673*t55851;
  t56340 = t56020 + t56148;
  t56395 = t579*t55851;
  t56404 = t948 + t56395;
  t56409 = 3.e-6*t361*t799;
  t56418 = -1.*t361*t55851;
  t56428 = t56409 + t56418;
  t56902 = -1.*t707*t750*t731;
  t56927 = -1.*t282*t787;
  t57065 = t56902 + t56927;
  t57196 = t952*t57065;
  t57199 = t57196 + t48765;
  t57242 = 3.e-6*t673*t57065;
  t57355 = t579*t48444;
  t57356 = t57242 + t57355;
  t57361 = 3.e-6*t361*t57065;
  t57370 = -1.*t361*t48444;
  t57392 = t57361 + t57370;
  t57844 = -1.*t579*t355*t707;
  t57884 = -1.000000000009*t361*t731;
  t57924 = -3.e-6*t579*t355*t787;
  t58352 = t57844 + t57884 + t57924;
  t58443 = -1.*t355*t707*t361;
  t58664 = t579*t731;
  t58925 = -3.e-6*t355*t361*t787;
  t59035 = t58443 + t58664 + t58925;
  t59549 = 3.e-6*t355*t707*t361;
  t59556 = -3.e-6*t579*t731;
  t59616 = 9.e-12*t355*t361*t787;
  t59644 = t59549 + t59556 + t59616;
  t61488 = -1.*t282*t707*t731;
  t61534 = t750*t787;
  t61621 = t61488 + t61534;
  t61652 = -1.000000000009*t282*t355*t361;
  t61653 = -1.*t579*t61621;
  t61656 = 3.e-6*t579*t55851;
  t61666 = t61652 + t61653 + t61656;
  t61721 = -3.e-6*t579*t282*t355;
  t61724 = 3.e-6*t361*t61621;
  t61727 = -9.e-12*t361*t55851;
  t61734 = t61721 + t61724 + t61727;
  t61753 = t579*t282*t355;
  t61755 = -1.*t361*t61621;
  t61764 = 3.e-6*t361*t55851;
  t61813 = t61753 + t61755 + t61764;
  t62018 = 1.000000000009*t355*t361*t750;
  t62022 = -1.*t579*t46805;
  t62025 = 3.e-6*t579*t48444;
  t62028 = t62018 + t62022 + t62025;
  t62032 = 3.e-6*t579*t355*t750;
  t62036 = 3.e-6*t361*t46805;
  t62052 = -9.e-12*t361*t48444;
  t62057 = t62032 + t62036 + t62052;
  t62079 = -1.*t579*t355*t750;
  t62082 = t62079 + t48821 + t48822;
  t62253 = 3.e-6*t850;
  t62259 = t62253 + t904;
  t62223 = -3.e-6*t850;
  t62246 = t62223 + t904;
  t62330 = -9.e-12*t903;
  t62275 = 3.e-6*t673*t355*t707;
  t62277 = -3.e-6*t361*t731;
  t62301 = -1.*t952*t355*t787;
  t62308 = t62275 + t62277 + t62301;
  t62368 = t579*t355*t707;
  t62386 = t361*t731;
  t62395 = t62368 + t62386 + t55041;
  t62591 = t1154*t731;
  t62594 = t58443 + t62591 + t58925;
  t62645 = t62253 + t924;
  t62944 = t62223 + t924;
  t62793 = 9.e-12*t903;
  t62248 = 0.2*t62246;
  t62262 = 0.1*t62259;
  t62267 = -1.62e-17*t903;
  t62271 = 3.e-7 + t62248 + t62262 + t62267;
  t62319 = -9.e-7*t62259;
  t62342 = t858 + t62330;
  t62351 = 0.1*t62342;
  t62353 = 0.2000000000018*t903;
  t62357 = 9.e-13 + t62319 + t62351 + t62353;
  t62402 = -9.e-7*t62246;
  t62407 = t850 + t62330;
  t62410 = 0.2*t62407;
  t62504 = 0.1000000000009*t903;
  t62505 = 9.e-13 + t62402 + t62410 + t62504;
  t63071 = -3.e-6*t282*t355*t361;
  t63106 = 3.e-6*t673*t61621;
  t63110 = t952*t55851;
  t63115 = t63071 + t63106 + t63110;
  t63133 = t282*t355*t361;
  t63394 = t579*t61621;
  t63475 = t63133 + t63394 + t56148;
  t62800 = t858 + t62793;
  t63595 = t1154*t282*t355;
  t63599 = t63595 + t61755 + t61764;
  t63033 = t850 + t62793;
  p_output1[0]=var2[0];
  p_output1[1]=var2[1];
  p_output1[2]=var2[2];
  p_output1[3]=(t1088*t1097 + t1151*t1168 + 0.2000000000018*t282*t355*t361 + 0.2000000000018*t673*t799 - 6.000000000054e-7*t673*t839 + t944*t960 - 0.3*(t1097*t13179 + t1168*t23099 + t1173*t960) + 0.2*(t1097*t23099 + t1168*t38241 + t31678*t960) - 0.099999*(t1097*t1173 + t1168*t31678 + t41615*t960))*var2[1] + (t1088*t48797 + t1151*t48824 - 0.3*(t1173*t48757 + t13179*t48797 + t23099*t48824) - 0.099999*(t41615*t48757 + t1173*t48797 + t31678*t48824) + 0.2*(t31678*t48757 + t23099*t48797 + t38241*t48824) + 0.2000000000018*t46805*t673 - 6.000000000054e-7*t48444*t673 + 0.2000000000018*t355*t361*t750 + t48757*t944)*var2[2];
  p_output1[4]=(-0.2000000000018*t355*t361 + t1088*t52606 + t1151*t52695 - 0.3*(t1173*t52376 + t13179*t52606 + t23099*t52695) - 0.099999*(t41615*t52376 + t1173*t52606 + t31678*t52695) + 0.2*(t31678*t52376 + t23099*t52606 + t38241*t52695) - 0.2000000000018*t673*t707*t731 - 6.000000000054e-7*t673*t731*t787 + t52376*t944)*var2[0] + (t1088*t51193 + t1151*t51207 - 0.3*(t1173*t51134 + t13179*t51193 + t23099*t51207) - 0.099999*(t41615*t51134 + t1173*t51193 + t31678*t51207) + 0.2*(t31678*t51134 + t23099*t51193 + t38241*t51207) + 0.2000000000018*t355*t673*t707*t750 - 0.2000000000018*t361*t731*t750 + 6.000000000054e-7*t355*t673*t750*t787 + t51134*t944)*var2[1] + (t1088*t50444 + t1151*t50733 - 0.3*(t1173*t50353 + t13179*t50444 + t23099*t50733) - 0.099999*(t41615*t50353 + t1173*t50444 + t31678*t50733) + 0.2*(t31678*t50353 + t23099*t50444 + t38241*t50733) - 0.2000000000018*t282*t355*t673*t707 + 0.2000000000018*t282*t361*t731 - 6.000000000054e-7*t282*t355*t673*t787 + t50353*t944)*var2[2];
  p_output1[5]=(t1088*t55179 + t1151*t55210 - 0.3*(t1173*t55063 + t13179*t55179 + t23099*t55210) - 0.099999*(t41615*t55063 + t1173*t55179 + t31678*t55210) + 0.2*(t31678*t55063 + t23099*t55179 + t38241*t55210) + 6.000000000054e-7*t355*t673*t707 - 0.2000000000018*t355*t673*t787 + t55063*t944)*var2[0] + (t1088*t57356 + t1151*t57392 - 0.3*(t1173*t57199 + t13179*t57356 + t23099*t57392) - 0.099999*(t41615*t57199 + t1173*t57356 + t31678*t57392) + 0.2*(t31678*t57199 + t23099*t57356 + t38241*t57392) + 0.2000000000018*t48444*t673 - 6.000000000054e-7*t57065*t673 + t57199*t944)*var2[1] + (t1088*t56404 + t1151*t56428 - 0.3*(t1173*t56340 + t13179*t56404 + t23099*t56428) - 0.099999*(t41615*t56340 + t1173*t56404 + t31678*t56428) + 0.2*(t31678*t56340 + t23099*t56404 + t38241*t56428) + 0.2000000000018*t55851*t673 - 6.000000000054e-7*t673*t799 + t56340*t944)*var2[2];
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=(t1151*t58352 + t1088*t59035 - 0.3*(t23099*t58352 + t13179*t59035 + t1173*t59644) + 0.2*(t38241*t58352 + t23099*t59035 + t31678*t59644) - 0.099999*(t31678*t58352 + t1173*t59035 + t41615*t59644) + 0.2000000000018*t355*t361*t707 - 0.2000000000018*t579*t731 + 6.000000000054e-7*t355*t361*t787 + t59644*t944)*var2[0] + (0.2000000000018*t361*t46805 - 6.000000000054e-7*t361*t48444 + t1151*t62028 + t1088*t62082 - 0.099999*(t31678*t62028 + t41615*t62057 + t1173*t62082) - 0.3*(t23099*t62028 + t1173*t62057 + t13179*t62082) + 0.2*(t38241*t62028 + t31678*t62057 + t23099*t62082) + 0.2000000000018*t355*t579*t750 + t62057*t944)*var2[1] + (-6.000000000054e-7*t361*t55851 - 0.2000000000018*t282*t355*t579 + 0.2000000000018*t361*t61621 + t1151*t61666 + t1088*t61813 - 0.099999*(t31678*t61666 + t41615*t61734 + t1173*t61813) - 0.3*(t23099*t61666 + t1173*t61734 + t13179*t61813) + 0.2*(t38241*t61666 + t31678*t61734 + t23099*t61813) + t61734*t944)*var2[2];
  p_output1[16]=0;
  p_output1[17]=(t62271*t62308 + t62357*t62395 + t62505*t62594 - 0.099999*(t62594*t62645 + t62395*t62944 - 1.8e-11*t62308*t903) + 0.2*(t62308*t62645 + t62594*t62800 - 1.000000000009*t62395*t903) - 0.3*(t62308*t62944 + t62395*t63033 - 1.000000000009*t62594*t903))*var2[0] + (t48757*t62271 + t48797*t62357 + t48824*t62505 - 0.099999*(t48824*t62645 + t48797*t62944 - 1.8e-11*t48757*t903) + 0.2*(t48757*t62645 + t48824*t62800 - 1.000000000009*t48797*t903) - 0.3*(t48757*t62944 + t48797*t63033 - 1.000000000009*t48824*t903))*var2[1] + (t62271*t63115 + t62357*t63475 + t62505*t63599 - 0.099999*(t62944*t63475 + t62645*t63599 - 1.8e-11*t63115*t903) + 0.2*(t62645*t63115 + t62800*t63599 - 1.000000000009*t63475*t903) - 0.3*(t62944*t63115 + t63033*t63475 - 1.000000000009*t63599*t903))*var2[2];
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

#include "fRightFrontFoot_vec_FrontStance.hh"

namespace FrontStance
{

void fRightFrontFoot_vec_FrontStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
