/*
 * Automatically Generated from Mathematica.
 * Wed 29 May 2019 15:05:14 GMT-04:00
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
  double t555;
  double t1132;
  double t1261;
  double t1357;
  double t1358;
  double t1462;
  double t1463;
  double t1345;
  double t1349;
  double t1464;
  double t1468;
  double t1469;
  double t1473;
  double t1124;
  double t1280;
  double t1493;
  double t1467;
  double t1470;
  double t1471;
  double t1472;
  double t1474;
  double t1480;
  double t1499;
  double t1500;
  double t1501;
  double t1503;
  double t1491;
  double t1513;
  double t1514;
  double t1516;
  double t1522;
  double t1528;
  double t1536;
  double t1538;
  double t1539;
  double t1550;
  double t1542;
  double t1604;
  double t1603;
  double t1612;
  double t1609;
  double t1610;
  double t1676;
  double t1650;
  double t1657;
  double t1662;
  double t1670;
  double t1707;
  double t1680;
  double t1681;
  double t1690;
  double t1691;
  double t1692;
  double t1697;
  double t1711;
  double t1721;
  double t1673;
  double t1718;
  double t1719;
  double t1708;
  double t1684;
  double t1685;
  double t1687;
  double t1688;
  double t1689;
  double t1672;
  double t1674;
  double t1675;
  double t1678;
  double t1679;
  double t1606;
  double t1611;
  double t1613;
  double t1615;
  double t1625;
  double t1780;
  double t1781;
  double t1722;
  double t1783;
  double t1784;
  double t1785;
  double t1787;
  double t1788;
  double t1789;
  double t1738;
  double t1713;
  double t1714;
  double t1831;
  double t1838;
  double t1862;
  double t1865;
  double t1867;
  double t1869;
  double t1870;
  double t1871;
  double t1874;
  double t1875;
  double t1876;
  double t1896;
  double t1916;
  double t1920;
  double t1921;
  double t1922;
  double t1923;
  double t1930;
  double t1931;
  double t1938;
  double t1962;
  double t1968;
  double t1969;
  double t1970;
  double t1971;
  double t2002;
  double t2004;
  double t2005;
  double t2006;
  double t2008;
  double t2009;
  double t2010;
  double t2012;
  double t2013;
  double t2014;
  double t2015;
  double t2017;
  double t2021;
  double t2022;
  double t2027;
  double t2037;
  double t2038;
  double t2039;
  double t2040;
  double t2074;
  double t2075;
  double t2076;
  double t2078;
  double t2079;
  double t2080;
  double t2082;
  double t2083;
  double t2084;
  double t2086;
  double t2087;
  double t2088;
  double t2090;
  double t2091;
  double t2092;
  double t1342;
  double t1352;
  double t1353;
  double t1354;
  double t1490;
  double t1494;
  double t1495;
  double t1496;
  double t1498;
  double t2113;
  double t2114;
  double t2115;
  double t1507;
  double t1508;
  double t1509;
  double t1510;
  double t1511;
  double t2112;
  double t2116;
  double t2117;
  double t2118;
  double t2120;
  double t2121;
  double t2122;
  double t1543;
  double t2124;
  double t2125;
  double t2126;
  double t2127;
  double t1578;
  double t2150;
  double t2151;
  double t2152;
  double t2153;
  double t2155;
  double t2156;
  double t2157;
  double t2158;
  double t2160;
  double t2161;
  double t2230;
  double t2231;
  double t2232;
  double t2233;
  double t2235;
  double t2236;
  double t2237;
  double t2238;
  double t2240;
  double t2241;
  double t2242;
  double t2243;
  double t2264;
  double t2265;
  double t2266;
  double t2268;
  double t2269;
  double t2270;
  double t2272;
  double t2273;
  double t2275;
  double t2276;
  double t2277;
  double t2324;
  double t2325;
  double t2326;
  double t2323;
  double t2327;
  double t2328;
  double t2329;
  double t2331;
  double t2332;
  double t2333;
  double t2335;
  double t2336;
  double t2337;
  double t2338;
  double t3692;
  double t3741;
  double t3742;
  double t3826;
  double t3933;
  double t3961;
  double t4039;
  double t4062;
  double t4066;
  double t4076;
  t555 = Cos(var1[17]);
  t1132 = Sin(var1[17]);
  t1261 = -3.e-6*t1132;
  t1357 = Cos(var1[15]);
  t1358 = -1.*t1357;
  t1462 = 1. + t1358;
  t1463 = Cos(var1[4]);
  t1345 = 3.e-6*t555;
  t1349 = t1345 + t1261;
  t1464 = Cos(var1[5]);
  t1468 = Sin(var1[15]);
  t1469 = Sin(var1[4]);
  t1473 = Sin(var1[5]);
  t1124 = -3.e-6*t555;
  t1280 = t1124 + t1261;
  t1493 = -9.e-12*t1132;
  t1467 = 3.e-6*t1462*t1463*t1464;
  t1470 = -3.e-6*t1468*t1469;
  t1471 = -9.e-12*t1462;
  t1472 = 1. + t1471;
  t1474 = -1.*t1472*t1463*t1473;
  t1480 = t1467 + t1470 + t1474;
  t1499 = t1357*t1463*t1464;
  t1500 = t1468*t1469;
  t1501 = -3.e-6*t1462*t1463*t1473;
  t1503 = t1499 + t1500 + t1501;
  t1491 = -1.*t555;
  t1513 = -1.*t1463*t1464*t1468;
  t1514 = -1.000000000009*t1462;
  t1516 = 1. + t1514;
  t1522 = t1516*t1469;
  t1528 = -3.e-6*t1463*t1468*t1473;
  t1536 = t1513 + t1522 + t1528;
  t1538 = 3.e-6*t1132;
  t1539 = t1345 + t1538;
  t1550 = t1124 + t1538;
  t1542 = 9.e-12*t1132;
  t1604 = 1. + t1491;
  t1603 = 9.e-13*var1[17];
  t1612 = -9.e-12*t1604;
  t1609 = -3.e-6*t1604;
  t1610 = t1609 + t1261;
  t1676 = t1609 + t1538;
  t1650 = -1.*t1357*t1463*t1464;
  t1657 = -1.000000000009*t1468*t1469;
  t1662 = -3.e-6*t1357*t1463*t1473;
  t1670 = t1650 + t1657 + t1662;
  t1707 = 3.e-6*t1604;
  t1680 = t1357*t1469;
  t1681 = t1513 + t1680 + t1528;
  t1690 = 3.e-6*t1463*t1464*t1468;
  t1691 = -3.e-6*t1357*t1469;
  t1692 = 9.e-12*t1463*t1468*t1473;
  t1697 = t1690 + t1691 + t1692;
  t1711 = t1707 + t1261;
  t1721 = 9.e-12*t1604;
  t1673 = -1.*t1132;
  t1718 = -1.000000000009*t1604;
  t1719 = 1. + t1718;
  t1708 = t1707 + t1538;
  t1684 = 3.e-7*var1[17];
  t1685 = -1.62e-17*t1604;
  t1687 = 0.2*t1610;
  t1688 = 0.1*t1676;
  t1689 = t1684 + t1685 + t1687 + t1688;
  t1672 = 0.2000000000018*t1604;
  t1674 = t1612 + t1673;
  t1675 = 0.1*t1674;
  t1678 = -9.e-7*t1676;
  t1679 = t1603 + t1672 + t1675 + t1678;
  t1606 = 0.1000000000009*t1604;
  t1611 = -9.e-7*t1610;
  t1613 = t1612 + t1132;
  t1615 = 0.2*t1613;
  t1625 = t1603 + t1606 + t1611 + t1615;
  t1780 = -1.*t1472*t1463*t1464;
  t1781 = t1780 + t1501;
  t1722 = t1721 + t1132;
  t1783 = -3.e-6*t1462*t1463*t1464;
  t1784 = -1.*t1357*t1463*t1473;
  t1785 = t1783 + t1784;
  t1787 = -3.e-6*t1463*t1464*t1468;
  t1788 = t1463*t1468*t1473;
  t1789 = t1787 + t1788;
  t1738 = t1721 + t1673;
  t1713 = -1.8e-11*t1604;
  t1714 = 1. + t1713;
  t1831 = -3.e-6*t1463*t1468;
  t1838 = -3.e-6*t1462*t1464*t1469;
  t1862 = t1472*t1469*t1473;
  t1865 = t1831 + t1838 + t1862;
  t1867 = t1463*t1468;
  t1869 = -1.*t1357*t1464*t1469;
  t1870 = 3.e-6*t1462*t1469*t1473;
  t1871 = t1867 + t1869 + t1870;
  t1874 = t1516*t1463;
  t1875 = t1464*t1468*t1469;
  t1876 = 3.e-6*t1468*t1469*t1473;
  t1896 = t1874 + t1875 + t1876;
  t1916 = Sin(var1[3]);
  t1920 = 3.e-6*t1462*t1463*t1464*t1916;
  t1921 = -3.e-6*t1468*t1916*t1469;
  t1922 = -1.*t1472*t1463*t1916*t1473;
  t1923 = t1920 + t1921 + t1922;
  t1930 = t1357*t1463*t1464*t1916;
  t1931 = t1468*t1916*t1469;
  t1938 = -3.e-6*t1462*t1463*t1916*t1473;
  t1962 = t1930 + t1931 + t1938;
  t1968 = -1.*t1463*t1464*t1468*t1916;
  t1969 = t1516*t1916*t1469;
  t1970 = -3.e-6*t1463*t1468*t1916*t1473;
  t1971 = t1968 + t1969 + t1970;
  t2002 = Cos(var1[3]);
  t2004 = t2002*t1464*t1469;
  t2005 = -1.*t1916*t1473;
  t2006 = t2004 + t2005;
  t2008 = -1.*t1464*t1916;
  t2009 = -1.*t2002*t1469*t1473;
  t2010 = t2008 + t2009;
  t2012 = 3.e-6*t2002*t1463*t1468;
  t2013 = 3.e-6*t1462*t2006;
  t2014 = t1472*t2010;
  t2015 = t2012 + t2013 + t2014;
  t2017 = -1.*t2002*t1463*t1468;
  t2021 = t1357*t2006;
  t2022 = 3.e-6*t1462*t2010;
  t2027 = t2017 + t2021 + t2022;
  t2037 = -1.*t1516*t2002*t1463;
  t2038 = -1.*t1468*t2006;
  t2039 = 3.e-6*t1468*t2010;
  t2040 = t2037 + t2038 + t2039;
  t2074 = -1.*t1464*t1916*t1469;
  t2075 = -1.*t2002*t1473;
  t2076 = t2074 + t2075;
  t2078 = t2002*t1464;
  t2079 = -1.*t1916*t1469*t1473;
  t2080 = t2078 + t2079;
  t2082 = t1472*t2076;
  t2083 = 3.e-6*t1462*t2080;
  t2084 = t2082 + t2083;
  t2086 = 3.e-6*t1462*t2076;
  t2087 = t1357*t2080;
  t2088 = t2086 + t2087;
  t2090 = 3.e-6*t1468*t2076;
  t2091 = -1.*t1468*t2080;
  t2092 = t2090 + t2091;
  t1342 = 0.2*t1280;
  t1352 = 0.1*t1349;
  t1353 = -1.62e-17*t1132;
  t1354 = 3.e-7 + t1342 + t1352 + t1353;
  t1490 = -9.e-7*t1349;
  t1494 = t1491 + t1493;
  t1495 = 0.1*t1494;
  t1496 = 0.2000000000018*t1132;
  t1498 = 9.e-13 + t1490 + t1495 + t1496;
  t2113 = t1464*t1916*t1469;
  t2114 = t2002*t1473;
  t2115 = t2113 + t2114;
  t1507 = -9.e-7*t1280;
  t1508 = t555 + t1493;
  t1509 = 0.2*t1508;
  t1510 = 0.1000000000009*t1132;
  t1511 = 9.e-13 + t1507 + t1509 + t1510;
  t2112 = 3.e-6*t1463*t1468*t1916;
  t2116 = 3.e-6*t1462*t2115;
  t2117 = t1472*t2080;
  t2118 = t2112 + t2116 + t2117;
  t2120 = -1.*t1463*t1468*t1916;
  t2121 = t1357*t2115;
  t2122 = t2120 + t2121 + t2083;
  t1543 = t1491 + t1542;
  t2124 = -1.*t1516*t1463*t1916;
  t2125 = -1.*t1468*t2115;
  t2126 = 3.e-6*t1468*t2080;
  t2127 = t2124 + t2125 + t2126;
  t1578 = t555 + t1542;
  t2150 = 1.000000000009*t1463*t1468*t1916;
  t2151 = -1.*t1357*t2115;
  t2152 = 3.e-6*t1357*t2080;
  t2153 = t2150 + t2151 + t2152;
  t2155 = 3.e-6*t1357*t1463*t1916;
  t2156 = 3.e-6*t1468*t2115;
  t2157 = -9.e-12*t1468*t2080;
  t2158 = t2155 + t2156 + t2157;
  t2160 = -1.*t1357*t1463*t1916;
  t2161 = t2160 + t2125 + t2126;
  t2230 = -3.e-6*t1462*t2002*t1463*t1464;
  t2231 = 3.e-6*t2002*t1468*t1469;
  t2232 = t1472*t2002*t1463*t1473;
  t2233 = t2230 + t2231 + t2232;
  t2235 = -1.*t1357*t2002*t1463*t1464;
  t2236 = -1.*t2002*t1468*t1469;
  t2237 = 3.e-6*t1462*t2002*t1463*t1473;
  t2238 = t2235 + t2236 + t2237;
  t2240 = t2002*t1463*t1464*t1468;
  t2241 = -1.*t1516*t2002*t1469;
  t2242 = 3.e-6*t2002*t1463*t1468*t1473;
  t2243 = t2240 + t2241 + t2242;
  t2264 = t1464*t1916;
  t2265 = t2002*t1469*t1473;
  t2266 = t2264 + t2265;
  t2268 = t1472*t2006;
  t2269 = 3.e-6*t1462*t2266;
  t2270 = t2268 + t2269;
  t2272 = t1357*t2266;
  t2273 = t2013 + t2272;
  t2275 = 3.e-6*t1468*t2006;
  t2276 = -1.*t1468*t2266;
  t2277 = t2275 + t2276;
  t2324 = -1.*t2002*t1464*t1469;
  t2325 = t1916*t1473;
  t2326 = t2324 + t2325;
  t2323 = -3.e-6*t2002*t1463*t1468;
  t2327 = 3.e-6*t1462*t2326;
  t2328 = t1472*t2266;
  t2329 = t2323 + t2327 + t2328;
  t2331 = t2002*t1463*t1468;
  t2332 = t1357*t2326;
  t2333 = t2331 + t2332 + t2269;
  t2335 = t1516*t2002*t1463;
  t2336 = -1.*t1468*t2326;
  t2337 = 3.e-6*t1468*t2266;
  t2338 = t2335 + t2336 + t2337;
  t3692 = -1.000000000009*t2002*t1463*t1468;
  t3741 = -1.*t1357*t2326;
  t3742 = 3.e-6*t1357*t2266;
  t3826 = t3692 + t3741 + t3742;
  t3933 = -3.e-6*t1357*t2002*t1463;
  t3961 = 3.e-6*t1468*t2326;
  t4039 = -9.e-12*t1468*t2266;
  t4062 = t3933 + t3961 + t4039;
  t4066 = t1357*t2002*t1463;
  t4076 = t4066 + t2336 + t2337;
  p_output1[0]=var2[0] + (-0.2000000000018*t1463*t1468 - 0.2000000000018*t1462*t1464*t1469 - 6.000000000054e-7*t1462*t1469*t1473 + t1689*t1865 + t1679*t1871 + t1625*t1896 - 0.099999*(t1714*t1865 + t1711*t1871 + t1708*t1896) - 0.3*(t1711*t1865 + t1722*t1871 + t1719*t1896) + 0.2*(t1708*t1865 + t1719*t1871 + t1738*t1896))*var2[4] + (6.000000000054e-7*t1462*t1463*t1464 - 0.2000000000018*t1462*t1463*t1473 + t1689*t1781 + t1679*t1785 + t1625*t1789 - 0.099999*(t1714*t1781 + t1711*t1785 + t1708*t1789) - 0.3*(t1711*t1781 + t1722*t1785 + t1719*t1789) + 0.2*(t1708*t1781 + t1719*t1785 + t1738*t1789))*var2[5] + (0.2000000000018*t1463*t1464*t1468 - 0.2000000000018*t1357*t1469 + 6.000000000054e-7*t1463*t1468*t1473 + t1625*t1670 + t1679*t1681 + t1689*t1697 - 0.099999*(t1670*t1708 + t1681*t1711 + t1697*t1714) - 0.3*(t1697*t1711 + t1670*t1719 + t1681*t1722) + 0.2*(t1697*t1708 + t1681*t1719 + t1670*t1738))*var2[15] + (t1354*t1480 + t1498*t1503 + t1511*t1536 + 0.2*(-1.000000000009*t1132*t1503 + t1480*t1539 + t1536*t1543) - 0.099999*(-1.8e-11*t1132*t1480 + t1536*t1539 + t1503*t1550) - 0.3*(-1.000000000009*t1132*t1536 + t1480*t1550 + t1503*t1578))*var2[17];
  p_output1[1]=var2[1] + (0.2000000000018*t1463*t1468*t2002 + 0.2000000000018*t1462*t2006 - 6.000000000054e-7*t1462*t2010 + t1689*t2015 + t1679*t2027 + t1625*t2040 - 0.099999*(t1714*t2015 + t1711*t2027 + t1708*t2040) - 0.3*(t1711*t2015 + t1722*t2027 + t1719*t2040) + 0.2*(t1708*t2015 + t1719*t2027 + t1738*t2040))*var2[3] + (0.2000000000018*t1462*t1463*t1464*t1916 - 0.2000000000018*t1468*t1469*t1916 + 6.000000000054e-7*t1462*t1463*t1473*t1916 + t1689*t1923 + t1679*t1962 + t1625*t1971 - 0.099999*(t1714*t1923 + t1711*t1962 + t1708*t1971) - 0.3*(t1711*t1923 + t1722*t1962 + t1719*t1971) + 0.2*(t1708*t1923 + t1719*t1962 + t1738*t1971))*var2[4] + (-6.000000000054e-7*t1462*t2076 + 0.2000000000018*t1462*t2080 + t1689*t2084 + t1679*t2088 + t1625*t2092 - 0.099999*(t1714*t2084 + t1711*t2088 + t1708*t2092) - 0.3*(t1711*t2084 + t1722*t2088 + t1719*t2092) + 0.2*(t1708*t2084 + t1719*t2088 + t1738*t2092))*var2[5] + (0.2000000000018*t1357*t1463*t1916 - 6.000000000054e-7*t1468*t2080 + 0.2000000000018*t1468*t2115 + t1625*t2153 + t1689*t2158 + t1679*t2161 - 0.099999*(t1708*t2153 + t1714*t2158 + t1711*t2161) + 0.2*(t1738*t2153 + t1708*t2158 + t1719*t2161) - 0.3*(t1719*t2153 + t1711*t2158 + t1722*t2161))*var2[15] + (t1354*t2118 + t1498*t2122 + t1511*t2127 - 0.3*(t1550*t2118 + t1578*t2122 - 1.000000000009*t1132*t2127) - 0.099999*(-1.8e-11*t1132*t2118 + t1550*t2122 + t1539*t2127) + 0.2*(t1539*t2118 - 1.000000000009*t1132*t2122 + t1543*t2127))*var2[17];
  p_output1[2]=var2[2] + (0.2000000000018*t1463*t1468*t1916 - 6.000000000054e-7*t1462*t2080 + 0.2000000000018*t1462*t2115 + t1689*t2118 + t1679*t2122 + t1625*t2127 - 0.099999*(t1714*t2118 + t1711*t2122 + t1708*t2127) - 0.3*(t1711*t2118 + t1722*t2122 + t1719*t2127) + 0.2*(t1708*t2118 + t1719*t2122 + t1738*t2127))*var2[3] + (-0.2000000000018*t1462*t1463*t1464*t2002 + 0.2000000000018*t1468*t1469*t2002 - 6.000000000054e-7*t1462*t1463*t1473*t2002 + t1689*t2233 + t1679*t2238 + t1625*t2243 - 0.099999*(t1714*t2233 + t1711*t2238 + t1708*t2243) - 0.3*(t1711*t2233 + t1722*t2238 + t1719*t2243) + 0.2*(t1708*t2233 + t1719*t2238 + t1738*t2243))*var2[4] + (-6.000000000054e-7*t1462*t2006 + 0.2000000000018*t1462*t2266 + t1689*t2270 + t1679*t2273 + t1625*t2277 - 0.099999*(t1714*t2270 + t1711*t2273 + t1708*t2277) - 0.3*(t1711*t2270 + t1722*t2273 + t1719*t2277) + 0.2*(t1708*t2270 + t1719*t2273 + t1738*t2277))*var2[5] + (-0.2000000000018*t1357*t1463*t2002 - 6.000000000054e-7*t1468*t2266 + 0.2000000000018*t1468*t2326 + t1625*t3826 + t1689*t4062 + t1679*t4076 - 0.099999*(t1708*t3826 + t1714*t4062 + t1711*t4076) + 0.2*(t1738*t3826 + t1708*t4062 + t1719*t4076) - 0.3*(t1719*t3826 + t1711*t4062 + t1722*t4076))*var2[15] + (t1354*t2329 + t1498*t2333 + t1511*t2338 - 0.3*(t1550*t2329 + t1578*t2333 - 1.000000000009*t1132*t2338) - 0.099999*(-1.8e-11*t1132*t2329 + t1550*t2333 + t1539*t2338) + 0.2*(t1539*t2329 - 1.000000000009*t1132*t2333 + t1543*t2338))*var2[17];
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

#include "dh_RightFrontFoot_FrontStance.hh"

namespace FrontStance
{

void dh_RightFrontFoot_FrontStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
