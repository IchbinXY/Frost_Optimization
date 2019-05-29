/*
 * Automatically Generated from Mathematica.
 * Tue 28 May 2019 23:02:40 GMT-04:00
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
  double t203;
  double t480;
  double t558;
  double t702;
  double t715;
  double t743;
  double t752;
  double t625;
  double t661;
  double t753;
  double t769;
  double t773;
  double t844;
  double t342;
  double t597;
  double t1316;
  double t757;
  double t774;
  double t832;
  double t841;
  double t852;
  double t1255;
  double t1991;
  double t2814;
  double t3452;
  double t3463;
  double t1301;
  double t3850;
  double t3901;
  double t3943;
  double t4033;
  double t4044;
  double t4050;
  double t4085;
  double t4246;
  double t4628;
  double t4323;
  double t4864;
  double t4764;
  double t4910;
  double t4871;
  double t4875;
  double t5144;
  double t4920;
  double t4924;
  double t4925;
  double t4949;
  double t5223;
  double t5156;
  double t5167;
  double t5211;
  double t5213;
  double t5218;
  double t5219;
  double t5228;
  double t5309;
  double t5129;
  double t5292;
  double t5300;
  double t5224;
  double t5177;
  double t5186;
  double t5189;
  double t5194;
  double t5201;
  double t5111;
  double t5139;
  double t5141;
  double t5145;
  double t5155;
  double t4865;
  double t4896;
  double t4913;
  double t4915;
  double t4916;
  double t6349;
  double t6378;
  double t5311;
  double t6387;
  double t6465;
  double t6482;
  double t6713;
  double t6754;
  double t6769;
  double t5332;
  double t5257;
  double t5263;
  double t5671;
  double t5945;
  double t6330;
  double t6334;
  double t7503;
  double t7510;
  double t7701;
  double t7716;
  double t8293;
  double t8342;
  double t8343;
  double t8346;
  double t8375;
  double t8524;
  double t8536;
  double t8789;
  double t12404;
  double t13041;
  double t13051;
  double t13908;
  double t13920;
  double t13925;
  double t13927;
  double t13928;
  double t13938;
  double t13951;
  double t13952;
  double t13955;
  double t13956;
  double t14555;
  double t14557;
  double t14567;
  double t14571;
  double t14604;
  double t14606;
  double t14608;
  double t14693;
  double t14697;
  double t14699;
  double t14717;
  double t14752;
  double t14783;
  double t14986;
  double t15028;
  double t15072;
  double t15190;
  double t15205;
  double t15408;
  double t15621;
  double t15664;
  double t15696;
  double t15714;
  double t15749;
  double t15759;
  double t15778;
  double t15783;
  double t15786;
  double t15808;
  double t16090;
  double t16117;
  double t16363;
  double t16463;
  double t16541;
  double t604;
  double t662;
  double t689;
  double t694;
  double t1274;
  double t1525;
  double t1568;
  double t1616;
  double t1807;
  double t17273;
  double t17304;
  double t17362;
  double t3468;
  double t3626;
  double t3692;
  double t3700;
  double t3723;
  double t17239;
  double t17364;
  double t17432;
  double t17541;
  double t17606;
  double t17607;
  double t17643;
  double t4385;
  double t17645;
  double t17681;
  double t17697;
  double t17715;
  double t4699;
  double t18164;
  double t18165;
  double t18169;
  double t18170;
  double t18173;
  double t18187;
  double t18995;
  double t18996;
  double t19085;
  double t19086;
  double t19175;
  double t19176;
  double t19180;
  double t19182;
  double t19188;
  double t19189;
  double t19190;
  double t19191;
  double t19195;
  double t19197;
  double t19198;
  double t19199;
  double t19300;
  double t19311;
  double t19312;
  double t19315;
  double t19316;
  double t19319;
  double t19322;
  double t19324;
  double t19328;
  double t19339;
  double t19343;
  double t19450;
  double t19451;
  double t19452;
  double t19448;
  double t19455;
  double t19456;
  double t19457;
  double t19459;
  double t19460;
  double t19461;
  double t19463;
  double t19464;
  double t19465;
  double t19466;
  double t19500;
  double t19502;
  double t19503;
  double t19505;
  double t19507;
  double t19508;
  double t19509;
  double t19511;
  double t19518;
  double t19537;
  t203 = Cos(var1[12]);
  t480 = Sin(var1[12]);
  t558 = -3.e-6*t480;
  t702 = Cos(var1[10]);
  t715 = -1.*t702;
  t743 = 1. + t715;
  t752 = Cos(var1[4]);
  t625 = 3.e-6*t203;
  t661 = t625 + t558;
  t753 = Cos(var1[5]);
  t769 = Sin(var1[10]);
  t773 = Sin(var1[4]);
  t844 = Sin(var1[5]);
  t342 = -3.e-6*t203;
  t597 = t342 + t558;
  t1316 = -9.e-12*t480;
  t757 = 3.e-6*t743*t752*t753;
  t774 = -3.e-6*t769*t773;
  t832 = -9.e-12*t743;
  t841 = 1. + t832;
  t852 = -1.*t841*t752*t844;
  t1255 = t757 + t774 + t852;
  t1991 = t702*t752*t753;
  t2814 = t769*t773;
  t3452 = -3.e-6*t743*t752*t844;
  t3463 = t1991 + t2814 + t3452;
  t1301 = -1.*t203;
  t3850 = -1.*t752*t753*t769;
  t3901 = -1.000000000009*t743;
  t3943 = 1. + t3901;
  t4033 = t3943*t773;
  t4044 = -3.e-6*t752*t769*t844;
  t4050 = t3850 + t4033 + t4044;
  t4085 = 3.e-6*t480;
  t4246 = t625 + t4085;
  t4628 = t342 + t4085;
  t4323 = 9.e-12*t480;
  t4864 = 1. + t1301;
  t4764 = 3.e-13*var1[12];
  t4910 = -9.e-12*t4864;
  t4871 = -3.e-6*t4864;
  t4875 = t4871 + t558;
  t5144 = t4871 + t4085;
  t4920 = -1.*t702*t752*t753;
  t4924 = -1.000000000009*t769*t773;
  t4925 = -3.e-6*t702*t752*t844;
  t4949 = t4920 + t4924 + t4925;
  t5223 = 3.e-6*t4864;
  t5156 = t702*t773;
  t5167 = t3850 + t5156 + t4044;
  t5211 = 3.e-6*t752*t753*t769;
  t5213 = -3.e-6*t702*t773;
  t5218 = 9.e-12*t752*t769*t844;
  t5219 = t5211 + t5213 + t5218;
  t5228 = t5223 + t558;
  t5309 = 9.e-12*t4864;
  t5129 = -1.*t480;
  t5292 = -1.000000000009*t4864;
  t5300 = 1. + t5292;
  t5224 = t5223 + t4085;
  t5177 = 1.e-7*var1[12];
  t5186 = 5.4e-18*t4864;
  t5189 = -0.200000000003*t4875;
  t5194 = 0.100000000003*t5144;
  t5201 = t5177 + t5186 + t5189 + t5194;
  t5111 = -0.2000000000048*t4864;
  t5139 = t4910 + t5129;
  t5141 = 0.100000000003*t5139;
  t5145 = 3.e-7*t5144;
  t5155 = t4764 + t5111 + t5141 + t5145;
  t4865 = 0.1000000000039*t4864;
  t4896 = 3.e-7*t4875;
  t4913 = t4910 + t480;
  t4915 = -0.200000000003*t4913;
  t4916 = t4764 + t4865 + t4896 + t4915;
  t6349 = -1.*t841*t752*t753;
  t6378 = t6349 + t3452;
  t5311 = t5309 + t480;
  t6387 = -3.e-6*t743*t752*t753;
  t6465 = -1.*t702*t752*t844;
  t6482 = t6387 + t6465;
  t6713 = -3.e-6*t752*t753*t769;
  t6754 = t752*t769*t844;
  t6769 = t6713 + t6754;
  t5332 = t5309 + t5129;
  t5257 = -1.8e-11*t4864;
  t5263 = 1. + t5257;
  t5671 = -1.8e-12*t743;
  t5945 = -1. + t702;
  t6330 = 0.2*t5945;
  t6334 = t5671 + t6330;
  t7503 = -3.e-6*t752*t769;
  t7510 = -3.e-6*t743*t753*t773;
  t7701 = t841*t773*t844;
  t7716 = t7503 + t7510 + t7701;
  t8293 = t752*t769;
  t8342 = -1.*t702*t753*t773;
  t8343 = 3.e-6*t743*t773*t844;
  t8346 = t8293 + t8342 + t8343;
  t8375 = t3943*t752;
  t8524 = t753*t769*t773;
  t8536 = 3.e-6*t769*t773*t844;
  t8789 = t8375 + t8524 + t8536;
  t12404 = Sin(var1[3]);
  t13041 = 3.e-6*t743*t752*t753*t12404;
  t13051 = -3.e-6*t769*t12404*t773;
  t13908 = -1.*t841*t752*t12404*t844;
  t13920 = t13041 + t13051 + t13908;
  t13925 = t702*t752*t753*t12404;
  t13927 = t769*t12404*t773;
  t13928 = -3.e-6*t743*t752*t12404*t844;
  t13938 = t13925 + t13927 + t13928;
  t13951 = -1.*t752*t753*t769*t12404;
  t13952 = t3943*t12404*t773;
  t13955 = -3.e-6*t752*t769*t12404*t844;
  t13956 = t13951 + t13952 + t13955;
  t14555 = Cos(var1[3]);
  t14557 = t14555*t753*t773;
  t14567 = -1.*t12404*t844;
  t14571 = t14557 + t14567;
  t14604 = -1.*t753*t12404;
  t14606 = -1.*t14555*t773*t844;
  t14608 = t14604 + t14606;
  t14693 = 3.e-6*t14555*t752*t769;
  t14697 = 3.e-6*t743*t14571;
  t14699 = t841*t14608;
  t14717 = t14693 + t14697 + t14699;
  t14752 = -1.*t14555*t752*t769;
  t14783 = t702*t14571;
  t14986 = 3.e-6*t743*t14608;
  t15028 = t14752 + t14783 + t14986;
  t15072 = -1.*t3943*t14555*t752;
  t15190 = -1.*t769*t14571;
  t15205 = 3.e-6*t769*t14608;
  t15408 = t15072 + t15190 + t15205;
  t15621 = -1.*t753*t12404*t773;
  t15664 = -1.*t14555*t844;
  t15696 = t15621 + t15664;
  t15714 = t14555*t753;
  t15749 = -1.*t12404*t773*t844;
  t15759 = t15714 + t15749;
  t15778 = t841*t15696;
  t15783 = 3.e-6*t743*t15759;
  t15786 = t15778 + t15783;
  t15808 = 3.e-6*t743*t15696;
  t16090 = t702*t15759;
  t16117 = t15808 + t16090;
  t16363 = 3.e-6*t769*t15696;
  t16463 = -1.*t769*t15759;
  t16541 = t16363 + t16463;
  t604 = -0.200000000003*t597;
  t662 = 0.100000000003*t661;
  t689 = 5.4e-18*t480;
  t694 = 1.e-7 + t604 + t662 + t689;
  t1274 = 3.e-7*t661;
  t1525 = t1301 + t1316;
  t1568 = 0.100000000003*t1525;
  t1616 = -0.2000000000048*t480;
  t1807 = 3.e-13 + t1274 + t1568 + t1616;
  t17273 = t753*t12404*t773;
  t17304 = t14555*t844;
  t17362 = t17273 + t17304;
  t3468 = 3.e-7*t597;
  t3626 = t203 + t1316;
  t3692 = -0.200000000003*t3626;
  t3700 = 0.1000000000039*t480;
  t3723 = 3.e-13 + t3468 + t3692 + t3700;
  t17239 = 3.e-6*t752*t769*t12404;
  t17364 = 3.e-6*t743*t17362;
  t17432 = t841*t15759;
  t17541 = t17239 + t17364 + t17432;
  t17606 = -1.*t752*t769*t12404;
  t17607 = t702*t17362;
  t17643 = t17606 + t17607 + t15783;
  t4385 = t1301 + t4323;
  t17645 = -1.*t3943*t752*t12404;
  t17681 = -1.*t769*t17362;
  t17697 = 3.e-6*t769*t15759;
  t17715 = t17645 + t17681 + t17697;
  t4699 = t203 + t4323;
  t18164 = 1.000000000009*t752*t769*t12404;
  t18165 = -1.*t702*t17362;
  t18169 = 3.e-6*t702*t15759;
  t18170 = t18164 + t18165 + t18169;
  t18173 = 3.e-6*t702*t752*t12404;
  t18187 = 3.e-6*t769*t17362;
  t18995 = -9.e-12*t769*t15759;
  t18996 = t18173 + t18187 + t18995;
  t19085 = -1.*t702*t752*t12404;
  t19086 = t19085 + t17681 + t17697;
  t19175 = -3.e-6*t743*t14555*t752*t753;
  t19176 = 3.e-6*t14555*t769*t773;
  t19180 = t841*t14555*t752*t844;
  t19182 = t19175 + t19176 + t19180;
  t19188 = -1.*t702*t14555*t752*t753;
  t19189 = -1.*t14555*t769*t773;
  t19190 = 3.e-6*t743*t14555*t752*t844;
  t19191 = t19188 + t19189 + t19190;
  t19195 = t14555*t752*t753*t769;
  t19197 = -1.*t3943*t14555*t773;
  t19198 = 3.e-6*t14555*t752*t769*t844;
  t19199 = t19195 + t19197 + t19198;
  t19300 = t753*t12404;
  t19311 = t14555*t773*t844;
  t19312 = t19300 + t19311;
  t19315 = t841*t14571;
  t19316 = 3.e-6*t743*t19312;
  t19319 = t19315 + t19316;
  t19322 = t702*t19312;
  t19324 = t14697 + t19322;
  t19328 = 3.e-6*t769*t14571;
  t19339 = -1.*t769*t19312;
  t19343 = t19328 + t19339;
  t19450 = -1.*t14555*t753*t773;
  t19451 = t12404*t844;
  t19452 = t19450 + t19451;
  t19448 = -3.e-6*t14555*t752*t769;
  t19455 = 3.e-6*t743*t19452;
  t19456 = t841*t19312;
  t19457 = t19448 + t19455 + t19456;
  t19459 = t14555*t752*t769;
  t19460 = t702*t19452;
  t19461 = t19459 + t19460 + t19316;
  t19463 = t3943*t14555*t752;
  t19464 = -1.*t769*t19452;
  t19465 = 3.e-6*t769*t19312;
  t19466 = t19463 + t19464 + t19465;
  t19500 = -1.000000000009*t14555*t752*t769;
  t19502 = -1.*t702*t19452;
  t19503 = 3.e-6*t702*t19312;
  t19505 = t19500 + t19502 + t19503;
  t19507 = -3.e-6*t702*t14555*t752;
  t19508 = 3.e-6*t769*t19452;
  t19509 = -9.e-12*t769*t19312;
  t19511 = t19507 + t19508 + t19509;
  t19518 = t702*t14555*t752;
  t19537 = t19518 + t19464 + t19465;
  p_output1[0]=var2[0] + (0.2000000000018*t752*t769 + t5201*t7716 - 1.*t6334*t753*t773 + t5155*t8346 + 6.000000000054e-7*t743*t773*t844 + t4916*t8789 + 0.100001*(t5263*t7716 + t5228*t8346 + t5224*t8789) - 0.3*(t5228*t7716 + t5311*t8346 + t5300*t8789) + 0.2*(-1.*t5224*t7716 - 1.*t5300*t8346 - 1.*t5332*t8789))*var2[4] + (t5201*t6378 + t5155*t6482 + t4916*t6769 + 0.100001*(t5263*t6378 + t5228*t6482 + t5224*t6769) - 0.3*(t5228*t6378 + t5311*t6482 + t5300*t6769) + 0.2*(-1.*t5224*t6378 - 1.*t5300*t6482 - 1.*t5332*t6769) - 6.000000000054e-7*t743*t752*t753 - 1.*t6334*t752*t844)*var2[5] + (t4916*t4949 + t5155*t5167 + t5201*t5219 + 0.100001*(t4949*t5224 + t5167*t5228 + t5219*t5263) - 0.3*(t5219*t5228 + t4949*t5300 + t5167*t5311) + 0.2*(-1.*t5219*t5224 - 1.*t5167*t5300 - 1.*t4949*t5332) - 0.2000000000018*t752*t753*t769 + 0.2000000000018*t702*t773 - 6.000000000054e-7*t752*t769*t844)*var2[10] + (t1807*t3463 + t3723*t4050 + 0.100001*(t4050*t4246 + t3463*t4628 - 1.8e-11*t1255*t480) + 0.2*(-1.*t1255*t4246 - 1.*t4050*t4385 + 1.000000000009*t3463*t480) - 0.3*(t1255*t4628 + t3463*t4699 - 1.000000000009*t4050*t480) + t1255*t694)*var2[12];
  p_output1[1]=var2[1] + (t15408*t4916 + t15028*t5155 + t14717*t5201 + 0.100001*(t15408*t5224 + t15028*t5228 + t14717*t5263) - 0.3*(t14717*t5228 + t15408*t5300 + t15028*t5311) + 0.2*(-1.*t14717*t5224 - 1.*t15028*t5300 - 1.*t15408*t5332) + t14571*t6334 + 6.000000000054e-7*t14608*t743 - 0.2000000000018*t14555*t752*t769)*var2[3] + (t13956*t4916 + t13938*t5155 + t13920*t5201 + 0.100001*(t13956*t5224 + t13938*t5228 + t13920*t5263) - 0.3*(t13920*t5228 + t13956*t5300 + t13938*t5311) + 0.2*(-1.*t13920*t5224 - 1.*t13938*t5300 - 1.*t13956*t5332) + t12404*t6334*t752*t753 + 0.2000000000018*t12404*t769*t773 - 6.000000000054e-7*t12404*t743*t752*t844)*var2[4] + (t16541*t4916 + t16117*t5155 + t15786*t5201 + 0.100001*(t16541*t5224 + t16117*t5228 + t15786*t5263) - 0.3*(t15786*t5228 + t16541*t5300 + t16117*t5311) + 0.2*(-1.*t15786*t5224 - 1.*t16117*t5300 - 1.*t16541*t5332) + t15759*t6334 + 6.000000000054e-7*t15696*t743)*var2[5] + (t18170*t4916 + t19086*t5155 + t18996*t5201 + 0.100001*(t18170*t5224 + t19086*t5228 + t18996*t5263) - 0.3*(t18996*t5228 + t18170*t5300 + t19086*t5311) + 0.2*(-1.*t18996*t5224 - 1.*t19086*t5300 - 1.*t18170*t5332) - 0.2000000000018*t12404*t702*t752 + 6.000000000054e-7*t15759*t769 - 0.2000000000018*t17362*t769)*var2[10] + (t17643*t1807 + t17715*t3723 + 0.100001*(t17715*t4246 + t17643*t4628 - 1.8e-11*t17541*t480) + 0.2*(-1.*t17541*t4246 - 1.*t17715*t4385 + 1.000000000009*t17643*t480) - 0.3*(t17541*t4628 + t17643*t4699 - 1.000000000009*t17715*t480) + t17541*t694)*var2[12];
  p_output1[2]=var2[2] + (t17715*t4916 + t17643*t5155 + t17541*t5201 + 0.100001*(t17715*t5224 + t17643*t5228 + t17541*t5263) - 0.3*(t17541*t5228 + t17715*t5300 + t17643*t5311) + 0.2*(-1.*t17541*t5224 - 1.*t17643*t5300 - 1.*t17715*t5332) + t17362*t6334 + 6.000000000054e-7*t15759*t743 - 0.2000000000018*t12404*t752*t769)*var2[3] + (t19199*t4916 + t19191*t5155 + t19182*t5201 + 0.100001*(t19199*t5224 + t19191*t5228 + t19182*t5263) - 0.3*(t19182*t5228 + t19199*t5300 + t19191*t5311) + 0.2*(-1.*t19182*t5224 - 1.*t19191*t5300 - 1.*t19199*t5332) - 1.*t14555*t6334*t752*t753 - 0.2000000000018*t14555*t769*t773 + 6.000000000054e-7*t14555*t743*t752*t844)*var2[4] + (t19343*t4916 + t19324*t5155 + t19319*t5201 + 0.100001*(t19343*t5224 + t19324*t5228 + t19319*t5263) - 0.3*(t19319*t5228 + t19343*t5300 + t19324*t5311) + 0.2*(-1.*t19319*t5224 - 1.*t19324*t5300 - 1.*t19343*t5332) + t19312*t6334 + 6.000000000054e-7*t14571*t743)*var2[5] + (t19505*t4916 + t19537*t5155 + t19511*t5201 + 0.100001*(t19505*t5224 + t19537*t5228 + t19511*t5263) - 0.3*(t19511*t5228 + t19505*t5300 + t19537*t5311) + 0.2*(-1.*t19511*t5224 - 1.*t19537*t5300 - 1.*t19505*t5332) + 0.2000000000018*t14555*t702*t752 + 6.000000000054e-7*t19312*t769 - 0.2000000000018*t19452*t769)*var2[10] + (t1807*t19461 + t19466*t3723 + 0.100001*(t19466*t4246 + t19461*t4628 - 1.8e-11*t19457*t480) + 0.2*(-1.*t19457*t4246 - 1.*t19466*t4385 + 1.000000000009*t19461*t480) - 0.3*(t19457*t4628 + t19461*t4699 - 1.000000000009*t19466*t480) + t19457*t694)*var2[12];
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
