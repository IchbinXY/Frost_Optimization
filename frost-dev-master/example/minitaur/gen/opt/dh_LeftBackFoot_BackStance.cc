/*
 * Automatically Generated from Mathematica.
 * Tue 28 May 2019 22:42:36 GMT-04:00
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
  double t504;
  double t2902;
  double t2948;
  double t4250;
  double t4318;
  double t4323;
  double t4325;
  double t3901;
  double t3999;
  double t4433;
  double t4538;
  double t4553;
  double t4628;
  double t2780;
  double t3452;
  double t4677;
  double t4495;
  double t4569;
  double t4597;
  double t4617;
  double t4631;
  double t4669;
  double t4720;
  double t4738;
  double t4860;
  double t4948;
  double t4676;
  double t5674;
  double t5681;
  double t5736;
  double t5945;
  double t6034;
  double t6035;
  double t6279;
  double t6373;
  double t7091;
  double t6396;
  double t8601;
  double t8600;
  double t12375;
  double t8788;
  double t9652;
  double t15098;
  double t13739;
  double t13890;
  double t14117;
  double t14221;
  double t15302;
  double t15107;
  double t15187;
  double t15262;
  double t15263;
  double t15266;
  double t15267;
  double t15415;
  double t15448;
  double t15067;
  double t15445;
  double t15446;
  double t15341;
  double t15192;
  double t15219;
  double t15230;
  double t15258;
  double t15261;
  double t14951;
  double t15069;
  double t15072;
  double t15104;
  double t15105;
  double t8787;
  double t12053;
  double t12423;
  double t13041;
  double t13052;
  double t15522;
  double t15552;
  double t15449;
  double t15554;
  double t15559;
  double t15664;
  double t15778;
  double t15808;
  double t15847;
  double t15454;
  double t15440;
  double t15441;
  double t15483;
  double t15484;
  double t15514;
  double t15518;
  double t17362;
  double t17364;
  double t17607;
  double t17608;
  double t17836;
  double t18539;
  double t18542;
  double t19163;
  double t19168;
  double t19386;
  double t19387;
  double t19501;
  double t19724;
  double t19728;
  double t19730;
  double t19732;
  double t19733;
  double t19765;
  double t19806;
  double t19809;
  double t19850;
  double t19854;
  double t19855;
  double t19856;
  double t19857;
  double t19908;
  double t19910;
  double t19911;
  double t19912;
  double t19916;
  double t19917;
  double t19918;
  double t19920;
  double t19926;
  double t19928;
  double t19929;
  double t19933;
  double t19934;
  double t19936;
  double t19942;
  double t19990;
  double t20016;
  double t20017;
  double t20018;
  double t21195;
  double t21594;
  double t21617;
  double t21991;
  double t22094;
  double t22153;
  double t23397;
  double t24627;
  double t24631;
  double t24637;
  double t24638;
  double t24639;
  double t24646;
  double t24647;
  double t26597;
  double t3506;
  double t4013;
  double t4042;
  double t4117;
  double t4675;
  double t4711;
  double t4712;
  double t4716;
  double t4717;
  double t27656;
  double t27658;
  double t27662;
  double t5453;
  double t5563;
  double t5594;
  double t5595;
  double t5664;
  double t27652;
  double t27666;
  double t27671;
  double t27672;
  double t27971;
  double t27976;
  double t28012;
  double t6721;
  double t28051;
  double t28590;
  double t28617;
  double t28646;
  double t8293;
  double t29408;
  double t29411;
  double t29413;
  double t29414;
  double t29419;
  double t29422;
  double t29423;
  double t29425;
  double t29427;
  double t29428;
  double t29547;
  double t29550;
  double t29557;
  double t29559;
  double t29575;
  double t29577;
  double t29580;
  double t29581;
  double t29592;
  double t29606;
  double t29609;
  double t29626;
  double t29804;
  double t29808;
  double t29827;
  double t29882;
  double t29897;
  double t29903;
  double t29917;
  double t29919;
  double t29922;
  double t29923;
  double t29930;
  double t30037;
  double t30038;
  double t30045;
  double t30029;
  double t30049;
  double t30052;
  double t30053;
  double t30058;
  double t30060;
  double t30065;
  double t30088;
  double t30100;
  double t30115;
  double t30116;
  double t30269;
  double t30299;
  double t30310;
  double t30316;
  double t30319;
  double t30320;
  double t30327;
  double t30348;
  double t30356;
  double t30365;
  t504 = Cos(var1[12]);
  t2902 = Sin(var1[12]);
  t2948 = -3.e-6*t2902;
  t4250 = Cos(var1[10]);
  t4318 = -1.*t4250;
  t4323 = 1. + t4318;
  t4325 = Cos(var1[4]);
  t3901 = 3.e-6*t504;
  t3999 = t3901 + t2948;
  t4433 = Cos(var1[5]);
  t4538 = Sin(var1[10]);
  t4553 = Sin(var1[4]);
  t4628 = Sin(var1[5]);
  t2780 = -3.e-6*t504;
  t3452 = t2780 + t2948;
  t4677 = -9.e-12*t2902;
  t4495 = 3.e-6*t4323*t4325*t4433;
  t4569 = -3.e-6*t4538*t4553;
  t4597 = -9.e-12*t4323;
  t4617 = 1. + t4597;
  t4631 = -1.*t4617*t4325*t4628;
  t4669 = t4495 + t4569 + t4631;
  t4720 = t4250*t4325*t4433;
  t4738 = t4538*t4553;
  t4860 = -3.e-6*t4323*t4325*t4628;
  t4948 = t4720 + t4738 + t4860;
  t4676 = -1.*t504;
  t5674 = -1.*t4325*t4433*t4538;
  t5681 = -1.000000000009*t4323;
  t5736 = 1. + t5681;
  t5945 = t5736*t4553;
  t6034 = -3.e-6*t4325*t4538*t4628;
  t6035 = t5674 + t5945 + t6034;
  t6279 = 3.e-6*t2902;
  t6373 = t3901 + t6279;
  t7091 = t2780 + t6279;
  t6396 = 9.e-12*t2902;
  t8601 = 1. + t4676;
  t8600 = 3.e-13*var1[12];
  t12375 = -9.e-12*t8601;
  t8788 = -3.e-6*t8601;
  t9652 = t8788 + t2948;
  t15098 = t8788 + t6279;
  t13739 = -1.*t4250*t4325*t4433;
  t13890 = -1.000000000009*t4538*t4553;
  t14117 = -3.e-6*t4250*t4325*t4628;
  t14221 = t13739 + t13890 + t14117;
  t15302 = 3.e-6*t8601;
  t15107 = t4250*t4553;
  t15187 = t5674 + t15107 + t6034;
  t15262 = 3.e-6*t4325*t4433*t4538;
  t15263 = -3.e-6*t4250*t4553;
  t15266 = 9.e-12*t4325*t4538*t4628;
  t15267 = t15262 + t15263 + t15266;
  t15415 = t15302 + t2948;
  t15448 = 9.e-12*t8601;
  t15067 = -1.*t2902;
  t15445 = -1.000000000009*t8601;
  t15446 = 1. + t15445;
  t15341 = t15302 + t6279;
  t15192 = 1.e-7*var1[12];
  t15219 = 5.4e-18*t8601;
  t15230 = -0.200000000003*t9652;
  t15258 = 0.100000000003*t15098;
  t15261 = t15192 + t15219 + t15230 + t15258;
  t14951 = -0.2000000000048*t8601;
  t15069 = t12375 + t15067;
  t15072 = 0.100000000003*t15069;
  t15104 = 3.e-7*t15098;
  t15105 = t8600 + t14951 + t15072 + t15104;
  t8787 = 0.1000000000039*t8601;
  t12053 = 3.e-7*t9652;
  t12423 = t12375 + t2902;
  t13041 = -0.200000000003*t12423;
  t13052 = t8600 + t8787 + t12053 + t13041;
  t15522 = -1.*t4617*t4325*t4433;
  t15552 = t15522 + t4860;
  t15449 = t15448 + t2902;
  t15554 = -3.e-6*t4323*t4325*t4433;
  t15559 = -1.*t4250*t4325*t4628;
  t15664 = t15554 + t15559;
  t15778 = -3.e-6*t4325*t4433*t4538;
  t15808 = t4325*t4538*t4628;
  t15847 = t15778 + t15808;
  t15454 = t15448 + t15067;
  t15440 = -1.8e-11*t8601;
  t15441 = 1. + t15440;
  t15483 = -1.8e-12*t4323;
  t15484 = -1. + t4250;
  t15514 = 0.2*t15484;
  t15518 = t15483 + t15514;
  t17362 = -3.e-6*t4325*t4538;
  t17364 = -3.e-6*t4323*t4433*t4553;
  t17607 = t4617*t4553*t4628;
  t17608 = t17362 + t17364 + t17607;
  t17836 = t4325*t4538;
  t18539 = -1.*t4250*t4433*t4553;
  t18542 = 3.e-6*t4323*t4553*t4628;
  t19163 = t17836 + t18539 + t18542;
  t19168 = t5736*t4325;
  t19386 = t4433*t4538*t4553;
  t19387 = 3.e-6*t4538*t4553*t4628;
  t19501 = t19168 + t19386 + t19387;
  t19724 = Sin(var1[3]);
  t19728 = 3.e-6*t4323*t4325*t4433*t19724;
  t19730 = -3.e-6*t4538*t19724*t4553;
  t19732 = -1.*t4617*t4325*t19724*t4628;
  t19733 = t19728 + t19730 + t19732;
  t19765 = t4250*t4325*t4433*t19724;
  t19806 = t4538*t19724*t4553;
  t19809 = -3.e-6*t4323*t4325*t19724*t4628;
  t19850 = t19765 + t19806 + t19809;
  t19854 = -1.*t4325*t4433*t4538*t19724;
  t19855 = t5736*t19724*t4553;
  t19856 = -3.e-6*t4325*t4538*t19724*t4628;
  t19857 = t19854 + t19855 + t19856;
  t19908 = Cos(var1[3]);
  t19910 = t19908*t4433*t4553;
  t19911 = -1.*t19724*t4628;
  t19912 = t19910 + t19911;
  t19916 = -1.*t4433*t19724;
  t19917 = -1.*t19908*t4553*t4628;
  t19918 = t19916 + t19917;
  t19920 = 3.e-6*t19908*t4325*t4538;
  t19926 = 3.e-6*t4323*t19912;
  t19928 = t4617*t19918;
  t19929 = t19920 + t19926 + t19928;
  t19933 = -1.*t19908*t4325*t4538;
  t19934 = t4250*t19912;
  t19936 = 3.e-6*t4323*t19918;
  t19942 = t19933 + t19934 + t19936;
  t19990 = -1.*t5736*t19908*t4325;
  t20016 = -1.*t4538*t19912;
  t20017 = 3.e-6*t4538*t19918;
  t20018 = t19990 + t20016 + t20017;
  t21195 = -1.*t4433*t19724*t4553;
  t21594 = -1.*t19908*t4628;
  t21617 = t21195 + t21594;
  t21991 = t19908*t4433;
  t22094 = -1.*t19724*t4553*t4628;
  t22153 = t21991 + t22094;
  t23397 = t4617*t21617;
  t24627 = 3.e-6*t4323*t22153;
  t24631 = t23397 + t24627;
  t24637 = 3.e-6*t4323*t21617;
  t24638 = t4250*t22153;
  t24639 = t24637 + t24638;
  t24646 = 3.e-6*t4538*t21617;
  t24647 = -1.*t4538*t22153;
  t26597 = t24646 + t24647;
  t3506 = -0.200000000003*t3452;
  t4013 = 0.100000000003*t3999;
  t4042 = 5.4e-18*t2902;
  t4117 = 1.e-7 + t3506 + t4013 + t4042;
  t4675 = 3.e-7*t3999;
  t4711 = t4676 + t4677;
  t4712 = 0.100000000003*t4711;
  t4716 = -0.2000000000048*t2902;
  t4717 = 3.e-13 + t4675 + t4712 + t4716;
  t27656 = t4433*t19724*t4553;
  t27658 = t19908*t4628;
  t27662 = t27656 + t27658;
  t5453 = 3.e-7*t3452;
  t5563 = t504 + t4677;
  t5594 = -0.200000000003*t5563;
  t5595 = 0.1000000000039*t2902;
  t5664 = 3.e-13 + t5453 + t5594 + t5595;
  t27652 = 3.e-6*t4325*t4538*t19724;
  t27666 = 3.e-6*t4323*t27662;
  t27671 = t4617*t22153;
  t27672 = t27652 + t27666 + t27671;
  t27971 = -1.*t4325*t4538*t19724;
  t27976 = t4250*t27662;
  t28012 = t27971 + t27976 + t24627;
  t6721 = t4676 + t6396;
  t28051 = -1.*t5736*t4325*t19724;
  t28590 = -1.*t4538*t27662;
  t28617 = 3.e-6*t4538*t22153;
  t28646 = t28051 + t28590 + t28617;
  t8293 = t504 + t6396;
  t29408 = 1.000000000009*t4325*t4538*t19724;
  t29411 = -1.*t4250*t27662;
  t29413 = 3.e-6*t4250*t22153;
  t29414 = t29408 + t29411 + t29413;
  t29419 = 3.e-6*t4250*t4325*t19724;
  t29422 = 3.e-6*t4538*t27662;
  t29423 = -9.e-12*t4538*t22153;
  t29425 = t29419 + t29422 + t29423;
  t29427 = -1.*t4250*t4325*t19724;
  t29428 = t29427 + t28590 + t28617;
  t29547 = -3.e-6*t4323*t19908*t4325*t4433;
  t29550 = 3.e-6*t19908*t4538*t4553;
  t29557 = t4617*t19908*t4325*t4628;
  t29559 = t29547 + t29550 + t29557;
  t29575 = -1.*t4250*t19908*t4325*t4433;
  t29577 = -1.*t19908*t4538*t4553;
  t29580 = 3.e-6*t4323*t19908*t4325*t4628;
  t29581 = t29575 + t29577 + t29580;
  t29592 = t19908*t4325*t4433*t4538;
  t29606 = -1.*t5736*t19908*t4553;
  t29609 = 3.e-6*t19908*t4325*t4538*t4628;
  t29626 = t29592 + t29606 + t29609;
  t29804 = t4433*t19724;
  t29808 = t19908*t4553*t4628;
  t29827 = t29804 + t29808;
  t29882 = t4617*t19912;
  t29897 = 3.e-6*t4323*t29827;
  t29903 = t29882 + t29897;
  t29917 = t4250*t29827;
  t29919 = t19926 + t29917;
  t29922 = 3.e-6*t4538*t19912;
  t29923 = -1.*t4538*t29827;
  t29930 = t29922 + t29923;
  t30037 = -1.*t19908*t4433*t4553;
  t30038 = t19724*t4628;
  t30045 = t30037 + t30038;
  t30029 = -3.e-6*t19908*t4325*t4538;
  t30049 = 3.e-6*t4323*t30045;
  t30052 = t4617*t29827;
  t30053 = t30029 + t30049 + t30052;
  t30058 = t19908*t4325*t4538;
  t30060 = t4250*t30045;
  t30065 = t30058 + t30060 + t29897;
  t30088 = t5736*t19908*t4325;
  t30100 = -1.*t4538*t30045;
  t30115 = 3.e-6*t4538*t29827;
  t30116 = t30088 + t30100 + t30115;
  t30269 = -1.000000000009*t19908*t4325*t4538;
  t30299 = -1.*t4250*t30045;
  t30310 = 3.e-6*t4250*t29827;
  t30316 = t30269 + t30299 + t30310;
  t30319 = -3.e-6*t4250*t19908*t4325;
  t30320 = 3.e-6*t4538*t30045;
  t30327 = -9.e-12*t4538*t29827;
  t30348 = t30319 + t30320 + t30327;
  t30356 = t4250*t19908*t4325;
  t30365 = t30356 + t30100 + t30115;
  p_output1[0]=var2[0] + (t15261*t17608 + t15105*t19163 + t13052*t19501 + 0.100001*(t15441*t17608 + t15415*t19163 + t15341*t19501) - 0.3*(t15415*t17608 + t15449*t19163 + t15446*t19501) + 0.2*(-1.*t15341*t17608 - 1.*t15446*t19163 - 1.*t15454*t19501) + 0.2000000000018*t4325*t4538 - 1.*t15518*t4433*t4553 + 6.000000000054e-7*t4323*t4553*t4628)*var2[4] + (t15261*t15552 + t15105*t15664 + t13052*t15847 + 0.100001*(t15441*t15552 + t15415*t15664 + t15341*t15847) - 0.3*(t15415*t15552 + t15449*t15664 + t15446*t15847) + 0.2*(-1.*t15341*t15552 - 1.*t15446*t15664 - 1.*t15454*t15847) - 6.000000000054e-7*t4323*t4325*t4433 - 1.*t15518*t4325*t4628)*var2[5] + (t13052*t14221 + t15105*t15187 + t15261*t15267 + 0.100001*(t14221*t15341 + t15187*t15415 + t15267*t15441) - 0.3*(t15267*t15415 + t14221*t15446 + t15187*t15449) + 0.2*(-1.*t15267*t15341 - 1.*t15187*t15446 - 1.*t14221*t15454) - 0.2000000000018*t4325*t4433*t4538 + 0.2000000000018*t4250*t4553 - 6.000000000054e-7*t4325*t4538*t4628)*var2[10] + (t4117*t4669 + t4717*t4948 + t5664*t6035 + 0.2*(1.000000000009*t2902*t4948 - 1.*t4669*t6373 - 1.*t6035*t6721) + 0.100001*(-1.8e-11*t2902*t4669 + t6035*t6373 + t4948*t7091) - 0.3*(-1.000000000009*t2902*t6035 + t4669*t7091 + t4948*t8293))*var2[12];
  p_output1[1]=var2[1] + (t15518*t19912 + t15261*t19929 + t15105*t19942 + t13052*t20018 + 0.100001*(t15441*t19929 + t15415*t19942 + t15341*t20018) - 0.3*(t15415*t19929 + t15449*t19942 + t15446*t20018) + 0.2*(-1.*t15341*t19929 - 1.*t15446*t19942 - 1.*t15454*t20018) + 6.000000000054e-7*t19918*t4323 - 0.2000000000018*t19908*t4325*t4538)*var2[3] + (t15261*t19733 + t15105*t19850 + t13052*t19857 + 0.100001*(t15441*t19733 + t15415*t19850 + t15341*t19857) - 0.3*(t15415*t19733 + t15449*t19850 + t15446*t19857) + 0.2*(-1.*t15341*t19733 - 1.*t15446*t19850 - 1.*t15454*t19857) + t15518*t19724*t4325*t4433 + 0.2000000000018*t19724*t4538*t4553 - 6.000000000054e-7*t19724*t4323*t4325*t4628)*var2[4] + (t15518*t22153 + t15261*t24631 + t15105*t24639 + t13052*t26597 + 0.100001*(t15441*t24631 + t15415*t24639 + t15341*t26597) - 0.3*(t15415*t24631 + t15449*t24639 + t15446*t26597) + 0.2*(-1.*t15341*t24631 - 1.*t15446*t24639 - 1.*t15454*t26597) + 6.000000000054e-7*t21617*t4323)*var2[5] + (t13052*t29414 + t15261*t29425 + t15105*t29428 + 0.100001*(t15341*t29414 + t15441*t29425 + t15415*t29428) + 0.2*(-1.*t15454*t29414 - 1.*t15341*t29425 - 1.*t15446*t29428) - 0.3*(t15446*t29414 + t15415*t29425 + t15449*t29428) - 0.2000000000018*t19724*t4250*t4325 + 6.000000000054e-7*t22153*t4538 - 0.2000000000018*t27662*t4538)*var2[10] + (t27672*t4117 + t28012*t4717 + t28646*t5664 + 0.2*(1.000000000009*t28012*t2902 - 1.*t27672*t6373 - 1.*t28646*t6721) + 0.100001*(-1.8e-11*t27672*t2902 + t28646*t6373 + t28012*t7091) - 0.3*(-1.000000000009*t28646*t2902 + t27672*t7091 + t28012*t8293))*var2[12];
  p_output1[2]=var2[2] + (t15518*t27662 + t15261*t27672 + t15105*t28012 + t13052*t28646 + 0.100001*(t15441*t27672 + t15415*t28012 + t15341*t28646) - 0.3*(t15415*t27672 + t15449*t28012 + t15446*t28646) + 0.2*(-1.*t15341*t27672 - 1.*t15446*t28012 - 1.*t15454*t28646) + 6.000000000054e-7*t22153*t4323 - 0.2000000000018*t19724*t4325*t4538)*var2[3] + (t15261*t29559 + t15105*t29581 + t13052*t29626 + 0.100001*(t15441*t29559 + t15415*t29581 + t15341*t29626) - 0.3*(t15415*t29559 + t15449*t29581 + t15446*t29626) + 0.2*(-1.*t15341*t29559 - 1.*t15446*t29581 - 1.*t15454*t29626) - 1.*t15518*t19908*t4325*t4433 - 0.2000000000018*t19908*t4538*t4553 + 6.000000000054e-7*t19908*t4323*t4325*t4628)*var2[4] + (t15518*t29827 + t15261*t29903 + t15105*t29919 + t13052*t29930 + 0.100001*(t15441*t29903 + t15415*t29919 + t15341*t29930) - 0.3*(t15415*t29903 + t15449*t29919 + t15446*t29930) + 0.2*(-1.*t15341*t29903 - 1.*t15446*t29919 - 1.*t15454*t29930) + 6.000000000054e-7*t19912*t4323)*var2[5] + (t13052*t30316 + t15261*t30348 + t15105*t30365 + 0.100001*(t15341*t30316 + t15441*t30348 + t15415*t30365) + 0.2*(-1.*t15454*t30316 - 1.*t15341*t30348 - 1.*t15446*t30365) - 0.3*(t15446*t30316 + t15415*t30348 + t15449*t30365) + 0.2000000000018*t19908*t4250*t4325 + 6.000000000054e-7*t29827*t4538 - 0.2000000000018*t30045*t4538)*var2[10] + (t30053*t4117 + t30065*t4717 + t30116*t5664 + 0.2*(1.000000000009*t2902*t30065 - 1.*t30053*t6373 - 1.*t30116*t6721) + 0.100001*(-1.8e-11*t2902*t30053 + t30116*t6373 + t30065*t7091) - 0.3*(-1.000000000009*t2902*t30116 + t30053*t7091 + t30065*t8293))*var2[12];
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
