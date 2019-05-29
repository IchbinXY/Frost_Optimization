/*
 * Automatically Generated from Mathematica.
 * Wed 29 May 2019 15:17:22 GMT-04:00
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
  double t383;
  double t12236;
  double t12283;
  double t25561;
  double t25844;
  double t25909;
  double t25910;
  double t12491;
  double t21807;
  double t26044;
  double t29913;
  double t29934;
  double t30065;
  double t12070;
  double t12287;
  double t30644;
  double t29695;
  double t29965;
  double t30053;
  double t30057;
  double t30135;
  double t30153;
  double t31023;
  double t31027;
  double t31030;
  double t31062;
  double t30399;
  double t31097;
  double t31099;
  double t31100;
  double t31103;
  double t31142;
  double t31144;
  double t31146;
  double t31147;
  double t31198;
  double t31152;
  double t33925;
  double t33905;
  double t34191;
  double t33951;
  double t34080;
  double t35415;
  double t35291;
  double t35373;
  double t35394;
  double t35397;
  double t35715;
  double t35426;
  double t35431;
  double t35535;
  double t35537;
  double t35538;
  double t35541;
  double t35811;
  double t36130;
  double t35411;
  double t36116;
  double t36127;
  double t35750;
  double t35442;
  double t35443;
  double t35501;
  double t35522;
  double t35528;
  double t35409;
  double t35412;
  double t35413;
  double t35416;
  double t35421;
  double t33941;
  double t34108;
  double t34342;
  double t34551;
  double t34863;
  double t36371;
  double t36373;
  double t36138;
  double t36375;
  double t36376;
  double t36377;
  double t36379;
  double t36382;
  double t36383;
  double t36273;
  double t35845;
  double t35865;
  double t36366;
  double t36367;
  double t36368;
  double t36369;
  double t36496;
  double t36497;
  double t36498;
  double t36499;
  double t36502;
  double t36503;
  double t36504;
  double t36505;
  double t36507;
  double t36508;
  double t36517;
  double t36518;
  double t36573;
  double t36578;
  double t36580;
  double t36582;
  double t36583;
  double t36586;
  double t36587;
  double t36588;
  double t36590;
  double t36592;
  double t36593;
  double t36594;
  double t36595;
  double t36631;
  double t36633;
  double t36634;
  double t36636;
  double t36639;
  double t36640;
  double t36642;
  double t36644;
  double t36646;
  double t36647;
  double t36648;
  double t36651;
  double t36652;
  double t36654;
  double t36656;
  double t36660;
  double t36664;
  double t36665;
  double t36666;
  double t36804;
  double t36812;
  double t36813;
  double t36907;
  double t36957;
  double t36959;
  double t36981;
  double t37019;
  double t37023;
  double t37113;
  double t37115;
  double t37135;
  double t37141;
  double t37296;
  double t37328;
  double t12288;
  double t21830;
  double t21902;
  double t22174;
  double t30346;
  double t30732;
  double t31016;
  double t31019;
  double t31021;
  double t37713;
  double t37745;
  double t37748;
  double t31089;
  double t31090;
  double t31091;
  double t31093;
  double t31096;
  double t37673;
  double t37749;
  double t37795;
  double t38630;
  double t39340;
  double t39412;
  double t39425;
  double t31153;
  double t39435;
  double t39437;
  double t39439;
  double t39441;
  double t31552;
  double t40273;
  double t40280;
  double t40282;
  double t40283;
  double t40285;
  double t40286;
  double t40288;
  double t40289;
  double t40292;
  double t40295;
  double t40990;
  double t40991;
  double t40992;
  double t40993;
  double t41002;
  double t41006;
  double t41008;
  double t41009;
  double t41011;
  double t41012;
  double t41013;
  double t41024;
  double t41098;
  double t41100;
  double t41109;
  double t41293;
  double t41295;
  double t41297;
  double t41346;
  double t41350;
  double t41356;
  double t41358;
  double t41359;
  double t43126;
  double t43127;
  double t43128;
  double t43125;
  double t43509;
  double t43921;
  double t44437;
  double t44552;
  double t44588;
  double t44589;
  double t44691;
  double t44766;
  double t44767;
  double t44768;
  double t44800;
  double t44801;
  double t44812;
  double t44829;
  double t44852;
  double t44854;
  double t44856;
  double t44857;
  double t44859;
  double t44860;
  t383 = Cos(var1[12]);
  t12236 = Sin(var1[12]);
  t12283 = -3.e-6*t12236;
  t25561 = Cos(var1[10]);
  t25844 = -1.*t25561;
  t25909 = 1. + t25844;
  t25910 = Cos(var1[4]);
  t12491 = 3.e-6*t383;
  t21807 = t12491 + t12283;
  t26044 = Cos(var1[5]);
  t29913 = Sin(var1[10]);
  t29934 = Sin(var1[4]);
  t30065 = Sin(var1[5]);
  t12070 = -3.e-6*t383;
  t12287 = t12070 + t12283;
  t30644 = -9.e-12*t12236;
  t29695 = 3.e-6*t25909*t25910*t26044;
  t29965 = -3.e-6*t29913*t29934;
  t30053 = -9.e-12*t25909;
  t30057 = 1. + t30053;
  t30135 = -1.*t30057*t25910*t30065;
  t30153 = t29695 + t29965 + t30135;
  t31023 = t25561*t25910*t26044;
  t31027 = t29913*t29934;
  t31030 = -3.e-6*t25909*t25910*t30065;
  t31062 = t31023 + t31027 + t31030;
  t30399 = -1.*t383;
  t31097 = -1.*t25910*t26044*t29913;
  t31099 = -1.000000000009*t25909;
  t31100 = 1. + t31099;
  t31103 = t31100*t29934;
  t31142 = -3.e-6*t25910*t29913*t30065;
  t31144 = t31097 + t31103 + t31142;
  t31146 = 3.e-6*t12236;
  t31147 = t12491 + t31146;
  t31198 = t12070 + t31146;
  t31152 = 9.e-12*t12236;
  t33925 = 1. + t30399;
  t33905 = 3.e-13*var1[12];
  t34191 = -9.e-12*t33925;
  t33951 = -3.e-6*t33925;
  t34080 = t33951 + t12283;
  t35415 = t33951 + t31146;
  t35291 = -1.*t25561*t25910*t26044;
  t35373 = -1.000000000009*t29913*t29934;
  t35394 = -3.e-6*t25561*t25910*t30065;
  t35397 = t35291 + t35373 + t35394;
  t35715 = 3.e-6*t33925;
  t35426 = t25561*t29934;
  t35431 = t31097 + t35426 + t31142;
  t35535 = 3.e-6*t25910*t26044*t29913;
  t35537 = -3.e-6*t25561*t29934;
  t35538 = 9.e-12*t25910*t29913*t30065;
  t35541 = t35535 + t35537 + t35538;
  t35811 = t35715 + t12283;
  t36130 = 9.e-12*t33925;
  t35411 = -1.*t12236;
  t36116 = -1.000000000009*t33925;
  t36127 = 1. + t36116;
  t35750 = t35715 + t31146;
  t35442 = 1.e-7*var1[12];
  t35443 = 5.4e-18*t33925;
  t35501 = -0.200000000003*t34080;
  t35522 = 0.100000000003*t35415;
  t35528 = t35442 + t35443 + t35501 + t35522;
  t35409 = -0.2000000000048*t33925;
  t35412 = t34191 + t35411;
  t35413 = 0.100000000003*t35412;
  t35416 = 3.e-7*t35415;
  t35421 = t33905 + t35409 + t35413 + t35416;
  t33941 = 0.1000000000039*t33925;
  t34108 = 3.e-7*t34080;
  t34342 = t34191 + t12236;
  t34551 = -0.200000000003*t34342;
  t34863 = t33905 + t33941 + t34108 + t34551;
  t36371 = -1.*t30057*t25910*t26044;
  t36373 = t36371 + t31030;
  t36138 = t36130 + t12236;
  t36375 = -3.e-6*t25909*t25910*t26044;
  t36376 = -1.*t25561*t25910*t30065;
  t36377 = t36375 + t36376;
  t36379 = -3.e-6*t25910*t26044*t29913;
  t36382 = t25910*t29913*t30065;
  t36383 = t36379 + t36382;
  t36273 = t36130 + t35411;
  t35845 = -1.8e-11*t33925;
  t35865 = 1. + t35845;
  t36366 = -1.8e-12*t25909;
  t36367 = -1. + t25561;
  t36368 = 0.2*t36367;
  t36369 = t36366 + t36368;
  t36496 = -3.e-6*t25910*t29913;
  t36497 = -3.e-6*t25909*t26044*t29934;
  t36498 = t30057*t29934*t30065;
  t36499 = t36496 + t36497 + t36498;
  t36502 = t25910*t29913;
  t36503 = -1.*t25561*t26044*t29934;
  t36504 = 3.e-6*t25909*t29934*t30065;
  t36505 = t36502 + t36503 + t36504;
  t36507 = t31100*t25910;
  t36508 = t26044*t29913*t29934;
  t36517 = 3.e-6*t29913*t29934*t30065;
  t36518 = t36507 + t36508 + t36517;
  t36573 = Sin(var1[3]);
  t36578 = 3.e-6*t25909*t25910*t26044*t36573;
  t36580 = -3.e-6*t29913*t36573*t29934;
  t36582 = -1.*t30057*t25910*t36573*t30065;
  t36583 = t36578 + t36580 + t36582;
  t36586 = t25561*t25910*t26044*t36573;
  t36587 = t29913*t36573*t29934;
  t36588 = -3.e-6*t25909*t25910*t36573*t30065;
  t36590 = t36586 + t36587 + t36588;
  t36592 = -1.*t25910*t26044*t29913*t36573;
  t36593 = t31100*t36573*t29934;
  t36594 = -3.e-6*t25910*t29913*t36573*t30065;
  t36595 = t36592 + t36593 + t36594;
  t36631 = Cos(var1[3]);
  t36633 = t36631*t26044*t29934;
  t36634 = -1.*t36573*t30065;
  t36636 = t36633 + t36634;
  t36639 = -1.*t26044*t36573;
  t36640 = -1.*t36631*t29934*t30065;
  t36642 = t36639 + t36640;
  t36644 = 3.e-6*t36631*t25910*t29913;
  t36646 = 3.e-6*t25909*t36636;
  t36647 = t30057*t36642;
  t36648 = t36644 + t36646 + t36647;
  t36651 = -1.*t36631*t25910*t29913;
  t36652 = t25561*t36636;
  t36654 = 3.e-6*t25909*t36642;
  t36656 = t36651 + t36652 + t36654;
  t36660 = -1.*t31100*t36631*t25910;
  t36664 = -1.*t29913*t36636;
  t36665 = 3.e-6*t29913*t36642;
  t36666 = t36660 + t36664 + t36665;
  t36804 = -1.*t26044*t36573*t29934;
  t36812 = -1.*t36631*t30065;
  t36813 = t36804 + t36812;
  t36907 = t36631*t26044;
  t36957 = -1.*t36573*t29934*t30065;
  t36959 = t36907 + t36957;
  t36981 = t30057*t36813;
  t37019 = 3.e-6*t25909*t36959;
  t37023 = t36981 + t37019;
  t37113 = 3.e-6*t25909*t36813;
  t37115 = t25561*t36959;
  t37135 = t37113 + t37115;
  t37141 = 3.e-6*t29913*t36813;
  t37296 = -1.*t29913*t36959;
  t37328 = t37141 + t37296;
  t12288 = -0.200000000003*t12287;
  t21830 = 0.100000000003*t21807;
  t21902 = 5.4e-18*t12236;
  t22174 = 1.e-7 + t12288 + t21830 + t21902;
  t30346 = 3.e-7*t21807;
  t30732 = t30399 + t30644;
  t31016 = 0.100000000003*t30732;
  t31019 = -0.2000000000048*t12236;
  t31021 = 3.e-13 + t30346 + t31016 + t31019;
  t37713 = t26044*t36573*t29934;
  t37745 = t36631*t30065;
  t37748 = t37713 + t37745;
  t31089 = 3.e-7*t12287;
  t31090 = t383 + t30644;
  t31091 = -0.200000000003*t31090;
  t31093 = 0.1000000000039*t12236;
  t31096 = 3.e-13 + t31089 + t31091 + t31093;
  t37673 = 3.e-6*t25910*t29913*t36573;
  t37749 = 3.e-6*t25909*t37748;
  t37795 = t30057*t36959;
  t38630 = t37673 + t37749 + t37795;
  t39340 = -1.*t25910*t29913*t36573;
  t39412 = t25561*t37748;
  t39425 = t39340 + t39412 + t37019;
  t31153 = t30399 + t31152;
  t39435 = -1.*t31100*t25910*t36573;
  t39437 = -1.*t29913*t37748;
  t39439 = 3.e-6*t29913*t36959;
  t39441 = t39435 + t39437 + t39439;
  t31552 = t383 + t31152;
  t40273 = 1.000000000009*t25910*t29913*t36573;
  t40280 = -1.*t25561*t37748;
  t40282 = 3.e-6*t25561*t36959;
  t40283 = t40273 + t40280 + t40282;
  t40285 = 3.e-6*t25561*t25910*t36573;
  t40286 = 3.e-6*t29913*t37748;
  t40288 = -9.e-12*t29913*t36959;
  t40289 = t40285 + t40286 + t40288;
  t40292 = -1.*t25561*t25910*t36573;
  t40295 = t40292 + t39437 + t39439;
  t40990 = -3.e-6*t25909*t36631*t25910*t26044;
  t40991 = 3.e-6*t36631*t29913*t29934;
  t40992 = t30057*t36631*t25910*t30065;
  t40993 = t40990 + t40991 + t40992;
  t41002 = -1.*t25561*t36631*t25910*t26044;
  t41006 = -1.*t36631*t29913*t29934;
  t41008 = 3.e-6*t25909*t36631*t25910*t30065;
  t41009 = t41002 + t41006 + t41008;
  t41011 = t36631*t25910*t26044*t29913;
  t41012 = -1.*t31100*t36631*t29934;
  t41013 = 3.e-6*t36631*t25910*t29913*t30065;
  t41024 = t41011 + t41012 + t41013;
  t41098 = t26044*t36573;
  t41100 = t36631*t29934*t30065;
  t41109 = t41098 + t41100;
  t41293 = t30057*t36636;
  t41295 = 3.e-6*t25909*t41109;
  t41297 = t41293 + t41295;
  t41346 = t25561*t41109;
  t41350 = t36646 + t41346;
  t41356 = 3.e-6*t29913*t36636;
  t41358 = -1.*t29913*t41109;
  t41359 = t41356 + t41358;
  t43126 = -1.*t36631*t26044*t29934;
  t43127 = t36573*t30065;
  t43128 = t43126 + t43127;
  t43125 = -3.e-6*t36631*t25910*t29913;
  t43509 = 3.e-6*t25909*t43128;
  t43921 = t30057*t41109;
  t44437 = t43125 + t43509 + t43921;
  t44552 = t36631*t25910*t29913;
  t44588 = t25561*t43128;
  t44589 = t44552 + t44588 + t41295;
  t44691 = t31100*t36631*t25910;
  t44766 = -1.*t29913*t43128;
  t44767 = 3.e-6*t29913*t41109;
  t44768 = t44691 + t44766 + t44767;
  t44800 = -1.000000000009*t36631*t25910*t29913;
  t44801 = -1.*t25561*t43128;
  t44812 = 3.e-6*t25561*t41109;
  t44829 = t44800 + t44801 + t44812;
  t44852 = -3.e-6*t25561*t36631*t25910;
  t44854 = 3.e-6*t29913*t43128;
  t44856 = -9.e-12*t29913*t41109;
  t44857 = t44852 + t44854 + t44856;
  t44859 = t25561*t36631*t25910;
  t44860 = t44859 + t44766 + t44767;
  p_output1[0]=var2[0] + (0.2000000000018*t25910*t29913 + 6.000000000054e-7*t25909*t29934*t30065 - 1.*t26044*t29934*t36369 + t35528*t36499 + t35421*t36505 + t34863*t36518 + 0.100001*(t35865*t36499 + t35811*t36505 + t35750*t36518) - 0.3*(t35811*t36499 + t36138*t36505 + t36127*t36518) + 0.2*(-1.*t35750*t36499 - 1.*t36127*t36505 - 1.*t36273*t36518))*var2[4] + (-6.000000000054e-7*t25909*t25910*t26044 - 1.*t25910*t30065*t36369 + t35528*t36373 + t35421*t36377 + t34863*t36383 + 0.100001*(t35865*t36373 + t35811*t36377 + t35750*t36383) - 0.3*(t35811*t36373 + t36138*t36377 + t36127*t36383) + 0.2*(-1.*t35750*t36373 - 1.*t36127*t36377 - 1.*t36273*t36383))*var2[5] + (-0.2000000000018*t25910*t26044*t29913 + 0.2000000000018*t25561*t29934 - 6.000000000054e-7*t25910*t29913*t30065 + t34863*t35397 + t35421*t35431 + t35528*t35541 + 0.100001*(t35397*t35750 + t35431*t35811 + t35541*t35865) - 0.3*(t35541*t35811 + t35397*t36127 + t35431*t36138) + 0.2*(-1.*t35541*t35750 - 1.*t35431*t36127 - 1.*t35397*t36273))*var2[10] + (t22174*t30153 + t31021*t31062 + t31096*t31144 + 0.2*(1.000000000009*t12236*t31062 - 1.*t30153*t31147 - 1.*t31144*t31153) + 0.100001*(-1.8e-11*t12236*t30153 + t31144*t31147 + t31062*t31198) - 0.3*(-1.000000000009*t12236*t31144 + t30153*t31198 + t31062*t31552))*var2[12];
  p_output1[1]=var2[1] + (-0.2000000000018*t25910*t29913*t36631 + t36369*t36636 + 6.000000000054e-7*t25909*t36642 + t35528*t36648 + t35421*t36656 + t34863*t36666 + 0.100001*(t35865*t36648 + t35811*t36656 + t35750*t36666) - 0.3*(t35811*t36648 + t36138*t36656 + t36127*t36666) + 0.2*(-1.*t35750*t36648 - 1.*t36127*t36656 - 1.*t36273*t36666))*var2[3] + (0.2000000000018*t29913*t29934*t36573 - 6.000000000054e-7*t25909*t25910*t30065*t36573 + t25910*t26044*t36369*t36573 + t35528*t36583 + t35421*t36590 + t34863*t36595 + 0.100001*(t35865*t36583 + t35811*t36590 + t35750*t36595) - 0.3*(t35811*t36583 + t36138*t36590 + t36127*t36595) + 0.2*(-1.*t35750*t36583 - 1.*t36127*t36590 - 1.*t36273*t36595))*var2[4] + (6.000000000054e-7*t25909*t36813 + t36369*t36959 + t35528*t37023 + t35421*t37135 + t34863*t37328 + 0.100001*(t35865*t37023 + t35811*t37135 + t35750*t37328) - 0.3*(t35811*t37023 + t36138*t37135 + t36127*t37328) + 0.2*(-1.*t35750*t37023 - 1.*t36127*t37135 - 1.*t36273*t37328))*var2[5] + (-0.2000000000018*t25561*t25910*t36573 + 6.000000000054e-7*t29913*t36959 - 0.2000000000018*t29913*t37748 + t34863*t40283 + t35528*t40289 + t35421*t40295 + 0.100001*(t35750*t40283 + t35865*t40289 + t35811*t40295) + 0.2*(-1.*t36273*t40283 - 1.*t35750*t40289 - 1.*t36127*t40295) - 0.3*(t36127*t40283 + t35811*t40289 + t36138*t40295))*var2[10] + (t22174*t38630 + t31021*t39425 + t31096*t39441 - 0.3*(t31198*t38630 + t31552*t39425 - 1.000000000009*t12236*t39441) + 0.100001*(-1.8e-11*t12236*t38630 + t31198*t39425 + t31147*t39441) + 0.2*(-1.*t31147*t38630 + 1.000000000009*t12236*t39425 - 1.*t31153*t39441))*var2[12];
  p_output1[2]=var2[2] + (-0.2000000000018*t25910*t29913*t36573 + 6.000000000054e-7*t25909*t36959 + t36369*t37748 + t35528*t38630 + t35421*t39425 + t34863*t39441 + 0.100001*(t35865*t38630 + t35811*t39425 + t35750*t39441) - 0.3*(t35811*t38630 + t36138*t39425 + t36127*t39441) + 0.2*(-1.*t35750*t38630 - 1.*t36127*t39425 - 1.*t36273*t39441))*var2[3] + (-0.2000000000018*t29913*t29934*t36631 + 6.000000000054e-7*t25909*t25910*t30065*t36631 - 1.*t25910*t26044*t36369*t36631 + t35528*t40993 + t35421*t41009 + t34863*t41024 + 0.100001*(t35865*t40993 + t35811*t41009 + t35750*t41024) - 0.3*(t35811*t40993 + t36138*t41009 + t36127*t41024) + 0.2*(-1.*t35750*t40993 - 1.*t36127*t41009 - 1.*t36273*t41024))*var2[4] + (6.000000000054e-7*t25909*t36636 + t36369*t41109 + t35528*t41297 + t35421*t41350 + t34863*t41359 + 0.100001*(t35865*t41297 + t35811*t41350 + t35750*t41359) - 0.3*(t35811*t41297 + t36138*t41350 + t36127*t41359) + 0.2*(-1.*t35750*t41297 - 1.*t36127*t41350 - 1.*t36273*t41359))*var2[5] + (0.2000000000018*t25561*t25910*t36631 + 6.000000000054e-7*t29913*t41109 - 0.2000000000018*t29913*t43128 + t34863*t44829 + t35528*t44857 + t35421*t44860 + 0.100001*(t35750*t44829 + t35865*t44857 + t35811*t44860) + 0.2*(-1.*t36273*t44829 - 1.*t35750*t44857 - 1.*t36127*t44860) - 0.3*(t36127*t44829 + t35811*t44857 + t36138*t44860))*var2[10] + (t22174*t44437 + t31021*t44589 + t31096*t44768 - 0.3*(t31198*t44437 + t31552*t44589 - 1.000000000009*t12236*t44768) + 0.100001*(-1.8e-11*t12236*t44437 + t31198*t44589 + t31147*t44768) + 0.2*(-1.*t31147*t44437 + 1.000000000009*t12236*t44589 - 1.*t31153*t44768))*var2[12];
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

#include "impact_velocity_LeftBackFoot.hh"

namespace Flight2
{

void impact_velocity_LeftBackFoot_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
