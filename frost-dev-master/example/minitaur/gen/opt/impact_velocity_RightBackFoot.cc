/*
 * Automatically Generated from Mathematica.
 * Wed 29 May 2019 15:17:14 GMT-04:00
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
  double t13009;
  double t21752;
  double t21802;
  double t24456;
  double t25410;
  double t25469;
  double t25504;
  double t22534;
  double t22776;
  double t25616;
  double t25639;
  double t25683;
  double t25718;
  double t17611;
  double t21971;
  double t25913;
  double t25635;
  double t25685;
  double t25686;
  double t25693;
  double t25746;
  double t25788;
  double t26076;
  double t26077;
  double t26131;
  double t26148;
  double t25912;
  double t26526;
  double t26528;
  double t26531;
  double t26532;
  double t28260;
  double t28331;
  double t28371;
  double t28377;
  double t28424;
  double t28404;
  double t28682;
  double t28650;
  double t28865;
  double t28725;
  double t28759;
  double t29918;
  double t29563;
  double t29729;
  double t29736;
  double t29737;
  double t30058;
  double t29926;
  double t29927;
  double t30032;
  double t30052;
  double t30054;
  double t30055;
  double t30116;
  double t30425;
  double t29910;
  double t30332;
  double t30334;
  double t30062;
  double t29930;
  double t29953;
  double t29992;
  double t30026;
  double t30031;
  double t29876;
  double t29915;
  double t29917;
  double t29923;
  double t29925;
  double t28724;
  double t28857;
  double t29227;
  double t29318;
  double t29353;
  double t30726;
  double t30727;
  double t30521;
  double t30730;
  double t30731;
  double t30896;
  double t31017;
  double t31018;
  double t31020;
  double t30634;
  double t30147;
  double t30148;
  double t30698;
  double t30702;
  double t30719;
  double t30722;
  double t31101;
  double t31102;
  double t31104;
  double t31113;
  double t31115;
  double t31123;
  double t31132;
  double t31136;
  double t31138;
  double t31139;
  double t31140;
  double t31141;
  double t31186;
  double t31191;
  double t31192;
  double t31193;
  double t31194;
  double t31197;
  double t31207;
  double t31211;
  double t31214;
  double t31255;
  double t31262;
  double t31269;
  double t31412;
  double t33190;
  double t33226;
  double t33235;
  double t33237;
  double t33241;
  double t33250;
  double t33256;
  double t33265;
  double t33268;
  double t33270;
  double t33272;
  double t33276;
  double t33282;
  double t33286;
  double t33290;
  double t33409;
  double t33445;
  double t33492;
  double t33563;
  double t33757;
  double t33758;
  double t33782;
  double t33797;
  double t33800;
  double t33801;
  double t33804;
  double t33823;
  double t33824;
  double t33841;
  double t33844;
  double t33846;
  double t33849;
  double t33853;
  double t33866;
  double t22221;
  double t22992;
  double t23590;
  double t24392;
  double t25903;
  double t25914;
  double t25924;
  double t25955;
  double t26069;
  double t33920;
  double t33921;
  double t33922;
  double t26470;
  double t26503;
  double t26520;
  double t26524;
  double t26525;
  double t33918;
  double t33923;
  double t33937;
  double t33939;
  double t33987;
  double t33988;
  double t33989;
  double t28405;
  double t33993;
  double t33994;
  double t33995;
  double t33996;
  double t28631;
  double t34770;
  double t34827;
  double t34828;
  double t34832;
  double t34853;
  double t34857;
  double t34867;
  double t34868;
  double t35292;
  double t35297;
  double t35503;
  double t35505;
  double t35517;
  double t35520;
  double t35523;
  double t35524;
  double t35525;
  double t35527;
  double t35530;
  double t35531;
  double t35532;
  double t35534;
  double t35812;
  double t35813;
  double t35814;
  double t35819;
  double t35820;
  double t35822;
  double t35824;
  double t35825;
  double t35830;
  double t35831;
  double t35833;
  double t36074;
  double t36077;
  double t36081;
  double t36073;
  double t36083;
  double t36084;
  double t36086;
  double t36089;
  double t36092;
  double t36093;
  double t36095;
  double t36096;
  double t36097;
  double t36098;
  double t36135;
  double t36136;
  double t36137;
  double t36197;
  double t36203;
  double t36207;
  double t36212;
  double t36213;
  double t36218;
  double t36219;
  t13009 = Cos(var1[21]);
  t21752 = Sin(var1[21]);
  t21802 = -3.e-6*t21752;
  t24456 = Cos(var1[19]);
  t25410 = -1.*t24456;
  t25469 = 1. + t25410;
  t25504 = Cos(var1[4]);
  t22534 = 3.e-6*t13009;
  t22776 = t22534 + t21802;
  t25616 = Cos(var1[5]);
  t25639 = Sin(var1[19]);
  t25683 = Sin(var1[4]);
  t25718 = Sin(var1[5]);
  t17611 = -3.e-6*t13009;
  t21971 = t17611 + t21802;
  t25913 = -9.e-12*t21752;
  t25635 = 3.e-6*t25469*t25504*t25616;
  t25685 = -3.e-6*t25639*t25683;
  t25686 = -9.e-12*t25469;
  t25693 = 1. + t25686;
  t25746 = -1.*t25693*t25504*t25718;
  t25788 = t25635 + t25685 + t25746;
  t26076 = t24456*t25504*t25616;
  t26077 = t25639*t25683;
  t26131 = -3.e-6*t25469*t25504*t25718;
  t26148 = t26076 + t26077 + t26131;
  t25912 = -1.*t13009;
  t26526 = -1.*t25504*t25616*t25639;
  t26528 = -1.000000000009*t25469;
  t26531 = 1. + t26528;
  t26532 = t26531*t25683;
  t28260 = -3.e-6*t25504*t25639*t25718;
  t28331 = t26526 + t26532 + t28260;
  t28371 = 3.e-6*t21752;
  t28377 = t22534 + t28371;
  t28424 = t17611 + t28371;
  t28404 = 9.e-12*t21752;
  t28682 = 1. + t25912;
  t28650 = 3.e-13*var1[21];
  t28865 = -9.e-12*t28682;
  t28725 = -3.e-6*t28682;
  t28759 = t28725 + t21802;
  t29918 = t28725 + t28371;
  t29563 = -1.*t24456*t25504*t25616;
  t29729 = -1.000000000009*t25639*t25683;
  t29736 = -3.e-6*t24456*t25504*t25718;
  t29737 = t29563 + t29729 + t29736;
  t30058 = 3.e-6*t28682;
  t29926 = t24456*t25683;
  t29927 = t26526 + t29926 + t28260;
  t30032 = 3.e-6*t25504*t25616*t25639;
  t30052 = -3.e-6*t24456*t25683;
  t30054 = 9.e-12*t25504*t25639*t25718;
  t30055 = t30032 + t30052 + t30054;
  t30116 = t30058 + t21802;
  t30425 = 9.e-12*t28682;
  t29910 = -1.*t21752;
  t30332 = -1.000000000009*t28682;
  t30334 = 1. + t30332;
  t30062 = t30058 + t28371;
  t29930 = 1.e-7*var1[21];
  t29953 = 5.4e-18*t28682;
  t29992 = -0.200000000003*t28759;
  t30026 = 0.100000000003*t29918;
  t30031 = t29930 + t29953 + t29992 + t30026;
  t29876 = -0.2000000000048*t28682;
  t29915 = t28865 + t29910;
  t29917 = 0.100000000003*t29915;
  t29923 = 3.e-7*t29918;
  t29925 = t28650 + t29876 + t29917 + t29923;
  t28724 = 0.1000000000039*t28682;
  t28857 = 3.e-7*t28759;
  t29227 = t28865 + t21752;
  t29318 = -0.200000000003*t29227;
  t29353 = t28650 + t28724 + t28857 + t29318;
  t30726 = -1.*t25693*t25504*t25616;
  t30727 = t30726 + t26131;
  t30521 = t30425 + t21752;
  t30730 = -3.e-6*t25469*t25504*t25616;
  t30731 = -1.*t24456*t25504*t25718;
  t30896 = t30730 + t30731;
  t31017 = -3.e-6*t25504*t25616*t25639;
  t31018 = t25504*t25639*t25718;
  t31020 = t31017 + t31018;
  t30634 = t30425 + t29910;
  t30147 = -1.8e-11*t28682;
  t30148 = 1. + t30147;
  t30698 = -1.8e-12*t25469;
  t30702 = -1. + t24456;
  t30719 = 0.2*t30702;
  t30722 = t30698 + t30719;
  t31101 = -3.e-6*t25504*t25639;
  t31102 = -3.e-6*t25469*t25616*t25683;
  t31104 = t25693*t25683*t25718;
  t31113 = t31101 + t31102 + t31104;
  t31115 = t25504*t25639;
  t31123 = -1.*t24456*t25616*t25683;
  t31132 = 3.e-6*t25469*t25683*t25718;
  t31136 = t31115 + t31123 + t31132;
  t31138 = t26531*t25504;
  t31139 = t25616*t25639*t25683;
  t31140 = 3.e-6*t25639*t25683*t25718;
  t31141 = t31138 + t31139 + t31140;
  t31186 = Sin(var1[3]);
  t31191 = 3.e-6*t25469*t25504*t25616*t31186;
  t31192 = -3.e-6*t25639*t31186*t25683;
  t31193 = -1.*t25693*t25504*t31186*t25718;
  t31194 = t31191 + t31192 + t31193;
  t31197 = t24456*t25504*t25616*t31186;
  t31207 = t25639*t31186*t25683;
  t31211 = -3.e-6*t25469*t25504*t31186*t25718;
  t31214 = t31197 + t31207 + t31211;
  t31255 = -1.*t25504*t25616*t25639*t31186;
  t31262 = t26531*t31186*t25683;
  t31269 = -3.e-6*t25504*t25639*t31186*t25718;
  t31412 = t31255 + t31262 + t31269;
  t33190 = Cos(var1[3]);
  t33226 = t33190*t25616*t25683;
  t33235 = -1.*t31186*t25718;
  t33237 = t33226 + t33235;
  t33241 = -1.*t25616*t31186;
  t33250 = -1.*t33190*t25683*t25718;
  t33256 = t33241 + t33250;
  t33265 = 3.e-6*t33190*t25504*t25639;
  t33268 = 3.e-6*t25469*t33237;
  t33270 = t25693*t33256;
  t33272 = t33265 + t33268 + t33270;
  t33276 = -1.*t33190*t25504*t25639;
  t33282 = t24456*t33237;
  t33286 = 3.e-6*t25469*t33256;
  t33290 = t33276 + t33282 + t33286;
  t33409 = -1.*t26531*t33190*t25504;
  t33445 = -1.*t25639*t33237;
  t33492 = 3.e-6*t25639*t33256;
  t33563 = t33409 + t33445 + t33492;
  t33757 = -1.*t25616*t31186*t25683;
  t33758 = -1.*t33190*t25718;
  t33782 = t33757 + t33758;
  t33797 = t33190*t25616;
  t33800 = -1.*t31186*t25683*t25718;
  t33801 = t33797 + t33800;
  t33804 = t25693*t33782;
  t33823 = 3.e-6*t25469*t33801;
  t33824 = t33804 + t33823;
  t33841 = 3.e-6*t25469*t33782;
  t33844 = t24456*t33801;
  t33846 = t33841 + t33844;
  t33849 = 3.e-6*t25639*t33782;
  t33853 = -1.*t25639*t33801;
  t33866 = t33849 + t33853;
  t22221 = -0.200000000003*t21971;
  t22992 = 0.100000000003*t22776;
  t23590 = 5.4e-18*t21752;
  t24392 = 1.e-7 + t22221 + t22992 + t23590;
  t25903 = 3.e-7*t22776;
  t25914 = t25912 + t25913;
  t25924 = 0.100000000003*t25914;
  t25955 = -0.2000000000048*t21752;
  t26069 = 3.e-13 + t25903 + t25924 + t25955;
  t33920 = t25616*t31186*t25683;
  t33921 = t33190*t25718;
  t33922 = t33920 + t33921;
  t26470 = 3.e-7*t21971;
  t26503 = t13009 + t25913;
  t26520 = -0.200000000003*t26503;
  t26524 = 0.1000000000039*t21752;
  t26525 = 3.e-13 + t26470 + t26520 + t26524;
  t33918 = 3.e-6*t25504*t25639*t31186;
  t33923 = 3.e-6*t25469*t33922;
  t33937 = t25693*t33801;
  t33939 = t33918 + t33923 + t33937;
  t33987 = -1.*t25504*t25639*t31186;
  t33988 = t24456*t33922;
  t33989 = t33987 + t33988 + t33823;
  t28405 = t25912 + t28404;
  t33993 = -1.*t26531*t25504*t31186;
  t33994 = -1.*t25639*t33922;
  t33995 = 3.e-6*t25639*t33801;
  t33996 = t33993 + t33994 + t33995;
  t28631 = t13009 + t28404;
  t34770 = 1.000000000009*t25504*t25639*t31186;
  t34827 = -1.*t24456*t33922;
  t34828 = 3.e-6*t24456*t33801;
  t34832 = t34770 + t34827 + t34828;
  t34853 = 3.e-6*t24456*t25504*t31186;
  t34857 = 3.e-6*t25639*t33922;
  t34867 = -9.e-12*t25639*t33801;
  t34868 = t34853 + t34857 + t34867;
  t35292 = -1.*t24456*t25504*t31186;
  t35297 = t35292 + t33994 + t33995;
  t35503 = -3.e-6*t25469*t33190*t25504*t25616;
  t35505 = 3.e-6*t33190*t25639*t25683;
  t35517 = t25693*t33190*t25504*t25718;
  t35520 = t35503 + t35505 + t35517;
  t35523 = -1.*t24456*t33190*t25504*t25616;
  t35524 = -1.*t33190*t25639*t25683;
  t35525 = 3.e-6*t25469*t33190*t25504*t25718;
  t35527 = t35523 + t35524 + t35525;
  t35530 = t33190*t25504*t25616*t25639;
  t35531 = -1.*t26531*t33190*t25683;
  t35532 = 3.e-6*t33190*t25504*t25639*t25718;
  t35534 = t35530 + t35531 + t35532;
  t35812 = t25616*t31186;
  t35813 = t33190*t25683*t25718;
  t35814 = t35812 + t35813;
  t35819 = t25693*t33237;
  t35820 = 3.e-6*t25469*t35814;
  t35822 = t35819 + t35820;
  t35824 = t24456*t35814;
  t35825 = t33268 + t35824;
  t35830 = 3.e-6*t25639*t33237;
  t35831 = -1.*t25639*t35814;
  t35833 = t35830 + t35831;
  t36074 = -1.*t33190*t25616*t25683;
  t36077 = t31186*t25718;
  t36081 = t36074 + t36077;
  t36073 = -3.e-6*t33190*t25504*t25639;
  t36083 = 3.e-6*t25469*t36081;
  t36084 = t25693*t35814;
  t36086 = t36073 + t36083 + t36084;
  t36089 = t33190*t25504*t25639;
  t36092 = t24456*t36081;
  t36093 = t36089 + t36092 + t35820;
  t36095 = t26531*t33190*t25504;
  t36096 = -1.*t25639*t36081;
  t36097 = 3.e-6*t25639*t35814;
  t36098 = t36095 + t36096 + t36097;
  t36135 = -1.000000000009*t33190*t25504*t25639;
  t36136 = -1.*t24456*t36081;
  t36137 = 3.e-6*t24456*t35814;
  t36197 = t36135 + t36136 + t36137;
  t36203 = -3.e-6*t24456*t33190*t25504;
  t36207 = 3.e-6*t25639*t36081;
  t36212 = -9.e-12*t25639*t35814;
  t36213 = t36203 + t36207 + t36212;
  t36218 = t24456*t33190*t25504;
  t36219 = t36218 + t36096 + t36097;
  p_output1[0]=var2[0] + (0.2000000000018*t25504*t25639 + 6.000000000054e-7*t25469*t25683*t25718 - 1.*t25616*t25683*t30722 + t30031*t31113 + t29925*t31136 + t29353*t31141 - 0.099999*(t30148*t31113 + t30116*t31136 + t30062*t31141) - 0.3*(t30116*t31113 + t30521*t31136 + t30334*t31141) + 0.2*(-1.*t30062*t31113 - 1.*t30334*t31136 - 1.*t30634*t31141))*var2[4] + (-6.000000000054e-7*t25469*t25504*t25616 - 1.*t25504*t25718*t30722 + t30031*t30727 + t29925*t30896 + t29353*t31020 - 0.099999*(t30148*t30727 + t30116*t30896 + t30062*t31020) - 0.3*(t30116*t30727 + t30521*t30896 + t30334*t31020) + 0.2*(-1.*t30062*t30727 - 1.*t30334*t30896 - 1.*t30634*t31020))*var2[5] + (-0.2000000000018*t25504*t25616*t25639 + 0.2000000000018*t24456*t25683 - 6.000000000054e-7*t25504*t25639*t25718 + t29353*t29737 + t29925*t29927 + t30031*t30055 - 0.099999*(t29737*t30062 + t29927*t30116 + t30055*t30148) - 0.3*(t30055*t30116 + t29737*t30334 + t29927*t30521) + 0.2*(-1.*t30055*t30062 - 1.*t29927*t30334 - 1.*t29737*t30634))*var2[19] + (t24392*t25788 + t26069*t26148 + t26525*t28331 + 0.2*(1.000000000009*t21752*t26148 - 1.*t25788*t28377 - 1.*t28331*t28405) - 0.099999*(-1.8e-11*t21752*t25788 + t28331*t28377 + t26148*t28424) - 0.3*(-1.000000000009*t21752*t28331 + t25788*t28424 + t26148*t28631))*var2[21];
  p_output1[1]=var2[1] + (-0.2000000000018*t25504*t25639*t33190 + t30722*t33237 + 6.000000000054e-7*t25469*t33256 + t30031*t33272 + t29925*t33290 + t29353*t33563 - 0.099999*(t30148*t33272 + t30116*t33290 + t30062*t33563) - 0.3*(t30116*t33272 + t30521*t33290 + t30334*t33563) + 0.2*(-1.*t30062*t33272 - 1.*t30334*t33290 - 1.*t30634*t33563))*var2[3] + (0.2000000000018*t25639*t25683*t31186 - 6.000000000054e-7*t25469*t25504*t25718*t31186 + t25504*t25616*t30722*t31186 + t30031*t31194 + t29925*t31214 + t29353*t31412 - 0.099999*(t30148*t31194 + t30116*t31214 + t30062*t31412) - 0.3*(t30116*t31194 + t30521*t31214 + t30334*t31412) + 0.2*(-1.*t30062*t31194 - 1.*t30334*t31214 - 1.*t30634*t31412))*var2[4] + (6.000000000054e-7*t25469*t33782 + t30722*t33801 + t30031*t33824 + t29925*t33846 + t29353*t33866 - 0.099999*(t30148*t33824 + t30116*t33846 + t30062*t33866) - 0.3*(t30116*t33824 + t30521*t33846 + t30334*t33866) + 0.2*(-1.*t30062*t33824 - 1.*t30334*t33846 - 1.*t30634*t33866))*var2[5] + (-0.2000000000018*t24456*t25504*t31186 + 6.000000000054e-7*t25639*t33801 - 0.2000000000018*t25639*t33922 + t29353*t34832 + t30031*t34868 + t29925*t35297 - 0.099999*(t30062*t34832 + t30148*t34868 + t30116*t35297) + 0.2*(-1.*t30634*t34832 - 1.*t30062*t34868 - 1.*t30334*t35297) - 0.3*(t30334*t34832 + t30116*t34868 + t30521*t35297))*var2[19] + (t24392*t33939 + t26069*t33989 + t26525*t33996 - 0.3*(t28424*t33939 + t28631*t33989 - 1.000000000009*t21752*t33996) - 0.099999*(-1.8e-11*t21752*t33939 + t28424*t33989 + t28377*t33996) + 0.2*(-1.*t28377*t33939 + 1.000000000009*t21752*t33989 - 1.*t28405*t33996))*var2[21];
  p_output1[2]=var2[2] + (-0.2000000000018*t25504*t25639*t31186 + 6.000000000054e-7*t25469*t33801 + t30722*t33922 + t30031*t33939 + t29925*t33989 + t29353*t33996 - 0.099999*(t30148*t33939 + t30116*t33989 + t30062*t33996) - 0.3*(t30116*t33939 + t30521*t33989 + t30334*t33996) + 0.2*(-1.*t30062*t33939 - 1.*t30334*t33989 - 1.*t30634*t33996))*var2[3] + (-0.2000000000018*t25639*t25683*t33190 + 6.000000000054e-7*t25469*t25504*t25718*t33190 - 1.*t25504*t25616*t30722*t33190 + t30031*t35520 + t29925*t35527 + t29353*t35534 - 0.099999*(t30148*t35520 + t30116*t35527 + t30062*t35534) - 0.3*(t30116*t35520 + t30521*t35527 + t30334*t35534) + 0.2*(-1.*t30062*t35520 - 1.*t30334*t35527 - 1.*t30634*t35534))*var2[4] + (6.000000000054e-7*t25469*t33237 + t30722*t35814 + t30031*t35822 + t29925*t35825 + t29353*t35833 - 0.099999*(t30148*t35822 + t30116*t35825 + t30062*t35833) - 0.3*(t30116*t35822 + t30521*t35825 + t30334*t35833) + 0.2*(-1.*t30062*t35822 - 1.*t30334*t35825 - 1.*t30634*t35833))*var2[5] + (0.2000000000018*t24456*t25504*t33190 + 6.000000000054e-7*t25639*t35814 - 0.2000000000018*t25639*t36081 + t29353*t36197 + t30031*t36213 + t29925*t36219 - 0.099999*(t30062*t36197 + t30148*t36213 + t30116*t36219) + 0.2*(-1.*t30634*t36197 - 1.*t30062*t36213 - 1.*t30334*t36219) - 0.3*(t30334*t36197 + t30116*t36213 + t30521*t36219))*var2[19] + (t24392*t36086 + t26069*t36093 + t26525*t36098 - 0.3*(t28424*t36086 + t28631*t36093 - 1.000000000009*t21752*t36098) - 0.099999*(-1.8e-11*t21752*t36086 + t28424*t36093 + t28377*t36098) + 0.2*(-1.*t28377*t36086 + 1.000000000009*t21752*t36093 - 1.*t28405*t36098))*var2[21];
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
