/*
 * Automatically Generated from Mathematica.
 * Wed 29 May 2019 23:44:52 GMT-04:00
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
  double t17818;
  double t19623;
  double t19702;
  double t20216;
  double t20373;
  double t20398;
  double t20490;
  double t20496;
  double t20541;
  double t15719;
  double t17711;
  double t19838;
  double t20296;
  double t20590;
  double t20594;
  double t21293;
  double t20544;
  double t20580;
  double t21321;
  double t20859;
  double t20895;
  double t21021;
  double t21114;
  double t21253;
  double t21258;
  double t21562;
  double t21620;
  double t21629;
  double t21632;
  double t22141;
  double t22274;
  double t22439;
  double t22440;
  double t22442;
  double t22510;
  double t22525;
  double t22610;
  double t22614;
  double t22591;
  double t21341;
  double t22546;
  double t22637;
  double t20338;
  double t20491;
  double t20586;
  double t20595;
  double t20599;
  double t21294;
  double t21397;
  double t21416;
  double t21469;
  double t21507;
  double t21671;
  double t21694;
  double t21807;
  double t21915;
  double t22044;
  double t23034;
  double t23085;
  double t23093;
  double t22594;
  double t23212;
  double t23228;
  double t23268;
  double t23326;
  double t23431;
  double t23479;
  double t22646;
  double t22739;
  double t22742;
  double t24539;
  double t24557;
  double t24568;
  double t24570;
  double t24583;
  double t24678;
  double t24696;
  double t24746;
  double t24965;
  double t24992;
  double t25007;
  double t25021;
  double t26008;
  double t26038;
  double t25843;
  double t25913;
  double t27026;
  double t26762;
  double t26779;
  double t26930;
  double t27022;
  double t27319;
  double t27403;
  double t27411;
  double t27658;
  double t27666;
  double t27930;
  double t28379;
  double t28182;
  double t28524;
  double t28549;
  double t28531;
  double t28562;
  double t28563;
  double t28576;
  double t28577;
  double t28582;
  double t28598;
  double t28604;
  double t28606;
  double t28624;
  double t28642;
  double t28643;
  double t28657;
  double t28681;
  double t28709;
  double t28719;
  double t28838;
  double t28870;
  double t29033;
  double t29035;
  double t29040;
  double t29051;
  double t29056;
  double t29065;
  double t29090;
  double t29092;
  double t29097;
  double t29101;
  double t29102;
  double t29104;
  double t29189;
  double t29191;
  double t29197;
  double t29259;
  double t29292;
  double t29295;
  double t29396;
  double t29401;
  double t29403;
  double t29410;
  double t29416;
  double t29418;
  double t29424;
  double t29429;
  double t29432;
  double t29482;
  double t29487;
  double t29492;
  double t29532;
  double t29533;
  double t29553;
  double t29579;
  double t29611;
  double t29631;
  double t29648;
  double t29654;
  double t29697;
  double t29709;
  double t29713;
  double t29720;
  double t25939;
  double t26046;
  double t26466;
  double t26733;
  double t27025;
  double t27110;
  double t27297;
  double t27302;
  double t27317;
  double t27449;
  double t27457;
  double t27581;
  double t27625;
  double t27652;
  double t29848;
  double t29857;
  double t29882;
  double t29890;
  double t29917;
  double t29919;
  double t29920;
  double t28218;
  double t29932;
  double t29940;
  double t28498;
  double t30118;
  double t30124;
  double t30126;
  double t30130;
  double t30139;
  double t30181;
  double t30219;
  double t30220;
  double t30255;
  double t30257;
  double t30346;
  double t30349;
  double t30414;
  double t30416;
  double t30419;
  double t30422;
  double t30424;
  double t30428;
  double t30438;
  double t30441;
  double t30446;
  double t30448;
  double t30449;
  double t30518;
  double t30521;
  double t30524;
  double t30530;
  double t30532;
  double t30535;
  double t30536;
  double t30540;
  double t30542;
  double t30547;
  double t30552;
  double t30568;
  double t30574;
  double t30577;
  double t30579;
  double t30707;
  double t30713;
  double t30715;
  double t30717;
  double t30724;
  double t30726;
  double t30731;
  double t30737;
  double t30738;
  t17818 = Cos(var1[15]);
  t19623 = -1.*t17818;
  t19702 = 1. + t19623;
  t20216 = Sin(var1[4]);
  t20373 = Cos(var1[17]);
  t20398 = -1.*t20373;
  t20490 = 1. + t20398;
  t20496 = -3.e-6*t20490;
  t20541 = Sin(var1[17]);
  t15719 = Cos(var1[4]);
  t17711 = Sin(var1[15]);
  t19838 = Cos(var1[5]);
  t20296 = Sin(var1[5]);
  t20590 = 3.e-6*t20541;
  t20594 = t20496 + t20590;
  t21293 = 9.e-13*var1[17];
  t20544 = -3.e-6*t20541;
  t20580 = t20496 + t20544;
  t21321 = -9.e-12*t20490;
  t20859 = -3.e-6*t15719*t17711;
  t20895 = -3.e-6*t19702*t19838*t20216;
  t21021 = -9.e-12*t19702;
  t21114 = 1. + t21021;
  t21253 = t21114*t20216*t20296;
  t21258 = t20859 + t20895 + t21253;
  t21562 = t15719*t17711;
  t21620 = -1.*t17818*t19838*t20216;
  t21629 = 3.e-6*t19702*t20216*t20296;
  t21632 = t21562 + t21620 + t21629;
  t22141 = -1.000000000009*t19702;
  t22274 = 1. + t22141;
  t22439 = t22274*t15719;
  t22440 = t19838*t17711*t20216;
  t22442 = 3.e-6*t17711*t20216*t20296;
  t22510 = t22439 + t22440 + t22442;
  t22525 = 3.e-6*t20490;
  t22610 = -1.000000000009*t20490;
  t22614 = 1. + t22610;
  t22591 = 9.e-12*t20490;
  t21341 = -1.*t20541;
  t22546 = t22525 + t20544;
  t22637 = t22525 + t20590;
  t20338 = 3.e-7*var1[17];
  t20491 = -1.62e-17*t20490;
  t20586 = 0.2*t20580;
  t20595 = 0.1*t20594;
  t20599 = t20338 + t20491 + t20586 + t20595;
  t21294 = 0.2000000000018*t20490;
  t21397 = t21321 + t21341;
  t21416 = 0.1*t21397;
  t21469 = -9.e-7*t20594;
  t21507 = t21293 + t21294 + t21416 + t21469;
  t21671 = 0.1000000000009*t20490;
  t21694 = -9.e-7*t20580;
  t21807 = t21321 + t20541;
  t21915 = 0.2*t21807;
  t22044 = t21293 + t21671 + t21694 + t21915;
  t23034 = -1.*t21114*t15719*t19838;
  t23085 = -3.e-6*t19702*t15719*t20296;
  t23093 = t23034 + t23085;
  t22594 = t22591 + t20541;
  t23212 = -3.e-6*t19702*t15719*t19838;
  t23228 = -1.*t17818*t15719*t20296;
  t23268 = t23212 + t23228;
  t23326 = -3.e-6*t15719*t19838*t17711;
  t23431 = t15719*t17711*t20296;
  t23479 = t23326 + t23431;
  t22646 = t22591 + t21341;
  t22739 = -1.8e-11*t20490;
  t22742 = 1. + t22739;
  t24539 = -1.*t17818*t15719*t19838;
  t24557 = -1.000000000009*t17711*t20216;
  t24568 = -3.e-6*t17818*t15719*t20296;
  t24570 = t24539 + t24557 + t24568;
  t24583 = -1.*t15719*t19838*t17711;
  t24678 = t17818*t20216;
  t24696 = -3.e-6*t15719*t17711*t20296;
  t24746 = t24583 + t24678 + t24696;
  t24965 = 3.e-6*t15719*t19838*t17711;
  t24992 = -3.e-6*t17818*t20216;
  t25007 = 9.e-12*t15719*t17711*t20296;
  t25021 = t24965 + t24992 + t25007;
  t26008 = 3.e-6*t20373;
  t26038 = t26008 + t20544;
  t25843 = -3.e-6*t20373;
  t25913 = t25843 + t20544;
  t27026 = -9.e-12*t20541;
  t26762 = 3.e-6*t19702*t15719*t19838;
  t26779 = -3.e-6*t17711*t20216;
  t26930 = -1.*t21114*t15719*t20296;
  t27022 = t26762 + t26779 + t26930;
  t27319 = t17818*t15719*t19838;
  t27403 = t17711*t20216;
  t27411 = t27319 + t27403 + t23085;
  t27658 = t22274*t20216;
  t27666 = t24583 + t27658 + t24696;
  t27930 = t26008 + t20590;
  t28379 = t25843 + t20590;
  t28182 = 9.e-12*t20541;
  t28524 = Cos(var1[3]);
  t28549 = Sin(var1[3]);
  t28531 = t28524*t19838*t20216;
  t28562 = -1.*t28549*t20296;
  t28563 = t28531 + t28562;
  t28576 = -1.*t19838*t28549;
  t28577 = -1.*t28524*t20216*t20296;
  t28582 = t28576 + t28577;
  t28598 = 3.e-6*t28524*t15719*t17711;
  t28604 = 3.e-6*t19702*t28563;
  t28606 = t21114*t28582;
  t28624 = t28598 + t28604 + t28606;
  t28642 = -1.*t28524*t15719*t17711;
  t28643 = t17818*t28563;
  t28657 = 3.e-6*t19702*t28582;
  t28681 = t28642 + t28643 + t28657;
  t28709 = -1.*t22274*t28524*t15719;
  t28719 = -1.*t17711*t28563;
  t28838 = 3.e-6*t17711*t28582;
  t28870 = t28709 + t28719 + t28838;
  t29033 = 3.e-6*t19702*t15719*t19838*t28549;
  t29035 = -3.e-6*t17711*t28549*t20216;
  t29040 = -1.*t21114*t15719*t28549*t20296;
  t29051 = t29033 + t29035 + t29040;
  t29056 = t17818*t15719*t19838*t28549;
  t29065 = t17711*t28549*t20216;
  t29090 = -3.e-6*t19702*t15719*t28549*t20296;
  t29092 = t29056 + t29065 + t29090;
  t29097 = -1.*t15719*t19838*t17711*t28549;
  t29101 = t22274*t28549*t20216;
  t29102 = -3.e-6*t15719*t17711*t28549*t20296;
  t29104 = t29097 + t29101 + t29102;
  t29189 = -1.*t19838*t28549*t20216;
  t29191 = -1.*t28524*t20296;
  t29197 = t29189 + t29191;
  t29259 = t28524*t19838;
  t29292 = -1.*t28549*t20216*t20296;
  t29295 = t29259 + t29292;
  t29396 = t21114*t29197;
  t29401 = 3.e-6*t19702*t29295;
  t29403 = t29396 + t29401;
  t29410 = 3.e-6*t19702*t29197;
  t29416 = t17818*t29295;
  t29418 = t29410 + t29416;
  t29424 = 3.e-6*t17711*t29197;
  t29429 = -1.*t17711*t29295;
  t29432 = t29424 + t29429;
  t29482 = t19838*t28549*t20216;
  t29487 = t28524*t20296;
  t29492 = t29482 + t29487;
  t29532 = 1.000000000009*t15719*t17711*t28549;
  t29533 = -1.*t17818*t29492;
  t29553 = 3.e-6*t17818*t29295;
  t29579 = t29532 + t29533 + t29553;
  t29611 = 3.e-6*t17818*t15719*t28549;
  t29631 = 3.e-6*t17711*t29492;
  t29648 = -9.e-12*t17711*t29295;
  t29654 = t29611 + t29631 + t29648;
  t29697 = -1.*t17818*t15719*t28549;
  t29709 = -1.*t17711*t29492;
  t29713 = 3.e-6*t17711*t29295;
  t29720 = t29697 + t29709 + t29713;
  t25939 = 0.2*t25913;
  t26046 = 0.1*t26038;
  t26466 = -1.62e-17*t20541;
  t26733 = 3.e-7 + t25939 + t26046 + t26466;
  t27025 = -9.e-7*t26038;
  t27110 = t20398 + t27026;
  t27297 = 0.1*t27110;
  t27302 = 0.2000000000018*t20541;
  t27317 = 9.e-13 + t27025 + t27297 + t27302;
  t27449 = -9.e-7*t25913;
  t27457 = t20373 + t27026;
  t27581 = 0.2*t27457;
  t27625 = 0.1000000000009*t20541;
  t27652 = 9.e-13 + t27449 + t27581 + t27625;
  t29848 = 3.e-6*t15719*t17711*t28549;
  t29857 = 3.e-6*t19702*t29492;
  t29882 = t21114*t29295;
  t29890 = t29848 + t29857 + t29882;
  t29917 = -1.*t15719*t17711*t28549;
  t29919 = t17818*t29492;
  t29920 = t29917 + t29919 + t29401;
  t28218 = t20398 + t28182;
  t29932 = -1.*t22274*t15719*t28549;
  t29940 = t29932 + t29709 + t29713;
  t28498 = t20373 + t28182;
  t30118 = -3.e-6*t19702*t28524*t15719*t19838;
  t30124 = 3.e-6*t28524*t17711*t20216;
  t30126 = t21114*t28524*t15719*t20296;
  t30130 = t30118 + t30124 + t30126;
  t30139 = -1.*t17818*t28524*t15719*t19838;
  t30181 = -1.*t28524*t17711*t20216;
  t30219 = 3.e-6*t19702*t28524*t15719*t20296;
  t30220 = t30139 + t30181 + t30219;
  t30255 = t28524*t15719*t19838*t17711;
  t30257 = -1.*t22274*t28524*t20216;
  t30346 = 3.e-6*t28524*t15719*t17711*t20296;
  t30349 = t30255 + t30257 + t30346;
  t30414 = t19838*t28549;
  t30416 = t28524*t20216*t20296;
  t30419 = t30414 + t30416;
  t30422 = t21114*t28563;
  t30424 = 3.e-6*t19702*t30419;
  t30428 = t30422 + t30424;
  t30438 = t17818*t30419;
  t30441 = t28604 + t30438;
  t30446 = 3.e-6*t17711*t28563;
  t30448 = -1.*t17711*t30419;
  t30449 = t30446 + t30448;
  t30518 = -1.*t28524*t19838*t20216;
  t30521 = t28549*t20296;
  t30524 = t30518 + t30521;
  t30530 = -1.000000000009*t28524*t15719*t17711;
  t30532 = -1.*t17818*t30524;
  t30535 = 3.e-6*t17818*t30419;
  t30536 = t30530 + t30532 + t30535;
  t30540 = -3.e-6*t17818*t28524*t15719;
  t30542 = 3.e-6*t17711*t30524;
  t30547 = -9.e-12*t17711*t30419;
  t30552 = t30540 + t30542 + t30547;
  t30568 = t17818*t28524*t15719;
  t30574 = -1.*t17711*t30524;
  t30577 = 3.e-6*t17711*t30419;
  t30579 = t30568 + t30574 + t30577;
  t30707 = -3.e-6*t28524*t15719*t17711;
  t30713 = 3.e-6*t19702*t30524;
  t30715 = t21114*t30419;
  t30717 = t30707 + t30713 + t30715;
  t30724 = t28524*t15719*t17711;
  t30726 = t17818*t30524;
  t30731 = t30724 + t30726 + t30424;
  t30737 = t22274*t28524*t15719;
  t30738 = t30737 + t30574 + t30577;
  p_output1[0]=1.;
  p_output1[1]=-0.2000000000018*t15719*t17711 - 0.2000000000018*t19702*t19838*t20216 - 6.000000000054e-7*t19702*t20216*t20296 + t20599*t21258 + t21507*t21632 + t22044*t22510 - 0.3*(t21258*t22546 + t21632*t22594 + t22510*t22614) + 0.2*(t21632*t22614 + t21258*t22637 + t22510*t22646) - 0.099999*(t21632*t22546 + t22510*t22637 + t21258*t22742);
  p_output1[2]=6.000000000054e-7*t15719*t19702*t19838 - 0.2000000000018*t15719*t19702*t20296 + t20599*t23093 + t21507*t23268 + t22044*t23479 - 0.3*(t22546*t23093 + t22594*t23268 + t22614*t23479) - 0.099999*(t22742*t23093 + t22546*t23268 + t22637*t23479) + 0.2*(t22637*t23093 + t22614*t23268 + t22646*t23479);
  p_output1[3]=0.2000000000018*t15719*t17711*t19838 - 0.2000000000018*t17818*t20216 + 6.000000000054e-7*t15719*t17711*t20296 + t22044*t24570 + t21507*t24746 + t20599*t25021 - 0.3*(t22614*t24570 + t22594*t24746 + t22546*t25021) + 0.2*(t22646*t24570 + t22614*t24746 + t22637*t25021) - 0.099999*(t22637*t24570 + t22546*t24746 + t22742*t25021);
  p_output1[4]=t26733*t27022 + t27317*t27411 + t27652*t27666 + 0.2*(-1.000000000009*t20541*t27411 + t27022*t27930 + t27666*t28218) - 0.099999*(-1.8e-11*t20541*t27022 + t27666*t27930 + t27411*t28379) - 0.3*(-1.000000000009*t20541*t27666 + t27022*t28379 + t27411*t28498);
  p_output1[5]=-1.;
  p_output1[6]=1.;
  p_output1[7]=0.2000000000018*t15719*t17711*t28524 + 0.2000000000018*t19702*t28563 - 6.000000000054e-7*t19702*t28582 + t20599*t28624 + t21507*t28681 + t22044*t28870 - 0.3*(t22546*t28624 + t22594*t28681 + t22614*t28870) - 0.099999*(t22742*t28624 + t22546*t28681 + t22637*t28870) + 0.2*(t22637*t28624 + t22614*t28681 + t22646*t28870);
  p_output1[8]=0.2000000000018*t15719*t19702*t19838*t28549 - 0.2000000000018*t17711*t20216*t28549 + 6.000000000054e-7*t15719*t19702*t20296*t28549 + t20599*t29051 + t21507*t29092 + t22044*t29104 - 0.3*(t22546*t29051 + t22594*t29092 + t22614*t29104) - 0.099999*(t22742*t29051 + t22546*t29092 + t22637*t29104) + 0.2*(t22637*t29051 + t22614*t29092 + t22646*t29104);
  p_output1[9]=-6.000000000054e-7*t19702*t29197 + 0.2000000000018*t19702*t29295 + t20599*t29403 + t21507*t29418 + t22044*t29432 - 0.3*(t22546*t29403 + t22594*t29418 + t22614*t29432) - 0.099999*(t22742*t29403 + t22546*t29418 + t22637*t29432) + 0.2*(t22637*t29403 + t22614*t29418 + t22646*t29432);
  p_output1[10]=0.2000000000018*t15719*t17818*t28549 - 6.000000000054e-7*t17711*t29295 + 0.2000000000018*t17711*t29492 + t22044*t29579 + t20599*t29654 + t21507*t29720 - 0.099999*(t22637*t29579 + t22742*t29654 + t22546*t29720) - 0.3*(t22614*t29579 + t22546*t29654 + t22594*t29720) + 0.2*(t22646*t29579 + t22637*t29654 + t22614*t29720);
  p_output1[11]=t26733*t29890 + t27317*t29920 + t27652*t29940 - 0.3*(t28379*t29890 + t28498*t29920 - 1.000000000009*t20541*t29940) - 0.099999*(-1.8e-11*t20541*t29890 + t28379*t29920 + t27930*t29940) + 0.2*(t27930*t29890 - 1.000000000009*t20541*t29920 + t28218*t29940);
  p_output1[12]=-1.;
  p_output1[13]=1.;
  p_output1[14]=0.2000000000018*t15719*t17711*t28549 - 6.000000000054e-7*t19702*t29295 + 0.2000000000018*t19702*t29492 + t20599*t29890 + t21507*t29920 + t22044*t29940 - 0.3*(t22546*t29890 + t22594*t29920 + t22614*t29940) - 0.099999*(t22742*t29890 + t22546*t29920 + t22637*t29940) + 0.2*(t22637*t29890 + t22614*t29920 + t22646*t29940);
  p_output1[15]=-0.2000000000018*t15719*t19702*t19838*t28524 + 0.2000000000018*t17711*t20216*t28524 - 6.000000000054e-7*t15719*t19702*t20296*t28524 + t20599*t30130 + t21507*t30220 + t22044*t30349 - 0.3*(t22546*t30130 + t22594*t30220 + t22614*t30349) - 0.099999*(t22742*t30130 + t22546*t30220 + t22637*t30349) + 0.2*(t22637*t30130 + t22614*t30220 + t22646*t30349);
  p_output1[16]=-6.000000000054e-7*t19702*t28563 + 0.2000000000018*t19702*t30419 + t20599*t30428 + t21507*t30441 + t22044*t30449 - 0.3*(t22546*t30428 + t22594*t30441 + t22614*t30449) - 0.099999*(t22742*t30428 + t22546*t30441 + t22637*t30449) + 0.2*(t22637*t30428 + t22614*t30441 + t22646*t30449);
  p_output1[17]=-0.2000000000018*t15719*t17818*t28524 - 6.000000000054e-7*t17711*t30419 + 0.2000000000018*t17711*t30524 + t22044*t30536 + t20599*t30552 + t21507*t30579 - 0.099999*(t22637*t30536 + t22742*t30552 + t22546*t30579) - 0.3*(t22614*t30536 + t22546*t30552 + t22594*t30579) + 0.2*(t22646*t30536 + t22637*t30552 + t22614*t30579);
  p_output1[18]=t26733*t30717 + t27317*t30731 + t27652*t30738 - 0.3*(t28379*t30717 + t28498*t30731 - 1.000000000009*t20541*t30738) - 0.099999*(-1.8e-11*t20541*t30717 + t28379*t30731 + t27930*t30738) + 0.2*(t27930*t30717 - 1.000000000009*t20541*t30731 + t28218*t30738);
  p_output1[19]=-1.;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 20, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_h_RightFrontFoot_FrontStance.hh"

namespace FrontStance
{

void J_h_RightFrontFoot_FrontStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
