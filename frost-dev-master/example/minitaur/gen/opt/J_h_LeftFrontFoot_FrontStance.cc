/*
 * Automatically Generated from Mathematica.
 * Wed 29 May 2019 15:05:32 GMT-04:00
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
  double t335;
  double t350;
  double t367;
  double t531;
  double t260;
  double t782;
  double t813;
  double t844;
  double t11967;
  double t11971;
  double t11976;
  double t11988;
  double t11995;
  double t11996;
  double t12173;
  double t11220;
  double t11397;
  double t11398;
  double t11533;
  double t11991;
  double t12700;
  double t12701;
  double t12869;
  double t12870;
  double t12899;
  double t12900;
  double t13052;
  double t12903;
  double t12967;
  double t12968;
  double t13018;
  double t13022;
  double t13023;
  double t13040;
  double t13053;
  double t11669;
  double t12904;
  double t11986;
  double t12941;
  double t12942;
  double t13060;
  double t13045;
  double t11983;
  double t11993;
  double t11994;
  double t12422;
  double t12423;
  double t12901;
  double t12902;
  double t12905;
  double t12925;
  double t12939;
  double t13104;
  double t13105;
  double t13106;
  double t13046;
  double t13108;
  double t13109;
  double t13110;
  double t13057;
  double t13058;
  double t13299;
  double t13352;
  double t13538;
  double t13065;
  double t13066;
  double t13067;
  double t13068;
  double t13072;
  double t13077;
  double t14628;
  double t14629;
  double t14661;
  double t14989;
  double t14411;
  double t14412;
  double t14413;
  double t14414;
  double t15390;
  double t15409;
  double t15650;
  double t15839;
  double t19485;
  double t21093;
  double t21097;
  double t21099;
  double t22371;
  double t24025;
  double t24033;
  double t24038;
  double t21579;
  double t21585;
  double t17967;
  double t18058;
  double t19447;
  double t19464;
  double t24262;
  double t24349;
  double t24229;
  double t24436;
  double t24414;
  double t24434;
  double t24438;
  double t24442;
  double t24513;
  double t24584;
  double t24590;
  double t24718;
  double t24732;
  double t24735;
  double t24740;
  double t24780;
  double t24783;
  double t24798;
  double t24801;
  double t24809;
  double t24821;
  double t24829;
  double t25048;
  double t25298;
  double t25304;
  double t25311;
  double t25313;
  double t25322;
  double t25324;
  double t25326;
  double t25329;
  double t25339;
  double t25347;
  double t25371;
  double t25373;
  double t26186;
  double t26252;
  double t26253;
  double t26287;
  double t26397;
  double t26402;
  double t26419;
  double t26421;
  double t26425;
  double t26472;
  double t26473;
  double t26479;
  double t27400;
  double t27401;
  double t27402;
  double t28834;
  double t28835;
  double t28836;
  double t28912;
  double t28929;
  double t28940;
  double t28941;
  double t28850;
  double t28851;
  double t28890;
  double t28891;
  double t28996;
  double t29010;
  double t29066;
  double t29067;
  double t21095;
  double t21160;
  double t21162;
  double t21164;
  double t21812;
  double t23194;
  double t23212;
  double t23673;
  double t23676;
  double t24044;
  double t24048;
  double t24083;
  double t24108;
  double t24124;
  double t29183;
  double t29184;
  double t24358;
  double t29159;
  double t29160;
  double t29161;
  double t29162;
  double t29188;
  double t29190;
  double t29194;
  double t24370;
  double t29301;
  double t29302;
  double t29303;
  double t29304;
  double t29306;
  double t29307;
  double t29308;
  double t29309;
  double t29312;
  double t29313;
  double t29314;
  double t29315;
  double t29334;
  double t29336;
  double t29338;
  double t29340;
  double t29341;
  double t29343;
  double t29344;
  double t29345;
  double t29348;
  double t29349;
  double t29350;
  double t29369;
  double t29370;
  double t29371;
  double t29379;
  double t29380;
  double t29381;
  double t29382;
  double t29374;
  double t29375;
  double t29376;
  double t29377;
  double t29386;
  double t29387;
  double t29388;
  double t29389;
  double t29416;
  double t29417;
  double t29418;
  double t29413;
  double t29414;
  double t29408;
  double t29409;
  double t29410;
  double t29411;
  t335 = Cos(var1[6]);
  t350 = -1.*t335;
  t367 = 1. + t350;
  t531 = Sin(var1[4]);
  t260 = Cos(var1[5]);
  t782 = Sin(var1[5]);
  t813 = Cos(var1[4]);
  t844 = Sin(var1[6]);
  t11967 = Cos(var1[8]);
  t11971 = -1.*t11967;
  t11976 = 1. + t11971;
  t11988 = Sin(var1[8]);
  t11995 = -3.e-6*t11976;
  t11996 = 3.e-6*t11988;
  t12173 = t11995 + t11996;
  t11220 = -1.*t260*t335*t531;
  t11397 = 3.e-6*t367*t531*t782;
  t11398 = t813*t844;
  t11533 = t11220 + t11397 + t11398;
  t11991 = -1.*t11988;
  t12700 = -3.e-6*t260*t367*t531;
  t12701 = -9.e-12*t367;
  t12869 = 1. + t12701;
  t12870 = t12869*t531*t782;
  t12899 = -3.e-6*t813*t844;
  t12900 = t12700 + t12870 + t12899;
  t13052 = 3.e-6*t11976;
  t12903 = -3.e-6*t11988;
  t12967 = -1.000000000009*t367;
  t12968 = 1. + t12967;
  t13018 = t813*t12968;
  t13022 = t260*t531*t844;
  t13023 = 3.e-6*t531*t782*t844;
  t13040 = t13018 + t13022 + t13023;
  t13053 = t13052 + t11996;
  t11669 = 9.e-13*var1[8];
  t12904 = t11995 + t12903;
  t11986 = -9.e-12*t11976;
  t12941 = -1.000000000009*t11976;
  t12942 = 1. + t12941;
  t13060 = t13052 + t12903;
  t13045 = 9.e-12*t11976;
  t11983 = 0.2000000000018*t11976;
  t11993 = t11986 + t11991;
  t11994 = 0.1*t11993;
  t12422 = -9.e-7*t12173;
  t12423 = t11669 + t11983 + t11994 + t12422;
  t12901 = 3.e-7*var1[8];
  t12902 = -1.62e-17*t11976;
  t12905 = 0.2*t12904;
  t12925 = 0.1*t12173;
  t12939 = t12901 + t12902 + t12905 + t12925;
  t13104 = -3.e-6*t813*t260*t367;
  t13105 = -1.*t813*t335*t782;
  t13106 = t13104 + t13105;
  t13046 = t13045 + t11991;
  t13108 = -1.*t813*t260*t12869;
  t13109 = -3.e-6*t813*t367*t782;
  t13110 = t13108 + t13109;
  t13057 = -1.8e-11*t11976;
  t13058 = 1. + t13057;
  t13299 = -3.e-6*t813*t260*t844;
  t13352 = t813*t782*t844;
  t13538 = t13299 + t13352;
  t13065 = 0.1000000000009*t11976;
  t13066 = -9.e-7*t12904;
  t13067 = t11986 + t11988;
  t13068 = 0.2*t13067;
  t13072 = t11669 + t13065 + t13066 + t13068;
  t13077 = t13045 + t11988;
  t14628 = -3.e-6*t335*t531;
  t14629 = 3.e-6*t813*t260*t844;
  t14661 = 9.e-12*t813*t782*t844;
  t14989 = t14628 + t14629 + t14661;
  t14411 = t335*t531;
  t14412 = -1.*t813*t260*t844;
  t14413 = -3.e-6*t813*t782*t844;
  t14414 = t14411 + t14412 + t14413;
  t15390 = -1.*t813*t260*t335;
  t15409 = -3.e-6*t813*t335*t782;
  t15650 = -1.000000000009*t531*t844;
  t15839 = t15390 + t15409 + t15650;
  t19485 = -3.e-6*t11967;
  t21093 = t19485 + t12903;
  t21097 = 3.e-6*t11967;
  t21099 = t21097 + t12903;
  t22371 = -9.e-12*t11988;
  t24025 = t813*t260*t335;
  t24033 = t531*t844;
  t24038 = t24025 + t13109 + t24033;
  t21579 = t12968*t531;
  t21585 = t21579 + t14412 + t14413;
  t17967 = 3.e-6*t813*t260*t367;
  t18058 = -1.*t813*t12869*t782;
  t19447 = -3.e-6*t531*t844;
  t19464 = t17967 + t18058 + t19447;
  t24262 = t21097 + t11996;
  t24349 = 9.e-12*t11988;
  t24229 = t19485 + t11996;
  t24436 = Sin(var1[3]);
  t24414 = Cos(var1[3]);
  t24434 = t24414*t260*t531;
  t24438 = -1.*t24436*t782;
  t24442 = t24434 + t24438;
  t24513 = -1.*t260*t24436;
  t24584 = -1.*t24414*t531*t782;
  t24590 = t24513 + t24584;
  t24718 = t335*t24442;
  t24732 = 3.e-6*t367*t24590;
  t24735 = -1.*t24414*t813*t844;
  t24740 = t24718 + t24732 + t24735;
  t24780 = 3.e-6*t367*t24442;
  t24783 = t12869*t24590;
  t24798 = 3.e-6*t24414*t813*t844;
  t24801 = t24780 + t24783 + t24798;
  t24809 = -1.*t24414*t813*t12968;
  t24821 = -1.*t24442*t844;
  t24829 = 3.e-6*t24590*t844;
  t25048 = t24809 + t24821 + t24829;
  t25298 = t813*t260*t335*t24436;
  t25304 = -3.e-6*t813*t367*t24436*t782;
  t25311 = t24436*t531*t844;
  t25313 = t25298 + t25304 + t25311;
  t25322 = 3.e-6*t813*t260*t367*t24436;
  t25324 = -1.*t813*t12869*t24436*t782;
  t25326 = -3.e-6*t24436*t531*t844;
  t25329 = t25322 + t25324 + t25326;
  t25339 = t12968*t24436*t531;
  t25347 = -1.*t813*t260*t24436*t844;
  t25371 = -3.e-6*t813*t24436*t782*t844;
  t25373 = t25339 + t25347 + t25371;
  t26186 = -1.*t260*t24436*t531;
  t26252 = -1.*t24414*t782;
  t26253 = t26186 + t26252;
  t26287 = t24414*t260;
  t26397 = -1.*t24436*t531*t782;
  t26402 = t26287 + t26397;
  t26419 = 3.e-6*t367*t26253;
  t26421 = t335*t26402;
  t26425 = t26419 + t26421;
  t26472 = t12869*t26253;
  t26473 = 3.e-6*t367*t26402;
  t26479 = t26472 + t26473;
  t27400 = 3.e-6*t26253*t844;
  t27401 = -1.*t26402*t844;
  t27402 = t27400 + t27401;
  t28834 = t260*t24436*t531;
  t28835 = t24414*t782;
  t28836 = t28834 + t28835;
  t28912 = 3.e-6*t813*t335*t24436;
  t28929 = 3.e-6*t28836*t844;
  t28940 = -9.e-12*t26402*t844;
  t28941 = t28912 + t28929 + t28940;
  t28850 = -1.*t813*t335*t24436;
  t28851 = -1.*t28836*t844;
  t28890 = 3.e-6*t26402*t844;
  t28891 = t28850 + t28851 + t28890;
  t28996 = -1.*t335*t28836;
  t29010 = 3.e-6*t335*t26402;
  t29066 = 1.000000000009*t813*t24436*t844;
  t29067 = t28996 + t29010 + t29066;
  t21095 = 0.2*t21093;
  t21160 = 0.1*t21099;
  t21162 = -1.62e-17*t11988;
  t21164 = 3.e-7 + t21095 + t21160 + t21162;
  t21812 = -9.e-7*t21093;
  t23194 = t11967 + t22371;
  t23212 = 0.2*t23194;
  t23673 = 0.1000000000009*t11988;
  t23676 = 9.e-13 + t21812 + t23212 + t23673;
  t24044 = -9.e-7*t21099;
  t24048 = t11971 + t22371;
  t24083 = 0.1*t24048;
  t24108 = 0.2000000000018*t11988;
  t24124 = 9.e-13 + t24044 + t24083 + t24108;
  t29183 = -1.*t813*t12968*t24436;
  t29184 = t29183 + t28851 + t28890;
  t24358 = t11971 + t24349;
  t29159 = 3.e-6*t367*t28836;
  t29160 = t12869*t26402;
  t29161 = 3.e-6*t813*t24436*t844;
  t29162 = t29159 + t29160 + t29161;
  t29188 = t335*t28836;
  t29190 = -1.*t813*t24436*t844;
  t29194 = t29188 + t26473 + t29190;
  t24370 = t11967 + t24349;
  t29301 = -1.*t24414*t813*t260*t335;
  t29302 = 3.e-6*t24414*t813*t367*t782;
  t29303 = -1.*t24414*t531*t844;
  t29304 = t29301 + t29302 + t29303;
  t29306 = -3.e-6*t24414*t813*t260*t367;
  t29307 = t24414*t813*t12869*t782;
  t29308 = 3.e-6*t24414*t531*t844;
  t29309 = t29306 + t29307 + t29308;
  t29312 = -1.*t24414*t12968*t531;
  t29313 = t24414*t813*t260*t844;
  t29314 = 3.e-6*t24414*t813*t782*t844;
  t29315 = t29312 + t29313 + t29314;
  t29334 = t260*t24436;
  t29336 = t24414*t531*t782;
  t29338 = t29334 + t29336;
  t29340 = t335*t29338;
  t29341 = t24780 + t29340;
  t29343 = t12869*t24442;
  t29344 = 3.e-6*t367*t29338;
  t29345 = t29343 + t29344;
  t29348 = 3.e-6*t24442*t844;
  t29349 = -1.*t29338*t844;
  t29350 = t29348 + t29349;
  t29369 = -1.*t24414*t260*t531;
  t29370 = t24436*t782;
  t29371 = t29369 + t29370;
  t29379 = -3.e-6*t24414*t813*t335;
  t29380 = 3.e-6*t29371*t844;
  t29381 = -9.e-12*t29338*t844;
  t29382 = t29379 + t29380 + t29381;
  t29374 = t24414*t813*t335;
  t29375 = -1.*t29371*t844;
  t29376 = 3.e-6*t29338*t844;
  t29377 = t29374 + t29375 + t29376;
  t29386 = -1.*t335*t29371;
  t29387 = 3.e-6*t335*t29338;
  t29388 = -1.000000000009*t24414*t813*t844;
  t29389 = t29386 + t29387 + t29388;
  t29416 = t335*t29371;
  t29417 = t24414*t813*t844;
  t29418 = t29416 + t29344 + t29417;
  t29413 = t24414*t813*t12968;
  t29414 = t29413 + t29375 + t29376;
  t29408 = 3.e-6*t367*t29371;
  t29409 = t12869*t29338;
  t29410 = -3.e-6*t24414*t813*t844;
  t29411 = t29408 + t29409 + t29410;
  p_output1[0]=1.;
  p_output1[1]=t11533*t12423 + t12900*t12939 + 0.2*(t11533*t12942 + t13040*t13046 + t12900*t13053) + 0.100001*(t13040*t13053 + t12900*t13058 + t11533*t13060) + t13040*t13072 - 0.3*(t12942*t13040 + t12900*t13060 + t11533*t13077) - 0.2000000000018*t260*t367*t531 - 6.000000000054e-7*t367*t531*t782 - 0.2000000000018*t813*t844;
  p_output1[2]=t12423*t13106 + t12939*t13110 + t13072*t13538 - 0.3*(t13077*t13106 + t13060*t13110 + t12942*t13538) + 0.2*(t12942*t13106 + t13053*t13110 + t13046*t13538) + 0.100001*(t13060*t13106 + t13058*t13110 + t13053*t13538) + 6.000000000054e-7*t260*t367*t813 - 0.2000000000018*t367*t782*t813;
  p_output1[3]=t12423*t14414 + t12939*t14989 + t13072*t15839 - 0.3*(t13077*t14414 + t13060*t14989 + t12942*t15839) + 0.2*(t12942*t14414 + t13053*t14989 + t13046*t15839) + 0.100001*(t13060*t14414 + t13058*t14989 + t13053*t15839) - 0.2000000000018*t335*t531 + 0.2000000000018*t260*t813*t844 + 6.000000000054e-7*t782*t813*t844;
  p_output1[4]=t19464*t21164 + t21585*t23676 + t24038*t24124 + 0.100001*(-1.8e-11*t11988*t19464 + t24038*t24229 + t21585*t24262) + 0.2*(-1.000000000009*t11988*t24038 + t19464*t24262 + t21585*t24358) - 0.3*(-1.000000000009*t11988*t21585 + t19464*t24229 + t24038*t24370);
  p_output1[5]=-1.;
  p_output1[6]=1.;
  p_output1[7]=t12423*t24740 + t12939*t24801 + t13072*t25048 - 0.3*(t13077*t24740 + t13060*t24801 + t12942*t25048) + 0.2*(t12942*t24740 + t13053*t24801 + t13046*t25048) + 0.100001*(t13060*t24740 + t13058*t24801 + t13053*t25048) + 0.2000000000018*t24442*t367 - 6.000000000054e-7*t24590*t367 + 0.2000000000018*t24414*t813*t844;
  p_output1[8]=t12423*t25313 + t12939*t25329 + t13072*t25373 - 0.3*(t13077*t25313 + t13060*t25329 + t12942*t25373) + 0.2*(t12942*t25313 + t13053*t25329 + t13046*t25373) + 0.100001*(t13060*t25313 + t13058*t25329 + t13053*t25373) + 0.2000000000018*t24436*t260*t367*t813 + 6.000000000054e-7*t24436*t367*t782*t813 - 0.2000000000018*t24436*t531*t844;
  p_output1[9]=t12423*t26425 + t12939*t26479 + t13072*t27402 - 0.3*(t13077*t26425 + t13060*t26479 + t12942*t27402) + 0.2*(t12942*t26425 + t13053*t26479 + t13046*t27402) + 0.100001*(t13060*t26425 + t13058*t26479 + t13053*t27402) - 6.000000000054e-7*t26253*t367 + 0.2000000000018*t26402*t367;
  p_output1[10]=t12423*t28891 + t12939*t28941 + t13072*t29067 - 0.3*(t13077*t28891 + t13060*t28941 + t12942*t29067) + 0.2*(t12942*t28891 + t13053*t28941 + t13046*t29067) + 0.100001*(t13060*t28891 + t13058*t28941 + t13053*t29067) + 0.2000000000018*t24436*t335*t813 - 6.000000000054e-7*t26402*t844 + 0.2000000000018*t28836*t844;
  p_output1[11]=t21164*t29162 + t23676*t29184 + t24124*t29194 + 0.2*(t24262*t29162 + t24358*t29184 - 1.000000000009*t11988*t29194) + 0.100001*(-1.8e-11*t11988*t29162 + t24262*t29184 + t24229*t29194) - 0.3*(t24229*t29162 - 1.000000000009*t11988*t29184 + t24370*t29194);
  p_output1[12]=-1.;
  p_output1[13]=1.;
  p_output1[14]=t12939*t29162 + t13072*t29184 + t12423*t29194 + 0.2*(t13053*t29162 + t13046*t29184 + t12942*t29194) + 0.100001*(t13058*t29162 + t13053*t29184 + t13060*t29194) - 0.3*(t13060*t29162 + t12942*t29184 + t13077*t29194) - 6.000000000054e-7*t26402*t367 + 0.2000000000018*t28836*t367 + 0.2000000000018*t24436*t813*t844;
  p_output1[15]=t12423*t29304 + t12939*t29309 + t13072*t29315 - 0.3*(t13077*t29304 + t13060*t29309 + t12942*t29315) + 0.2*(t12942*t29304 + t13053*t29309 + t13046*t29315) + 0.100001*(t13060*t29304 + t13058*t29309 + t13053*t29315) - 0.2000000000018*t24414*t260*t367*t813 - 6.000000000054e-7*t24414*t367*t782*t813 + 0.2000000000018*t24414*t531*t844;
  p_output1[16]=t12423*t29341 + t12939*t29345 + t13072*t29350 - 0.3*(t13077*t29341 + t13060*t29345 + t12942*t29350) + 0.2*(t12942*t29341 + t13053*t29345 + t13046*t29350) + 0.100001*(t13060*t29341 + t13058*t29345 + t13053*t29350) - 6.000000000054e-7*t24442*t367 + 0.2000000000018*t29338*t367;
  p_output1[17]=t12423*t29377 + t12939*t29382 + t13072*t29389 - 0.3*(t13077*t29377 + t13060*t29382 + t12942*t29389) + 0.2*(t12942*t29377 + t13053*t29382 + t13046*t29389) + 0.100001*(t13060*t29377 + t13058*t29382 + t13053*t29389) - 0.2000000000018*t24414*t335*t813 - 6.000000000054e-7*t29338*t844 + 0.2000000000018*t29371*t844;
  p_output1[18]=t21164*t29411 + t23676*t29414 + t24124*t29418 + 0.2*(t24262*t29411 + t24358*t29414 - 1.000000000009*t11988*t29418) + 0.100001*(-1.8e-11*t11988*t29411 + t24262*t29414 + t24229*t29418) - 0.3*(t24229*t29411 - 1.000000000009*t11988*t29414 + t24370*t29418);
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

#include "J_h_LeftFrontFoot_FrontStance.hh"

namespace FrontStance
{

void J_h_LeftFrontFoot_FrontStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
