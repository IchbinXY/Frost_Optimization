/*
 * Automatically Generated from Mathematica.
 * Wed 29 May 2019 15:05:09 GMT-04:00
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
  double t578;
  double t981;
  double t1059;
  double t1119;
  double t1145;
  double t1155;
  double t1189;
  double t1191;
  double t1194;
  double t363;
  double t501;
  double t1102;
  double t1131;
  double t1198;
  double t1199;
  double t1262;
  double t1195;
  double t1196;
  double t1264;
  double t1223;
  double t1227;
  double t1235;
  double t1241;
  double t1259;
  double t1260;
  double t1276;
  double t1277;
  double t1278;
  double t1279;
  double t1303;
  double t1332;
  double t1337;
  double t1339;
  double t1340;
  double t1341;
  double t1343;
  double t1350;
  double t1351;
  double t1346;
  double t1269;
  double t1344;
  double t1356;
  double t1135;
  double t1190;
  double t1197;
  double t1200;
  double t1202;
  double t1263;
  double t1270;
  double t1272;
  double t1273;
  double t1275;
  double t1281;
  double t1282;
  double t1284;
  double t1290;
  double t1294;
  double t1475;
  double t1477;
  double t1478;
  double t1348;
  double t1481;
  double t1482;
  double t1483;
  double t1485;
  double t1487;
  double t1488;
  double t1370;
  double t1465;
  double t1466;
  double t1517;
  double t1519;
  double t1520;
  double t1521;
  double t1523;
  double t1524;
  double t1525;
  double t1526;
  double t1531;
  double t1532;
  double t1533;
  double t1534;
  double t1558;
  double t1559;
  double t1555;
  double t1556;
  double t1570;
  double t1563;
  double t1564;
  double t1565;
  double t1566;
  double t1575;
  double t1576;
  double t1577;
  double t1584;
  double t1585;
  double t1587;
  double t1598;
  double t1590;
  double t1614;
  double t1619;
  double t1617;
  double t1623;
  double t1624;
  double t1646;
  double t1647;
  double t1648;
  double t1651;
  double t1653;
  double t1654;
  double t1656;
  double t1658;
  double t1659;
  double t1660;
  double t1661;
  double t1663;
  double t1665;
  double t1668;
  double t1669;
  double t1693;
  double t1694;
  double t1695;
  double t1696;
  double t1698;
  double t1699;
  double t1700;
  double t1701;
  double t1703;
  double t1704;
  double t1705;
  double t1706;
  double t1725;
  double t1726;
  double t1727;
  double t1730;
  double t1732;
  double t1733;
  double t1735;
  double t1736;
  double t1737;
  double t1739;
  double t1743;
  double t1744;
  double t1747;
  double t1748;
  double t1749;
  double t1790;
  double t1791;
  double t1792;
  double t1795;
  double t1796;
  double t1797;
  double t1798;
  double t1800;
  double t1801;
  double t1802;
  double t1803;
  double t1806;
  double t1807;
  double t1808;
  double t1809;
  double t1557;
  double t1560;
  double t1561;
  double t1562;
  double t1568;
  double t1571;
  double t1572;
  double t1573;
  double t1574;
  double t1579;
  double t1580;
  double t1581;
  double t1582;
  double t1583;
  double t1827;
  double t1828;
  double t1829;
  double t1830;
  double t1832;
  double t1834;
  double t1836;
  double t1592;
  double t1860;
  double t1861;
  double t1607;
  double t1932;
  double t1934;
  double t1935;
  double t1936;
  double t1939;
  double t1941;
  double t1960;
  double t1961;
  double t1963;
  double t1964;
  double t1965;
  double t1966;
  double t1985;
  double t1986;
  double t1987;
  double t1989;
  double t1990;
  double t1991;
  double t1993;
  double t1994;
  double t1996;
  double t1997;
  double t1998;
  double t2018;
  double t2019;
  double t2020;
  double t2023;
  double t2024;
  double t2025;
  double t2026;
  double t2028;
  double t2029;
  double t2030;
  double t2031;
  double t2033;
  double t2034;
  double t2035;
  double t2036;
  double t2054;
  double t2055;
  double t2056;
  double t2057;
  double t2059;
  double t2060;
  double t2061;
  double t2063;
  double t2064;
  t578 = Cos(var1[15]);
  t981 = -1.*t578;
  t1059 = 1. + t981;
  t1119 = Sin(var1[4]);
  t1145 = Cos(var1[17]);
  t1155 = -1.*t1145;
  t1189 = 1. + t1155;
  t1191 = -3.e-6*t1189;
  t1194 = Sin(var1[17]);
  t363 = Cos(var1[4]);
  t501 = Sin(var1[15]);
  t1102 = Cos(var1[5]);
  t1131 = Sin(var1[5]);
  t1198 = 3.e-6*t1194;
  t1199 = t1191 + t1198;
  t1262 = 9.e-13*var1[17];
  t1195 = -3.e-6*t1194;
  t1196 = t1191 + t1195;
  t1264 = -9.e-12*t1189;
  t1223 = -3.e-6*t363*t501;
  t1227 = -3.e-6*t1059*t1102*t1119;
  t1235 = -9.e-12*t1059;
  t1241 = 1. + t1235;
  t1259 = t1241*t1119*t1131;
  t1260 = t1223 + t1227 + t1259;
  t1276 = t363*t501;
  t1277 = -1.*t578*t1102*t1119;
  t1278 = 3.e-6*t1059*t1119*t1131;
  t1279 = t1276 + t1277 + t1278;
  t1303 = -1.000000000009*t1059;
  t1332 = 1. + t1303;
  t1337 = t1332*t363;
  t1339 = t1102*t501*t1119;
  t1340 = 3.e-6*t501*t1119*t1131;
  t1341 = t1337 + t1339 + t1340;
  t1343 = 3.e-6*t1189;
  t1350 = -1.000000000009*t1189;
  t1351 = 1. + t1350;
  t1346 = 9.e-12*t1189;
  t1269 = -1.*t1194;
  t1344 = t1343 + t1195;
  t1356 = t1343 + t1198;
  t1135 = 3.e-7*var1[17];
  t1190 = -1.62e-17*t1189;
  t1197 = 0.2*t1196;
  t1200 = 0.1*t1199;
  t1202 = t1135 + t1190 + t1197 + t1200;
  t1263 = 0.2000000000018*t1189;
  t1270 = t1264 + t1269;
  t1272 = 0.1*t1270;
  t1273 = -9.e-7*t1199;
  t1275 = t1262 + t1263 + t1272 + t1273;
  t1281 = 0.1000000000009*t1189;
  t1282 = -9.e-7*t1196;
  t1284 = t1264 + t1194;
  t1290 = 0.2*t1284;
  t1294 = t1262 + t1281 + t1282 + t1290;
  t1475 = -1.*t1241*t363*t1102;
  t1477 = -3.e-6*t1059*t363*t1131;
  t1478 = t1475 + t1477;
  t1348 = t1346 + t1194;
  t1481 = -3.e-6*t1059*t363*t1102;
  t1482 = -1.*t578*t363*t1131;
  t1483 = t1481 + t1482;
  t1485 = -3.e-6*t363*t1102*t501;
  t1487 = t363*t501*t1131;
  t1488 = t1485 + t1487;
  t1370 = t1346 + t1269;
  t1465 = -1.8e-11*t1189;
  t1466 = 1. + t1465;
  t1517 = -1.*t578*t363*t1102;
  t1519 = -1.000000000009*t501*t1119;
  t1520 = -3.e-6*t578*t363*t1131;
  t1521 = t1517 + t1519 + t1520;
  t1523 = -1.*t363*t1102*t501;
  t1524 = t578*t1119;
  t1525 = -3.e-6*t363*t501*t1131;
  t1526 = t1523 + t1524 + t1525;
  t1531 = 3.e-6*t363*t1102*t501;
  t1532 = -3.e-6*t578*t1119;
  t1533 = 9.e-12*t363*t501*t1131;
  t1534 = t1531 + t1532 + t1533;
  t1558 = 3.e-6*t1145;
  t1559 = t1558 + t1195;
  t1555 = -3.e-6*t1145;
  t1556 = t1555 + t1195;
  t1570 = -9.e-12*t1194;
  t1563 = 3.e-6*t1059*t363*t1102;
  t1564 = -3.e-6*t501*t1119;
  t1565 = -1.*t1241*t363*t1131;
  t1566 = t1563 + t1564 + t1565;
  t1575 = t578*t363*t1102;
  t1576 = t501*t1119;
  t1577 = t1575 + t1576 + t1477;
  t1584 = t1332*t1119;
  t1585 = t1523 + t1584 + t1525;
  t1587 = t1558 + t1198;
  t1598 = t1555 + t1198;
  t1590 = 9.e-12*t1194;
  t1614 = Cos(var1[3]);
  t1619 = Sin(var1[3]);
  t1617 = t1614*t1102*t1119;
  t1623 = -1.*t1619*t1131;
  t1624 = t1617 + t1623;
  t1646 = -1.*t1102*t1619;
  t1647 = -1.*t1614*t1119*t1131;
  t1648 = t1646 + t1647;
  t1651 = 3.e-6*t1614*t363*t501;
  t1653 = 3.e-6*t1059*t1624;
  t1654 = t1241*t1648;
  t1656 = t1651 + t1653 + t1654;
  t1658 = -1.*t1614*t363*t501;
  t1659 = t578*t1624;
  t1660 = 3.e-6*t1059*t1648;
  t1661 = t1658 + t1659 + t1660;
  t1663 = -1.*t1332*t1614*t363;
  t1665 = -1.*t501*t1624;
  t1668 = 3.e-6*t501*t1648;
  t1669 = t1663 + t1665 + t1668;
  t1693 = 3.e-6*t1059*t363*t1102*t1619;
  t1694 = -3.e-6*t501*t1619*t1119;
  t1695 = -1.*t1241*t363*t1619*t1131;
  t1696 = t1693 + t1694 + t1695;
  t1698 = t578*t363*t1102*t1619;
  t1699 = t501*t1619*t1119;
  t1700 = -3.e-6*t1059*t363*t1619*t1131;
  t1701 = t1698 + t1699 + t1700;
  t1703 = -1.*t363*t1102*t501*t1619;
  t1704 = t1332*t1619*t1119;
  t1705 = -3.e-6*t363*t501*t1619*t1131;
  t1706 = t1703 + t1704 + t1705;
  t1725 = -1.*t1102*t1619*t1119;
  t1726 = -1.*t1614*t1131;
  t1727 = t1725 + t1726;
  t1730 = t1614*t1102;
  t1732 = -1.*t1619*t1119*t1131;
  t1733 = t1730 + t1732;
  t1735 = t1241*t1727;
  t1736 = 3.e-6*t1059*t1733;
  t1737 = t1735 + t1736;
  t1739 = 3.e-6*t1059*t1727;
  t1743 = t578*t1733;
  t1744 = t1739 + t1743;
  t1747 = 3.e-6*t501*t1727;
  t1748 = -1.*t501*t1733;
  t1749 = t1747 + t1748;
  t1790 = t1102*t1619*t1119;
  t1791 = t1614*t1131;
  t1792 = t1790 + t1791;
  t1795 = 1.000000000009*t363*t501*t1619;
  t1796 = -1.*t578*t1792;
  t1797 = 3.e-6*t578*t1733;
  t1798 = t1795 + t1796 + t1797;
  t1800 = 3.e-6*t578*t363*t1619;
  t1801 = 3.e-6*t501*t1792;
  t1802 = -9.e-12*t501*t1733;
  t1803 = t1800 + t1801 + t1802;
  t1806 = -1.*t578*t363*t1619;
  t1807 = -1.*t501*t1792;
  t1808 = 3.e-6*t501*t1733;
  t1809 = t1806 + t1807 + t1808;
  t1557 = 0.2*t1556;
  t1560 = 0.1*t1559;
  t1561 = -1.62e-17*t1194;
  t1562 = 3.e-7 + t1557 + t1560 + t1561;
  t1568 = -9.e-7*t1559;
  t1571 = t1155 + t1570;
  t1572 = 0.1*t1571;
  t1573 = 0.2000000000018*t1194;
  t1574 = 9.e-13 + t1568 + t1572 + t1573;
  t1579 = -9.e-7*t1556;
  t1580 = t1145 + t1570;
  t1581 = 0.2*t1580;
  t1582 = 0.1000000000009*t1194;
  t1583 = 9.e-13 + t1579 + t1581 + t1582;
  t1827 = 3.e-6*t363*t501*t1619;
  t1828 = 3.e-6*t1059*t1792;
  t1829 = t1241*t1733;
  t1830 = t1827 + t1828 + t1829;
  t1832 = -1.*t363*t501*t1619;
  t1834 = t578*t1792;
  t1836 = t1832 + t1834 + t1736;
  t1592 = t1155 + t1590;
  t1860 = -1.*t1332*t363*t1619;
  t1861 = t1860 + t1807 + t1808;
  t1607 = t1145 + t1590;
  t1932 = -3.e-6*t1059*t1614*t363*t1102;
  t1934 = 3.e-6*t1614*t501*t1119;
  t1935 = t1241*t1614*t363*t1131;
  t1936 = t1932 + t1934 + t1935;
  t1939 = -1.*t578*t1614*t363*t1102;
  t1941 = -1.*t1614*t501*t1119;
  t1960 = 3.e-6*t1059*t1614*t363*t1131;
  t1961 = t1939 + t1941 + t1960;
  t1963 = t1614*t363*t1102*t501;
  t1964 = -1.*t1332*t1614*t1119;
  t1965 = 3.e-6*t1614*t363*t501*t1131;
  t1966 = t1963 + t1964 + t1965;
  t1985 = t1102*t1619;
  t1986 = t1614*t1119*t1131;
  t1987 = t1985 + t1986;
  t1989 = t1241*t1624;
  t1990 = 3.e-6*t1059*t1987;
  t1991 = t1989 + t1990;
  t1993 = t578*t1987;
  t1994 = t1653 + t1993;
  t1996 = 3.e-6*t501*t1624;
  t1997 = -1.*t501*t1987;
  t1998 = t1996 + t1997;
  t2018 = -1.*t1614*t1102*t1119;
  t2019 = t1619*t1131;
  t2020 = t2018 + t2019;
  t2023 = -1.000000000009*t1614*t363*t501;
  t2024 = -1.*t578*t2020;
  t2025 = 3.e-6*t578*t1987;
  t2026 = t2023 + t2024 + t2025;
  t2028 = -3.e-6*t578*t1614*t363;
  t2029 = 3.e-6*t501*t2020;
  t2030 = -9.e-12*t501*t1987;
  t2031 = t2028 + t2029 + t2030;
  t2033 = t578*t1614*t363;
  t2034 = -1.*t501*t2020;
  t2035 = 3.e-6*t501*t1987;
  t2036 = t2033 + t2034 + t2035;
  t2054 = -3.e-6*t1614*t363*t501;
  t2055 = 3.e-6*t1059*t2020;
  t2056 = t1241*t1987;
  t2057 = t2054 + t2055 + t2056;
  t2059 = t1614*t363*t501;
  t2060 = t578*t2020;
  t2061 = t2059 + t2060 + t1990;
  t2063 = t1332*t1614*t363;
  t2064 = t2063 + t2034 + t2035;
  p_output1[0]=1.;
  p_output1[1]=-0.2000000000018*t1059*t1102*t1119 - 6.000000000054e-7*t1059*t1119*t1131 + t1202*t1260 + t1275*t1279 + t1294*t1341 - 0.3*(t1260*t1344 + t1279*t1348 + t1341*t1351) + 0.2*(t1279*t1351 + t1260*t1356 + t1341*t1370) - 0.099999*(t1279*t1344 + t1341*t1356 + t1260*t1466) - 0.2000000000018*t363*t501;
  p_output1[2]=t1202*t1478 + t1275*t1483 + t1294*t1488 - 0.3*(t1344*t1478 + t1348*t1483 + t1351*t1488) - 0.099999*(t1466*t1478 + t1344*t1483 + t1356*t1488) + 0.2*(t1356*t1478 + t1351*t1483 + t1370*t1488) + 6.000000000054e-7*t1059*t1102*t363 - 0.2000000000018*t1059*t1131*t363;
  p_output1[3]=t1294*t1521 + t1275*t1526 + t1202*t1534 - 0.3*(t1351*t1521 + t1348*t1526 + t1344*t1534) + 0.2*(t1370*t1521 + t1351*t1526 + t1356*t1534) - 0.099999*(t1356*t1521 + t1344*t1526 + t1466*t1534) + 0.2000000000018*t1102*t363*t501 + 6.000000000054e-7*t1131*t363*t501 - 0.2000000000018*t1119*t578;
  p_output1[4]=t1562*t1566 + t1574*t1577 + t1583*t1585 + 0.2*(-1.000000000009*t1194*t1577 + t1566*t1587 + t1585*t1592) - 0.099999*(-1.8e-11*t1194*t1566 + t1585*t1587 + t1577*t1598) - 0.3*(-1.000000000009*t1194*t1585 + t1566*t1598 + t1577*t1607);
  p_output1[5]=-1.;
  p_output1[6]=1.;
  p_output1[7]=0.2000000000018*t1059*t1624 - 6.000000000054e-7*t1059*t1648 + t1202*t1656 + t1275*t1661 + t1294*t1669 - 0.3*(t1344*t1656 + t1348*t1661 + t1351*t1669) - 0.099999*(t1466*t1656 + t1344*t1661 + t1356*t1669) + 0.2*(t1356*t1656 + t1351*t1661 + t1370*t1669) + 0.2000000000018*t1614*t363*t501;
  p_output1[8]=t1202*t1696 + t1275*t1701 + t1294*t1706 - 0.3*(t1344*t1696 + t1348*t1701 + t1351*t1706) - 0.099999*(t1466*t1696 + t1344*t1701 + t1356*t1706) + 0.2*(t1356*t1696 + t1351*t1701 + t1370*t1706) + 0.2000000000018*t1059*t1102*t1619*t363 + 6.000000000054e-7*t1059*t1131*t1619*t363 - 0.2000000000018*t1119*t1619*t501;
  p_output1[9]=-6.000000000054e-7*t1059*t1727 + 0.2000000000018*t1059*t1733 + t1202*t1737 + t1275*t1744 + t1294*t1749 - 0.3*(t1344*t1737 + t1348*t1744 + t1351*t1749) - 0.099999*(t1466*t1737 + t1344*t1744 + t1356*t1749) + 0.2*(t1356*t1737 + t1351*t1744 + t1370*t1749);
  p_output1[10]=t1294*t1798 + t1202*t1803 + t1275*t1809 - 0.099999*(t1356*t1798 + t1466*t1803 + t1344*t1809) - 0.3*(t1351*t1798 + t1344*t1803 + t1348*t1809) + 0.2*(t1370*t1798 + t1356*t1803 + t1351*t1809) - 6.000000000054e-7*t1733*t501 + 0.2000000000018*t1792*t501 + 0.2000000000018*t1619*t363*t578;
  p_output1[11]=t1562*t1830 + t1574*t1836 + t1583*t1861 - 0.3*(t1598*t1830 + t1607*t1836 - 1.000000000009*t1194*t1861) - 0.099999*(-1.8e-11*t1194*t1830 + t1598*t1836 + t1587*t1861) + 0.2*(t1587*t1830 - 1.000000000009*t1194*t1836 + t1592*t1861);
  p_output1[12]=-1.;
  p_output1[13]=1.;
  p_output1[14]=-6.000000000054e-7*t1059*t1733 + 0.2000000000018*t1059*t1792 + t1202*t1830 + t1275*t1836 + t1294*t1861 - 0.3*(t1344*t1830 + t1348*t1836 + t1351*t1861) - 0.099999*(t1466*t1830 + t1344*t1836 + t1356*t1861) + 0.2*(t1356*t1830 + t1351*t1836 + t1370*t1861) + 0.2000000000018*t1619*t363*t501;
  p_output1[15]=t1202*t1936 + t1275*t1961 + t1294*t1966 - 0.3*(t1344*t1936 + t1348*t1961 + t1351*t1966) - 0.099999*(t1466*t1936 + t1344*t1961 + t1356*t1966) + 0.2*(t1356*t1936 + t1351*t1961 + t1370*t1966) - 0.2000000000018*t1059*t1102*t1614*t363 - 6.000000000054e-7*t1059*t1131*t1614*t363 + 0.2000000000018*t1119*t1614*t501;
  p_output1[16]=-6.000000000054e-7*t1059*t1624 + 0.2000000000018*t1059*t1987 + t1202*t1991 + t1275*t1994 + t1294*t1998 - 0.3*(t1344*t1991 + t1348*t1994 + t1351*t1998) - 0.099999*(t1466*t1991 + t1344*t1994 + t1356*t1998) + 0.2*(t1356*t1991 + t1351*t1994 + t1370*t1998);
  p_output1[17]=t1294*t2026 + t1202*t2031 + t1275*t2036 - 0.099999*(t1356*t2026 + t1466*t2031 + t1344*t2036) - 0.3*(t1351*t2026 + t1344*t2031 + t1348*t2036) + 0.2*(t1370*t2026 + t1356*t2031 + t1351*t2036) - 6.000000000054e-7*t1987*t501 + 0.2000000000018*t2020*t501 - 0.2000000000018*t1614*t363*t578;
  p_output1[18]=t1562*t2057 + t1574*t2061 + t1583*t2064 - 0.3*(t1598*t2057 + t1607*t2061 - 1.000000000009*t1194*t2064) - 0.099999*(-1.8e-11*t1194*t2057 + t1598*t2061 + t1587*t2064) + 0.2*(t1587*t2057 - 1.000000000009*t1194*t2061 + t1592*t2064);
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
