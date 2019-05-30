/*
 * Automatically Generated from Mathematica.
 * Wed 29 May 2019 23:56:28 GMT-04:00
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
  double t4285;
  double t15340;
  double t19849;
  double t26728;
  double t28724;
  double t28817;
  double t28857;
  double t28985;
  double t28990;
  double t1570;
  double t3816;
  double t26392;
  double t27907;
  double t29133;
  double t29205;
  double t29707;
  double t29029;
  double t29092;
  double t29759;
  double t29413;
  double t29548;
  double t29625;
  double t29648;
  double t29668;
  double t29670;
  double t29920;
  double t29931;
  double t29953;
  double t29984;
  double t30545;
  double t30662;
  double t30900;
  double t30954;
  double t30961;
  double t30963;
  double t31035;
  double t31102;
  double t31125;
  double t31079;
  double t29764;
  double t31048;
  double t31213;
  double t21021;
  double t25018;
  double t25348;
  double t26138;
  double t28434;
  double t28970;
  double t29104;
  double t29262;
  double t29295;
  double t29734;
  double t29771;
  double t29780;
  double t29788;
  double t29833;
  double t30050;
  double t30153;
  double t30173;
  double t30404;
  double t30456;
  double t31785;
  double t31802;
  double t31814;
  double t31086;
  double t31842;
  double t31865;
  double t31998;
  double t32027;
  double t32062;
  double t32063;
  double t31276;
  double t31363;
  double t31456;
  double t35414;
  double t35416;
  double t35419;
  double t35433;
  double t35446;
  double t35451;
  double t35455;
  double t35461;
  double t35463;
  double t35464;
  double t35468;
  double t35470;
  double t37312;
  double t37314;
  double t37082;
  double t37085;
  double t37708;
  double t37400;
  double t37403;
  double t37508;
  double t37517;
  double t37717;
  double t37719;
  double t37723;
  double t37812;
  double t37884;
  double t38097;
  double t38149;
  double t38112;
  double t38205;
  double t38208;
  double t38207;
  double t38209;
  double t38211;
  double t38217;
  double t38220;
  double t38223;
  double t38226;
  double t38227;
  double t38242;
  double t38251;
  double t38262;
  double t38272;
  double t38274;
  double t38275;
  double t38284;
  double t38286;
  double t38288;
  double t38290;
  double t38777;
  double t38836;
  double t39011;
  double t39091;
  double t39472;
  double t39496;
  double t39603;
  double t40251;
  double t40521;
  double t41253;
  double t41258;
  double t41279;
  double t41473;
  double t41476;
  double t41708;
  double t41710;
  double t41896;
  double t41908;
  double t42151;
  double t42319;
  double t42434;
  double t42719;
  double t42722;
  double t42901;
  double t43040;
  double t43200;
  double t43226;
  double t43782;
  double t43797;
  double t43819;
  double t43857;
  double t43898;
  double t43990;
  double t43992;
  double t43994;
  double t44055;
  double t44064;
  double t44066;
  double t44072;
  double t44140;
  double t44167;
  double t44175;
  double t37196;
  double t37392;
  double t37393;
  double t37394;
  double t37647;
  double t37709;
  double t37710;
  double t37714;
  double t37715;
  double t37795;
  double t37798;
  double t37799;
  double t37800;
  double t37806;
  double t44620;
  double t44621;
  double t44629;
  double t44638;
  double t44642;
  double t44643;
  double t44645;
  double t38113;
  double t44647;
  double t44649;
  double t38181;
  double t44850;
  double t44851;
  double t44852;
  double t44853;
  double t44856;
  double t44857;
  double t44858;
  double t44859;
  double t44862;
  double t44863;
  double t44864;
  double t44865;
  double t44901;
  double t44902;
  double t44904;
  double t44906;
  double t44907;
  double t44911;
  double t44913;
  double t44914;
  double t44919;
  double t44922;
  double t44927;
  double t45020;
  double t45025;
  double t45027;
  double t45030;
  double t45031;
  double t45049;
  double t45065;
  double t45174;
  double t45187;
  double t45188;
  double t45223;
  double t45248;
  double t45274;
  double t45298;
  double t45346;
  double t45922;
  double t46025;
  double t46338;
  double t46555;
  double t47112;
  double t47133;
  double t47165;
  double t47198;
  double t47206;
  t4285 = Cos(var1[10]);
  t15340 = -1.*t4285;
  t19849 = 1. + t15340;
  t26728 = Sin(var1[4]);
  t28724 = Cos(var1[12]);
  t28817 = -1.*t28724;
  t28857 = 1. + t28817;
  t28985 = -3.e-6*t28857;
  t28990 = Sin(var1[12]);
  t1570 = Cos(var1[4]);
  t3816 = Sin(var1[10]);
  t26392 = Cos(var1[5]);
  t27907 = Sin(var1[5]);
  t29133 = 3.e-6*t28990;
  t29205 = t28985 + t29133;
  t29707 = 3.e-13*var1[12];
  t29029 = -3.e-6*t28990;
  t29092 = t28985 + t29029;
  t29759 = -9.e-12*t28857;
  t29413 = -3.e-6*t1570*t3816;
  t29548 = -3.e-6*t19849*t26392*t26728;
  t29625 = -9.e-12*t19849;
  t29648 = 1. + t29625;
  t29668 = t29648*t26728*t27907;
  t29670 = t29413 + t29548 + t29668;
  t29920 = t1570*t3816;
  t29931 = -1.*t4285*t26392*t26728;
  t29953 = 3.e-6*t19849*t26728*t27907;
  t29984 = t29920 + t29931 + t29953;
  t30545 = -1.000000000009*t19849;
  t30662 = 1. + t30545;
  t30900 = t30662*t1570;
  t30954 = t26392*t3816*t26728;
  t30961 = 3.e-6*t3816*t26728*t27907;
  t30963 = t30900 + t30954 + t30961;
  t31035 = 3.e-6*t28857;
  t31102 = -1.000000000009*t28857;
  t31125 = 1. + t31102;
  t31079 = 9.e-12*t28857;
  t29764 = -1.*t28990;
  t31048 = t31035 + t29029;
  t31213 = t31035 + t29133;
  t21021 = -1.8e-12*t19849;
  t25018 = -1. + t4285;
  t25348 = 0.2*t25018;
  t26138 = t21021 + t25348;
  t28434 = 1.e-7*var1[12];
  t28970 = 5.4e-18*t28857;
  t29104 = -0.200000000003*t29092;
  t29262 = 0.100000000003*t29205;
  t29295 = t28434 + t28970 + t29104 + t29262;
  t29734 = -0.2000000000048*t28857;
  t29771 = t29759 + t29764;
  t29780 = 0.100000000003*t29771;
  t29788 = 3.e-7*t29205;
  t29833 = t29707 + t29734 + t29780 + t29788;
  t30050 = 0.1000000000039*t28857;
  t30153 = 3.e-7*t29092;
  t30173 = t29759 + t28990;
  t30404 = -0.200000000003*t30173;
  t30456 = t29707 + t30050 + t30153 + t30404;
  t31785 = -1.*t29648*t1570*t26392;
  t31802 = -3.e-6*t19849*t1570*t27907;
  t31814 = t31785 + t31802;
  t31086 = t31079 + t28990;
  t31842 = -3.e-6*t19849*t1570*t26392;
  t31865 = -1.*t4285*t1570*t27907;
  t31998 = t31842 + t31865;
  t32027 = -3.e-6*t1570*t26392*t3816;
  t32062 = t1570*t3816*t27907;
  t32063 = t32027 + t32062;
  t31276 = t31079 + t29764;
  t31363 = -1.8e-11*t28857;
  t31456 = 1. + t31363;
  t35414 = -1.*t4285*t1570*t26392;
  t35416 = -1.000000000009*t3816*t26728;
  t35419 = -3.e-6*t4285*t1570*t27907;
  t35433 = t35414 + t35416 + t35419;
  t35446 = -1.*t1570*t26392*t3816;
  t35451 = t4285*t26728;
  t35455 = -3.e-6*t1570*t3816*t27907;
  t35461 = t35446 + t35451 + t35455;
  t35463 = 3.e-6*t1570*t26392*t3816;
  t35464 = -3.e-6*t4285*t26728;
  t35468 = 9.e-12*t1570*t3816*t27907;
  t35470 = t35463 + t35464 + t35468;
  t37312 = 3.e-6*t28724;
  t37314 = t37312 + t29029;
  t37082 = -3.e-6*t28724;
  t37085 = t37082 + t29029;
  t37708 = -9.e-12*t28990;
  t37400 = 3.e-6*t19849*t1570*t26392;
  t37403 = -3.e-6*t3816*t26728;
  t37508 = -1.*t29648*t1570*t27907;
  t37517 = t37400 + t37403 + t37508;
  t37717 = t4285*t1570*t26392;
  t37719 = t3816*t26728;
  t37723 = t37717 + t37719 + t31802;
  t37812 = t30662*t26728;
  t37884 = t35446 + t37812 + t35455;
  t38097 = t37312 + t29133;
  t38149 = t37082 + t29133;
  t38112 = 9.e-12*t28990;
  t38205 = Cos(var1[3]);
  t38208 = Sin(var1[3]);
  t38207 = t38205*t26392*t26728;
  t38209 = -1.*t38208*t27907;
  t38211 = t38207 + t38209;
  t38217 = -1.*t26392*t38208;
  t38220 = -1.*t38205*t26728*t27907;
  t38223 = t38217 + t38220;
  t38226 = 3.e-6*t38205*t1570*t3816;
  t38227 = 3.e-6*t19849*t38211;
  t38242 = t29648*t38223;
  t38251 = t38226 + t38227 + t38242;
  t38262 = -1.*t38205*t1570*t3816;
  t38272 = t4285*t38211;
  t38274 = 3.e-6*t19849*t38223;
  t38275 = t38262 + t38272 + t38274;
  t38284 = -1.*t30662*t38205*t1570;
  t38286 = -1.*t3816*t38211;
  t38288 = 3.e-6*t3816*t38223;
  t38290 = t38284 + t38286 + t38288;
  t38777 = 3.e-6*t19849*t1570*t26392*t38208;
  t38836 = -3.e-6*t3816*t38208*t26728;
  t39011 = -1.*t29648*t1570*t38208*t27907;
  t39091 = t38777 + t38836 + t39011;
  t39472 = t4285*t1570*t26392*t38208;
  t39496 = t3816*t38208*t26728;
  t39603 = -3.e-6*t19849*t1570*t38208*t27907;
  t40251 = t39472 + t39496 + t39603;
  t40521 = -1.*t1570*t26392*t3816*t38208;
  t41253 = t30662*t38208*t26728;
  t41258 = -3.e-6*t1570*t3816*t38208*t27907;
  t41279 = t40521 + t41253 + t41258;
  t41473 = -1.*t26392*t38208*t26728;
  t41476 = -1.*t38205*t27907;
  t41708 = t41473 + t41476;
  t41710 = t38205*t26392;
  t41896 = -1.*t38208*t26728*t27907;
  t41908 = t41710 + t41896;
  t42151 = t29648*t41708;
  t42319 = 3.e-6*t19849*t41908;
  t42434 = t42151 + t42319;
  t42719 = 3.e-6*t19849*t41708;
  t42722 = t4285*t41908;
  t42901 = t42719 + t42722;
  t43040 = 3.e-6*t3816*t41708;
  t43200 = -1.*t3816*t41908;
  t43226 = t43040 + t43200;
  t43782 = t26392*t38208*t26728;
  t43797 = t38205*t27907;
  t43819 = t43782 + t43797;
  t43857 = 1.000000000009*t1570*t3816*t38208;
  t43898 = -1.*t4285*t43819;
  t43990 = 3.e-6*t4285*t41908;
  t43992 = t43857 + t43898 + t43990;
  t43994 = 3.e-6*t4285*t1570*t38208;
  t44055 = 3.e-6*t3816*t43819;
  t44064 = -9.e-12*t3816*t41908;
  t44066 = t43994 + t44055 + t44064;
  t44072 = -1.*t4285*t1570*t38208;
  t44140 = -1.*t3816*t43819;
  t44167 = 3.e-6*t3816*t41908;
  t44175 = t44072 + t44140 + t44167;
  t37196 = -0.200000000003*t37085;
  t37392 = 0.100000000003*t37314;
  t37393 = 5.4e-18*t28990;
  t37394 = 1.e-7 + t37196 + t37392 + t37393;
  t37647 = 3.e-7*t37314;
  t37709 = t28817 + t37708;
  t37710 = 0.100000000003*t37709;
  t37714 = -0.2000000000048*t28990;
  t37715 = 3.e-13 + t37647 + t37710 + t37714;
  t37795 = 3.e-7*t37085;
  t37798 = t28724 + t37708;
  t37799 = -0.200000000003*t37798;
  t37800 = 0.1000000000039*t28990;
  t37806 = 3.e-13 + t37795 + t37799 + t37800;
  t44620 = 3.e-6*t1570*t3816*t38208;
  t44621 = 3.e-6*t19849*t43819;
  t44629 = t29648*t41908;
  t44638 = t44620 + t44621 + t44629;
  t44642 = -1.*t1570*t3816*t38208;
  t44643 = t4285*t43819;
  t44645 = t44642 + t44643 + t42319;
  t38113 = t28817 + t38112;
  t44647 = -1.*t30662*t1570*t38208;
  t44649 = t44647 + t44140 + t44167;
  t38181 = t28724 + t38112;
  t44850 = -3.e-6*t19849*t38205*t1570*t26392;
  t44851 = 3.e-6*t38205*t3816*t26728;
  t44852 = t29648*t38205*t1570*t27907;
  t44853 = t44850 + t44851 + t44852;
  t44856 = -1.*t4285*t38205*t1570*t26392;
  t44857 = -1.*t38205*t3816*t26728;
  t44858 = 3.e-6*t19849*t38205*t1570*t27907;
  t44859 = t44856 + t44857 + t44858;
  t44862 = t38205*t1570*t26392*t3816;
  t44863 = -1.*t30662*t38205*t26728;
  t44864 = 3.e-6*t38205*t1570*t3816*t27907;
  t44865 = t44862 + t44863 + t44864;
  t44901 = t26392*t38208;
  t44902 = t38205*t26728*t27907;
  t44904 = t44901 + t44902;
  t44906 = t29648*t38211;
  t44907 = 3.e-6*t19849*t44904;
  t44911 = t44906 + t44907;
  t44913 = t4285*t44904;
  t44914 = t38227 + t44913;
  t44919 = 3.e-6*t3816*t38211;
  t44922 = -1.*t3816*t44904;
  t44927 = t44919 + t44922;
  t45020 = -1.*t38205*t26392*t26728;
  t45025 = t38208*t27907;
  t45027 = t45020 + t45025;
  t45030 = -1.000000000009*t38205*t1570*t3816;
  t45031 = -1.*t4285*t45027;
  t45049 = 3.e-6*t4285*t44904;
  t45065 = t45030 + t45031 + t45049;
  t45174 = -3.e-6*t4285*t38205*t1570;
  t45187 = 3.e-6*t3816*t45027;
  t45188 = -9.e-12*t3816*t44904;
  t45223 = t45174 + t45187 + t45188;
  t45248 = t4285*t38205*t1570;
  t45274 = -1.*t3816*t45027;
  t45298 = 3.e-6*t3816*t44904;
  t45346 = t45248 + t45274 + t45298;
  t45922 = -3.e-6*t38205*t1570*t3816;
  t46025 = 3.e-6*t19849*t45027;
  t46338 = t29648*t44904;
  t46555 = t45922 + t46025 + t46338;
  t47112 = t38205*t1570*t3816;
  t47133 = t4285*t45027;
  t47165 = t47112 + t47133 + t44907;
  t47198 = t30662*t38205*t1570;
  t47206 = t47198 + t45274 + t45298;
  p_output1[0]=1.;
  p_output1[1]=-1.*t26138*t26392*t26728 + 6.000000000054e-7*t19849*t26728*t27907 + t29295*t29670 + t29833*t29984 + t30456*t30963 - 0.3*(t29670*t31048 + t29984*t31086 + t30963*t31125) + 0.2*(-1.*t29984*t31125 - 1.*t29670*t31213 - 1.*t30963*t31276) + 0.100001*(t29984*t31048 + t30963*t31213 + t29670*t31456) + 0.2000000000018*t1570*t3816;
  p_output1[2]=-6.000000000054e-7*t1570*t19849*t26392 - 1.*t1570*t26138*t27907 + t29295*t31814 + t29833*t31998 + t30456*t32063 - 0.3*(t31048*t31814 + t31086*t31998 + t31125*t32063) + 0.100001*(t31456*t31814 + t31048*t31998 + t31213*t32063) + 0.2*(-1.*t31213*t31814 - 1.*t31125*t31998 - 1.*t31276*t32063);
  p_output1[3]=t30456*t35433 + t29833*t35461 + t29295*t35470 - 0.3*(t31125*t35433 + t31086*t35461 + t31048*t35470) + 0.2*(-1.*t31276*t35433 - 1.*t31125*t35461 - 1.*t31213*t35470) + 0.100001*(t31213*t35433 + t31048*t35461 + t31456*t35470) - 0.2000000000018*t1570*t26392*t3816 - 6.000000000054e-7*t1570*t27907*t3816 + 0.2000000000018*t26728*t4285;
  p_output1[4]=t37394*t37517 + t37715*t37723 + t37806*t37884 + 0.2*(1.000000000009*t28990*t37723 - 1.*t37517*t38097 - 1.*t37884*t38113) + 0.100001*(-1.8e-11*t28990*t37517 + t37884*t38097 + t37723*t38149) - 0.3*(-1.000000000009*t28990*t37884 + t37517*t38149 + t37723*t38181);
  p_output1[5]=-1.;
  p_output1[6]=1.;
  p_output1[7]=-0.2000000000018*t1570*t3816*t38205 + t26138*t38211 + 6.000000000054e-7*t19849*t38223 + t29295*t38251 + t29833*t38275 + t30456*t38290 - 0.3*(t31048*t38251 + t31086*t38275 + t31125*t38290) + 0.100001*(t31456*t38251 + t31048*t38275 + t31213*t38290) + 0.2*(-1.*t31213*t38251 - 1.*t31125*t38275 - 1.*t31276*t38290);
  p_output1[8]=t1570*t26138*t26392*t38208 - 6.000000000054e-7*t1570*t19849*t27907*t38208 + 0.2000000000018*t26728*t3816*t38208 + t29295*t39091 + t29833*t40251 + t30456*t41279 - 0.3*(t31048*t39091 + t31086*t40251 + t31125*t41279) + 0.100001*(t31456*t39091 + t31048*t40251 + t31213*t41279) + 0.2*(-1.*t31213*t39091 - 1.*t31125*t40251 - 1.*t31276*t41279);
  p_output1[9]=6.000000000054e-7*t19849*t41708 + t26138*t41908 + t29295*t42434 + t29833*t42901 + t30456*t43226 - 0.3*(t31048*t42434 + t31086*t42901 + t31125*t43226) + 0.100001*(t31456*t42434 + t31048*t42901 + t31213*t43226) + 0.2*(-1.*t31213*t42434 - 1.*t31125*t42901 - 1.*t31276*t43226);
  p_output1[10]=6.000000000054e-7*t3816*t41908 - 0.2000000000018*t1570*t38208*t4285 - 0.2000000000018*t3816*t43819 + t30456*t43992 + t29295*t44066 + t29833*t44175 + 0.100001*(t31213*t43992 + t31456*t44066 + t31048*t44175) - 0.3*(t31125*t43992 + t31048*t44066 + t31086*t44175) + 0.2*(-1.*t31276*t43992 - 1.*t31213*t44066 - 1.*t31125*t44175);
  p_output1[11]=t37394*t44638 + t37715*t44645 + t37806*t44649 - 0.3*(t38149*t44638 + t38181*t44645 - 1.000000000009*t28990*t44649) + 0.100001*(-1.8e-11*t28990*t44638 + t38149*t44645 + t38097*t44649) + 0.2*(-1.*t38097*t44638 + 1.000000000009*t28990*t44645 - 1.*t38113*t44649);
  p_output1[12]=-1.;
  p_output1[13]=1.;
  p_output1[14]=-0.2000000000018*t1570*t3816*t38208 + 6.000000000054e-7*t19849*t41908 + t26138*t43819 + t29295*t44638 + t29833*t44645 + t30456*t44649 - 0.3*(t31048*t44638 + t31086*t44645 + t31125*t44649) + 0.100001*(t31456*t44638 + t31048*t44645 + t31213*t44649) + 0.2*(-1.*t31213*t44638 - 1.*t31125*t44645 - 1.*t31276*t44649);
  p_output1[15]=-1.*t1570*t26138*t26392*t38205 + 6.000000000054e-7*t1570*t19849*t27907*t38205 - 0.2000000000018*t26728*t3816*t38205 + t29295*t44853 + t29833*t44859 + t30456*t44865 - 0.3*(t31048*t44853 + t31086*t44859 + t31125*t44865) + 0.100001*(t31456*t44853 + t31048*t44859 + t31213*t44865) + 0.2*(-1.*t31213*t44853 - 1.*t31125*t44859 - 1.*t31276*t44865);
  p_output1[16]=6.000000000054e-7*t19849*t38211 + t26138*t44904 + t29295*t44911 + t29833*t44914 + t30456*t44927 - 0.3*(t31048*t44911 + t31086*t44914 + t31125*t44927) + 0.100001*(t31456*t44911 + t31048*t44914 + t31213*t44927) + 0.2*(-1.*t31213*t44911 - 1.*t31125*t44914 - 1.*t31276*t44927);
  p_output1[17]=0.2000000000018*t1570*t38205*t4285 + 6.000000000054e-7*t3816*t44904 - 0.2000000000018*t3816*t45027 + t30456*t45065 + t29295*t45223 + t29833*t45346 + 0.100001*(t31213*t45065 + t31456*t45223 + t31048*t45346) - 0.3*(t31125*t45065 + t31048*t45223 + t31086*t45346) + 0.2*(-1.*t31276*t45065 - 1.*t31213*t45223 - 1.*t31125*t45346);
  p_output1[18]=t37394*t46555 + t37715*t47165 + t37806*t47206 - 0.3*(t38149*t46555 + t38181*t47165 - 1.000000000009*t28990*t47206) + 0.100001*(-1.8e-11*t28990*t46555 + t38149*t47165 + t38097*t47206) + 0.2*(-1.*t38097*t46555 + 1.000000000009*t28990*t47165 - 1.*t38113*t47206);
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

#include "J_h_LeftBackFoot_BackStance.hh"

namespace BackStance
{

void J_h_LeftBackFoot_BackStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
