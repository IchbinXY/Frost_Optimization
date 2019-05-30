/*
 * Automatically Generated from Mathematica.
 * Wed 29 May 2019 23:56:35 GMT-04:00
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
  double t1502;
  double t4412;
  double t6396;
  double t29968;
  double t30015;
  double t30042;
  double t30060;
  double t29307;
  double t29399;
  double t30156;
  double t31066;
  double t31096;
  double t31226;
  double t4255;
  double t27298;
  double t31526;
  double t30965;
  double t31133;
  double t31160;
  double t31206;
  double t31244;
  double t31288;
  double t31752;
  double t31771;
  double t31826;
  double t32012;
  double t31515;
  double t32813;
  double t33082;
  double t33225;
  double t33327;
  double t33402;
  double t34379;
  double t35332;
  double t35392;
  double t36032;
  double t35399;
  double t37788;
  double t37641;
  double t38123;
  double t38104;
  double t38107;
  double t38206;
  double t38163;
  double t38168;
  double t38170;
  double t38175;
  double t38312;
  double t38253;
  double t38277;
  double t38301;
  double t38303;
  double t38306;
  double t38308;
  double t38318;
  double t41366;
  double t38191;
  double t39363;
  double t40427;
  double t38313;
  double t38293;
  double t38295;
  double t38296;
  double t38298;
  double t38299;
  double t38188;
  double t38193;
  double t38198;
  double t38216;
  double t38224;
  double t37886;
  double t38120;
  double t38127;
  double t38128;
  double t38151;
  double t43227;
  double t43228;
  double t41367;
  double t43234;
  double t43289;
  double t43291;
  double t43301;
  double t43310;
  double t43320;
  double t41442;
  double t38492;
  double t38632;
  double t41472;
  double t41709;
  double t42040;
  double t42655;
  double t44509;
  double t44511;
  double t44555;
  double t44606;
  double t44608;
  double t44609;
  double t44610;
  double t44613;
  double t44646;
  double t44650;
  double t44652;
  double t44653;
  double t44806;
  double t44831;
  double t44834;
  double t44835;
  double t44836;
  double t44838;
  double t44839;
  double t44840;
  double t44841;
  double t44843;
  double t44844;
  double t44845;
  double t44846;
  double t44894;
  double t44898;
  double t44899;
  double t44905;
  double t44915;
  double t44929;
  double t44931;
  double t44938;
  double t44966;
  double t44968;
  double t44980;
  double t45006;
  double t45007;
  double t45008;
  double t45010;
  double t45012;
  double t45013;
  double t45014;
  double t45015;
  double t45667;
  double t45812;
  double t45815;
  double t46126;
  double t47107;
  double t47168;
  double t47248;
  double t47360;
  double t47361;
  double t47656;
  double t47667;
  double t47670;
  double t47748;
  double t47749;
  double t47769;
  double t28416;
  double t29456;
  double t29688;
  double t29857;
  double t31351;
  double t31627;
  double t31674;
  double t31689;
  double t31734;
  double t48481;
  double t48484;
  double t48571;
  double t32332;
  double t32421;
  double t32450;
  double t32491;
  double t32800;
  double t48480;
  double t48576;
  double t48818;
  double t48917;
  double t48920;
  double t48943;
  double t48990;
  double t35403;
  double t49102;
  double t49129;
  double t49164;
  double t49172;
  double t36711;
  double t49406;
  double t49409;
  double t49416;
  double t49420;
  double t49494;
  double t49496;
  double t49590;
  double t49601;
  double t49745;
  double t49746;
  double t50181;
  double t50185;
  double t50189;
  double t50191;
  double t50201;
  double t50204;
  double t50206;
  double t50213;
  double t50232;
  double t50234;
  double t50235;
  double t50236;
  double t50369;
  double t50370;
  double t50373;
  double t50390;
  double t50392;
  double t50402;
  double t50413;
  double t50427;
  double t50429;
  double t50449;
  double t50450;
  double t50513;
  double t50533;
  double t50542;
  double t50509;
  double t50548;
  double t50549;
  double t50550;
  double t50557;
  double t50563;
  double t50564;
  double t50568;
  double t50570;
  double t50574;
  double t50578;
  double t50644;
  double t50649;
  double t50651;
  double t50652;
  double t50654;
  double t50655;
  double t50662;
  double t50664;
  double t50671;
  double t50676;
  t1502 = Cos(var1[12]);
  t4412 = Sin(var1[12]);
  t6396 = -3.e-6*t4412;
  t29968 = Cos(var1[10]);
  t30015 = -1.*t29968;
  t30042 = 1. + t30015;
  t30060 = Cos(var1[4]);
  t29307 = 3.e-6*t1502;
  t29399 = t29307 + t6396;
  t30156 = Cos(var1[5]);
  t31066 = Sin(var1[10]);
  t31096 = Sin(var1[4]);
  t31226 = Sin(var1[5]);
  t4255 = -3.e-6*t1502;
  t27298 = t4255 + t6396;
  t31526 = -9.e-12*t4412;
  t30965 = 3.e-6*t30042*t30060*t30156;
  t31133 = -3.e-6*t31066*t31096;
  t31160 = -9.e-12*t30042;
  t31206 = 1. + t31160;
  t31244 = -1.*t31206*t30060*t31226;
  t31288 = t30965 + t31133 + t31244;
  t31752 = t29968*t30060*t30156;
  t31771 = t31066*t31096;
  t31826 = -3.e-6*t30042*t30060*t31226;
  t32012 = t31752 + t31771 + t31826;
  t31515 = -1.*t1502;
  t32813 = -1.*t30060*t30156*t31066;
  t33082 = -1.000000000009*t30042;
  t33225 = 1. + t33082;
  t33327 = t33225*t31096;
  t33402 = -3.e-6*t30060*t31066*t31226;
  t34379 = t32813 + t33327 + t33402;
  t35332 = 3.e-6*t4412;
  t35392 = t29307 + t35332;
  t36032 = t4255 + t35332;
  t35399 = 9.e-12*t4412;
  t37788 = 1. + t31515;
  t37641 = 3.e-13*var1[12];
  t38123 = -9.e-12*t37788;
  t38104 = -3.e-6*t37788;
  t38107 = t38104 + t6396;
  t38206 = t38104 + t35332;
  t38163 = -1.*t29968*t30060*t30156;
  t38168 = -1.000000000009*t31066*t31096;
  t38170 = -3.e-6*t29968*t30060*t31226;
  t38175 = t38163 + t38168 + t38170;
  t38312 = 3.e-6*t37788;
  t38253 = t29968*t31096;
  t38277 = t32813 + t38253 + t33402;
  t38301 = 3.e-6*t30060*t30156*t31066;
  t38303 = -3.e-6*t29968*t31096;
  t38306 = 9.e-12*t30060*t31066*t31226;
  t38308 = t38301 + t38303 + t38306;
  t38318 = t38312 + t6396;
  t41366 = 9.e-12*t37788;
  t38191 = -1.*t4412;
  t39363 = -1.000000000009*t37788;
  t40427 = 1. + t39363;
  t38313 = t38312 + t35332;
  t38293 = 1.e-7*var1[12];
  t38295 = 5.4e-18*t37788;
  t38296 = -0.200000000003*t38107;
  t38298 = 0.100000000003*t38206;
  t38299 = t38293 + t38295 + t38296 + t38298;
  t38188 = -0.2000000000048*t37788;
  t38193 = t38123 + t38191;
  t38198 = 0.100000000003*t38193;
  t38216 = 3.e-7*t38206;
  t38224 = t37641 + t38188 + t38198 + t38216;
  t37886 = 0.1000000000039*t37788;
  t38120 = 3.e-7*t38107;
  t38127 = t38123 + t4412;
  t38128 = -0.200000000003*t38127;
  t38151 = t37641 + t37886 + t38120 + t38128;
  t43227 = -1.*t31206*t30060*t30156;
  t43228 = t43227 + t31826;
  t41367 = t41366 + t4412;
  t43234 = -3.e-6*t30042*t30060*t30156;
  t43289 = -1.*t29968*t30060*t31226;
  t43291 = t43234 + t43289;
  t43301 = -3.e-6*t30060*t30156*t31066;
  t43310 = t30060*t31066*t31226;
  t43320 = t43301 + t43310;
  t41442 = t41366 + t38191;
  t38492 = -1.8e-11*t37788;
  t38632 = 1. + t38492;
  t41472 = -1.8e-12*t30042;
  t41709 = -1. + t29968;
  t42040 = 0.2*t41709;
  t42655 = t41472 + t42040;
  t44509 = -3.e-6*t30060*t31066;
  t44511 = -3.e-6*t30042*t30156*t31096;
  t44555 = t31206*t31096*t31226;
  t44606 = t44509 + t44511 + t44555;
  t44608 = t30060*t31066;
  t44609 = -1.*t29968*t30156*t31096;
  t44610 = 3.e-6*t30042*t31096*t31226;
  t44613 = t44608 + t44609 + t44610;
  t44646 = t33225*t30060;
  t44650 = t30156*t31066*t31096;
  t44652 = 3.e-6*t31066*t31096*t31226;
  t44653 = t44646 + t44650 + t44652;
  t44806 = Sin(var1[3]);
  t44831 = 3.e-6*t30042*t30060*t30156*t44806;
  t44834 = -3.e-6*t31066*t44806*t31096;
  t44835 = -1.*t31206*t30060*t44806*t31226;
  t44836 = t44831 + t44834 + t44835;
  t44838 = t29968*t30060*t30156*t44806;
  t44839 = t31066*t44806*t31096;
  t44840 = -3.e-6*t30042*t30060*t44806*t31226;
  t44841 = t44838 + t44839 + t44840;
  t44843 = -1.*t30060*t30156*t31066*t44806;
  t44844 = t33225*t44806*t31096;
  t44845 = -3.e-6*t30060*t31066*t44806*t31226;
  t44846 = t44843 + t44844 + t44845;
  t44894 = Cos(var1[3]);
  t44898 = t44894*t30156*t31096;
  t44899 = -1.*t44806*t31226;
  t44905 = t44898 + t44899;
  t44915 = -1.*t30156*t44806;
  t44929 = -1.*t44894*t31096*t31226;
  t44931 = t44915 + t44929;
  t44938 = 3.e-6*t44894*t30060*t31066;
  t44966 = 3.e-6*t30042*t44905;
  t44968 = t31206*t44931;
  t44980 = t44938 + t44966 + t44968;
  t45006 = -1.*t44894*t30060*t31066;
  t45007 = t29968*t44905;
  t45008 = 3.e-6*t30042*t44931;
  t45010 = t45006 + t45007 + t45008;
  t45012 = -1.*t33225*t44894*t30060;
  t45013 = -1.*t31066*t44905;
  t45014 = 3.e-6*t31066*t44931;
  t45015 = t45012 + t45013 + t45014;
  t45667 = -1.*t30156*t44806*t31096;
  t45812 = -1.*t44894*t31226;
  t45815 = t45667 + t45812;
  t46126 = t44894*t30156;
  t47107 = -1.*t44806*t31096*t31226;
  t47168 = t46126 + t47107;
  t47248 = t31206*t45815;
  t47360 = 3.e-6*t30042*t47168;
  t47361 = t47248 + t47360;
  t47656 = 3.e-6*t30042*t45815;
  t47667 = t29968*t47168;
  t47670 = t47656 + t47667;
  t47748 = 3.e-6*t31066*t45815;
  t47749 = -1.*t31066*t47168;
  t47769 = t47748 + t47749;
  t28416 = -0.200000000003*t27298;
  t29456 = 0.100000000003*t29399;
  t29688 = 5.4e-18*t4412;
  t29857 = 1.e-7 + t28416 + t29456 + t29688;
  t31351 = 3.e-7*t29399;
  t31627 = t31515 + t31526;
  t31674 = 0.100000000003*t31627;
  t31689 = -0.2000000000048*t4412;
  t31734 = 3.e-13 + t31351 + t31674 + t31689;
  t48481 = t30156*t44806*t31096;
  t48484 = t44894*t31226;
  t48571 = t48481 + t48484;
  t32332 = 3.e-7*t27298;
  t32421 = t1502 + t31526;
  t32450 = -0.200000000003*t32421;
  t32491 = 0.1000000000039*t4412;
  t32800 = 3.e-13 + t32332 + t32450 + t32491;
  t48480 = 3.e-6*t30060*t31066*t44806;
  t48576 = 3.e-6*t30042*t48571;
  t48818 = t31206*t47168;
  t48917 = t48480 + t48576 + t48818;
  t48920 = -1.*t30060*t31066*t44806;
  t48943 = t29968*t48571;
  t48990 = t48920 + t48943 + t47360;
  t35403 = t31515 + t35399;
  t49102 = -1.*t33225*t30060*t44806;
  t49129 = -1.*t31066*t48571;
  t49164 = 3.e-6*t31066*t47168;
  t49172 = t49102 + t49129 + t49164;
  t36711 = t1502 + t35399;
  t49406 = 1.000000000009*t30060*t31066*t44806;
  t49409 = -1.*t29968*t48571;
  t49416 = 3.e-6*t29968*t47168;
  t49420 = t49406 + t49409 + t49416;
  t49494 = 3.e-6*t29968*t30060*t44806;
  t49496 = 3.e-6*t31066*t48571;
  t49590 = -9.e-12*t31066*t47168;
  t49601 = t49494 + t49496 + t49590;
  t49745 = -1.*t29968*t30060*t44806;
  t49746 = t49745 + t49129 + t49164;
  t50181 = -3.e-6*t30042*t44894*t30060*t30156;
  t50185 = 3.e-6*t44894*t31066*t31096;
  t50189 = t31206*t44894*t30060*t31226;
  t50191 = t50181 + t50185 + t50189;
  t50201 = -1.*t29968*t44894*t30060*t30156;
  t50204 = -1.*t44894*t31066*t31096;
  t50206 = 3.e-6*t30042*t44894*t30060*t31226;
  t50213 = t50201 + t50204 + t50206;
  t50232 = t44894*t30060*t30156*t31066;
  t50234 = -1.*t33225*t44894*t31096;
  t50235 = 3.e-6*t44894*t30060*t31066*t31226;
  t50236 = t50232 + t50234 + t50235;
  t50369 = t30156*t44806;
  t50370 = t44894*t31096*t31226;
  t50373 = t50369 + t50370;
  t50390 = t31206*t44905;
  t50392 = 3.e-6*t30042*t50373;
  t50402 = t50390 + t50392;
  t50413 = t29968*t50373;
  t50427 = t44966 + t50413;
  t50429 = 3.e-6*t31066*t44905;
  t50449 = -1.*t31066*t50373;
  t50450 = t50429 + t50449;
  t50513 = -1.*t44894*t30156*t31096;
  t50533 = t44806*t31226;
  t50542 = t50513 + t50533;
  t50509 = -3.e-6*t44894*t30060*t31066;
  t50548 = 3.e-6*t30042*t50542;
  t50549 = t31206*t50373;
  t50550 = t50509 + t50548 + t50549;
  t50557 = t44894*t30060*t31066;
  t50563 = t29968*t50542;
  t50564 = t50557 + t50563 + t50392;
  t50568 = t33225*t44894*t30060;
  t50570 = -1.*t31066*t50542;
  t50574 = 3.e-6*t31066*t50373;
  t50578 = t50568 + t50570 + t50574;
  t50644 = -1.000000000009*t44894*t30060*t31066;
  t50649 = -1.*t29968*t50542;
  t50651 = 3.e-6*t29968*t50373;
  t50652 = t50644 + t50649 + t50651;
  t50654 = -3.e-6*t29968*t44894*t30060;
  t50655 = 3.e-6*t31066*t50542;
  t50662 = -9.e-12*t31066*t50373;
  t50664 = t50654 + t50655 + t50662;
  t50671 = t29968*t44894*t30060;
  t50676 = t50671 + t50570 + t50574;
  p_output1[0]=var2[0] + (0.2000000000018*t30060*t31066 + 6.000000000054e-7*t30042*t31096*t31226 - 1.*t30156*t31096*t42655 + t38299*t44606 + t38224*t44613 + t38151*t44653 + 0.100001*(t38632*t44606 + t38318*t44613 + t38313*t44653) - 0.3*(t38318*t44606 + t41367*t44613 + t40427*t44653) + 0.2*(-1.*t38313*t44606 - 1.*t40427*t44613 - 1.*t41442*t44653))*var2[4] + (-6.000000000054e-7*t30042*t30060*t30156 - 1.*t30060*t31226*t42655 + t38299*t43228 + t38224*t43291 + t38151*t43320 + 0.100001*(t38632*t43228 + t38318*t43291 + t38313*t43320) - 0.3*(t38318*t43228 + t41367*t43291 + t40427*t43320) + 0.2*(-1.*t38313*t43228 - 1.*t40427*t43291 - 1.*t41442*t43320))*var2[5] + (-0.2000000000018*t30060*t30156*t31066 + 0.2000000000018*t29968*t31096 - 6.000000000054e-7*t30060*t31066*t31226 + t38151*t38175 + t38224*t38277 + t38299*t38308 + 0.100001*(t38175*t38313 + t38277*t38318 + t38308*t38632) - 0.3*(t38308*t38318 + t38175*t40427 + t38277*t41367) + 0.2*(-1.*t38308*t38313 - 1.*t38277*t40427 - 1.*t38175*t41442))*var2[10] + (t29857*t31288 + t31734*t32012 + t32800*t34379 + 0.100001*(t34379*t35392 + t32012*t36032 - 1.8e-11*t31288*t4412) + 0.2*(-1.*t31288*t35392 - 1.*t34379*t35403 + 1.000000000009*t32012*t4412) - 0.3*(t31288*t36032 + t32012*t36711 - 1.000000000009*t34379*t4412))*var2[12];
  p_output1[1]=var2[1] + (-0.2000000000018*t30060*t31066*t44894 + t42655*t44905 + 6.000000000054e-7*t30042*t44931 + t38299*t44980 + t38224*t45010 + t38151*t45015 + 0.100001*(t38632*t44980 + t38318*t45010 + t38313*t45015) - 0.3*(t38318*t44980 + t41367*t45010 + t40427*t45015) + 0.2*(-1.*t38313*t44980 - 1.*t40427*t45010 - 1.*t41442*t45015))*var2[3] + (0.2000000000018*t31066*t31096*t44806 - 6.000000000054e-7*t30042*t30060*t31226*t44806 + t30060*t30156*t42655*t44806 + t38299*t44836 + t38224*t44841 + t38151*t44846 + 0.100001*(t38632*t44836 + t38318*t44841 + t38313*t44846) - 0.3*(t38318*t44836 + t41367*t44841 + t40427*t44846) + 0.2*(-1.*t38313*t44836 - 1.*t40427*t44841 - 1.*t41442*t44846))*var2[4] + (6.000000000054e-7*t30042*t45815 + t42655*t47168 + t38299*t47361 + t38224*t47670 + t38151*t47769 + 0.100001*(t38632*t47361 + t38318*t47670 + t38313*t47769) - 0.3*(t38318*t47361 + t41367*t47670 + t40427*t47769) + 0.2*(-1.*t38313*t47361 - 1.*t40427*t47670 - 1.*t41442*t47769))*var2[5] + (-0.2000000000018*t29968*t30060*t44806 + 6.000000000054e-7*t31066*t47168 - 0.2000000000018*t31066*t48571 + t38151*t49420 + t38299*t49601 + t38224*t49746 + 0.100001*(t38313*t49420 + t38632*t49601 + t38318*t49746) + 0.2*(-1.*t41442*t49420 - 1.*t38313*t49601 - 1.*t40427*t49746) - 0.3*(t40427*t49420 + t38318*t49601 + t41367*t49746))*var2[10] + (t29857*t48917 + t31734*t48990 + t32800*t49172 + 0.100001*(-1.8e-11*t4412*t48917 + t36032*t48990 + t35392*t49172) + 0.2*(-1.*t35392*t48917 + 1.000000000009*t4412*t48990 - 1.*t35403*t49172) - 0.3*(t36032*t48917 + t36711*t48990 - 1.000000000009*t4412*t49172))*var2[12];
  p_output1[2]=var2[2] + (-0.2000000000018*t30060*t31066*t44806 + 6.000000000054e-7*t30042*t47168 + t42655*t48571 + t38299*t48917 + t38224*t48990 + t38151*t49172 + 0.100001*(t38632*t48917 + t38318*t48990 + t38313*t49172) - 0.3*(t38318*t48917 + t41367*t48990 + t40427*t49172) + 0.2*(-1.*t38313*t48917 - 1.*t40427*t48990 - 1.*t41442*t49172))*var2[3] + (-0.2000000000018*t31066*t31096*t44894 + 6.000000000054e-7*t30042*t30060*t31226*t44894 - 1.*t30060*t30156*t42655*t44894 + t38299*t50191 + t38224*t50213 + t38151*t50236 + 0.100001*(t38632*t50191 + t38318*t50213 + t38313*t50236) - 0.3*(t38318*t50191 + t41367*t50213 + t40427*t50236) + 0.2*(-1.*t38313*t50191 - 1.*t40427*t50213 - 1.*t41442*t50236))*var2[4] + (6.000000000054e-7*t30042*t44905 + t42655*t50373 + t38299*t50402 + t38224*t50427 + t38151*t50450 + 0.100001*(t38632*t50402 + t38318*t50427 + t38313*t50450) - 0.3*(t38318*t50402 + t41367*t50427 + t40427*t50450) + 0.2*(-1.*t38313*t50402 - 1.*t40427*t50427 - 1.*t41442*t50450))*var2[5] + (0.2000000000018*t29968*t30060*t44894 + 6.000000000054e-7*t31066*t50373 - 0.2000000000018*t31066*t50542 + t38151*t50652 + t38299*t50664 + t38224*t50676 + 0.100001*(t38313*t50652 + t38632*t50664 + t38318*t50676) + 0.2*(-1.*t41442*t50652 - 1.*t38313*t50664 - 1.*t40427*t50676) - 0.3*(t40427*t50652 + t38318*t50664 + t41367*t50676))*var2[10] + (t29857*t50550 + t31734*t50564 + t32800*t50578 + 0.100001*(-1.8e-11*t4412*t50550 + t36032*t50564 + t35392*t50578) + 0.2*(-1.*t35392*t50550 + 1.000000000009*t4412*t50564 - 1.*t35403*t50578) - 0.3*(t36032*t50550 + t36711*t50564 - 1.000000000009*t4412*t50578))*var2[12];
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

#include "dh_LeftBackFoot_BackStance.hh"

namespace BackStance
{

void dh_LeftBackFoot_BackStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
