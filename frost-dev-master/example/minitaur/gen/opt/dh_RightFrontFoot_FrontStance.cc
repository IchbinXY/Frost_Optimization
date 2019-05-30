/*
 * Automatically Generated from Mathematica.
 * Wed 29 May 2019 23:45:00 GMT-04:00
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
  double t17797;
  double t20302;
  double t21071;
  double t22619;
  double t22635;
  double t22638;
  double t22641;
  double t21670;
  double t22511;
  double t22647;
  double t22713;
  double t22747;
  double t22912;
  double t20243;
  double t21081;
  double t23489;
  double t22693;
  double t22753;
  double t22766;
  double t22798;
  double t22950;
  double t22969;
  double t23596;
  double t23616;
  double t23633;
  double t23712;
  double t23269;
  double t24268;
  double t24354;
  double t24371;
  double t24439;
  double t24501;
  double t24575;
  double t25048;
  double t25058;
  double t25446;
  double t25086;
  double t28435;
  double t28389;
  double t28508;
  double t28466;
  double t28496;
  double t28901;
  double t28528;
  double t28574;
  double t28593;
  double t28625;
  double t29054;
  double t28956;
  double t28963;
  double t29015;
  double t29018;
  double t29025;
  double t29027;
  double t29126;
  double t29155;
  double t28894;
  double t29149;
  double t29150;
  double t29093;
  double t28975;
  double t28977;
  double t28981;
  double t29000;
  double t29013;
  double t28873;
  double t28896;
  double t28898;
  double t28920;
  double t28940;
  double t28464;
  double t28506;
  double t28516;
  double t28517;
  double t28520;
  double t29449;
  double t29453;
  double t29156;
  double t29459;
  double t29460;
  double t29463;
  double t29469;
  double t29473;
  double t29474;
  double t29257;
  double t29135;
  double t29136;
  double t29845;
  double t29847;
  double t29901;
  double t29922;
  double t29980;
  double t29983;
  double t29985;
  double t29988;
  double t29998;
  double t30002;
  double t30004;
  double t30006;
  double t30077;
  double t30090;
  double t30092;
  double t30095;
  double t30098;
  double t30103;
  double t30108;
  double t30109;
  double t30113;
  double t30252;
  double t30359;
  double t30361;
  double t30362;
  double t30456;
  double t30461;
  double t30463;
  double t30469;
  double t30473;
  double t30474;
  double t30476;
  double t30488;
  double t30490;
  double t30496;
  double t30501;
  double t30505;
  double t30512;
  double t30514;
  double t30528;
  double t30538;
  double t30554;
  double t30595;
  double t30596;
  double t30745;
  double t30747;
  double t30748;
  double t30753;
  double t30762;
  double t30768;
  double t30795;
  double t30797;
  double t30803;
  double t30806;
  double t30809;
  double t30811;
  double t30820;
  double t30827;
  double t30830;
  double t21287;
  double t22585;
  double t22597;
  double t22615;
  double t23145;
  double t23492;
  double t23513;
  double t23519;
  double t23562;
  double t30985;
  double t30988;
  double t30990;
  double t24029;
  double t24220;
  double t24252;
  double t24256;
  double t24263;
  double t30983;
  double t30995;
  double t30997;
  double t30999;
  double t31006;
  double t31008;
  double t31019;
  double t25103;
  double t31026;
  double t31028;
  double t31029;
  double t31031;
  double t25683;
  double t31118;
  double t31120;
  double t31127;
  double t31129;
  double t31135;
  double t31136;
  double t31138;
  double t31142;
  double t31154;
  double t31156;
  double t31233;
  double t31237;
  double t31240;
  double t31243;
  double t31247;
  double t31252;
  double t31256;
  double t31258;
  double t31267;
  double t31271;
  double t31276;
  double t31277;
  double t31337;
  double t31341;
  double t31343;
  double t31356;
  double t31359;
  double t31361;
  double t31371;
  double t31373;
  double t31376;
  double t31381;
  double t31383;
  double t31437;
  double t31440;
  double t31441;
  double t31433;
  double t31444;
  double t31446;
  double t31451;
  double t31455;
  double t31456;
  double t31458;
  double t31461;
  double t31468;
  double t31470;
  double t31475;
  double t31548;
  double t31550;
  double t31552;
  double t31555;
  double t31558;
  double t31561;
  double t31573;
  double t31575;
  double t31581;
  double t31585;
  t17797 = Cos(var1[17]);
  t20302 = Sin(var1[17]);
  t21071 = -3.e-6*t20302;
  t22619 = Cos(var1[15]);
  t22635 = -1.*t22619;
  t22638 = 1. + t22635;
  t22641 = Cos(var1[4]);
  t21670 = 3.e-6*t17797;
  t22511 = t21670 + t21071;
  t22647 = Cos(var1[5]);
  t22713 = Sin(var1[15]);
  t22747 = Sin(var1[4]);
  t22912 = Sin(var1[5]);
  t20243 = -3.e-6*t17797;
  t21081 = t20243 + t21071;
  t23489 = -9.e-12*t20302;
  t22693 = 3.e-6*t22638*t22641*t22647;
  t22753 = -3.e-6*t22713*t22747;
  t22766 = -9.e-12*t22638;
  t22798 = 1. + t22766;
  t22950 = -1.*t22798*t22641*t22912;
  t22969 = t22693 + t22753 + t22950;
  t23596 = t22619*t22641*t22647;
  t23616 = t22713*t22747;
  t23633 = -3.e-6*t22638*t22641*t22912;
  t23712 = t23596 + t23616 + t23633;
  t23269 = -1.*t17797;
  t24268 = -1.*t22641*t22647*t22713;
  t24354 = -1.000000000009*t22638;
  t24371 = 1. + t24354;
  t24439 = t24371*t22747;
  t24501 = -3.e-6*t22641*t22713*t22912;
  t24575 = t24268 + t24439 + t24501;
  t25048 = 3.e-6*t20302;
  t25058 = t21670 + t25048;
  t25446 = t20243 + t25048;
  t25086 = 9.e-12*t20302;
  t28435 = 1. + t23269;
  t28389 = 9.e-13*var1[17];
  t28508 = -9.e-12*t28435;
  t28466 = -3.e-6*t28435;
  t28496 = t28466 + t21071;
  t28901 = t28466 + t25048;
  t28528 = -1.*t22619*t22641*t22647;
  t28574 = -1.000000000009*t22713*t22747;
  t28593 = -3.e-6*t22619*t22641*t22912;
  t28625 = t28528 + t28574 + t28593;
  t29054 = 3.e-6*t28435;
  t28956 = t22619*t22747;
  t28963 = t24268 + t28956 + t24501;
  t29015 = 3.e-6*t22641*t22647*t22713;
  t29018 = -3.e-6*t22619*t22747;
  t29025 = 9.e-12*t22641*t22713*t22912;
  t29027 = t29015 + t29018 + t29025;
  t29126 = t29054 + t21071;
  t29155 = 9.e-12*t28435;
  t28894 = -1.*t20302;
  t29149 = -1.000000000009*t28435;
  t29150 = 1. + t29149;
  t29093 = t29054 + t25048;
  t28975 = 3.e-7*var1[17];
  t28977 = -1.62e-17*t28435;
  t28981 = 0.2*t28496;
  t29000 = 0.1*t28901;
  t29013 = t28975 + t28977 + t28981 + t29000;
  t28873 = 0.2000000000018*t28435;
  t28896 = t28508 + t28894;
  t28898 = 0.1*t28896;
  t28920 = -9.e-7*t28901;
  t28940 = t28389 + t28873 + t28898 + t28920;
  t28464 = 0.1000000000009*t28435;
  t28506 = -9.e-7*t28496;
  t28516 = t28508 + t20302;
  t28517 = 0.2*t28516;
  t28520 = t28389 + t28464 + t28506 + t28517;
  t29449 = -1.*t22798*t22641*t22647;
  t29453 = t29449 + t23633;
  t29156 = t29155 + t20302;
  t29459 = -3.e-6*t22638*t22641*t22647;
  t29460 = -1.*t22619*t22641*t22912;
  t29463 = t29459 + t29460;
  t29469 = -3.e-6*t22641*t22647*t22713;
  t29473 = t22641*t22713*t22912;
  t29474 = t29469 + t29473;
  t29257 = t29155 + t28894;
  t29135 = -1.8e-11*t28435;
  t29136 = 1. + t29135;
  t29845 = -3.e-6*t22641*t22713;
  t29847 = -3.e-6*t22638*t22647*t22747;
  t29901 = t22798*t22747*t22912;
  t29922 = t29845 + t29847 + t29901;
  t29980 = t22641*t22713;
  t29983 = -1.*t22619*t22647*t22747;
  t29985 = 3.e-6*t22638*t22747*t22912;
  t29988 = t29980 + t29983 + t29985;
  t29998 = t24371*t22641;
  t30002 = t22647*t22713*t22747;
  t30004 = 3.e-6*t22713*t22747*t22912;
  t30006 = t29998 + t30002 + t30004;
  t30077 = Sin(var1[3]);
  t30090 = 3.e-6*t22638*t22641*t22647*t30077;
  t30092 = -3.e-6*t22713*t30077*t22747;
  t30095 = -1.*t22798*t22641*t30077*t22912;
  t30098 = t30090 + t30092 + t30095;
  t30103 = t22619*t22641*t22647*t30077;
  t30108 = t22713*t30077*t22747;
  t30109 = -3.e-6*t22638*t22641*t30077*t22912;
  t30113 = t30103 + t30108 + t30109;
  t30252 = -1.*t22641*t22647*t22713*t30077;
  t30359 = t24371*t30077*t22747;
  t30361 = -3.e-6*t22641*t22713*t30077*t22912;
  t30362 = t30252 + t30359 + t30361;
  t30456 = Cos(var1[3]);
  t30461 = t30456*t22647*t22747;
  t30463 = -1.*t30077*t22912;
  t30469 = t30461 + t30463;
  t30473 = -1.*t22647*t30077;
  t30474 = -1.*t30456*t22747*t22912;
  t30476 = t30473 + t30474;
  t30488 = 3.e-6*t30456*t22641*t22713;
  t30490 = 3.e-6*t22638*t30469;
  t30496 = t22798*t30476;
  t30501 = t30488 + t30490 + t30496;
  t30505 = -1.*t30456*t22641*t22713;
  t30512 = t22619*t30469;
  t30514 = 3.e-6*t22638*t30476;
  t30528 = t30505 + t30512 + t30514;
  t30538 = -1.*t24371*t30456*t22641;
  t30554 = -1.*t22713*t30469;
  t30595 = 3.e-6*t22713*t30476;
  t30596 = t30538 + t30554 + t30595;
  t30745 = -1.*t22647*t30077*t22747;
  t30747 = -1.*t30456*t22912;
  t30748 = t30745 + t30747;
  t30753 = t30456*t22647;
  t30762 = -1.*t30077*t22747*t22912;
  t30768 = t30753 + t30762;
  t30795 = t22798*t30748;
  t30797 = 3.e-6*t22638*t30768;
  t30803 = t30795 + t30797;
  t30806 = 3.e-6*t22638*t30748;
  t30809 = t22619*t30768;
  t30811 = t30806 + t30809;
  t30820 = 3.e-6*t22713*t30748;
  t30827 = -1.*t22713*t30768;
  t30830 = t30820 + t30827;
  t21287 = 0.2*t21081;
  t22585 = 0.1*t22511;
  t22597 = -1.62e-17*t20302;
  t22615 = 3.e-7 + t21287 + t22585 + t22597;
  t23145 = -9.e-7*t22511;
  t23492 = t23269 + t23489;
  t23513 = 0.1*t23492;
  t23519 = 0.2000000000018*t20302;
  t23562 = 9.e-13 + t23145 + t23513 + t23519;
  t30985 = t22647*t30077*t22747;
  t30988 = t30456*t22912;
  t30990 = t30985 + t30988;
  t24029 = -9.e-7*t21081;
  t24220 = t17797 + t23489;
  t24252 = 0.2*t24220;
  t24256 = 0.1000000000009*t20302;
  t24263 = 9.e-13 + t24029 + t24252 + t24256;
  t30983 = 3.e-6*t22641*t22713*t30077;
  t30995 = 3.e-6*t22638*t30990;
  t30997 = t22798*t30768;
  t30999 = t30983 + t30995 + t30997;
  t31006 = -1.*t22641*t22713*t30077;
  t31008 = t22619*t30990;
  t31019 = t31006 + t31008 + t30797;
  t25103 = t23269 + t25086;
  t31026 = -1.*t24371*t22641*t30077;
  t31028 = -1.*t22713*t30990;
  t31029 = 3.e-6*t22713*t30768;
  t31031 = t31026 + t31028 + t31029;
  t25683 = t17797 + t25086;
  t31118 = 1.000000000009*t22641*t22713*t30077;
  t31120 = -1.*t22619*t30990;
  t31127 = 3.e-6*t22619*t30768;
  t31129 = t31118 + t31120 + t31127;
  t31135 = 3.e-6*t22619*t22641*t30077;
  t31136 = 3.e-6*t22713*t30990;
  t31138 = -9.e-12*t22713*t30768;
  t31142 = t31135 + t31136 + t31138;
  t31154 = -1.*t22619*t22641*t30077;
  t31156 = t31154 + t31028 + t31029;
  t31233 = -3.e-6*t22638*t30456*t22641*t22647;
  t31237 = 3.e-6*t30456*t22713*t22747;
  t31240 = t22798*t30456*t22641*t22912;
  t31243 = t31233 + t31237 + t31240;
  t31247 = -1.*t22619*t30456*t22641*t22647;
  t31252 = -1.*t30456*t22713*t22747;
  t31256 = 3.e-6*t22638*t30456*t22641*t22912;
  t31258 = t31247 + t31252 + t31256;
  t31267 = t30456*t22641*t22647*t22713;
  t31271 = -1.*t24371*t30456*t22747;
  t31276 = 3.e-6*t30456*t22641*t22713*t22912;
  t31277 = t31267 + t31271 + t31276;
  t31337 = t22647*t30077;
  t31341 = t30456*t22747*t22912;
  t31343 = t31337 + t31341;
  t31356 = t22798*t30469;
  t31359 = 3.e-6*t22638*t31343;
  t31361 = t31356 + t31359;
  t31371 = t22619*t31343;
  t31373 = t30490 + t31371;
  t31376 = 3.e-6*t22713*t30469;
  t31381 = -1.*t22713*t31343;
  t31383 = t31376 + t31381;
  t31437 = -1.*t30456*t22647*t22747;
  t31440 = t30077*t22912;
  t31441 = t31437 + t31440;
  t31433 = -3.e-6*t30456*t22641*t22713;
  t31444 = 3.e-6*t22638*t31441;
  t31446 = t22798*t31343;
  t31451 = t31433 + t31444 + t31446;
  t31455 = t30456*t22641*t22713;
  t31456 = t22619*t31441;
  t31458 = t31455 + t31456 + t31359;
  t31461 = t24371*t30456*t22641;
  t31468 = -1.*t22713*t31441;
  t31470 = 3.e-6*t22713*t31343;
  t31475 = t31461 + t31468 + t31470;
  t31548 = -1.000000000009*t30456*t22641*t22713;
  t31550 = -1.*t22619*t31441;
  t31552 = 3.e-6*t22619*t31343;
  t31555 = t31548 + t31550 + t31552;
  t31558 = -3.e-6*t22619*t30456*t22641;
  t31561 = 3.e-6*t22713*t31441;
  t31573 = -9.e-12*t22713*t31343;
  t31575 = t31558 + t31561 + t31573;
  t31581 = t22619*t30456*t22641;
  t31585 = t31581 + t31468 + t31470;
  p_output1[0]=var2[0] + (-0.2000000000018*t22641*t22713 - 0.2000000000018*t22638*t22647*t22747 - 6.000000000054e-7*t22638*t22747*t22912 + t29013*t29922 + t28940*t29988 + t28520*t30006 - 0.099999*(t29136*t29922 + t29126*t29988 + t29093*t30006) - 0.3*(t29126*t29922 + t29156*t29988 + t29150*t30006) + 0.2*(t29093*t29922 + t29150*t29988 + t29257*t30006))*var2[4] + (6.000000000054e-7*t22638*t22641*t22647 - 0.2000000000018*t22638*t22641*t22912 + t29013*t29453 + t28940*t29463 + t28520*t29474 - 0.099999*(t29136*t29453 + t29126*t29463 + t29093*t29474) - 0.3*(t29126*t29453 + t29156*t29463 + t29150*t29474) + 0.2*(t29093*t29453 + t29150*t29463 + t29257*t29474))*var2[5] + (0.2000000000018*t22641*t22647*t22713 - 0.2000000000018*t22619*t22747 + 6.000000000054e-7*t22641*t22713*t22912 + t28520*t28625 + t28940*t28963 + t29013*t29027 - 0.099999*(t28625*t29093 + t28963*t29126 + t29027*t29136) - 0.3*(t29027*t29126 + t28625*t29150 + t28963*t29156) + 0.2*(t29027*t29093 + t28963*t29150 + t28625*t29257))*var2[15] + (t22615*t22969 + t23562*t23712 + t24263*t24575 + 0.2*(-1.000000000009*t20302*t23712 + t22969*t25058 + t24575*t25103) - 0.099999*(-1.8e-11*t20302*t22969 + t24575*t25058 + t23712*t25446) - 0.3*(-1.000000000009*t20302*t24575 + t22969*t25446 + t23712*t25683))*var2[17];
  p_output1[1]=var2[1] + (0.2000000000018*t22641*t22713*t30456 + 0.2000000000018*t22638*t30469 - 6.000000000054e-7*t22638*t30476 + t29013*t30501 + t28940*t30528 + t28520*t30596 - 0.099999*(t29136*t30501 + t29126*t30528 + t29093*t30596) - 0.3*(t29126*t30501 + t29156*t30528 + t29150*t30596) + 0.2*(t29093*t30501 + t29150*t30528 + t29257*t30596))*var2[3] + (0.2000000000018*t22638*t22641*t22647*t30077 - 0.2000000000018*t22713*t22747*t30077 + 6.000000000054e-7*t22638*t22641*t22912*t30077 + t29013*t30098 + t28940*t30113 + t28520*t30362 - 0.099999*(t29136*t30098 + t29126*t30113 + t29093*t30362) - 0.3*(t29126*t30098 + t29156*t30113 + t29150*t30362) + 0.2*(t29093*t30098 + t29150*t30113 + t29257*t30362))*var2[4] + (-6.000000000054e-7*t22638*t30748 + 0.2000000000018*t22638*t30768 + t29013*t30803 + t28940*t30811 + t28520*t30830 - 0.099999*(t29136*t30803 + t29126*t30811 + t29093*t30830) - 0.3*(t29126*t30803 + t29156*t30811 + t29150*t30830) + 0.2*(t29093*t30803 + t29150*t30811 + t29257*t30830))*var2[5] + (0.2000000000018*t22619*t22641*t30077 - 6.000000000054e-7*t22713*t30768 + 0.2000000000018*t22713*t30990 + t28520*t31129 + t29013*t31142 + t28940*t31156 - 0.099999*(t29093*t31129 + t29136*t31142 + t29126*t31156) + 0.2*(t29257*t31129 + t29093*t31142 + t29150*t31156) - 0.3*(t29150*t31129 + t29126*t31142 + t29156*t31156))*var2[15] + (t22615*t30999 + t23562*t31019 + t24263*t31031 - 0.3*(t25446*t30999 + t25683*t31019 - 1.000000000009*t20302*t31031) - 0.099999*(-1.8e-11*t20302*t30999 + t25446*t31019 + t25058*t31031) + 0.2*(t25058*t30999 - 1.000000000009*t20302*t31019 + t25103*t31031))*var2[17];
  p_output1[2]=var2[2] + (0.2000000000018*t22641*t22713*t30077 - 6.000000000054e-7*t22638*t30768 + 0.2000000000018*t22638*t30990 + t29013*t30999 + t28940*t31019 + t28520*t31031 - 0.099999*(t29136*t30999 + t29126*t31019 + t29093*t31031) - 0.3*(t29126*t30999 + t29156*t31019 + t29150*t31031) + 0.2*(t29093*t30999 + t29150*t31019 + t29257*t31031))*var2[3] + (-0.2000000000018*t22638*t22641*t22647*t30456 + 0.2000000000018*t22713*t22747*t30456 - 6.000000000054e-7*t22638*t22641*t22912*t30456 + t29013*t31243 + t28940*t31258 + t28520*t31277 - 0.099999*(t29136*t31243 + t29126*t31258 + t29093*t31277) - 0.3*(t29126*t31243 + t29156*t31258 + t29150*t31277) + 0.2*(t29093*t31243 + t29150*t31258 + t29257*t31277))*var2[4] + (-6.000000000054e-7*t22638*t30469 + 0.2000000000018*t22638*t31343 + t29013*t31361 + t28940*t31373 + t28520*t31383 - 0.099999*(t29136*t31361 + t29126*t31373 + t29093*t31383) - 0.3*(t29126*t31361 + t29156*t31373 + t29150*t31383) + 0.2*(t29093*t31361 + t29150*t31373 + t29257*t31383))*var2[5] + (-0.2000000000018*t22619*t22641*t30456 - 6.000000000054e-7*t22713*t31343 + 0.2000000000018*t22713*t31441 + t28520*t31555 + t29013*t31575 + t28940*t31585 - 0.099999*(t29093*t31555 + t29136*t31575 + t29126*t31585) + 0.2*(t29257*t31555 + t29093*t31575 + t29150*t31585) - 0.3*(t29150*t31555 + t29126*t31575 + t29156*t31585))*var2[15] + (t22615*t31451 + t23562*t31458 + t24263*t31475 - 0.3*(t25446*t31451 + t25683*t31458 - 1.000000000009*t20302*t31475) - 0.099999*(-1.8e-11*t20302*t31451 + t25446*t31458 + t25058*t31475) + 0.2*(t25058*t31451 - 1.000000000009*t20302*t31458 + t25103*t31475))*var2[17];
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

#include "dh_RightFrontFoot_FrontStance.hh"

namespace FrontStance
{

void dh_RightFrontFoot_FrontStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
