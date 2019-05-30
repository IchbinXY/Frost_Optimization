/*
 * Automatically Generated from Mathematica.
 * Thu 30 May 2019 00:02:47 GMT-04:00
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
  double t3666;
  double t3812;
  double t4616;
  double t30335;
  double t30688;
  double t30859;
  double t30873;
  double t29309;
  double t29545;
  double t30963;
  double t31192;
  double t31666;
  double t32010;
  double t3765;
  double t23180;
  double t43793;
  double t31164;
  double t31677;
  double t31705;
  double t31885;
  double t32039;
  double t32095;
  double t43814;
  double t43815;
  double t43818;
  double t43819;
  double t43786;
  double t43861;
  double t43865;
  double t43866;
  double t43867;
  double t43948;
  double t43951;
  double t44134;
  double t44136;
  double t44164;
  double t44144;
  double t44505;
  double t44501;
  double t44524;
  double t44514;
  double t44515;
  double t44556;
  double t44534;
  double t44535;
  double t44539;
  double t44541;
  double t44632;
  double t44563;
  double t44566;
  double t44620;
  double t44621;
  double t44622;
  double t44629;
  double t44647;
  double t44710;
  double t44549;
  double t44683;
  double t44689;
  double t44633;
  double t44568;
  double t44588;
  double t44601;
  double t44602;
  double t44615;
  double t44548;
  double t44552;
  double t44553;
  double t44558;
  double t44559;
  double t44506;
  double t44516;
  double t44528;
  double t44532;
  double t44533;
  double t44780;
  double t44781;
  double t44717;
  double t44783;
  double t44784;
  double t44785;
  double t44787;
  double t44788;
  double t44789;
  double t44731;
  double t44658;
  double t44665;
  double t44816;
  double t44817;
  double t44818;
  double t44819;
  double t44821;
  double t44822;
  double t44824;
  double t44825;
  double t44827;
  double t44828;
  double t44829;
  double t44830;
  double t44982;
  double t45094;
  double t45107;
  double t45108;
  double t45110;
  double t45114;
  double t45115;
  double t45116;
  double t45118;
  double t45121;
  double t45122;
  double t45123;
  double t45125;
  double t45568;
  double t45574;
  double t45587;
  double t45598;
  double t45605;
  double t45610;
  double t45618;
  double t45622;
  double t45636;
  double t45637;
  double t45638;
  double t45806;
  double t45925;
  double t45929;
  double t45930;
  double t45945;
  double t45946;
  double t46025;
  double t46027;
  double t46697;
  double t46743;
  double t46757;
  double t46779;
  double t46828;
  double t46834;
  double t46840;
  double t46842;
  double t46858;
  double t46914;
  double t46922;
  double t46924;
  double t46968;
  double t46970;
  double t47029;
  double t28709;
  double t29648;
  double t29839;
  double t30219;
  double t43716;
  double t43795;
  double t43806;
  double t43808;
  double t43812;
  double t47359;
  double t47365;
  double t47377;
  double t43836;
  double t43843;
  double t43846;
  double t43853;
  double t43857;
  double t47358;
  double t47380;
  double t47387;
  double t47388;
  double t47405;
  double t47406;
  double t47408;
  double t44145;
  double t47458;
  double t48072;
  double t48074;
  double t48076;
  double t44174;
  double t48462;
  double t48464;
  double t48465;
  double t48469;
  double t48472;
  double t48473;
  double t48644;
  double t48649;
  double t48870;
  double t48885;
  double t49812;
  double t49823;
  double t49824;
  double t49828;
  double t49856;
  double t49896;
  double t49898;
  double t49904;
  double t49909;
  double t49920;
  double t49921;
  double t49926;
  double t50037;
  double t50062;
  double t50073;
  double t50087;
  double t50088;
  double t50091;
  double t50102;
  double t50103;
  double t50110;
  double t50211;
  double t50247;
  double t50410;
  double t50428;
  double t50438;
  double t50377;
  double t50454;
  double t50460;
  double t50461;
  double t50463;
  double t50469;
  double t50474;
  double t50479;
  double t50480;
  double t50485;
  double t50489;
  double t50632;
  double t50633;
  double t50642;
  double t50643;
  double t50665;
  double t50679;
  double t50680;
  double t50684;
  double t50694;
  double t50697;
  t3666 = Cos(var1[17]);
  t3812 = Sin(var1[17]);
  t4616 = -3.e-6*t3812;
  t30335 = Cos(var1[15]);
  t30688 = -1.*t30335;
  t30859 = 1. + t30688;
  t30873 = Cos(var1[4]);
  t29309 = 3.e-6*t3666;
  t29545 = t29309 + t4616;
  t30963 = Cos(var1[5]);
  t31192 = Sin(var1[15]);
  t31666 = Sin(var1[4]);
  t32010 = Sin(var1[5]);
  t3765 = -3.e-6*t3666;
  t23180 = t3765 + t4616;
  t43793 = -9.e-12*t3812;
  t31164 = 3.e-6*t30859*t30873*t30963;
  t31677 = -3.e-6*t31192*t31666;
  t31705 = -9.e-12*t30859;
  t31885 = 1. + t31705;
  t32039 = -1.*t31885*t30873*t32010;
  t32095 = t31164 + t31677 + t32039;
  t43814 = t30335*t30873*t30963;
  t43815 = t31192*t31666;
  t43818 = -3.e-6*t30859*t30873*t32010;
  t43819 = t43814 + t43815 + t43818;
  t43786 = -1.*t3666;
  t43861 = -1.*t30873*t30963*t31192;
  t43865 = -1.000000000009*t30859;
  t43866 = 1. + t43865;
  t43867 = t43866*t31666;
  t43948 = -3.e-6*t30873*t31192*t32010;
  t43951 = t43861 + t43867 + t43948;
  t44134 = 3.e-6*t3812;
  t44136 = t29309 + t44134;
  t44164 = t3765 + t44134;
  t44144 = 9.e-12*t3812;
  t44505 = 1. + t43786;
  t44501 = 9.e-13*var1[17];
  t44524 = -9.e-12*t44505;
  t44514 = -3.e-6*t44505;
  t44515 = t44514 + t4616;
  t44556 = t44514 + t44134;
  t44534 = -1.*t30335*t30873*t30963;
  t44535 = -1.000000000009*t31192*t31666;
  t44539 = -3.e-6*t30335*t30873*t32010;
  t44541 = t44534 + t44535 + t44539;
  t44632 = 3.e-6*t44505;
  t44563 = t30335*t31666;
  t44566 = t43861 + t44563 + t43948;
  t44620 = 3.e-6*t30873*t30963*t31192;
  t44621 = -3.e-6*t30335*t31666;
  t44622 = 9.e-12*t30873*t31192*t32010;
  t44629 = t44620 + t44621 + t44622;
  t44647 = t44632 + t4616;
  t44710 = 9.e-12*t44505;
  t44549 = -1.*t3812;
  t44683 = -1.000000000009*t44505;
  t44689 = 1. + t44683;
  t44633 = t44632 + t44134;
  t44568 = 3.e-7*var1[17];
  t44588 = -1.62e-17*t44505;
  t44601 = 0.2*t44515;
  t44602 = 0.1*t44556;
  t44615 = t44568 + t44588 + t44601 + t44602;
  t44548 = 0.2000000000018*t44505;
  t44552 = t44524 + t44549;
  t44553 = 0.1*t44552;
  t44558 = -9.e-7*t44556;
  t44559 = t44501 + t44548 + t44553 + t44558;
  t44506 = 0.1000000000009*t44505;
  t44516 = -9.e-7*t44515;
  t44528 = t44524 + t3812;
  t44532 = 0.2*t44528;
  t44533 = t44501 + t44506 + t44516 + t44532;
  t44780 = -1.*t31885*t30873*t30963;
  t44781 = t44780 + t43818;
  t44717 = t44710 + t3812;
  t44783 = -3.e-6*t30859*t30873*t30963;
  t44784 = -1.*t30335*t30873*t32010;
  t44785 = t44783 + t44784;
  t44787 = -3.e-6*t30873*t30963*t31192;
  t44788 = t30873*t31192*t32010;
  t44789 = t44787 + t44788;
  t44731 = t44710 + t44549;
  t44658 = -1.8e-11*t44505;
  t44665 = 1. + t44658;
  t44816 = -3.e-6*t30873*t31192;
  t44817 = -3.e-6*t30859*t30963*t31666;
  t44818 = t31885*t31666*t32010;
  t44819 = t44816 + t44817 + t44818;
  t44821 = t30873*t31192;
  t44822 = -1.*t30335*t30963*t31666;
  t44824 = 3.e-6*t30859*t31666*t32010;
  t44825 = t44821 + t44822 + t44824;
  t44827 = t43866*t30873;
  t44828 = t30963*t31192*t31666;
  t44829 = 3.e-6*t31192*t31666*t32010;
  t44830 = t44827 + t44828 + t44829;
  t44982 = Sin(var1[3]);
  t45094 = 3.e-6*t30859*t30873*t30963*t44982;
  t45107 = -3.e-6*t31192*t44982*t31666;
  t45108 = -1.*t31885*t30873*t44982*t32010;
  t45110 = t45094 + t45107 + t45108;
  t45114 = t30335*t30873*t30963*t44982;
  t45115 = t31192*t44982*t31666;
  t45116 = -3.e-6*t30859*t30873*t44982*t32010;
  t45118 = t45114 + t45115 + t45116;
  t45121 = -1.*t30873*t30963*t31192*t44982;
  t45122 = t43866*t44982*t31666;
  t45123 = -3.e-6*t30873*t31192*t44982*t32010;
  t45125 = t45121 + t45122 + t45123;
  t45568 = Cos(var1[3]);
  t45574 = t45568*t30963*t31666;
  t45587 = -1.*t44982*t32010;
  t45598 = t45574 + t45587;
  t45605 = -1.*t30963*t44982;
  t45610 = -1.*t45568*t31666*t32010;
  t45618 = t45605 + t45610;
  t45622 = 3.e-6*t45568*t30873*t31192;
  t45636 = 3.e-6*t30859*t45598;
  t45637 = t31885*t45618;
  t45638 = t45622 + t45636 + t45637;
  t45806 = -1.*t45568*t30873*t31192;
  t45925 = t30335*t45598;
  t45929 = 3.e-6*t30859*t45618;
  t45930 = t45806 + t45925 + t45929;
  t45945 = -1.*t43866*t45568*t30873;
  t45946 = -1.*t31192*t45598;
  t46025 = 3.e-6*t31192*t45618;
  t46027 = t45945 + t45946 + t46025;
  t46697 = -1.*t30963*t44982*t31666;
  t46743 = -1.*t45568*t32010;
  t46757 = t46697 + t46743;
  t46779 = t45568*t30963;
  t46828 = -1.*t44982*t31666*t32010;
  t46834 = t46779 + t46828;
  t46840 = t31885*t46757;
  t46842 = 3.e-6*t30859*t46834;
  t46858 = t46840 + t46842;
  t46914 = 3.e-6*t30859*t46757;
  t46922 = t30335*t46834;
  t46924 = t46914 + t46922;
  t46968 = 3.e-6*t31192*t46757;
  t46970 = -1.*t31192*t46834;
  t47029 = t46968 + t46970;
  t28709 = 0.2*t23180;
  t29648 = 0.1*t29545;
  t29839 = -1.62e-17*t3812;
  t30219 = 3.e-7 + t28709 + t29648 + t29839;
  t43716 = -9.e-7*t29545;
  t43795 = t43786 + t43793;
  t43806 = 0.1*t43795;
  t43808 = 0.2000000000018*t3812;
  t43812 = 9.e-13 + t43716 + t43806 + t43808;
  t47359 = t30963*t44982*t31666;
  t47365 = t45568*t32010;
  t47377 = t47359 + t47365;
  t43836 = -9.e-7*t23180;
  t43843 = t3666 + t43793;
  t43846 = 0.2*t43843;
  t43853 = 0.1000000000009*t3812;
  t43857 = 9.e-13 + t43836 + t43846 + t43853;
  t47358 = 3.e-6*t30873*t31192*t44982;
  t47380 = 3.e-6*t30859*t47377;
  t47387 = t31885*t46834;
  t47388 = t47358 + t47380 + t47387;
  t47405 = -1.*t30873*t31192*t44982;
  t47406 = t30335*t47377;
  t47408 = t47405 + t47406 + t46842;
  t44145 = t43786 + t44144;
  t47458 = -1.*t43866*t30873*t44982;
  t48072 = -1.*t31192*t47377;
  t48074 = 3.e-6*t31192*t46834;
  t48076 = t47458 + t48072 + t48074;
  t44174 = t3666 + t44144;
  t48462 = 1.000000000009*t30873*t31192*t44982;
  t48464 = -1.*t30335*t47377;
  t48465 = 3.e-6*t30335*t46834;
  t48469 = t48462 + t48464 + t48465;
  t48472 = 3.e-6*t30335*t30873*t44982;
  t48473 = 3.e-6*t31192*t47377;
  t48644 = -9.e-12*t31192*t46834;
  t48649 = t48472 + t48473 + t48644;
  t48870 = -1.*t30335*t30873*t44982;
  t48885 = t48870 + t48072 + t48074;
  t49812 = -3.e-6*t30859*t45568*t30873*t30963;
  t49823 = 3.e-6*t45568*t31192*t31666;
  t49824 = t31885*t45568*t30873*t32010;
  t49828 = t49812 + t49823 + t49824;
  t49856 = -1.*t30335*t45568*t30873*t30963;
  t49896 = -1.*t45568*t31192*t31666;
  t49898 = 3.e-6*t30859*t45568*t30873*t32010;
  t49904 = t49856 + t49896 + t49898;
  t49909 = t45568*t30873*t30963*t31192;
  t49920 = -1.*t43866*t45568*t31666;
  t49921 = 3.e-6*t45568*t30873*t31192*t32010;
  t49926 = t49909 + t49920 + t49921;
  t50037 = t30963*t44982;
  t50062 = t45568*t31666*t32010;
  t50073 = t50037 + t50062;
  t50087 = t31885*t45598;
  t50088 = 3.e-6*t30859*t50073;
  t50091 = t50087 + t50088;
  t50102 = t30335*t50073;
  t50103 = t45636 + t50102;
  t50110 = 3.e-6*t31192*t45598;
  t50211 = -1.*t31192*t50073;
  t50247 = t50110 + t50211;
  t50410 = -1.*t45568*t30963*t31666;
  t50428 = t44982*t32010;
  t50438 = t50410 + t50428;
  t50377 = -3.e-6*t45568*t30873*t31192;
  t50454 = 3.e-6*t30859*t50438;
  t50460 = t31885*t50073;
  t50461 = t50377 + t50454 + t50460;
  t50463 = t45568*t30873*t31192;
  t50469 = t30335*t50438;
  t50474 = t50463 + t50469 + t50088;
  t50479 = t43866*t45568*t30873;
  t50480 = -1.*t31192*t50438;
  t50485 = 3.e-6*t31192*t50073;
  t50489 = t50479 + t50480 + t50485;
  t50632 = -1.000000000009*t45568*t30873*t31192;
  t50633 = -1.*t30335*t50438;
  t50642 = 3.e-6*t30335*t50073;
  t50643 = t50632 + t50633 + t50642;
  t50665 = -3.e-6*t30335*t45568*t30873;
  t50679 = 3.e-6*t31192*t50438;
  t50680 = -9.e-12*t31192*t50073;
  t50684 = t50665 + t50679 + t50680;
  t50694 = t30335*t45568*t30873;
  t50697 = t50694 + t50480 + t50485;
  p_output1[0]=var2[0] + (-0.2000000000018*t30873*t31192 - 0.2000000000018*t30859*t30963*t31666 - 6.000000000054e-7*t30859*t31666*t32010 + t44615*t44819 + t44559*t44825 + t44533*t44830 - 0.099999*(t44665*t44819 + t44647*t44825 + t44633*t44830) - 0.3*(t44647*t44819 + t44717*t44825 + t44689*t44830) + 0.2*(t44633*t44819 + t44689*t44825 + t44731*t44830))*var2[4] + (6.000000000054e-7*t30859*t30873*t30963 - 0.2000000000018*t30859*t30873*t32010 + t44615*t44781 + t44559*t44785 + t44533*t44789 - 0.099999*(t44665*t44781 + t44647*t44785 + t44633*t44789) - 0.3*(t44647*t44781 + t44717*t44785 + t44689*t44789) + 0.2*(t44633*t44781 + t44689*t44785 + t44731*t44789))*var2[5] + (0.2000000000018*t30873*t30963*t31192 - 0.2000000000018*t30335*t31666 + 6.000000000054e-7*t30873*t31192*t32010 + t44533*t44541 + t44559*t44566 + t44615*t44629 - 0.099999*(t44541*t44633 + t44566*t44647 + t44629*t44665) - 0.3*(t44629*t44647 + t44541*t44689 + t44566*t44717) + 0.2*(t44629*t44633 + t44566*t44689 + t44541*t44731))*var2[15] + (t30219*t32095 + t43812*t43819 + t43857*t43951 + 0.2*(-1.000000000009*t3812*t43819 + t32095*t44136 + t43951*t44145) - 0.099999*(-1.8e-11*t32095*t3812 + t43951*t44136 + t43819*t44164) - 0.3*(-1.000000000009*t3812*t43951 + t32095*t44164 + t43819*t44174))*var2[17];
  p_output1[1]=var2[1] + (0.2000000000018*t30873*t31192*t45568 + 0.2000000000018*t30859*t45598 - 6.000000000054e-7*t30859*t45618 + t44615*t45638 + t44559*t45930 + t44533*t46027 - 0.099999*(t44665*t45638 + t44647*t45930 + t44633*t46027) - 0.3*(t44647*t45638 + t44717*t45930 + t44689*t46027) + 0.2*(t44633*t45638 + t44689*t45930 + t44731*t46027))*var2[3] + (0.2000000000018*t30859*t30873*t30963*t44982 - 0.2000000000018*t31192*t31666*t44982 + 6.000000000054e-7*t30859*t30873*t32010*t44982 + t44615*t45110 + t44559*t45118 + t44533*t45125 - 0.099999*(t44665*t45110 + t44647*t45118 + t44633*t45125) - 0.3*(t44647*t45110 + t44717*t45118 + t44689*t45125) + 0.2*(t44633*t45110 + t44689*t45118 + t44731*t45125))*var2[4] + (-6.000000000054e-7*t30859*t46757 + 0.2000000000018*t30859*t46834 + t44615*t46858 + t44559*t46924 + t44533*t47029 - 0.099999*(t44665*t46858 + t44647*t46924 + t44633*t47029) - 0.3*(t44647*t46858 + t44717*t46924 + t44689*t47029) + 0.2*(t44633*t46858 + t44689*t46924 + t44731*t47029))*var2[5] + (0.2000000000018*t30335*t30873*t44982 - 6.000000000054e-7*t31192*t46834 + 0.2000000000018*t31192*t47377 + t44533*t48469 + t44615*t48649 + t44559*t48885 - 0.099999*(t44633*t48469 + t44665*t48649 + t44647*t48885) + 0.2*(t44731*t48469 + t44633*t48649 + t44689*t48885) - 0.3*(t44689*t48469 + t44647*t48649 + t44717*t48885))*var2[15] + (t30219*t47388 + t43812*t47408 + t43857*t48076 - 0.3*(t44164*t47388 + t44174*t47408 - 1.000000000009*t3812*t48076) - 0.099999*(-1.8e-11*t3812*t47388 + t44164*t47408 + t44136*t48076) + 0.2*(t44136*t47388 - 1.000000000009*t3812*t47408 + t44145*t48076))*var2[17];
  p_output1[2]=var2[2] + (0.2000000000018*t30873*t31192*t44982 - 6.000000000054e-7*t30859*t46834 + 0.2000000000018*t30859*t47377 + t44615*t47388 + t44559*t47408 + t44533*t48076 - 0.099999*(t44665*t47388 + t44647*t47408 + t44633*t48076) - 0.3*(t44647*t47388 + t44717*t47408 + t44689*t48076) + 0.2*(t44633*t47388 + t44689*t47408 + t44731*t48076))*var2[3] + (-0.2000000000018*t30859*t30873*t30963*t45568 + 0.2000000000018*t31192*t31666*t45568 - 6.000000000054e-7*t30859*t30873*t32010*t45568 + t44615*t49828 + t44559*t49904 + t44533*t49926 - 0.099999*(t44665*t49828 + t44647*t49904 + t44633*t49926) - 0.3*(t44647*t49828 + t44717*t49904 + t44689*t49926) + 0.2*(t44633*t49828 + t44689*t49904 + t44731*t49926))*var2[4] + (-6.000000000054e-7*t30859*t45598 + 0.2000000000018*t30859*t50073 + t44615*t50091 + t44559*t50103 + t44533*t50247 - 0.099999*(t44665*t50091 + t44647*t50103 + t44633*t50247) - 0.3*(t44647*t50091 + t44717*t50103 + t44689*t50247) + 0.2*(t44633*t50091 + t44689*t50103 + t44731*t50247))*var2[5] + (-0.2000000000018*t30335*t30873*t45568 - 6.000000000054e-7*t31192*t50073 + 0.2000000000018*t31192*t50438 + t44533*t50643 + t44615*t50684 + t44559*t50697 - 0.099999*(t44633*t50643 + t44665*t50684 + t44647*t50697) + 0.2*(t44731*t50643 + t44633*t50684 + t44689*t50697) - 0.3*(t44689*t50643 + t44647*t50684 + t44717*t50697))*var2[15] + (t30219*t50461 + t43812*t50474 + t43857*t50489 - 0.3*(t44164*t50461 + t44174*t50474 - 1.000000000009*t3812*t50489) - 0.099999*(-1.8e-11*t3812*t50461 + t44164*t50474 + t44136*t50489) + 0.2*(t44136*t50461 - 1.000000000009*t3812*t50474 + t44145*t50489))*var2[17];
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

#include "impact_velocity_RightFrontFoot.hh"

namespace Flight2
{

void impact_velocity_RightFrontFoot_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
