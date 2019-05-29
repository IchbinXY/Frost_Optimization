/*
 * Automatically Generated from Mathematica.
 * Tue 28 May 2019 22:30:02 GMT-04:00
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
  double t451;
  double t660;
  double t729;
  double t844;
  double t891;
  double t892;
  double t902;
  double t912;
  double t916;
  double t276;
  double t390;
  double t818;
  double t876;
  double t921;
  double t932;
  double t1076;
  double t917;
  double t918;
  double t1081;
  double t991;
  double t1003;
  double t1024;
  double t1055;
  double t1070;
  double t1074;
  double t1260;
  double t1264;
  double t1270;
  double t1271;
  double t1439;
  double t1515;
  double t1561;
  double t1574;
  double t1577;
  double t1578;
  double t1580;
  double t1599;
  double t1618;
  double t1583;
  double t1102;
  double t1581;
  double t1628;
  double t886;
  double t911;
  double t920;
  double t957;
  double t963;
  double t1077;
  double t1107;
  double t1111;
  double t1176;
  double t1246;
  double t1285;
  double t1287;
  double t1317;
  double t1392;
  double t1403;
  double t1699;
  double t1708;
  double t1720;
  double t1584;
  double t1765;
  double t1766;
  double t1767;
  double t1778;
  double t1780;
  double t1782;
  double t1638;
  double t1653;
  double t1657;
  double t1940;
  double t1956;
  double t1960;
  double t1961;
  double t1964;
  double t1965;
  double t1967;
  double t1969;
  double t1977;
  double t1978;
  double t1979;
  double t1981;
  double t2045;
  double t2046;
  double t2037;
  double t2038;
  double t2122;
  double t2113;
  double t2117;
  double t2118;
  double t2119;
  double t2128;
  double t2138;
  double t2148;
  double t2156;
  double t2157;
  double t2160;
  double t2210;
  double t2165;
  double t2243;
  double t2249;
  double t2246;
  double t2275;
  double t2276;
  double t2298;
  double t2300;
  double t2301;
  double t2306;
  double t2311;
  double t2313;
  double t2319;
  double t2321;
  double t2350;
  double t2374;
  double t2377;
  double t2389;
  double t2399;
  double t2409;
  double t2411;
  double t2482;
  double t2485;
  double t2486;
  double t2495;
  double t2498;
  double t2506;
  double t2509;
  double t2511;
  double t2514;
  double t2529;
  double t2570;
  double t2587;
  double t2656;
  double t2657;
  double t2659;
  double t2664;
  double t2670;
  double t2672;
  double t2678;
  double t2681;
  double t2682;
  double t2685;
  double t2686;
  double t2688;
  double t2691;
  double t2693;
  double t2697;
  double t3020;
  double t3024;
  double t3025;
  double t3042;
  double t3044;
  double t3045;
  double t3048;
  double t3081;
  double t3092;
  double t3110;
  double t3120;
  double t3124;
  double t3129;
  double t3132;
  double t3133;
  double t2040;
  double t2055;
  double t2079;
  double t2085;
  double t2121;
  double t2123;
  double t2124;
  double t2125;
  double t2126;
  double t2150;
  double t2151;
  double t2152;
  double t2153;
  double t2154;
  double t3250;
  double t3272;
  double t3287;
  double t3288;
  double t3293;
  double t3303;
  double t3306;
  double t2168;
  double t3309;
  double t3311;
  double t2221;
  double t5113;
  double t5136;
  double t5141;
  double t5249;
  double t5283;
  double t5400;
  double t5406;
  double t5412;
  double t5469;
  double t5470;
  double t5472;
  double t5474;
  double t5541;
  double t5542;
  double t5543;
  double t5545;
  double t5547;
  double t5548;
  double t5568;
  double t5569;
  double t5693;
  double t5694;
  double t5695;
  double t6216;
  double t6217;
  double t6218;
  double t6221;
  double t6222;
  double t6230;
  double t6235;
  double t6241;
  double t6242;
  double t6243;
  double t6244;
  double t6249;
  double t6250;
  double t6251;
  double t6252;
  double t6285;
  double t6286;
  double t6287;
  double t6288;
  double t6290;
  double t6291;
  double t6292;
  double t6297;
  double t6299;
  t451 = Cos(var1[15]);
  t660 = -1.*t451;
  t729 = 1. + t660;
  t844 = Sin(var1[4]);
  t891 = Cos(var1[17]);
  t892 = -1.*t891;
  t902 = 1. + t892;
  t912 = -3.e-6*t902;
  t916 = Sin(var1[17]);
  t276 = Cos(var1[4]);
  t390 = Sin(var1[15]);
  t818 = Cos(var1[5]);
  t876 = Sin(var1[5]);
  t921 = 3.e-6*t916;
  t932 = t912 + t921;
  t1076 = 9.e-13*var1[17];
  t917 = -3.e-6*t916;
  t918 = t912 + t917;
  t1081 = -9.e-12*t902;
  t991 = -3.e-6*t276*t390;
  t1003 = -3.e-6*t729*t818*t844;
  t1024 = -9.e-12*t729;
  t1055 = 1. + t1024;
  t1070 = t1055*t844*t876;
  t1074 = t991 + t1003 + t1070;
  t1260 = t276*t390;
  t1264 = -1.*t451*t818*t844;
  t1270 = 3.e-6*t729*t844*t876;
  t1271 = t1260 + t1264 + t1270;
  t1439 = -1.000000000009*t729;
  t1515 = 1. + t1439;
  t1561 = t1515*t276;
  t1574 = t818*t390*t844;
  t1577 = 3.e-6*t390*t844*t876;
  t1578 = t1561 + t1574 + t1577;
  t1580 = 3.e-6*t902;
  t1599 = -1.000000000009*t902;
  t1618 = 1. + t1599;
  t1583 = 9.e-12*t902;
  t1102 = -1.*t916;
  t1581 = t1580 + t917;
  t1628 = t1580 + t921;
  t886 = 3.e-7*var1[17];
  t911 = -1.62e-17*t902;
  t920 = 0.2*t918;
  t957 = 0.1*t932;
  t963 = t886 + t911 + t920 + t957;
  t1077 = 0.2000000000018*t902;
  t1107 = t1081 + t1102;
  t1111 = 0.1*t1107;
  t1176 = -9.e-7*t932;
  t1246 = t1076 + t1077 + t1111 + t1176;
  t1285 = 0.1000000000009*t902;
  t1287 = -9.e-7*t918;
  t1317 = t1081 + t916;
  t1392 = 0.2*t1317;
  t1403 = t1076 + t1285 + t1287 + t1392;
  t1699 = -1.*t1055*t276*t818;
  t1708 = -3.e-6*t729*t276*t876;
  t1720 = t1699 + t1708;
  t1584 = t1583 + t916;
  t1765 = -3.e-6*t729*t276*t818;
  t1766 = -1.*t451*t276*t876;
  t1767 = t1765 + t1766;
  t1778 = -3.e-6*t276*t818*t390;
  t1780 = t276*t390*t876;
  t1782 = t1778 + t1780;
  t1638 = t1583 + t1102;
  t1653 = -1.8e-11*t902;
  t1657 = 1. + t1653;
  t1940 = -1.*t451*t276*t818;
  t1956 = -1.000000000009*t390*t844;
  t1960 = -3.e-6*t451*t276*t876;
  t1961 = t1940 + t1956 + t1960;
  t1964 = -1.*t276*t818*t390;
  t1965 = t451*t844;
  t1967 = -3.e-6*t276*t390*t876;
  t1969 = t1964 + t1965 + t1967;
  t1977 = 3.e-6*t276*t818*t390;
  t1978 = -3.e-6*t451*t844;
  t1979 = 9.e-12*t276*t390*t876;
  t1981 = t1977 + t1978 + t1979;
  t2045 = 3.e-6*t891;
  t2046 = t2045 + t917;
  t2037 = -3.e-6*t891;
  t2038 = t2037 + t917;
  t2122 = -9.e-12*t916;
  t2113 = 3.e-6*t729*t276*t818;
  t2117 = -3.e-6*t390*t844;
  t2118 = -1.*t1055*t276*t876;
  t2119 = t2113 + t2117 + t2118;
  t2128 = t451*t276*t818;
  t2138 = t390*t844;
  t2148 = t2128 + t2138 + t1708;
  t2156 = t1515*t844;
  t2157 = t1964 + t2156 + t1967;
  t2160 = t2045 + t921;
  t2210 = t2037 + t921;
  t2165 = 9.e-12*t916;
  t2243 = Cos(var1[3]);
  t2249 = Sin(var1[3]);
  t2246 = t2243*t818*t844;
  t2275 = -1.*t2249*t876;
  t2276 = t2246 + t2275;
  t2298 = -1.*t818*t2249;
  t2300 = -1.*t2243*t844*t876;
  t2301 = t2298 + t2300;
  t2306 = 3.e-6*t2243*t276*t390;
  t2311 = 3.e-6*t729*t2276;
  t2313 = t1055*t2301;
  t2319 = t2306 + t2311 + t2313;
  t2321 = -1.*t2243*t276*t390;
  t2350 = t451*t2276;
  t2374 = 3.e-6*t729*t2301;
  t2377 = t2321 + t2350 + t2374;
  t2389 = -1.*t1515*t2243*t276;
  t2399 = -1.*t390*t2276;
  t2409 = 3.e-6*t390*t2301;
  t2411 = t2389 + t2399 + t2409;
  t2482 = 3.e-6*t729*t276*t818*t2249;
  t2485 = -3.e-6*t390*t2249*t844;
  t2486 = -1.*t1055*t276*t2249*t876;
  t2495 = t2482 + t2485 + t2486;
  t2498 = t451*t276*t818*t2249;
  t2506 = t390*t2249*t844;
  t2509 = -3.e-6*t729*t276*t2249*t876;
  t2511 = t2498 + t2506 + t2509;
  t2514 = -1.*t276*t818*t390*t2249;
  t2529 = t1515*t2249*t844;
  t2570 = -3.e-6*t276*t390*t2249*t876;
  t2587 = t2514 + t2529 + t2570;
  t2656 = -1.*t818*t2249*t844;
  t2657 = -1.*t2243*t876;
  t2659 = t2656 + t2657;
  t2664 = t2243*t818;
  t2670 = -1.*t2249*t844*t876;
  t2672 = t2664 + t2670;
  t2678 = t1055*t2659;
  t2681 = 3.e-6*t729*t2672;
  t2682 = t2678 + t2681;
  t2685 = 3.e-6*t729*t2659;
  t2686 = t451*t2672;
  t2688 = t2685 + t2686;
  t2691 = 3.e-6*t390*t2659;
  t2693 = -1.*t390*t2672;
  t2697 = t2691 + t2693;
  t3020 = t818*t2249*t844;
  t3024 = t2243*t876;
  t3025 = t3020 + t3024;
  t3042 = 1.000000000009*t276*t390*t2249;
  t3044 = -1.*t451*t3025;
  t3045 = 3.e-6*t451*t2672;
  t3048 = t3042 + t3044 + t3045;
  t3081 = 3.e-6*t451*t276*t2249;
  t3092 = 3.e-6*t390*t3025;
  t3110 = -9.e-12*t390*t2672;
  t3120 = t3081 + t3092 + t3110;
  t3124 = -1.*t451*t276*t2249;
  t3129 = -1.*t390*t3025;
  t3132 = 3.e-6*t390*t2672;
  t3133 = t3124 + t3129 + t3132;
  t2040 = 0.2*t2038;
  t2055 = 0.1*t2046;
  t2079 = -1.62e-17*t916;
  t2085 = 3.e-7 + t2040 + t2055 + t2079;
  t2121 = -9.e-7*t2046;
  t2123 = t892 + t2122;
  t2124 = 0.1*t2123;
  t2125 = 0.2000000000018*t916;
  t2126 = 9.e-13 + t2121 + t2124 + t2125;
  t2150 = -9.e-7*t2038;
  t2151 = t891 + t2122;
  t2152 = 0.2*t2151;
  t2153 = 0.1000000000009*t916;
  t2154 = 9.e-13 + t2150 + t2152 + t2153;
  t3250 = 3.e-6*t276*t390*t2249;
  t3272 = 3.e-6*t729*t3025;
  t3287 = t1055*t2672;
  t3288 = t3250 + t3272 + t3287;
  t3293 = -1.*t276*t390*t2249;
  t3303 = t451*t3025;
  t3306 = t3293 + t3303 + t2681;
  t2168 = t892 + t2165;
  t3309 = -1.*t1515*t276*t2249;
  t3311 = t3309 + t3129 + t3132;
  t2221 = t891 + t2165;
  t5113 = -3.e-6*t729*t2243*t276*t818;
  t5136 = 3.e-6*t2243*t390*t844;
  t5141 = t1055*t2243*t276*t876;
  t5249 = t5113 + t5136 + t5141;
  t5283 = -1.*t451*t2243*t276*t818;
  t5400 = -1.*t2243*t390*t844;
  t5406 = 3.e-6*t729*t2243*t276*t876;
  t5412 = t5283 + t5400 + t5406;
  t5469 = t2243*t276*t818*t390;
  t5470 = -1.*t1515*t2243*t844;
  t5472 = 3.e-6*t2243*t276*t390*t876;
  t5474 = t5469 + t5470 + t5472;
  t5541 = t818*t2249;
  t5542 = t2243*t844*t876;
  t5543 = t5541 + t5542;
  t5545 = t1055*t2276;
  t5547 = 3.e-6*t729*t5543;
  t5548 = t5545 + t5547;
  t5568 = t451*t5543;
  t5569 = t2311 + t5568;
  t5693 = 3.e-6*t390*t2276;
  t5694 = -1.*t390*t5543;
  t5695 = t5693 + t5694;
  t6216 = -1.*t2243*t818*t844;
  t6217 = t2249*t876;
  t6218 = t6216 + t6217;
  t6221 = -1.000000000009*t2243*t276*t390;
  t6222 = -1.*t451*t6218;
  t6230 = 3.e-6*t451*t5543;
  t6235 = t6221 + t6222 + t6230;
  t6241 = -3.e-6*t451*t2243*t276;
  t6242 = 3.e-6*t390*t6218;
  t6243 = -9.e-12*t390*t5543;
  t6244 = t6241 + t6242 + t6243;
  t6249 = t451*t2243*t276;
  t6250 = -1.*t390*t6218;
  t6251 = 3.e-6*t390*t5543;
  t6252 = t6249 + t6250 + t6251;
  t6285 = -3.e-6*t2243*t276*t390;
  t6286 = 3.e-6*t729*t6218;
  t6287 = t1055*t5543;
  t6288 = t6285 + t6286 + t6287;
  t6290 = t2243*t276*t390;
  t6291 = t451*t6218;
  t6292 = t6290 + t6291 + t5547;
  t6297 = t1515*t2243*t276;
  t6299 = t6297 + t6250 + t6251;
  p_output1[0]=1.;
  p_output1[1]=t1246*t1271 + t1403*t1578 - 0.3*(t1074*t1581 + t1271*t1584 + t1578*t1618) + 0.2*(t1271*t1618 + t1074*t1628 + t1578*t1638) - 0.099999*(t1271*t1581 + t1578*t1628 + t1074*t1657) - 0.2000000000018*t276*t390 - 0.2000000000018*t729*t818*t844 - 6.000000000054e-7*t729*t844*t876 + t1074*t963;
  p_output1[2]=t1246*t1767 + t1403*t1782 - 0.3*(t1581*t1720 + t1584*t1767 + t1618*t1782) - 0.099999*(t1657*t1720 + t1581*t1767 + t1628*t1782) + 0.2*(t1628*t1720 + t1618*t1767 + t1638*t1782) + 6.000000000054e-7*t276*t729*t818 - 0.2000000000018*t276*t729*t876 + t1720*t963;
  p_output1[3]=t1403*t1961 + t1246*t1969 - 0.3*(t1618*t1961 + t1584*t1969 + t1581*t1981) + 0.2*(t1638*t1961 + t1618*t1969 + t1628*t1981) - 0.099999*(t1628*t1961 + t1581*t1969 + t1657*t1981) + 0.2000000000018*t276*t390*t818 - 0.2000000000018*t451*t844 + 6.000000000054e-7*t276*t390*t876 + t1981*t963;
  p_output1[4]=t2085*t2119 + t2126*t2148 + t2154*t2157 - 0.099999*(t2157*t2160 + t2148*t2210 - 1.8e-11*t2119*t916) + 0.2*(t2119*t2160 + t2157*t2168 - 1.000000000009*t2148*t916) - 0.3*(t2119*t2210 + t2148*t2221 - 1.000000000009*t2157*t916);
  p_output1[5]=-1.;
  p_output1[6]=1.;
  p_output1[7]=t1246*t2377 + t1403*t2411 - 0.3*(t1581*t2319 + t1584*t2377 + t1618*t2411) - 0.099999*(t1657*t2319 + t1581*t2377 + t1628*t2411) + 0.2*(t1628*t2319 + t1618*t2377 + t1638*t2411) + 0.2000000000018*t2243*t276*t390 + 0.2000000000018*t2276*t729 - 6.000000000054e-7*t2301*t729 + t2319*t963;
  p_output1[8]=t1246*t2511 + t1403*t2587 - 0.3*(t1581*t2495 + t1584*t2511 + t1618*t2587) - 0.099999*(t1657*t2495 + t1581*t2511 + t1628*t2587) + 0.2*(t1628*t2495 + t1618*t2511 + t1638*t2587) + 0.2000000000018*t2249*t276*t729*t818 - 0.2000000000018*t2249*t390*t844 + 6.000000000054e-7*t2249*t276*t729*t876 + t2495*t963;
  p_output1[9]=t1246*t2688 + t1403*t2697 - 0.3*(t1581*t2682 + t1584*t2688 + t1618*t2697) - 0.099999*(t1657*t2682 + t1581*t2688 + t1628*t2697) + 0.2*(t1628*t2682 + t1618*t2688 + t1638*t2697) - 6.000000000054e-7*t2659*t729 + 0.2000000000018*t2672*t729 + t2682*t963;
  p_output1[10]=t1403*t3048 + t1246*t3133 - 0.099999*(t1628*t3048 + t1657*t3120 + t1581*t3133) - 0.3*(t1618*t3048 + t1581*t3120 + t1584*t3133) + 0.2*(t1638*t3048 + t1628*t3120 + t1618*t3133) - 6.000000000054e-7*t2672*t390 + 0.2000000000018*t3025*t390 + 0.2000000000018*t2249*t276*t451 + t3120*t963;
  p_output1[11]=t2085*t3288 + t2126*t3306 + t2154*t3311 - 0.099999*(t2210*t3306 + t2160*t3311 - 1.8e-11*t3288*t916) + 0.2*(t2160*t3288 + t2168*t3311 - 1.000000000009*t3306*t916) - 0.3*(t2210*t3288 + t2221*t3306 - 1.000000000009*t3311*t916);
  p_output1[12]=-1.;
  p_output1[13]=1.;
  p_output1[14]=t1246*t3306 + t1403*t3311 - 0.3*(t1581*t3288 + t1584*t3306 + t1618*t3311) - 0.099999*(t1657*t3288 + t1581*t3306 + t1628*t3311) + 0.2*(t1628*t3288 + t1618*t3306 + t1638*t3311) + 0.2000000000018*t2249*t276*t390 - 6.000000000054e-7*t2672*t729 + 0.2000000000018*t3025*t729 + t3288*t963;
  p_output1[15]=t1246*t5412 + t1403*t5474 - 0.3*(t1581*t5249 + t1584*t5412 + t1618*t5474) - 0.099999*(t1657*t5249 + t1581*t5412 + t1628*t5474) + 0.2*(t1628*t5249 + t1618*t5412 + t1638*t5474) - 0.2000000000018*t2243*t276*t729*t818 + 0.2000000000018*t2243*t390*t844 - 6.000000000054e-7*t2243*t276*t729*t876 + t5249*t963;
  p_output1[16]=t1246*t5569 + t1403*t5695 - 0.3*(t1581*t5548 + t1584*t5569 + t1618*t5695) - 0.099999*(t1657*t5548 + t1581*t5569 + t1628*t5695) + 0.2*(t1628*t5548 + t1618*t5569 + t1638*t5695) - 6.000000000054e-7*t2276*t729 + 0.2000000000018*t5543*t729 + t5548*t963;
  p_output1[17]=-0.2000000000018*t2243*t276*t451 - 6.000000000054e-7*t390*t5543 + 0.2000000000018*t390*t6218 + t1403*t6235 + t1246*t6252 - 0.099999*(t1628*t6235 + t1657*t6244 + t1581*t6252) - 0.3*(t1618*t6235 + t1581*t6244 + t1584*t6252) + 0.2*(t1638*t6235 + t1628*t6244 + t1618*t6252) + t6244*t963;
  p_output1[18]=t2085*t6288 + t2126*t6292 + t2154*t6299 - 0.099999*(t2210*t6292 + t2160*t6299 - 1.8e-11*t6288*t916) + 0.2*(t2160*t6288 + t2168*t6299 - 1.000000000009*t6292*t916) - 0.3*(t2210*t6288 + t2221*t6292 - 1.000000000009*t6299*t916);
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
