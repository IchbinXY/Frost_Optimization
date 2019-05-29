/*
 * Automatically Generated from Mathematica.
 * Tue 28 May 2019 22:29:51 GMT-04:00
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
static void output1(double *p_output1,const double *var1,const double *var2,const double *var3,const double *var4)
{
  double t276;
  double t325;
  double t327;
  double t390;
  double t452;
  double t469;
  double t474;
  double t502;
  double t504;
  double t556;
  double t570;
  double t588;
  double t622;
  double t655;
  double t657;
  double t660;
  double t662;
  double t665;
  double t339;
  double t428;
  double t436;
  double t451;
  double t543;
  double t544;
  double t600;
  double t631;
  double t647;
  double t650;
  double t684;
  double t688;
  double t279;
  double t568;
  double t738;
  double t763;
  double t343;
  double t365;
  double t370;
  double t384;
  double t849;
  double t608;
  double t612;
  double t616;
  double t618;
  double t912;
  double t818;
  double t869;
  double t876;
  double t877;
  double t891;
  double t916;
  double t917;
  double t918;
  double t972;
  double t990;
  double t1004;
  double t1009;
  double t1016;
  double t1043;
  double t1063;
  double t1064;
  double t1065;
  double t1066;
  double t1069;
  double t1081;
  double t1102;
  double t1107;
  double t1260;
  double t1287;
  double t1308;
  double t1317;
  double t1319;
  double t1333;
  double t1017;
  double t1055;
  double t1059;
  double t1062;
  double t1075;
  double t1076;
  double t1110;
  double t1271;
  double t1275;
  double t1285;
  double t1376;
  double t1392;
  double t1007;
  double t1086;
  double t1444;
  double t1470;
  double t1018;
  double t1024;
  double t1028;
  double t1029;
  double t1582;
  double t1111;
  double t1176;
  double t1210;
  double t1246;
  double t1641;
  double t1577;
  double t1598;
  double t1599;
  double t1618;
  double t1625;
  double t1653;
  double t1657;
  double t1658;
  double t1707;
  double t1757;
  double t1778;
  double t1780;
  double t1782;
  double t1811;
  double t1882;
  double t1897;
  double t1898;
  double t1899;
  double t1903;
  double t1928;
  double t1932;
  double t1933;
  double t1960;
  double t1969;
  double t1972;
  double t1973;
  double t1974;
  double t1975;
  double t1788;
  double t1827;
  double t1836;
  double t1872;
  double t1924;
  double t1925;
  double t1934;
  double t1964;
  double t1965;
  double t1967;
  double t1979;
  double t1981;
  double t1779;
  double t1930;
  double t2007;
  double t2012;
  double t1791;
  double t1806;
  double t1807;
  double t1810;
  double t2113;
  double t1937;
  double t1940;
  double t1952;
  double t1956;
  double t2148;
  double t2045;
  double t2119;
  double t2120;
  double t2121;
  double t2124;
  double t2151;
  double t2152;
  double t2153;
  double t2167;
  double t2196;
  double t2212;
  double t2215;
  double t2217;
  double t2230;
  double t2246;
  double t2247;
  double t2249;
  double t2256;
  double t2268;
  double t2301;
  double t2303;
  double t2306;
  double t2320;
  double t2389;
  double t2398;
  double t2399;
  double t2400;
  double t2403;
  double t2218;
  double t2242;
  double t2243;
  double t2244;
  double t2297;
  double t2298;
  double t2307;
  double t2374;
  double t2377;
  double t2382;
  double t2412;
  double t2414;
  double t2213;
  double t2302;
  double t2464;
  double t2471;
  double t2219;
  double t2221;
  double t2225;
  double t2228;
  double t2509;
  double t2311;
  double t2313;
  double t2316;
  double t2319;
  double t2631;
  double t2486;
  double t2514;
  double t2529;
  double t2570;
  double t2606;
  double t2637;
  double t2642;
  double t2647;
  double t2660;
  double t2669;
  t276 = Cos(var1[14]);
  t325 = var1[14] + var1[16];
  t327 = Cos(t325);
  t390 = -0.1*var2[16]*t327;
  t452 = Sin(var1[14]);
  t469 = -0.05*t452;
  t474 = Sin(t325);
  t502 = -0.1*t474;
  t504 = t469 + t502;
  t556 = Cos(var1[15]);
  t570 = var1[15] + var1[17];
  t588 = Cos(t570);
  t622 = 0.1*var2[17]*t588;
  t655 = Sin(var1[15]);
  t657 = 0.05*t655;
  t660 = Sin(t570);
  t662 = 0.1*t660;
  t665 = t657 + t662;
  t339 = 0.1*t327;
  t428 = -0.1*var2[14]*t327;
  t436 = t428 + t390;
  t451 = var2[16]*t436;
  t543 = -0.1*var3[16]*t474;
  t544 = -0.1*var2[16]*t474;
  t600 = -0.1*t588;
  t631 = 0.1*var2[15]*t588;
  t647 = t631 + t622;
  t650 = var2[17]*t647;
  t684 = 0.1*var3[17]*t660;
  t688 = 0.1*var2[17]*t660;
  t279 = 0.05*t276;
  t568 = -0.05*t556;
  t738 = -0.2*var2[16]*t474;
  t763 = 0.2*var2[17]*t660;
  t343 = -0.05*t276;
  t365 = -0.1*t327;
  t370 = t343 + t365;
  t384 = var2[14]*t370;
  t849 = 0.1*var2[16]*t474;
  t608 = 0.05*t556;
  t612 = 0.1*t588;
  t616 = t608 + t612;
  t618 = var2[15]*t616;
  t912 = -0.1*var2[17]*t660;
  t818 = -0.1*var3[16]*t327;
  t869 = 0.1*var2[14]*t474;
  t876 = t869 + t849;
  t877 = var2[16]*t876;
  t891 = 0.1*var3[17]*t588;
  t916 = -0.1*var2[15]*t660;
  t917 = t916 + t912;
  t918 = var2[17]*t917;
  t972 = -0.2*var2[16]*t327;
  t990 = 0.2*var2[17]*t588;
  t1004 = Cos(var1[6]);
  t1009 = var1[6] + var1[8];
  t1016 = Cos(t1009);
  t1043 = -0.1*var2[8]*t1016;
  t1063 = Sin(var1[6]);
  t1064 = -0.05*t1063;
  t1065 = Sin(t1009);
  t1066 = -0.1*t1065;
  t1069 = t1064 + t1066;
  t1081 = Cos(var1[7]);
  t1102 = var1[9] + var1[7];
  t1107 = Cos(t1102);
  t1260 = 0.1*var2[9]*t1107;
  t1287 = Sin(var1[7]);
  t1308 = 0.05*t1287;
  t1317 = Sin(t1102);
  t1319 = 0.1*t1317;
  t1333 = t1308 + t1319;
  t1017 = 0.1*t1016;
  t1055 = -0.1*var2[6]*t1016;
  t1059 = t1055 + t1043;
  t1062 = var2[8]*t1059;
  t1075 = -0.1*var3[8]*t1065;
  t1076 = -0.1*var2[8]*t1065;
  t1110 = -0.1*t1107;
  t1271 = 0.1*var2[7]*t1107;
  t1275 = t1260 + t1271;
  t1285 = var2[9]*t1275;
  t1376 = 0.1*var3[9]*t1317;
  t1392 = 0.1*var2[9]*t1317;
  t1007 = 0.05*t1004;
  t1086 = -0.05*t1081;
  t1444 = -0.2*var2[8]*t1065;
  t1470 = 0.2*var2[9]*t1317;
  t1018 = -0.05*t1004;
  t1024 = -0.1*t1016;
  t1028 = t1018 + t1024;
  t1029 = var2[6]*t1028;
  t1582 = 0.1*var2[8]*t1065;
  t1111 = 0.05*t1081;
  t1176 = 0.1*t1107;
  t1210 = t1111 + t1176;
  t1246 = var2[7]*t1210;
  t1641 = -0.1*var2[9]*t1317;
  t1577 = -0.1*var3[8]*t1016;
  t1598 = 0.1*var2[6]*t1065;
  t1599 = t1598 + t1582;
  t1618 = var2[8]*t1599;
  t1625 = 0.1*var3[9]*t1107;
  t1653 = -0.1*var2[7]*t1317;
  t1657 = t1641 + t1653;
  t1658 = var2[9]*t1657;
  t1707 = -0.2*var2[8]*t1016;
  t1757 = 0.2*var2[9]*t1107;
  t1778 = Cos(var1[18]);
  t1780 = var1[18] + var1[20];
  t1782 = Cos(t1780);
  t1811 = -0.1*var2[20]*t1782;
  t1882 = Sin(var1[18]);
  t1897 = -0.05*t1882;
  t1898 = Sin(t1780);
  t1899 = -0.1*t1898;
  t1903 = t1897 + t1899;
  t1928 = Cos(var1[19]);
  t1932 = var1[19] + var1[21];
  t1933 = Cos(t1932);
  t1960 = 0.1*var2[21]*t1933;
  t1969 = Sin(var1[19]);
  t1972 = 0.05*t1969;
  t1973 = Sin(t1932);
  t1974 = 0.1*t1973;
  t1975 = t1972 + t1974;
  t1788 = 0.1*t1782;
  t1827 = -0.1*var2[18]*t1782;
  t1836 = t1827 + t1811;
  t1872 = var2[20]*t1836;
  t1924 = -0.1*var3[20]*t1898;
  t1925 = -0.1*var2[20]*t1898;
  t1934 = -0.1*t1933;
  t1964 = 0.1*var2[19]*t1933;
  t1965 = t1964 + t1960;
  t1967 = var2[21]*t1965;
  t1979 = 0.1*var3[21]*t1973;
  t1981 = 0.1*var2[21]*t1973;
  t1779 = 0.05*t1778;
  t1930 = -0.05*t1928;
  t2007 = -0.2*var2[20]*t1898;
  t2012 = 0.2*var2[21]*t1973;
  t1791 = -0.05*t1778;
  t1806 = -0.1*t1782;
  t1807 = t1791 + t1806;
  t1810 = var2[18]*t1807;
  t2113 = 0.1*var2[20]*t1898;
  t1937 = 0.05*t1928;
  t1940 = 0.1*t1933;
  t1952 = t1937 + t1940;
  t1956 = var2[19]*t1952;
  t2148 = -0.1*var2[21]*t1973;
  t2045 = -0.1*var3[20]*t1782;
  t2119 = 0.1*var2[18]*t1898;
  t2120 = t2119 + t2113;
  t2121 = var2[20]*t2120;
  t2124 = 0.1*var3[21]*t1933;
  t2151 = -0.1*var2[19]*t1973;
  t2152 = t2151 + t2148;
  t2153 = var2[21]*t2152;
  t2167 = -0.2*var2[20]*t1782;
  t2196 = 0.2*var2[21]*t1933;
  t2212 = Cos(var1[10]);
  t2215 = var1[10] + var1[12];
  t2217 = Cos(t2215);
  t2230 = -0.1*var2[12]*t2217;
  t2246 = Sin(var1[10]);
  t2247 = -0.05*t2246;
  t2249 = Sin(t2215);
  t2256 = -0.1*t2249;
  t2268 = t2247 + t2256;
  t2301 = Cos(var1[11]);
  t2303 = var1[11] + var1[13];
  t2306 = Cos(t2303);
  t2320 = 0.1*var2[13]*t2306;
  t2389 = Sin(var1[11]);
  t2398 = 0.05*t2389;
  t2399 = Sin(t2303);
  t2400 = 0.1*t2399;
  t2403 = t2398 + t2400;
  t2218 = 0.1*t2217;
  t2242 = -0.1*var2[10]*t2217;
  t2243 = t2242 + t2230;
  t2244 = var2[12]*t2243;
  t2297 = -0.1*var3[12]*t2249;
  t2298 = -0.1*var2[12]*t2249;
  t2307 = -0.1*t2306;
  t2374 = 0.1*var2[11]*t2306;
  t2377 = t2374 + t2320;
  t2382 = var2[13]*t2377;
  t2412 = 0.1*var3[13]*t2399;
  t2414 = 0.1*var2[13]*t2399;
  t2213 = 0.05*t2212;
  t2302 = -0.05*t2301;
  t2464 = -0.2*var2[12]*t2249;
  t2471 = 0.2*var2[13]*t2399;
  t2219 = -0.05*t2212;
  t2221 = -0.1*t2217;
  t2225 = t2219 + t2221;
  t2228 = var2[10]*t2225;
  t2509 = 0.1*var2[12]*t2249;
  t2311 = 0.05*t2301;
  t2313 = 0.1*t2306;
  t2316 = t2311 + t2313;
  t2319 = var2[11]*t2316;
  t2631 = -0.1*var2[13]*t2399;
  t2486 = -0.1*var3[12]*t2217;
  t2514 = 0.1*var2[10]*t2249;
  t2529 = t2514 + t2509;
  t2570 = var2[12]*t2529;
  t2606 = 0.1*var3[13]*t2306;
  t2637 = -0.1*var2[11]*t2399;
  t2642 = t2637 + t2631;
  t2647 = var2[13]*t2642;
  t2660 = -0.2*var2[12]*t2217;
  t2669 = 0.2*var2[13]*t2306;
  p_output1[0]=t279 + t339 + t451 + t543 + t544 + (t384 + t390)*var2[14] + t504*var2[14] + t504*var3[14];
  p_output1[1]=t568 + t600 + t650 + t684 + t688 + (t618 + t622)*var2[15] + t665*var2[15] + t665*var3[15];
  p_output1[2]=t339 + t451 + t543 + t544 + t436*var2[14] - 0.1*t474*var2[14] - 0.1*t474*var3[14];
  p_output1[3]=t600 + t650 + t684 + t688 + t647*var2[15] + 0.1*t660*var2[15] + 0.1*t660*var3[15];
  p_output1[4]=t279 + t339 + t738 + 2.*t504*var2[14];
  p_output1[5]=t568 + t600 + t763 + 2.*t665*var2[15];
  p_output1[6]=t339 + t738 - 0.2*t474*var2[14];
  p_output1[7]=t600 + t763 + 0.2*t660*var2[15];
  p_output1[8]=t279 + t339;
  p_output1[9]=t568 + t600;
  p_output1[10]=t339;
  p_output1[11]=t600;
  p_output1[12]=-1.;
  p_output1[13]=t384 + t390 + t469 + t502 + t818 + t877 + var2[14]*(t849 + (0.05*t452 + 0.1*t474)*var2[14]) + t370*var3[14];
  p_output1[14]=t618 + t622 + t657 + t662 + t891 + t918 + var2[15]*(t912 + (-0.05*t655 - 0.1*t660)*var2[15]) + t616*var3[15];
  p_output1[15]=t390 + t428 + t502 + t818 + t877 + t876*var2[14] - 0.1*t327*var3[14];
  p_output1[16]=t622 + t631 + t662 + t891 + t918 + t917*var2[15] + 0.1*t588*var3[15];
  p_output1[17]=t469 + t502 + t972 + 2.*t370*var2[14];
  p_output1[18]=t657 + t662 + t990 + 2.*t616*var2[15];
  p_output1[19]=t502 + t972 - 0.2*t327*var2[14];
  p_output1[20]=t662 + t990 + 0.2*t588*var2[15];
  p_output1[21]=t504;
  p_output1[22]=t665;
  p_output1[23]=t502;
  p_output1[24]=t662;
  p_output1[25]=-1.;
  p_output1[26]=t1007 + t1017 + t1062 + t1075 + t1076 + (t1029 + t1043)*var2[6] + t1069*var2[6] + t1069*var3[6];
  p_output1[27]=t1086 + t1110 + t1285 + t1376 + t1392 + (t1246 + t1260)*var2[7] + t1333*var2[7] + t1333*var3[7];
  p_output1[28]=t1017 + t1062 + t1075 + t1076 + t1059*var2[6] - 0.1*t1065*var2[6] - 0.1*t1065*var3[6];
  p_output1[29]=t1110 + t1285 + t1376 + t1392 + t1275*var2[7] + 0.1*t1317*var2[7] + 0.1*t1317*var3[7];
  p_output1[30]=t1007 + t1017 + t1444 + 2.*t1069*var2[6];
  p_output1[31]=t1086 + t1110 + t1470 + 2.*t1333*var2[7];
  p_output1[32]=t1017 + t1444 - 0.2*t1065*var2[6];
  p_output1[33]=t1110 + t1470 + 0.2*t1317*var2[7];
  p_output1[34]=t1007 + t1017;
  p_output1[35]=t1086 + t1110;
  p_output1[36]=t1017;
  p_output1[37]=t1110;
  p_output1[38]=-1.;
  p_output1[39]=t1029 + t1043 + t1064 + t1066 + t1577 + t1618 + var2[6]*(t1582 + (0.05*t1063 + 0.1*t1065)*var2[6]) + t1028*var3[6];
  p_output1[40]=t1246 + t1260 + t1308 + t1319 + t1625 + t1658 + var2[7]*(t1641 + (-0.05*t1287 - 0.1*t1317)*var2[7]) + t1210*var3[7];
  p_output1[41]=t1043 + t1055 + t1066 + t1577 + t1618 + t1599*var2[6] - 0.1*t1016*var3[6];
  p_output1[42]=t1260 + t1271 + t1319 + t1625 + t1658 + t1657*var2[7] + 0.1*t1107*var3[7];
  p_output1[43]=t1064 + t1066 + t1707 + 2.*t1028*var2[6];
  p_output1[44]=t1308 + t1319 + t1757 + 2.*t1210*var2[7];
  p_output1[45]=t1066 + t1707 - 0.2*t1016*var2[6];
  p_output1[46]=t1319 + t1757 + 0.2*t1107*var2[7];
  p_output1[47]=t1069;
  p_output1[48]=t1333;
  p_output1[49]=t1066;
  p_output1[50]=t1319;
  p_output1[51]=-1.;
  p_output1[52]=t1779 + t1788 + t1872 + t1924 + t1925 + (t1810 + t1811)*var2[18] + t1903*var2[18] + t1903*var3[18];
  p_output1[53]=t1930 + t1934 + t1967 + t1979 + t1981 + (t1956 + t1960)*var2[19] + t1975*var2[19] + t1975*var3[19];
  p_output1[54]=t1788 + t1872 + t1924 + t1925 + t1836*var2[18] - 0.1*t1898*var2[18] - 0.1*t1898*var3[18];
  p_output1[55]=t1934 + t1967 + t1979 + t1981 + t1965*var2[19] + 0.1*t1973*var2[19] + 0.1*t1973*var3[19];
  p_output1[56]=t1779 + t1788 + t2007 + 2.*t1903*var2[18];
  p_output1[57]=t1930 + t1934 + t2012 + 2.*t1975*var2[19];
  p_output1[58]=t1788 + t2007 - 0.2*t1898*var2[18];
  p_output1[59]=t1934 + t2012 + 0.2*t1973*var2[19];
  p_output1[60]=t1779 + t1788;
  p_output1[61]=t1930 + t1934;
  p_output1[62]=t1788;
  p_output1[63]=t1934;
  p_output1[64]=-1.;
  p_output1[65]=t1810 + t1811 + t1897 + t1899 + t2045 + t2121 + var2[18]*(t2113 + (0.05*t1882 + 0.1*t1898)*var2[18]) + t1807*var3[18];
  p_output1[66]=t1956 + t1960 + t1972 + t1974 + t2124 + t2153 + var2[19]*(t2148 + (-0.05*t1969 - 0.1*t1973)*var2[19]) + t1952*var3[19];
  p_output1[67]=t1811 + t1827 + t1899 + t2045 + t2121 + t2120*var2[18] - 0.1*t1782*var3[18];
  p_output1[68]=t1960 + t1964 + t1974 + t2124 + t2153 + t2152*var2[19] + 0.1*t1933*var3[19];
  p_output1[69]=t1897 + t1899 + t2167 + 2.*t1807*var2[18];
  p_output1[70]=t1972 + t1974 + t2196 + 2.*t1952*var2[19];
  p_output1[71]=t1899 + t2167 - 0.2*t1782*var2[18];
  p_output1[72]=t1974 + t2196 + 0.2*t1933*var2[19];
  p_output1[73]=t1903;
  p_output1[74]=t1975;
  p_output1[75]=t1899;
  p_output1[76]=t1974;
  p_output1[77]=-1.;
  p_output1[78]=t2213 + t2218 + t2244 + t2297 + t2298 + (t2228 + t2230)*var2[10] + t2268*var2[10] + t2268*var3[10];
  p_output1[79]=t2302 + t2307 + t2382 + t2412 + t2414 + (t2319 + t2320)*var2[11] + t2403*var2[11] + t2403*var3[11];
  p_output1[80]=t2218 + t2244 + t2297 + t2298 + t2243*var2[10] - 0.1*t2249*var2[10] - 0.1*t2249*var3[10];
  p_output1[81]=t2307 + t2382 + t2412 + t2414 + t2377*var2[11] + 0.1*t2399*var2[11] + 0.1*t2399*var3[11];
  p_output1[82]=t2213 + t2218 + t2464 + 2.*t2268*var2[10];
  p_output1[83]=t2302 + t2307 + t2471 + 2.*t2403*var2[11];
  p_output1[84]=t2218 + t2464 - 0.2*t2249*var2[10];
  p_output1[85]=t2307 + t2471 + 0.2*t2399*var2[11];
  p_output1[86]=t2213 + t2218;
  p_output1[87]=t2302 + t2307;
  p_output1[88]=t2218;
  p_output1[89]=t2307;
  p_output1[90]=-1.;
  p_output1[91]=t2228 + t2230 + t2247 + t2256 + t2486 + t2570 + var2[10]*(t2509 + (0.05*t2246 + 0.1*t2249)*var2[10]) + t2225*var3[10];
  p_output1[92]=t2319 + t2320 + t2398 + t2400 + t2606 + t2647 + var2[11]*(t2631 + (-0.05*t2389 - 0.1*t2399)*var2[11]) + t2316*var3[11];
  p_output1[93]=t2230 + t2242 + t2256 + t2486 + t2570 + t2529*var2[10] - 0.1*t2217*var3[10];
  p_output1[94]=t2320 + t2374 + t2400 + t2606 + t2647 + t2642*var2[11] + 0.1*t2306*var3[11];
  p_output1[95]=t2247 + t2256 + t2660 + 2.*t2225*var2[10];
  p_output1[96]=t2398 + t2400 + t2669 + 2.*t2316*var2[11];
  p_output1[97]=t2256 + t2660 - 0.2*t2217*var2[10];
  p_output1[98]=t2400 + t2669 + 0.2*t2306*var2[11];
  p_output1[99]=t2268;
  p_output1[100]=t2403;
  p_output1[101]=t2256;
  p_output1[102]=t2400;
  p_output1[103]=-1.;
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

  double *var1,*var2,*var3,*var4;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 4)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Four input(s) required (var1,var2,var3,var4).");
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
  mrows = mxGetM(prhs[2]);
  ncols = mxGetN(prhs[2]);
  if( !mxIsDouble(prhs[2]) || mxIsComplex(prhs[2]) ||
    ( !(mrows == 22 && ncols == 1) && 
      !(mrows == 1 && ncols == 22))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var3 is wrong.");
    }
  mrows = mxGetM(prhs[3]);
  ncols = mxGetN(prhs[3]);
  if( !mxIsDouble(prhs[3]) || mxIsComplex(prhs[3]) ||
    ( !(mrows == 8 && ncols == 1) && 
      !(mrows == 1 && ncols == 8))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var4 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
  var3 = mxGetPr(prhs[2]);
  var4 = mxGetPr(prhs[3]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 104, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3,var4);


}

#else // MATLAB_MEX_FILE

#include "J_ddh_fourBar_minitaur.hh"

namespace FrontStance
{

void J_ddh_fourBar_minitaur_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4);

}

}

#endif // MATLAB_MEX_FILE
