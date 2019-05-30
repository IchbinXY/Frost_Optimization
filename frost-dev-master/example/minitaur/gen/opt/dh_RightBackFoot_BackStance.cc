/*
 * Automatically Generated from Mathematica.
 * Wed 29 May 2019 23:56:00 GMT-04:00
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
  double t2518;
  double t4214;
  double t4993;
  double t6096;
  double t6099;
  double t6108;
  double t6109;
  double t5998;
  double t6029;
  double t6154;
  double t6299;
  double t6318;
  double t6370;
  double t4105;
  double t5278;
  double t7532;
  double t6220;
  double t6321;
  double t6332;
  double t6365;
  double t6397;
  double t6582;
  double t7733;
  double t7781;
  double t7813;
  double t8248;
  double t7494;
  double t8744;
  double t8962;
  double t9003;
  double t10899;
  double t11160;
  double t12052;
  double t12087;
  double t12091;
  double t12146;
  double t12107;
  double t13950;
  double t13949;
  double t14000;
  double t13978;
  double t13984;
  double t14636;
  double t14262;
  double t14346;
  double t14427;
  double t14461;
  double t14925;
  double t14639;
  double t14640;
  double t14658;
  double t14671;
  double t14673;
  double t14734;
  double t14971;
  double t15026;
  double t14611;
  double t15000;
  double t15016;
  double t14940;
  double t14647;
  double t14653;
  double t14654;
  double t14655;
  double t14656;
  double t14548;
  double t14625;
  double t14634;
  double t14637;
  double t14638;
  double t13952;
  double t13999;
  double t14052;
  double t14129;
  double t14204;
  double t15248;
  double t15264;
  double t15041;
  double t15268;
  double t15271;
  double t15274;
  double t15290;
  double t15309;
  double t15325;
  double t15153;
  double t14985;
  double t14992;
  double t15227;
  double t15233;
  double t15235;
  double t15243;
  double t15482;
  double t15569;
  double t15592;
  double t15593;
  double t15614;
  double t15659;
  double t15661;
  double t15662;
  double t15687;
  double t15697;
  double t15702;
  double t15714;
  double t15915;
  double t15933;
  double t15937;
  double t15938;
  double t15970;
  double t15993;
  double t15997;
  double t16000;
  double t16002;
  double t16004;
  double t16037;
  double t16045;
  double t16071;
  double t16471;
  double t16488;
  double t16495;
  double t16531;
  double t16683;
  double t16690;
  double t16751;
  double t16762;
  double t16763;
  double t16797;
  double t16798;
  double t16926;
  double t17059;
  double t17082;
  double t17083;
  double t17107;
  double t17108;
  double t17113;
  double t17115;
  double t17221;
  double t17222;
  double t17223;
  double t17228;
  double t17230;
  double t17233;
  double t17236;
  double t17238;
  double t17242;
  double t17247;
  double t17250;
  double t17251;
  double t17261;
  double t17295;
  double t17346;
  double t5824;
  double t6066;
  double t6089;
  double t6090;
  double t7493;
  double t7657;
  double t7703;
  double t7720;
  double t7728;
  double t17710;
  double t17720;
  double t17724;
  double t8301;
  double t8357;
  double t8613;
  double t8620;
  double t8740;
  double t17699;
  double t17725;
  double t17729;
  double t17734;
  double t17788;
  double t17789;
  double t17801;
  double t12110;
  double t17808;
  double t17818;
  double t17822;
  double t17826;
  double t12933;
  double t19140;
  double t19198;
  double t19222;
  double t19281;
  double t19377;
  double t19383;
  double t19385;
  double t19406;
  double t19413;
  double t19430;
  double t19677;
  double t19682;
  double t19683;
  double t19691;
  double t19697;
  double t19721;
  double t19722;
  double t19754;
  double t19769;
  double t19788;
  double t19789;
  double t19797;
  double t19862;
  double t19868;
  double t19875;
  double t19914;
  double t19927;
  double t19935;
  double t20042;
  double t20053;
  double t20117;
  double t20194;
  double t20243;
  double t20459;
  double t20480;
  double t20531;
  double t20449;
  double t20541;
  double t20588;
  double t20612;
  double t20615;
  double t20616;
  double t20617;
  double t20625;
  double t20626;
  double t20627;
  double t20629;
  double t20850;
  double t20892;
  double t20941;
  double t20953;
  double t20975;
  double t20978;
  double t20981;
  double t20989;
  double t21011;
  double t21014;
  t2518 = Cos(var1[21]);
  t4214 = Sin(var1[21]);
  t4993 = -3.e-6*t4214;
  t6096 = Cos(var1[19]);
  t6099 = -1.*t6096;
  t6108 = 1. + t6099;
  t6109 = Cos(var1[4]);
  t5998 = 3.e-6*t2518;
  t6029 = t5998 + t4993;
  t6154 = Cos(var1[5]);
  t6299 = Sin(var1[19]);
  t6318 = Sin(var1[4]);
  t6370 = Sin(var1[5]);
  t4105 = -3.e-6*t2518;
  t5278 = t4105 + t4993;
  t7532 = -9.e-12*t4214;
  t6220 = 3.e-6*t6108*t6109*t6154;
  t6321 = -3.e-6*t6299*t6318;
  t6332 = -9.e-12*t6108;
  t6365 = 1. + t6332;
  t6397 = -1.*t6365*t6109*t6370;
  t6582 = t6220 + t6321 + t6397;
  t7733 = t6096*t6109*t6154;
  t7781 = t6299*t6318;
  t7813 = -3.e-6*t6108*t6109*t6370;
  t8248 = t7733 + t7781 + t7813;
  t7494 = -1.*t2518;
  t8744 = -1.*t6109*t6154*t6299;
  t8962 = -1.000000000009*t6108;
  t9003 = 1. + t8962;
  t10899 = t9003*t6318;
  t11160 = -3.e-6*t6109*t6299*t6370;
  t12052 = t8744 + t10899 + t11160;
  t12087 = 3.e-6*t4214;
  t12091 = t5998 + t12087;
  t12146 = t4105 + t12087;
  t12107 = 9.e-12*t4214;
  t13950 = 1. + t7494;
  t13949 = 3.e-13*var1[21];
  t14000 = -9.e-12*t13950;
  t13978 = -3.e-6*t13950;
  t13984 = t13978 + t4993;
  t14636 = t13978 + t12087;
  t14262 = -1.*t6096*t6109*t6154;
  t14346 = -1.000000000009*t6299*t6318;
  t14427 = -3.e-6*t6096*t6109*t6370;
  t14461 = t14262 + t14346 + t14427;
  t14925 = 3.e-6*t13950;
  t14639 = t6096*t6318;
  t14640 = t8744 + t14639 + t11160;
  t14658 = 3.e-6*t6109*t6154*t6299;
  t14671 = -3.e-6*t6096*t6318;
  t14673 = 9.e-12*t6109*t6299*t6370;
  t14734 = t14658 + t14671 + t14673;
  t14971 = t14925 + t4993;
  t15026 = 9.e-12*t13950;
  t14611 = -1.*t4214;
  t15000 = -1.000000000009*t13950;
  t15016 = 1. + t15000;
  t14940 = t14925 + t12087;
  t14647 = 1.e-7*var1[21];
  t14653 = 5.4e-18*t13950;
  t14654 = -0.200000000003*t13984;
  t14655 = 0.100000000003*t14636;
  t14656 = t14647 + t14653 + t14654 + t14655;
  t14548 = -0.2000000000048*t13950;
  t14625 = t14000 + t14611;
  t14634 = 0.100000000003*t14625;
  t14637 = 3.e-7*t14636;
  t14638 = t13949 + t14548 + t14634 + t14637;
  t13952 = 0.1000000000039*t13950;
  t13999 = 3.e-7*t13984;
  t14052 = t14000 + t4214;
  t14129 = -0.200000000003*t14052;
  t14204 = t13949 + t13952 + t13999 + t14129;
  t15248 = -1.*t6365*t6109*t6154;
  t15264 = t15248 + t7813;
  t15041 = t15026 + t4214;
  t15268 = -3.e-6*t6108*t6109*t6154;
  t15271 = -1.*t6096*t6109*t6370;
  t15274 = t15268 + t15271;
  t15290 = -3.e-6*t6109*t6154*t6299;
  t15309 = t6109*t6299*t6370;
  t15325 = t15290 + t15309;
  t15153 = t15026 + t14611;
  t14985 = -1.8e-11*t13950;
  t14992 = 1. + t14985;
  t15227 = -1.8e-12*t6108;
  t15233 = -1. + t6096;
  t15235 = 0.2*t15233;
  t15243 = t15227 + t15235;
  t15482 = -3.e-6*t6109*t6299;
  t15569 = -3.e-6*t6108*t6154*t6318;
  t15592 = t6365*t6318*t6370;
  t15593 = t15482 + t15569 + t15592;
  t15614 = t6109*t6299;
  t15659 = -1.*t6096*t6154*t6318;
  t15661 = 3.e-6*t6108*t6318*t6370;
  t15662 = t15614 + t15659 + t15661;
  t15687 = t9003*t6109;
  t15697 = t6154*t6299*t6318;
  t15702 = 3.e-6*t6299*t6318*t6370;
  t15714 = t15687 + t15697 + t15702;
  t15915 = Sin(var1[3]);
  t15933 = 3.e-6*t6108*t6109*t6154*t15915;
  t15937 = -3.e-6*t6299*t15915*t6318;
  t15938 = -1.*t6365*t6109*t15915*t6370;
  t15970 = t15933 + t15937 + t15938;
  t15993 = t6096*t6109*t6154*t15915;
  t15997 = t6299*t15915*t6318;
  t16000 = -3.e-6*t6108*t6109*t15915*t6370;
  t16002 = t15993 + t15997 + t16000;
  t16004 = -1.*t6109*t6154*t6299*t15915;
  t16037 = t9003*t15915*t6318;
  t16045 = -3.e-6*t6109*t6299*t15915*t6370;
  t16071 = t16004 + t16037 + t16045;
  t16471 = Cos(var1[3]);
  t16488 = t16471*t6154*t6318;
  t16495 = -1.*t15915*t6370;
  t16531 = t16488 + t16495;
  t16683 = -1.*t6154*t15915;
  t16690 = -1.*t16471*t6318*t6370;
  t16751 = t16683 + t16690;
  t16762 = 3.e-6*t16471*t6109*t6299;
  t16763 = 3.e-6*t6108*t16531;
  t16797 = t6365*t16751;
  t16798 = t16762 + t16763 + t16797;
  t16926 = -1.*t16471*t6109*t6299;
  t17059 = t6096*t16531;
  t17082 = 3.e-6*t6108*t16751;
  t17083 = t16926 + t17059 + t17082;
  t17107 = -1.*t9003*t16471*t6109;
  t17108 = -1.*t6299*t16531;
  t17113 = 3.e-6*t6299*t16751;
  t17115 = t17107 + t17108 + t17113;
  t17221 = -1.*t6154*t15915*t6318;
  t17222 = -1.*t16471*t6370;
  t17223 = t17221 + t17222;
  t17228 = t16471*t6154;
  t17230 = -1.*t15915*t6318*t6370;
  t17233 = t17228 + t17230;
  t17236 = t6365*t17223;
  t17238 = 3.e-6*t6108*t17233;
  t17242 = t17236 + t17238;
  t17247 = 3.e-6*t6108*t17223;
  t17250 = t6096*t17233;
  t17251 = t17247 + t17250;
  t17261 = 3.e-6*t6299*t17223;
  t17295 = -1.*t6299*t17233;
  t17346 = t17261 + t17295;
  t5824 = -0.200000000003*t5278;
  t6066 = 0.100000000003*t6029;
  t6089 = 5.4e-18*t4214;
  t6090 = 1.e-7 + t5824 + t6066 + t6089;
  t7493 = 3.e-7*t6029;
  t7657 = t7494 + t7532;
  t7703 = 0.100000000003*t7657;
  t7720 = -0.2000000000048*t4214;
  t7728 = 3.e-13 + t7493 + t7703 + t7720;
  t17710 = t6154*t15915*t6318;
  t17720 = t16471*t6370;
  t17724 = t17710 + t17720;
  t8301 = 3.e-7*t5278;
  t8357 = t2518 + t7532;
  t8613 = -0.200000000003*t8357;
  t8620 = 0.1000000000039*t4214;
  t8740 = 3.e-13 + t8301 + t8613 + t8620;
  t17699 = 3.e-6*t6109*t6299*t15915;
  t17725 = 3.e-6*t6108*t17724;
  t17729 = t6365*t17233;
  t17734 = t17699 + t17725 + t17729;
  t17788 = -1.*t6109*t6299*t15915;
  t17789 = t6096*t17724;
  t17801 = t17788 + t17789 + t17238;
  t12110 = t7494 + t12107;
  t17808 = -1.*t9003*t6109*t15915;
  t17818 = -1.*t6299*t17724;
  t17822 = 3.e-6*t6299*t17233;
  t17826 = t17808 + t17818 + t17822;
  t12933 = t2518 + t12107;
  t19140 = 1.000000000009*t6109*t6299*t15915;
  t19198 = -1.*t6096*t17724;
  t19222 = 3.e-6*t6096*t17233;
  t19281 = t19140 + t19198 + t19222;
  t19377 = 3.e-6*t6096*t6109*t15915;
  t19383 = 3.e-6*t6299*t17724;
  t19385 = -9.e-12*t6299*t17233;
  t19406 = t19377 + t19383 + t19385;
  t19413 = -1.*t6096*t6109*t15915;
  t19430 = t19413 + t17818 + t17822;
  t19677 = -3.e-6*t6108*t16471*t6109*t6154;
  t19682 = 3.e-6*t16471*t6299*t6318;
  t19683 = t6365*t16471*t6109*t6370;
  t19691 = t19677 + t19682 + t19683;
  t19697 = -1.*t6096*t16471*t6109*t6154;
  t19721 = -1.*t16471*t6299*t6318;
  t19722 = 3.e-6*t6108*t16471*t6109*t6370;
  t19754 = t19697 + t19721 + t19722;
  t19769 = t16471*t6109*t6154*t6299;
  t19788 = -1.*t9003*t16471*t6318;
  t19789 = 3.e-6*t16471*t6109*t6299*t6370;
  t19797 = t19769 + t19788 + t19789;
  t19862 = t6154*t15915;
  t19868 = t16471*t6318*t6370;
  t19875 = t19862 + t19868;
  t19914 = t6365*t16531;
  t19927 = 3.e-6*t6108*t19875;
  t19935 = t19914 + t19927;
  t20042 = t6096*t19875;
  t20053 = t16763 + t20042;
  t20117 = 3.e-6*t6299*t16531;
  t20194 = -1.*t6299*t19875;
  t20243 = t20117 + t20194;
  t20459 = -1.*t16471*t6154*t6318;
  t20480 = t15915*t6370;
  t20531 = t20459 + t20480;
  t20449 = -3.e-6*t16471*t6109*t6299;
  t20541 = 3.e-6*t6108*t20531;
  t20588 = t6365*t19875;
  t20612 = t20449 + t20541 + t20588;
  t20615 = t16471*t6109*t6299;
  t20616 = t6096*t20531;
  t20617 = t20615 + t20616 + t19927;
  t20625 = t9003*t16471*t6109;
  t20626 = -1.*t6299*t20531;
  t20627 = 3.e-6*t6299*t19875;
  t20629 = t20625 + t20626 + t20627;
  t20850 = -1.000000000009*t16471*t6109*t6299;
  t20892 = -1.*t6096*t20531;
  t20941 = 3.e-6*t6096*t19875;
  t20953 = t20850 + t20892 + t20941;
  t20975 = -3.e-6*t6096*t16471*t6109;
  t20978 = 3.e-6*t6299*t20531;
  t20981 = -9.e-12*t6299*t19875;
  t20989 = t20975 + t20978 + t20981;
  t21011 = t6096*t16471*t6109;
  t21014 = t21011 + t20626 + t20627;
  p_output1[0]=var2[0] + (t14656*t15593 + t14638*t15662 + t14204*t15714 - 0.099999*(t14992*t15593 + t14971*t15662 + t14940*t15714) - 0.3*(t14971*t15593 + t15041*t15662 + t15016*t15714) + 0.2*(-1.*t14940*t15593 - 1.*t15016*t15662 - 1.*t15153*t15714) + 0.2000000000018*t6109*t6299 - 1.*t15243*t6154*t6318 + 6.000000000054e-7*t6108*t6318*t6370)*var2[4] + (t14656*t15264 + t14638*t15274 + t14204*t15325 - 0.099999*(t14992*t15264 + t14971*t15274 + t14940*t15325) - 0.3*(t14971*t15264 + t15041*t15274 + t15016*t15325) + 0.2*(-1.*t14940*t15264 - 1.*t15016*t15274 - 1.*t15153*t15325) - 6.000000000054e-7*t6108*t6109*t6154 - 1.*t15243*t6109*t6370)*var2[5] + (t14204*t14461 + t14638*t14640 + t14656*t14734 - 0.099999*(t14461*t14940 + t14640*t14971 + t14734*t14992) - 0.3*(t14734*t14971 + t14461*t15016 + t14640*t15041) + 0.2*(-1.*t14734*t14940 - 1.*t14640*t15016 - 1.*t14461*t15153) - 0.2000000000018*t6109*t6154*t6299 + 0.2000000000018*t6096*t6318 - 6.000000000054e-7*t6109*t6299*t6370)*var2[19] + (t6090*t6582 + t7728*t8248 - 0.099999*(t12052*t12091 - 1.8e-11*t4214*t6582 + t12146*t8248) - 0.3*(-1.000000000009*t12052*t4214 + t12146*t6582 + t12933*t8248) + 0.2*(-1.*t12052*t12110 - 1.*t12091*t6582 + 1.000000000009*t4214*t8248) + t12052*t8740)*var2[21];
  p_output1[1]=var2[1] + (t15243*t16531 + t14656*t16798 + t14638*t17083 + t14204*t17115 - 0.099999*(t14992*t16798 + t14971*t17083 + t14940*t17115) - 0.3*(t14971*t16798 + t15041*t17083 + t15016*t17115) + 0.2*(-1.*t14940*t16798 - 1.*t15016*t17083 - 1.*t15153*t17115) + 6.000000000054e-7*t16751*t6108 - 0.2000000000018*t16471*t6109*t6299)*var2[3] + (t14656*t15970 + t14638*t16002 + t14204*t16071 - 0.099999*(t14992*t15970 + t14971*t16002 + t14940*t16071) - 0.3*(t14971*t15970 + t15041*t16002 + t15016*t16071) + 0.2*(-1.*t14940*t15970 - 1.*t15016*t16002 - 1.*t15153*t16071) + t15243*t15915*t6109*t6154 + 0.2000000000018*t15915*t6299*t6318 - 6.000000000054e-7*t15915*t6108*t6109*t6370)*var2[4] + (t15243*t17233 + t14656*t17242 + t14638*t17251 + t14204*t17346 - 0.099999*(t14992*t17242 + t14971*t17251 + t14940*t17346) - 0.3*(t14971*t17242 + t15041*t17251 + t15016*t17346) + 0.2*(-1.*t14940*t17242 - 1.*t15016*t17251 - 1.*t15153*t17346) + 6.000000000054e-7*t17223*t6108)*var2[5] + (t14204*t19281 + t14656*t19406 + t14638*t19430 - 0.099999*(t14940*t19281 + t14992*t19406 + t14971*t19430) + 0.2*(-1.*t15153*t19281 - 1.*t14940*t19406 - 1.*t15016*t19430) - 0.3*(t15016*t19281 + t14971*t19406 + t15041*t19430) - 0.2000000000018*t15915*t6096*t6109 + 6.000000000054e-7*t17233*t6299 - 0.2000000000018*t17724*t6299)*var2[19] + (-0.099999*(t12146*t17801 + t12091*t17826 - 1.8e-11*t17734*t4214) + 0.2*(-1.*t12091*t17734 - 1.*t12110*t17826 + 1.000000000009*t17801*t4214) - 0.3*(t12146*t17734 + t12933*t17801 - 1.000000000009*t17826*t4214) + t17734*t6090 + t17801*t7728 + t17826*t8740)*var2[21];
  p_output1[2]=var2[2] + (t15243*t17724 + t14656*t17734 + t14638*t17801 + t14204*t17826 - 0.099999*(t14992*t17734 + t14971*t17801 + t14940*t17826) - 0.3*(t14971*t17734 + t15041*t17801 + t15016*t17826) + 0.2*(-1.*t14940*t17734 - 1.*t15016*t17801 - 1.*t15153*t17826) + 6.000000000054e-7*t17233*t6108 - 0.2000000000018*t15915*t6109*t6299)*var2[3] + (t14656*t19691 + t14638*t19754 + t14204*t19797 - 0.099999*(t14992*t19691 + t14971*t19754 + t14940*t19797) - 0.3*(t14971*t19691 + t15041*t19754 + t15016*t19797) + 0.2*(-1.*t14940*t19691 - 1.*t15016*t19754 - 1.*t15153*t19797) - 1.*t15243*t16471*t6109*t6154 - 0.2000000000018*t16471*t6299*t6318 + 6.000000000054e-7*t16471*t6108*t6109*t6370)*var2[4] + (t15243*t19875 + t14656*t19935 + t14638*t20053 + t14204*t20243 - 0.099999*(t14992*t19935 + t14971*t20053 + t14940*t20243) - 0.3*(t14971*t19935 + t15041*t20053 + t15016*t20243) + 0.2*(-1.*t14940*t19935 - 1.*t15016*t20053 - 1.*t15153*t20243) + 6.000000000054e-7*t16531*t6108)*var2[5] + (t14204*t20953 + t14656*t20989 + t14638*t21014 - 0.099999*(t14940*t20953 + t14992*t20989 + t14971*t21014) + 0.2*(-1.*t15153*t20953 - 1.*t14940*t20989 - 1.*t15016*t21014) - 0.3*(t15016*t20953 + t14971*t20989 + t15041*t21014) + 0.2000000000018*t16471*t6096*t6109 + 6.000000000054e-7*t19875*t6299 - 0.2000000000018*t20531*t6299)*var2[19] + (-0.099999*(t12146*t20617 + t12091*t20629 - 1.8e-11*t20612*t4214) + 0.2*(-1.*t12091*t20612 - 1.*t12110*t20629 + 1.000000000009*t20617*t4214) - 0.3*(t12146*t20612 + t12933*t20617 - 1.000000000009*t20629*t4214) + t20612*t6090 + t20617*t7728 + t20629*t8740)*var2[21];
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
