/*
 * Automatically Generated from Mathematica.
 * Wed 29 May 2019 15:17:06 GMT-04:00
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
  double t12152;
  double t12666;
  double t12672;
  double t26782;
  double t27734;
  double t27793;
  double t27804;
  double t16843;
  double t21439;
  double t27810;
  double t27832;
  double t27833;
  double t27846;
  double t12174;
  double t12765;
  double t27856;
  double t27831;
  double t27834;
  double t27840;
  double t27845;
  double t27851;
  double t27852;
  double t27921;
  double t27932;
  double t27978;
  double t27980;
  double t27855;
  double t27989;
  double t27990;
  double t27991;
  double t27992;
  double t27993;
  double t27994;
  double t27996;
  double t27997;
  double t28110;
  double t28000;
  double t28134;
  double t28133;
  double t28141;
  double t28136;
  double t28139;
  double t28226;
  double t28146;
  double t28149;
  double t28160;
  double t28212;
  double t28300;
  double t28230;
  double t28235;
  double t28243;
  double t28244;
  double t28245;
  double t28246;
  double t28306;
  double t28332;
  double t28221;
  double t28329;
  double t28330;
  double t28301;
  double t28237;
  double t28239;
  double t28240;
  double t28241;
  double t28242;
  double t28219;
  double t28224;
  double t28225;
  double t28228;
  double t28229;
  double t28135;
  double t28140;
  double t28142;
  double t28143;
  double t28144;
  double t28352;
  double t28353;
  double t28333;
  double t28355;
  double t28356;
  double t28357;
  double t28359;
  double t28360;
  double t28361;
  double t28342;
  double t28308;
  double t28314;
  double t28406;
  double t28407;
  double t28408;
  double t28409;
  double t28411;
  double t28412;
  double t28413;
  double t28414;
  double t28416;
  double t28417;
  double t28418;
  double t28419;
  double t28656;
  double t28660;
  double t28661;
  double t28662;
  double t28663;
  double t28868;
  double t28870;
  double t28951;
  double t29072;
  double t29074;
  double t29097;
  double t29157;
  double t29182;
  double t29521;
  double t29651;
  double t31628;
  double t32454;
  double t36568;
  double t36641;
  double t36706;
  double t36719;
  double t36721;
  double t36725;
  double t36726;
  double t36730;
  double t36734;
  double t36735;
  double t36736;
  double t36739;
  double t36742;
  double t36743;
  double t36745;
  double t38266;
  double t38267;
  double t38268;
  double t38270;
  double t38271;
  double t38272;
  double t38275;
  double t38280;
  double t38311;
  double t38316;
  double t38317;
  double t38322;
  double t38330;
  double t38333;
  double t38345;
  double t16594;
  double t22327;
  double t24072;
  double t26260;
  double t27854;
  double t27857;
  double t27858;
  double t27859;
  double t27860;
  double t38593;
  double t38594;
  double t38595;
  double t27983;
  double t27985;
  double t27986;
  double t27987;
  double t27988;
  double t38591;
  double t38597;
  double t38598;
  double t38673;
  double t38725;
  double t38726;
  double t38732;
  double t28002;
  double t38740;
  double t38748;
  double t38749;
  double t38751;
  double t28123;
  double t38897;
  double t38899;
  double t38900;
  double t38901;
  double t38906;
  double t38907;
  double t38910;
  double t38911;
  double t38915;
  double t38916;
  double t39053;
  double t39055;
  double t39056;
  double t39057;
  double t39059;
  double t39060;
  double t39061;
  double t39062;
  double t39065;
  double t39067;
  double t39071;
  double t39072;
  double t39115;
  double t39117;
  double t39119;
  double t39121;
  double t39122;
  double t39123;
  double t39125;
  double t39126;
  double t39128;
  double t39129;
  double t39130;
  double t39156;
  double t39157;
  double t39158;
  double t39155;
  double t39159;
  double t39160;
  double t39161;
  double t39163;
  double t39164;
  double t39166;
  double t39171;
  double t39174;
  double t39175;
  double t39178;
  double t39215;
  double t39216;
  double t39217;
  double t39221;
  double t39224;
  double t39225;
  double t39228;
  double t39229;
  double t39234;
  double t39237;
  t12152 = Cos(var1[17]);
  t12666 = Sin(var1[17]);
  t12672 = -3.e-6*t12666;
  t26782 = Cos(var1[15]);
  t27734 = -1.*t26782;
  t27793 = 1. + t27734;
  t27804 = Cos(var1[4]);
  t16843 = 3.e-6*t12152;
  t21439 = t16843 + t12672;
  t27810 = Cos(var1[5]);
  t27832 = Sin(var1[15]);
  t27833 = Sin(var1[4]);
  t27846 = Sin(var1[5]);
  t12174 = -3.e-6*t12152;
  t12765 = t12174 + t12672;
  t27856 = -9.e-12*t12666;
  t27831 = 3.e-6*t27793*t27804*t27810;
  t27834 = -3.e-6*t27832*t27833;
  t27840 = -9.e-12*t27793;
  t27845 = 1. + t27840;
  t27851 = -1.*t27845*t27804*t27846;
  t27852 = t27831 + t27834 + t27851;
  t27921 = t26782*t27804*t27810;
  t27932 = t27832*t27833;
  t27978 = -3.e-6*t27793*t27804*t27846;
  t27980 = t27921 + t27932 + t27978;
  t27855 = -1.*t12152;
  t27989 = -1.*t27804*t27810*t27832;
  t27990 = -1.000000000009*t27793;
  t27991 = 1. + t27990;
  t27992 = t27991*t27833;
  t27993 = -3.e-6*t27804*t27832*t27846;
  t27994 = t27989 + t27992 + t27993;
  t27996 = 3.e-6*t12666;
  t27997 = t16843 + t27996;
  t28110 = t12174 + t27996;
  t28000 = 9.e-12*t12666;
  t28134 = 1. + t27855;
  t28133 = 9.e-13*var1[17];
  t28141 = -9.e-12*t28134;
  t28136 = -3.e-6*t28134;
  t28139 = t28136 + t12672;
  t28226 = t28136 + t27996;
  t28146 = -1.*t26782*t27804*t27810;
  t28149 = -1.000000000009*t27832*t27833;
  t28160 = -3.e-6*t26782*t27804*t27846;
  t28212 = t28146 + t28149 + t28160;
  t28300 = 3.e-6*t28134;
  t28230 = t26782*t27833;
  t28235 = t27989 + t28230 + t27993;
  t28243 = 3.e-6*t27804*t27810*t27832;
  t28244 = -3.e-6*t26782*t27833;
  t28245 = 9.e-12*t27804*t27832*t27846;
  t28246 = t28243 + t28244 + t28245;
  t28306 = t28300 + t12672;
  t28332 = 9.e-12*t28134;
  t28221 = -1.*t12666;
  t28329 = -1.000000000009*t28134;
  t28330 = 1. + t28329;
  t28301 = t28300 + t27996;
  t28237 = 3.e-7*var1[17];
  t28239 = -1.62e-17*t28134;
  t28240 = 0.2*t28139;
  t28241 = 0.1*t28226;
  t28242 = t28237 + t28239 + t28240 + t28241;
  t28219 = 0.2000000000018*t28134;
  t28224 = t28141 + t28221;
  t28225 = 0.1*t28224;
  t28228 = -9.e-7*t28226;
  t28229 = t28133 + t28219 + t28225 + t28228;
  t28135 = 0.1000000000009*t28134;
  t28140 = -9.e-7*t28139;
  t28142 = t28141 + t12666;
  t28143 = 0.2*t28142;
  t28144 = t28133 + t28135 + t28140 + t28143;
  t28352 = -1.*t27845*t27804*t27810;
  t28353 = t28352 + t27978;
  t28333 = t28332 + t12666;
  t28355 = -3.e-6*t27793*t27804*t27810;
  t28356 = -1.*t26782*t27804*t27846;
  t28357 = t28355 + t28356;
  t28359 = -3.e-6*t27804*t27810*t27832;
  t28360 = t27804*t27832*t27846;
  t28361 = t28359 + t28360;
  t28342 = t28332 + t28221;
  t28308 = -1.8e-11*t28134;
  t28314 = 1. + t28308;
  t28406 = -3.e-6*t27804*t27832;
  t28407 = -3.e-6*t27793*t27810*t27833;
  t28408 = t27845*t27833*t27846;
  t28409 = t28406 + t28407 + t28408;
  t28411 = t27804*t27832;
  t28412 = -1.*t26782*t27810*t27833;
  t28413 = 3.e-6*t27793*t27833*t27846;
  t28414 = t28411 + t28412 + t28413;
  t28416 = t27991*t27804;
  t28417 = t27810*t27832*t27833;
  t28418 = 3.e-6*t27832*t27833*t27846;
  t28419 = t28416 + t28417 + t28418;
  t28656 = Sin(var1[3]);
  t28660 = 3.e-6*t27793*t27804*t27810*t28656;
  t28661 = -3.e-6*t27832*t28656*t27833;
  t28662 = -1.*t27845*t27804*t28656*t27846;
  t28663 = t28660 + t28661 + t28662;
  t28868 = t26782*t27804*t27810*t28656;
  t28870 = t27832*t28656*t27833;
  t28951 = -3.e-6*t27793*t27804*t28656*t27846;
  t29072 = t28868 + t28870 + t28951;
  t29074 = -1.*t27804*t27810*t27832*t28656;
  t29097 = t27991*t28656*t27833;
  t29157 = -3.e-6*t27804*t27832*t28656*t27846;
  t29182 = t29074 + t29097 + t29157;
  t29521 = Cos(var1[3]);
  t29651 = t29521*t27810*t27833;
  t31628 = -1.*t28656*t27846;
  t32454 = t29651 + t31628;
  t36568 = -1.*t27810*t28656;
  t36641 = -1.*t29521*t27833*t27846;
  t36706 = t36568 + t36641;
  t36719 = 3.e-6*t29521*t27804*t27832;
  t36721 = 3.e-6*t27793*t32454;
  t36725 = t27845*t36706;
  t36726 = t36719 + t36721 + t36725;
  t36730 = -1.*t29521*t27804*t27832;
  t36734 = t26782*t32454;
  t36735 = 3.e-6*t27793*t36706;
  t36736 = t36730 + t36734 + t36735;
  t36739 = -1.*t27991*t29521*t27804;
  t36742 = -1.*t27832*t32454;
  t36743 = 3.e-6*t27832*t36706;
  t36745 = t36739 + t36742 + t36743;
  t38266 = -1.*t27810*t28656*t27833;
  t38267 = -1.*t29521*t27846;
  t38268 = t38266 + t38267;
  t38270 = t29521*t27810;
  t38271 = -1.*t28656*t27833*t27846;
  t38272 = t38270 + t38271;
  t38275 = t27845*t38268;
  t38280 = 3.e-6*t27793*t38272;
  t38311 = t38275 + t38280;
  t38316 = 3.e-6*t27793*t38268;
  t38317 = t26782*t38272;
  t38322 = t38316 + t38317;
  t38330 = 3.e-6*t27832*t38268;
  t38333 = -1.*t27832*t38272;
  t38345 = t38330 + t38333;
  t16594 = 0.2*t12765;
  t22327 = 0.1*t21439;
  t24072 = -1.62e-17*t12666;
  t26260 = 3.e-7 + t16594 + t22327 + t24072;
  t27854 = -9.e-7*t21439;
  t27857 = t27855 + t27856;
  t27858 = 0.1*t27857;
  t27859 = 0.2000000000018*t12666;
  t27860 = 9.e-13 + t27854 + t27858 + t27859;
  t38593 = t27810*t28656*t27833;
  t38594 = t29521*t27846;
  t38595 = t38593 + t38594;
  t27983 = -9.e-7*t12765;
  t27985 = t12152 + t27856;
  t27986 = 0.2*t27985;
  t27987 = 0.1000000000009*t12666;
  t27988 = 9.e-13 + t27983 + t27986 + t27987;
  t38591 = 3.e-6*t27804*t27832*t28656;
  t38597 = 3.e-6*t27793*t38595;
  t38598 = t27845*t38272;
  t38673 = t38591 + t38597 + t38598;
  t38725 = -1.*t27804*t27832*t28656;
  t38726 = t26782*t38595;
  t38732 = t38725 + t38726 + t38280;
  t28002 = t27855 + t28000;
  t38740 = -1.*t27991*t27804*t28656;
  t38748 = -1.*t27832*t38595;
  t38749 = 3.e-6*t27832*t38272;
  t38751 = t38740 + t38748 + t38749;
  t28123 = t12152 + t28000;
  t38897 = 1.000000000009*t27804*t27832*t28656;
  t38899 = -1.*t26782*t38595;
  t38900 = 3.e-6*t26782*t38272;
  t38901 = t38897 + t38899 + t38900;
  t38906 = 3.e-6*t26782*t27804*t28656;
  t38907 = 3.e-6*t27832*t38595;
  t38910 = -9.e-12*t27832*t38272;
  t38911 = t38906 + t38907 + t38910;
  t38915 = -1.*t26782*t27804*t28656;
  t38916 = t38915 + t38748 + t38749;
  t39053 = -3.e-6*t27793*t29521*t27804*t27810;
  t39055 = 3.e-6*t29521*t27832*t27833;
  t39056 = t27845*t29521*t27804*t27846;
  t39057 = t39053 + t39055 + t39056;
  t39059 = -1.*t26782*t29521*t27804*t27810;
  t39060 = -1.*t29521*t27832*t27833;
  t39061 = 3.e-6*t27793*t29521*t27804*t27846;
  t39062 = t39059 + t39060 + t39061;
  t39065 = t29521*t27804*t27810*t27832;
  t39067 = -1.*t27991*t29521*t27833;
  t39071 = 3.e-6*t29521*t27804*t27832*t27846;
  t39072 = t39065 + t39067 + t39071;
  t39115 = t27810*t28656;
  t39117 = t29521*t27833*t27846;
  t39119 = t39115 + t39117;
  t39121 = t27845*t32454;
  t39122 = 3.e-6*t27793*t39119;
  t39123 = t39121 + t39122;
  t39125 = t26782*t39119;
  t39126 = t36721 + t39125;
  t39128 = 3.e-6*t27832*t32454;
  t39129 = -1.*t27832*t39119;
  t39130 = t39128 + t39129;
  t39156 = -1.*t29521*t27810*t27833;
  t39157 = t28656*t27846;
  t39158 = t39156 + t39157;
  t39155 = -3.e-6*t29521*t27804*t27832;
  t39159 = 3.e-6*t27793*t39158;
  t39160 = t27845*t39119;
  t39161 = t39155 + t39159 + t39160;
  t39163 = t29521*t27804*t27832;
  t39164 = t26782*t39158;
  t39166 = t39163 + t39164 + t39122;
  t39171 = t27991*t29521*t27804;
  t39174 = -1.*t27832*t39158;
  t39175 = 3.e-6*t27832*t39119;
  t39178 = t39171 + t39174 + t39175;
  t39215 = -1.000000000009*t29521*t27804*t27832;
  t39216 = -1.*t26782*t39158;
  t39217 = 3.e-6*t26782*t39119;
  t39221 = t39215 + t39216 + t39217;
  t39224 = -3.e-6*t26782*t29521*t27804;
  t39225 = 3.e-6*t27832*t39158;
  t39228 = -9.e-12*t27832*t39119;
  t39229 = t39224 + t39225 + t39228;
  t39234 = t26782*t29521*t27804;
  t39237 = t39234 + t39174 + t39175;
  p_output1[0]=var2[0] + (-0.2000000000018*t27804*t27832 - 0.2000000000018*t27793*t27810*t27833 - 6.000000000054e-7*t27793*t27833*t27846 + t28242*t28409 + t28229*t28414 + t28144*t28419 - 0.099999*(t28314*t28409 + t28306*t28414 + t28301*t28419) - 0.3*(t28306*t28409 + t28333*t28414 + t28330*t28419) + 0.2*(t28301*t28409 + t28330*t28414 + t28342*t28419))*var2[4] + (6.000000000054e-7*t27793*t27804*t27810 - 0.2000000000018*t27793*t27804*t27846 + t28242*t28353 + t28229*t28357 + t28144*t28361 - 0.099999*(t28314*t28353 + t28306*t28357 + t28301*t28361) - 0.3*(t28306*t28353 + t28333*t28357 + t28330*t28361) + 0.2*(t28301*t28353 + t28330*t28357 + t28342*t28361))*var2[5] + (0.2000000000018*t27804*t27810*t27832 - 0.2000000000018*t26782*t27833 + 6.000000000054e-7*t27804*t27832*t27846 + t28144*t28212 + t28229*t28235 + t28242*t28246 - 0.099999*(t28212*t28301 + t28235*t28306 + t28246*t28314) - 0.3*(t28246*t28306 + t28212*t28330 + t28235*t28333) + 0.2*(t28246*t28301 + t28235*t28330 + t28212*t28342))*var2[15] + (t26260*t27852 + t27860*t27980 + t27988*t27994 + 0.2*(-1.000000000009*t12666*t27980 + t27852*t27997 + t27994*t28002) - 0.099999*(-1.8e-11*t12666*t27852 + t27994*t27997 + t27980*t28110) - 0.3*(-1.000000000009*t12666*t27994 + t27852*t28110 + t27980*t28123))*var2[17];
  p_output1[1]=var2[1] + (0.2000000000018*t27804*t27832*t29521 + 0.2000000000018*t27793*t32454 - 6.000000000054e-7*t27793*t36706 + t28242*t36726 + t28229*t36736 + t28144*t36745 - 0.099999*(t28314*t36726 + t28306*t36736 + t28301*t36745) - 0.3*(t28306*t36726 + t28333*t36736 + t28330*t36745) + 0.2*(t28301*t36726 + t28330*t36736 + t28342*t36745))*var2[3] + (0.2000000000018*t27793*t27804*t27810*t28656 - 0.2000000000018*t27832*t27833*t28656 + 6.000000000054e-7*t27793*t27804*t27846*t28656 + t28242*t28663 + t28229*t29072 + t28144*t29182 - 0.099999*(t28314*t28663 + t28306*t29072 + t28301*t29182) - 0.3*(t28306*t28663 + t28333*t29072 + t28330*t29182) + 0.2*(t28301*t28663 + t28330*t29072 + t28342*t29182))*var2[4] + (-6.000000000054e-7*t27793*t38268 + 0.2000000000018*t27793*t38272 + t28242*t38311 + t28229*t38322 + t28144*t38345 - 0.099999*(t28314*t38311 + t28306*t38322 + t28301*t38345) - 0.3*(t28306*t38311 + t28333*t38322 + t28330*t38345) + 0.2*(t28301*t38311 + t28330*t38322 + t28342*t38345))*var2[5] + (0.2000000000018*t26782*t27804*t28656 - 6.000000000054e-7*t27832*t38272 + 0.2000000000018*t27832*t38595 + t28144*t38901 + t28242*t38911 + t28229*t38916 - 0.099999*(t28301*t38901 + t28314*t38911 + t28306*t38916) + 0.2*(t28342*t38901 + t28301*t38911 + t28330*t38916) - 0.3*(t28330*t38901 + t28306*t38911 + t28333*t38916))*var2[15] + (t26260*t38673 + t27860*t38732 + t27988*t38751 - 0.3*(t28110*t38673 + t28123*t38732 - 1.000000000009*t12666*t38751) - 0.099999*(-1.8e-11*t12666*t38673 + t28110*t38732 + t27997*t38751) + 0.2*(t27997*t38673 - 1.000000000009*t12666*t38732 + t28002*t38751))*var2[17];
  p_output1[2]=var2[2] + (0.2000000000018*t27804*t27832*t28656 - 6.000000000054e-7*t27793*t38272 + 0.2000000000018*t27793*t38595 + t28242*t38673 + t28229*t38732 + t28144*t38751 - 0.099999*(t28314*t38673 + t28306*t38732 + t28301*t38751) - 0.3*(t28306*t38673 + t28333*t38732 + t28330*t38751) + 0.2*(t28301*t38673 + t28330*t38732 + t28342*t38751))*var2[3] + (-0.2000000000018*t27793*t27804*t27810*t29521 + 0.2000000000018*t27832*t27833*t29521 - 6.000000000054e-7*t27793*t27804*t27846*t29521 + t28242*t39057 + t28229*t39062 + t28144*t39072 - 0.099999*(t28314*t39057 + t28306*t39062 + t28301*t39072) - 0.3*(t28306*t39057 + t28333*t39062 + t28330*t39072) + 0.2*(t28301*t39057 + t28330*t39062 + t28342*t39072))*var2[4] + (-6.000000000054e-7*t27793*t32454 + 0.2000000000018*t27793*t39119 + t28242*t39123 + t28229*t39126 + t28144*t39130 - 0.099999*(t28314*t39123 + t28306*t39126 + t28301*t39130) - 0.3*(t28306*t39123 + t28333*t39126 + t28330*t39130) + 0.2*(t28301*t39123 + t28330*t39126 + t28342*t39130))*var2[5] + (-0.2000000000018*t26782*t27804*t29521 - 6.000000000054e-7*t27832*t39119 + 0.2000000000018*t27832*t39158 + t28144*t39221 + t28242*t39229 + t28229*t39237 - 0.099999*(t28301*t39221 + t28314*t39229 + t28306*t39237) + 0.2*(t28342*t39221 + t28301*t39229 + t28330*t39237) - 0.3*(t28330*t39221 + t28306*t39229 + t28333*t39237))*var2[15] + (t26260*t39161 + t27860*t39166 + t27988*t39178 - 0.3*(t28110*t39161 + t28123*t39166 - 1.000000000009*t12666*t39178) - 0.099999*(-1.8e-11*t12666*t39161 + t28110*t39166 + t27997*t39178) + 0.2*(t27997*t39161 - 1.000000000009*t12666*t39166 + t28002*t39178))*var2[17];
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
