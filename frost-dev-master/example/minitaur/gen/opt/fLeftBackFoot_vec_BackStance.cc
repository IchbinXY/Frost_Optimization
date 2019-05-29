/*
 * Automatically Generated from Mathematica.
 * Wed 29 May 2019 01:37:03 GMT-04:00
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
  double t1361;
  double t417;
  double t1382;
  double t1391;
  double t1455;
  double t1465;
  double t1456;
  double t1469;
  double t1498;
  double t1502;
  double t1541;
  double t1570;
  double t1585;
  double t1013;
  double t1126;
  double t1459;
  double t1484;
  double t1486;
  double t1488;
  double t1489;
  double t1490;
  double t1590;
  double t1591;
  double t1674;
  double t1586;
  double t1587;
  double t1677;
  double t1595;
  double t1600;
  double t1606;
  double t1611;
  double t1663;
  double t1672;
  double t1758;
  double t1759;
  double t1761;
  double t1762;
  double t1824;
  double t1825;
  double t1826;
  double t1828;
  double t1830;
  double t1838;
  double t1853;
  double t1914;
  double t1916;
  double t1869;
  double t1678;
  double t1854;
  double t1921;
  double t1400;
  double t1450;
  double t1451;
  double t1453;
  double t1492;
  double t1551;
  double t1588;
  double t1593;
  double t1594;
  double t1993;
  double t2021;
  double t2023;
  double t2026;
  double t2027;
  double t2028;
  double t1675;
  double t1679;
  double t1680;
  double t1706;
  double t1730;
  double t1812;
  double t1814;
  double t1815;
  double t1821;
  double t1823;
  double t2031;
  double t2032;
  double t2033;
  double t2053;
  double t1875;
  double t2058;
  double t2059;
  double t2062;
  double t2063;
  double t2067;
  double t2068;
  double t2073;
  double t2091;
  double t1942;
  double t1946;
  double t1947;
  double t3693;
  double t4438;
  double t6582;
  double t7833;
  double t10899;
  double t11609;
  double t11740;
  double t11971;
  double t12052;
  double t12083;
  double t12088;
  double t12089;
  double t20297;
  double t20303;
  double t20307;
  double t20325;
  double t20404;
  double t20409;
  double t20410;
  double t20413;
  double t20459;
  double t20462;
  double t20477;
  double t20488;
  double t23327;
  double t23468;
  double t23514;
  double t23518;
  double t23682;
  double t23808;
  double t23827;
  double t23886;
  double t24016;
  double t24076;
  double t24408;
  double t24456;
  double t26064;
  double t26947;
  double t27388;
  double t28020;
  double t28071;
  double t28090;
  double t28190;
  double t28198;
  double t28201;
  double t28609;
  double t28628;
  double t28639;
  double t28653;
  double t28716;
  double t28724;
  double t28847;
  double t28862;
  double t29017;
  double t29062;
  double t29085;
  double t29519;
  double t29524;
  double t29529;
  double t29540;
  double t29566;
  double t29582;
  double t29601;
  double t29608;
  double t29619;
  double t29625;
  double t29627;
  double t30162;
  double t30175;
  double t30177;
  double t30208;
  double t30222;
  double t30240;
  double t30246;
  double t30248;
  double t30262;
  double t30264;
  double t30306;
  double t30328;
  double t30894;
  double t30897;
  double t30911;
  double t31089;
  double t31123;
  double t31137;
  double t31173;
  double t31196;
  double t31239;
  double t31358;
  double t31384;
  double t31532;
  double t31538;
  double t31648;
  double t31659;
  double t34073;
  double t34484;
  double t34773;
  double t35079;
  double t35323;
  double t35421;
  double t35427;
  double t35432;
  double t35938;
  double t35983;
  double t37697;
  double t37709;
  double t37537;
  double t37646;
  double t37970;
  double t37919;
  double t37937;
  double t37949;
  double t37952;
  double t38078;
  double t38110;
  double t38149;
  double t38459;
  double t38554;
  double t38584;
  double t38726;
  double t38666;
  double t37668;
  double t37735;
  double t37873;
  double t37906;
  double t37965;
  double t38028;
  double t38044;
  double t38051;
  double t38073;
  double t38184;
  double t38209;
  double t38228;
  double t38356;
  double t38392;
  double t38826;
  double t38832;
  double t38836;
  double t38840;
  double t38851;
  double t38858;
  double t38869;
  double t38677;
  double t38877;
  double t38881;
  double t38779;
  t1361 = Cos(var1[10]);
  t417 = Cos(var1[3]);
  t1382 = -1.*t1361;
  t1391 = 1. + t1382;
  t1455 = Cos(var1[5]);
  t1465 = Sin(var1[3]);
  t1456 = Sin(var1[4]);
  t1469 = Sin(var1[5]);
  t1498 = Cos(var1[12]);
  t1502 = -1.*t1498;
  t1541 = 1. + t1502;
  t1570 = -3.e-6*t1541;
  t1585 = Sin(var1[12]);
  t1013 = Cos(var1[4]);
  t1126 = Sin(var1[10]);
  t1459 = t417*t1455*t1456;
  t1484 = -1.*t1465*t1469;
  t1486 = t1459 + t1484;
  t1488 = -1.*t1455*t1465;
  t1489 = -1.*t417*t1456*t1469;
  t1490 = t1488 + t1489;
  t1590 = 3.e-6*t1585;
  t1591 = t1570 + t1590;
  t1674 = 3.e-13*var1[12];
  t1586 = -3.e-6*t1585;
  t1587 = t1570 + t1586;
  t1677 = -9.e-12*t1541;
  t1595 = 3.e-6*t417*t1013*t1126;
  t1600 = 3.e-6*t1391*t1486;
  t1606 = -9.e-12*t1391;
  t1611 = 1. + t1606;
  t1663 = t1611*t1490;
  t1672 = t1595 + t1600 + t1663;
  t1758 = -1.*t417*t1013*t1126;
  t1759 = t1361*t1486;
  t1761 = 3.e-6*t1391*t1490;
  t1762 = t1758 + t1759 + t1761;
  t1824 = -1.000000000009*t1391;
  t1825 = 1. + t1824;
  t1826 = -1.*t1825*t417*t1013;
  t1828 = -1.*t1126*t1486;
  t1830 = 3.e-6*t1126*t1490;
  t1838 = t1826 + t1828 + t1830;
  t1853 = 3.e-6*t1541;
  t1914 = -1.000000000009*t1541;
  t1916 = 1. + t1914;
  t1869 = 9.e-12*t1541;
  t1678 = -1.*t1585;
  t1854 = t1853 + t1586;
  t1921 = t1853 + t1590;
  t1400 = -1.8e-12*t1391;
  t1450 = -1. + t1361;
  t1451 = 0.2*t1450;
  t1453 = t1400 + t1451;
  t1492 = 1.e-7*var1[12];
  t1551 = 5.4e-18*t1541;
  t1588 = -0.200000000003*t1587;
  t1593 = 0.100000000003*t1591;
  t1594 = t1492 + t1551 + t1588 + t1593;
  t1993 = t1455*t1465*t1456;
  t2021 = t417*t1469;
  t2023 = t1993 + t2021;
  t2026 = t417*t1455;
  t2027 = -1.*t1465*t1456*t1469;
  t2028 = t2026 + t2027;
  t1675 = -0.2000000000048*t1541;
  t1679 = t1677 + t1678;
  t1680 = 0.100000000003*t1679;
  t1706 = 3.e-7*t1591;
  t1730 = t1674 + t1675 + t1680 + t1706;
  t1812 = 0.1000000000039*t1541;
  t1814 = 3.e-7*t1587;
  t1815 = t1677 + t1585;
  t1821 = -0.200000000003*t1815;
  t1823 = t1674 + t1812 + t1814 + t1821;
  t2031 = 3.e-6*t1013*t1126*t1465;
  t2032 = 3.e-6*t1391*t2023;
  t2033 = t1611*t2028;
  t2053 = t2031 + t2032 + t2033;
  t1875 = t1869 + t1585;
  t2058 = -1.*t1013*t1126*t1465;
  t2059 = t1361*t2023;
  t2062 = 3.e-6*t1391*t2028;
  t2063 = t2058 + t2059 + t2062;
  t2067 = -1.*t1825*t1013*t1465;
  t2068 = -1.*t1126*t2023;
  t2073 = 3.e-6*t1126*t2028;
  t2091 = t2067 + t2068 + t2073;
  t1942 = t1869 + t1678;
  t1946 = -1.8e-11*t1541;
  t1947 = 1. + t1946;
  t3693 = -3.e-6*t1391*t417*t1013*t1455;
  t4438 = 3.e-6*t417*t1126*t1456;
  t6582 = t1611*t417*t1013*t1469;
  t7833 = t3693 + t4438 + t6582;
  t10899 = -1.*t1361*t417*t1013*t1455;
  t11609 = -1.*t417*t1126*t1456;
  t11740 = 3.e-6*t1391*t417*t1013*t1469;
  t11971 = t10899 + t11609 + t11740;
  t12052 = t417*t1013*t1455*t1126;
  t12083 = -1.*t1825*t417*t1456;
  t12088 = 3.e-6*t417*t1013*t1126*t1469;
  t12089 = t12052 + t12083 + t12088;
  t20297 = 3.e-6*t1391*t1013*t1455*t1465;
  t20303 = -3.e-6*t1126*t1465*t1456;
  t20307 = -1.*t1611*t1013*t1465*t1469;
  t20325 = t20297 + t20303 + t20307;
  t20404 = t1361*t1013*t1455*t1465;
  t20409 = t1126*t1465*t1456;
  t20410 = -3.e-6*t1391*t1013*t1465*t1469;
  t20413 = t20404 + t20409 + t20410;
  t20459 = -1.*t1013*t1455*t1126*t1465;
  t20462 = t1825*t1465*t1456;
  t20477 = -3.e-6*t1013*t1126*t1465*t1469;
  t20488 = t20459 + t20462 + t20477;
  t23327 = -3.e-6*t1013*t1126;
  t23468 = -3.e-6*t1391*t1455*t1456;
  t23514 = t1611*t1456*t1469;
  t23518 = t23327 + t23468 + t23514;
  t23682 = t1013*t1126;
  t23808 = -1.*t1361*t1455*t1456;
  t23827 = 3.e-6*t1391*t1456*t1469;
  t23886 = t23682 + t23808 + t23827;
  t24016 = t1825*t1013;
  t24076 = t1455*t1126*t1456;
  t24408 = 3.e-6*t1126*t1456*t1469;
  t24456 = t24016 + t24076 + t24408;
  t26064 = -1.*t1611*t1013*t1455;
  t26947 = -3.e-6*t1391*t1013*t1469;
  t27388 = t26064 + t26947;
  t28020 = -3.e-6*t1391*t1013*t1455;
  t28071 = -1.*t1361*t1013*t1469;
  t28090 = t28020 + t28071;
  t28190 = -3.e-6*t1013*t1455*t1126;
  t28198 = t1013*t1126*t1469;
  t28201 = t28190 + t28198;
  t28609 = t1455*t1465;
  t28628 = t417*t1456*t1469;
  t28639 = t28609 + t28628;
  t28653 = t1611*t1486;
  t28716 = 3.e-6*t1391*t28639;
  t28724 = t28653 + t28716;
  t28847 = t1361*t28639;
  t28862 = t1600 + t28847;
  t29017 = 3.e-6*t1126*t1486;
  t29062 = -1.*t1126*t28639;
  t29085 = t29017 + t29062;
  t29519 = -1.*t1455*t1465*t1456;
  t29524 = -1.*t417*t1469;
  t29529 = t29519 + t29524;
  t29540 = t1611*t29529;
  t29566 = t29540 + t2062;
  t29582 = 3.e-6*t1391*t29529;
  t29601 = t1361*t2028;
  t29608 = t29582 + t29601;
  t29619 = 3.e-6*t1126*t29529;
  t29625 = -1.*t1126*t2028;
  t29627 = t29619 + t29625;
  t30162 = -1.*t1361*t1013*t1455;
  t30175 = -1.000000000009*t1126*t1456;
  t30177 = -3.e-6*t1361*t1013*t1469;
  t30208 = t30162 + t30175 + t30177;
  t30222 = -1.*t1013*t1455*t1126;
  t30240 = t1361*t1456;
  t30246 = -3.e-6*t1013*t1126*t1469;
  t30248 = t30222 + t30240 + t30246;
  t30262 = 3.e-6*t1013*t1455*t1126;
  t30264 = -3.e-6*t1361*t1456;
  t30306 = 9.e-12*t1013*t1126*t1469;
  t30328 = t30262 + t30264 + t30306;
  t30894 = -1.*t417*t1455*t1456;
  t30897 = t1465*t1469;
  t30911 = t30894 + t30897;
  t31089 = -1.000000000009*t417*t1013*t1126;
  t31123 = -1.*t1361*t30911;
  t31137 = 3.e-6*t1361*t28639;
  t31173 = t31089 + t31123 + t31137;
  t31196 = -3.e-6*t1361*t417*t1013;
  t31239 = 3.e-6*t1126*t30911;
  t31358 = -9.e-12*t1126*t28639;
  t31384 = t31196 + t31239 + t31358;
  t31532 = t1361*t417*t1013;
  t31538 = -1.*t1126*t30911;
  t31648 = 3.e-6*t1126*t28639;
  t31659 = t31532 + t31538 + t31648;
  t34073 = 1.000000000009*t1013*t1126*t1465;
  t34484 = -1.*t1361*t2023;
  t34773 = 3.e-6*t1361*t2028;
  t35079 = t34073 + t34484 + t34773;
  t35323 = 3.e-6*t1361*t1013*t1465;
  t35421 = 3.e-6*t1126*t2023;
  t35427 = -9.e-12*t1126*t2028;
  t35432 = t35323 + t35421 + t35427;
  t35938 = -1.*t1361*t1013*t1465;
  t35983 = t35938 + t2068 + t2073;
  t37697 = 3.e-6*t1498;
  t37709 = t37697 + t1586;
  t37537 = -3.e-6*t1498;
  t37646 = t37537 + t1586;
  t37970 = -9.e-12*t1585;
  t37919 = 3.e-6*t1391*t1013*t1455;
  t37937 = -3.e-6*t1126*t1456;
  t37949 = -1.*t1611*t1013*t1469;
  t37952 = t37919 + t37937 + t37949;
  t38078 = t1361*t1013*t1455;
  t38110 = t1126*t1456;
  t38149 = t38078 + t38110 + t26947;
  t38459 = t1825*t1456;
  t38554 = t30222 + t38459 + t30246;
  t38584 = t37697 + t1590;
  t38726 = t37537 + t1590;
  t38666 = 9.e-12*t1585;
  t37668 = -0.200000000003*t37646;
  t37735 = 0.100000000003*t37709;
  t37873 = 5.4e-18*t1585;
  t37906 = 1.e-7 + t37668 + t37735 + t37873;
  t37965 = 3.e-7*t37709;
  t38028 = t1502 + t37970;
  t38044 = 0.100000000003*t38028;
  t38051 = -0.2000000000048*t1585;
  t38073 = 3.e-13 + t37965 + t38044 + t38051;
  t38184 = 3.e-7*t37646;
  t38209 = t1498 + t37970;
  t38228 = -0.200000000003*t38209;
  t38356 = 0.1000000000039*t1585;
  t38392 = 3.e-13 + t38184 + t38228 + t38356;
  t38826 = -3.e-6*t417*t1013*t1126;
  t38832 = 3.e-6*t1391*t30911;
  t38836 = t1611*t28639;
  t38840 = t38826 + t38832 + t38836;
  t38851 = t417*t1013*t1126;
  t38858 = t1361*t30911;
  t38869 = t38851 + t38858 + t28716;
  t38677 = t1502 + t38666;
  t38877 = t1825*t417*t1013;
  t38881 = t38877 + t31538 + t31648;
  t38779 = t1498 + t38666;
  p_output1[0]=var2[0];
  p_output1[1]=var2[1];
  p_output1[2]=var2[2];
  p_output1[3]=(t1453*t1486 + 6.000000000054e-7*t1391*t1490 + t1594*t1672 + t1730*t1762 + t1823*t1838 - 0.3*(t1672*t1854 + t1762*t1875 + t1838*t1916) + 0.2*(-1.*t1762*t1916 - 1.*t1672*t1921 - 1.*t1838*t1942) + 0.100001*(t1762*t1854 + t1838*t1921 + t1672*t1947) - 0.2000000000018*t1013*t1126*t417)*var2[1] + (-0.2000000000018*t1013*t1126*t1465 + t1453*t2023 + 6.000000000054e-7*t1391*t2028 + t1594*t2053 + t1730*t2063 + t1823*t2091 - 0.3*(t1854*t2053 + t1875*t2063 + t1916*t2091) + 0.100001*(t1947*t2053 + t1854*t2063 + t1921*t2091) + 0.2*(-1.*t1921*t2053 - 1.*t1916*t2063 - 1.*t1942*t2091))*var2[2];
  p_output1[4]=(0.2000000000018*t1013*t1126 - 1.*t1453*t1455*t1456 + 6.000000000054e-7*t1391*t1456*t1469 + t1594*t23518 + t1730*t23886 + t1823*t24456 - 0.3*(t1854*t23518 + t1875*t23886 + t1916*t24456) + 0.100001*(t1947*t23518 + t1854*t23886 + t1921*t24456) + 0.2*(-1.*t1921*t23518 - 1.*t1916*t23886 - 1.*t1942*t24456))*var2[0] + (t1013*t1453*t1455*t1465 + 0.2000000000018*t1126*t1456*t1465 - 6.000000000054e-7*t1013*t1391*t1465*t1469 + t1594*t20325 + t1730*t20413 + t1823*t20488 - 0.3*(t1854*t20325 + t1875*t20413 + t1916*t20488) + 0.100001*(t1947*t20325 + t1854*t20413 + t1921*t20488) + 0.2*(-1.*t1921*t20325 - 1.*t1916*t20413 - 1.*t1942*t20488))*var2[1] + (t11971*t1730 + t12089*t1823 - 1.*t1013*t1453*t1455*t417 - 0.2000000000018*t1126*t1456*t417 + 6.000000000054e-7*t1013*t1391*t1469*t417 + t1594*t7833 - 0.3*(t11971*t1875 + t12089*t1916 + t1854*t7833) + 0.2*(-1.*t11971*t1916 - 1.*t12089*t1942 - 1.*t1921*t7833) + 0.100001*(t11971*t1854 + t12089*t1921 + t1947*t7833))*var2[2];
  p_output1[5]=(-6.000000000054e-7*t1013*t1391*t1455 - 1.*t1013*t1453*t1469 + t1594*t27388 + t1730*t28090 + t1823*t28201 - 0.3*(t1854*t27388 + t1875*t28090 + t1916*t28201) + 0.100001*(t1947*t27388 + t1854*t28090 + t1921*t28201) + 0.2*(-1.*t1921*t27388 - 1.*t1916*t28090 - 1.*t1942*t28201))*var2[0] + (t1453*t2028 + 6.000000000054e-7*t1391*t29529 + t1594*t29566 + t1730*t29608 + t1823*t29627 - 0.3*(t1854*t29566 + t1875*t29608 + t1916*t29627) + 0.100001*(t1947*t29566 + t1854*t29608 + t1921*t29627) + 0.2*(-1.*t1921*t29566 - 1.*t1916*t29608 - 1.*t1942*t29627))*var2[1] + (6.000000000054e-7*t1391*t1486 + t1453*t28639 + t1594*t28724 + t1730*t28862 + t1823*t29085 - 0.3*(t1854*t28724 + t1875*t28862 + t1916*t29085) + 0.100001*(t1947*t28724 + t1854*t28862 + t1921*t29085) + 0.2*(-1.*t1921*t28724 - 1.*t1916*t28862 - 1.*t1942*t29085))*var2[2];
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=(-0.2000000000018*t1013*t1126*t1455 + 0.2000000000018*t1361*t1456 - 6.000000000054e-7*t1013*t1126*t1469 + t1823*t30208 + t1730*t30248 + t1594*t30328 - 0.3*(t1916*t30208 + t1875*t30248 + t1854*t30328) + 0.2*(-1.*t1942*t30208 - 1.*t1916*t30248 - 1.*t1921*t30328) + 0.100001*(t1921*t30208 + t1854*t30248 + t1947*t30328))*var2[0] + (-0.2000000000018*t1013*t1361*t1465 - 0.2000000000018*t1126*t2023 + 6.000000000054e-7*t1126*t2028 + t1823*t35079 + t1594*t35432 + t1730*t35983 + 0.100001*(t1921*t35079 + t1947*t35432 + t1854*t35983) - 0.3*(t1916*t35079 + t1854*t35432 + t1875*t35983) + 0.2*(-1.*t1942*t35079 - 1.*t1921*t35432 - 1.*t1916*t35983))*var2[1] + (6.000000000054e-7*t1126*t28639 - 0.2000000000018*t1126*t30911 + t1823*t31173 + t1594*t31384 + t1730*t31659 + 0.100001*(t1921*t31173 + t1947*t31384 + t1854*t31659) - 0.3*(t1916*t31173 + t1854*t31384 + t1875*t31659) + 0.2*(-1.*t1942*t31173 - 1.*t1921*t31384 - 1.*t1916*t31659) + 0.2000000000018*t1013*t1361*t417)*var2[2];
  p_output1[11]=0;
  p_output1[12]=(t37906*t37952 + t38073*t38149 + t38392*t38554 + 0.2*(1.000000000009*t1585*t38149 - 1.*t37952*t38584 - 1.*t38554*t38677) + 0.100001*(-1.8e-11*t1585*t37952 + t38554*t38584 + t38149*t38726) - 0.3*(-1.000000000009*t1585*t38554 + t37952*t38726 + t38149*t38779))*var2[0] + (t2053*t37906 + t2063*t38073 + t2091*t38392 + 0.2*(1.000000000009*t1585*t2063 - 1.*t2053*t38584 - 1.*t2091*t38677) + 0.100001*(-1.8e-11*t1585*t2053 + t2091*t38584 + t2063*t38726) - 0.3*(-1.000000000009*t1585*t2091 + t2053*t38726 + t2063*t38779))*var2[1] + (t37906*t38840 + t38073*t38869 + t38392*t38881 - 0.3*(t38726*t38840 + t38779*t38869 - 1.000000000009*t1585*t38881) + 0.100001*(-1.8e-11*t1585*t38840 + t38726*t38869 + t38584*t38881) + 0.2*(-1.*t38584*t38840 + 1.000000000009*t1585*t38869 - 1.*t38677*t38881))*var2[2];
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
  p_output1[21]=0;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 22, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "fLeftBackFoot_vec_BackStance.hh"

namespace BackStance
{

void fLeftBackFoot_vec_BackStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
