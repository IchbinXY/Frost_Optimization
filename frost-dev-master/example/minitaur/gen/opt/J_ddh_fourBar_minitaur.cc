/*
 * Automatically Generated from Mathematica.
 * Wed 29 May 2019 15:05:02 GMT-04:00
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
  double t363;
  double t411;
  double t412;
  double t501;
  double t579;
  double t632;
  double t637;
  double t677;
  double t679;
  double t818;
  double t851;
  double t862;
  double t940;
  double t965;
  double t966;
  double t981;
  double t997;
  double t1008;
  double t430;
  double t555;
  double t563;
  double t578;
  double t789;
  double t790;
  double t894;
  double t946;
  double t950;
  double t954;
  double t1015;
  double t1018;
  double t364;
  double t850;
  double t1063;
  double t1077;
  double t435;
  double t451;
  double t453;
  double t491;
  double t1123;
  double t905;
  double t906;
  double t911;
  double t916;
  double t1191;
  double t1102;
  double t1128;
  double t1131;
  double t1132;
  double t1145;
  double t1194;
  double t1195;
  double t1196;
  double t1205;
  double t1222;
  double t1229;
  double t1231;
  double t1232;
  double t1238;
  double t1252;
  double t1255;
  double t1256;
  double t1257;
  double t1258;
  double t1264;
  double t1269;
  double t1270;
  double t1276;
  double t1282;
  double t1283;
  double t1284;
  double t1285;
  double t1286;
  double t1233;
  double t1241;
  double t1242;
  double t1247;
  double t1261;
  double t1262;
  double t1271;
  double t1279;
  double t1280;
  double t1281;
  double t1289;
  double t1290;
  double t1230;
  double t1265;
  double t1305;
  double t1330;
  double t1234;
  double t1235;
  double t1236;
  double t1237;
  double t1345;
  double t1272;
  double t1273;
  double t1274;
  double t1275;
  double t1462;
  double t1340;
  double t1349;
  double t1350;
  double t1351;
  double t1354;
  double t1465;
  double t1466;
  double t1467;
  double t1476;
  double t1479;
  double t1485;
  double t1487;
  double t1488;
  double t1494;
  double t1501;
  double t1502;
  double t1503;
  double t1504;
  double t1505;
  double t1511;
  double t1513;
  double t1514;
  double t1520;
  double t1526;
  double t1527;
  double t1528;
  double t1529;
  double t1530;
  double t1489;
  double t1498;
  double t1499;
  double t1500;
  double t1508;
  double t1509;
  double t1515;
  double t1523;
  double t1524;
  double t1525;
  double t1533;
  double t1534;
  double t1486;
  double t1512;
  double t1546;
  double t1549;
  double t1490;
  double t1491;
  double t1492;
  double t1493;
  double t1563;
  double t1516;
  double t1517;
  double t1518;
  double t1519;
  double t1577;
  double t1558;
  double t1566;
  double t1567;
  double t1568;
  double t1572;
  double t1580;
  double t1581;
  double t1582;
  double t1591;
  double t1594;
  double t1600;
  double t1603;
  double t1604;
  double t1610;
  double t1617;
  double t1618;
  double t1619;
  double t1620;
  double t1622;
  double t1648;
  double t1650;
  double t1651;
  double t1657;
  double t1663;
  double t1664;
  double t1665;
  double t1666;
  double t1667;
  double t1605;
  double t1613;
  double t1614;
  double t1615;
  double t1625;
  double t1646;
  double t1652;
  double t1660;
  double t1661;
  double t1662;
  double t1670;
  double t1671;
  double t1601;
  double t1649;
  double t1683;
  double t1686;
  double t1606;
  double t1607;
  double t1608;
  double t1609;
  double t1700;
  double t1653;
  double t1654;
  double t1655;
  double t1656;
  double t1714;
  double t1695;
  double t1703;
  double t1704;
  double t1705;
  double t1708;
  double t1717;
  double t1718;
  double t1719;
  double t1728;
  double t1731;
  t363 = Cos(var1[14]);
  t411 = var1[14] + var1[16];
  t412 = Cos(t411);
  t501 = -0.1*var2[16]*t412;
  t579 = Sin(var1[14]);
  t632 = -0.05*t579;
  t637 = Sin(t411);
  t677 = -0.1*t637;
  t679 = t632 + t677;
  t818 = Cos(var1[15]);
  t851 = var1[15] + var1[17];
  t862 = Cos(t851);
  t940 = 0.1*var2[17]*t862;
  t965 = Sin(var1[15]);
  t966 = 0.05*t965;
  t981 = Sin(t851);
  t997 = 0.1*t981;
  t1008 = t966 + t997;
  t430 = 0.1*t412;
  t555 = -0.1*var2[14]*t412;
  t563 = t555 + t501;
  t578 = var2[16]*t563;
  t789 = -0.1*var3[16]*t637;
  t790 = -0.1*var2[16]*t637;
  t894 = -0.1*t862;
  t946 = 0.1*var2[15]*t862;
  t950 = t946 + t940;
  t954 = var2[17]*t950;
  t1015 = 0.1*var3[17]*t981;
  t1018 = 0.1*var2[17]*t981;
  t364 = 0.05*t363;
  t850 = -0.05*t818;
  t1063 = -0.2*var2[16]*t637;
  t1077 = 0.2*var2[17]*t981;
  t435 = -0.05*t363;
  t451 = -0.1*t412;
  t453 = t435 + t451;
  t491 = var2[14]*t453;
  t1123 = 0.1*var2[16]*t637;
  t905 = 0.05*t818;
  t906 = 0.1*t862;
  t911 = t905 + t906;
  t916 = var2[15]*t911;
  t1191 = -0.1*var2[17]*t981;
  t1102 = -0.1*var3[16]*t412;
  t1128 = 0.1*var2[14]*t637;
  t1131 = t1128 + t1123;
  t1132 = var2[16]*t1131;
  t1145 = 0.1*var3[17]*t862;
  t1194 = -0.1*var2[15]*t981;
  t1195 = t1194 + t1191;
  t1196 = var2[17]*t1195;
  t1205 = -0.2*var2[16]*t412;
  t1222 = 0.2*var2[17]*t862;
  t1229 = Cos(var1[6]);
  t1231 = var1[6] + var1[8];
  t1232 = Cos(t1231);
  t1238 = -0.1*var2[8]*t1232;
  t1252 = Sin(var1[6]);
  t1255 = -0.05*t1252;
  t1256 = Sin(t1231);
  t1257 = -0.1*t1256;
  t1258 = t1255 + t1257;
  t1264 = Cos(var1[7]);
  t1269 = var1[9] + var1[7];
  t1270 = Cos(t1269);
  t1276 = 0.1*var2[9]*t1270;
  t1282 = Sin(var1[7]);
  t1283 = 0.05*t1282;
  t1284 = Sin(t1269);
  t1285 = 0.1*t1284;
  t1286 = t1283 + t1285;
  t1233 = 0.1*t1232;
  t1241 = -0.1*var2[6]*t1232;
  t1242 = t1241 + t1238;
  t1247 = var2[8]*t1242;
  t1261 = -0.1*var3[8]*t1256;
  t1262 = -0.1*var2[8]*t1256;
  t1271 = -0.1*t1270;
  t1279 = 0.1*var2[7]*t1270;
  t1280 = t1276 + t1279;
  t1281 = var2[9]*t1280;
  t1289 = 0.1*var3[9]*t1284;
  t1290 = 0.1*var2[9]*t1284;
  t1230 = 0.05*t1229;
  t1265 = -0.05*t1264;
  t1305 = -0.2*var2[8]*t1256;
  t1330 = 0.2*var2[9]*t1284;
  t1234 = -0.05*t1229;
  t1235 = -0.1*t1232;
  t1236 = t1234 + t1235;
  t1237 = var2[6]*t1236;
  t1345 = 0.1*var2[8]*t1256;
  t1272 = 0.05*t1264;
  t1273 = 0.1*t1270;
  t1274 = t1272 + t1273;
  t1275 = var2[7]*t1274;
  t1462 = -0.1*var2[9]*t1284;
  t1340 = -0.1*var3[8]*t1232;
  t1349 = 0.1*var2[6]*t1256;
  t1350 = t1349 + t1345;
  t1351 = var2[8]*t1350;
  t1354 = 0.1*var3[9]*t1270;
  t1465 = -0.1*var2[7]*t1284;
  t1466 = t1462 + t1465;
  t1467 = var2[9]*t1466;
  t1476 = -0.2*var2[8]*t1232;
  t1479 = 0.2*var2[9]*t1270;
  t1485 = Cos(var1[18]);
  t1487 = var1[18] + var1[20];
  t1488 = Cos(t1487);
  t1494 = -0.1*var2[20]*t1488;
  t1501 = Sin(var1[18]);
  t1502 = -0.05*t1501;
  t1503 = Sin(t1487);
  t1504 = -0.1*t1503;
  t1505 = t1502 + t1504;
  t1511 = Cos(var1[19]);
  t1513 = var1[19] + var1[21];
  t1514 = Cos(t1513);
  t1520 = 0.1*var2[21]*t1514;
  t1526 = Sin(var1[19]);
  t1527 = 0.05*t1526;
  t1528 = Sin(t1513);
  t1529 = 0.1*t1528;
  t1530 = t1527 + t1529;
  t1489 = 0.1*t1488;
  t1498 = -0.1*var2[18]*t1488;
  t1499 = t1498 + t1494;
  t1500 = var2[20]*t1499;
  t1508 = -0.1*var3[20]*t1503;
  t1509 = -0.1*var2[20]*t1503;
  t1515 = -0.1*t1514;
  t1523 = 0.1*var2[19]*t1514;
  t1524 = t1523 + t1520;
  t1525 = var2[21]*t1524;
  t1533 = 0.1*var3[21]*t1528;
  t1534 = 0.1*var2[21]*t1528;
  t1486 = 0.05*t1485;
  t1512 = -0.05*t1511;
  t1546 = -0.2*var2[20]*t1503;
  t1549 = 0.2*var2[21]*t1528;
  t1490 = -0.05*t1485;
  t1491 = -0.1*t1488;
  t1492 = t1490 + t1491;
  t1493 = var2[18]*t1492;
  t1563 = 0.1*var2[20]*t1503;
  t1516 = 0.05*t1511;
  t1517 = 0.1*t1514;
  t1518 = t1516 + t1517;
  t1519 = var2[19]*t1518;
  t1577 = -0.1*var2[21]*t1528;
  t1558 = -0.1*var3[20]*t1488;
  t1566 = 0.1*var2[18]*t1503;
  t1567 = t1566 + t1563;
  t1568 = var2[20]*t1567;
  t1572 = 0.1*var3[21]*t1514;
  t1580 = -0.1*var2[19]*t1528;
  t1581 = t1580 + t1577;
  t1582 = var2[21]*t1581;
  t1591 = -0.2*var2[20]*t1488;
  t1594 = 0.2*var2[21]*t1514;
  t1600 = Cos(var1[10]);
  t1603 = var1[10] + var1[12];
  t1604 = Cos(t1603);
  t1610 = -0.1*var2[12]*t1604;
  t1617 = Sin(var1[10]);
  t1618 = -0.05*t1617;
  t1619 = Sin(t1603);
  t1620 = -0.1*t1619;
  t1622 = t1618 + t1620;
  t1648 = Cos(var1[11]);
  t1650 = var1[11] + var1[13];
  t1651 = Cos(t1650);
  t1657 = 0.1*var2[13]*t1651;
  t1663 = Sin(var1[11]);
  t1664 = 0.05*t1663;
  t1665 = Sin(t1650);
  t1666 = 0.1*t1665;
  t1667 = t1664 + t1666;
  t1605 = 0.1*t1604;
  t1613 = -0.1*var2[10]*t1604;
  t1614 = t1613 + t1610;
  t1615 = var2[12]*t1614;
  t1625 = -0.1*var3[12]*t1619;
  t1646 = -0.1*var2[12]*t1619;
  t1652 = -0.1*t1651;
  t1660 = 0.1*var2[11]*t1651;
  t1661 = t1660 + t1657;
  t1662 = var2[13]*t1661;
  t1670 = 0.1*var3[13]*t1665;
  t1671 = 0.1*var2[13]*t1665;
  t1601 = 0.05*t1600;
  t1649 = -0.05*t1648;
  t1683 = -0.2*var2[12]*t1619;
  t1686 = 0.2*var2[13]*t1665;
  t1606 = -0.05*t1600;
  t1607 = -0.1*t1604;
  t1608 = t1606 + t1607;
  t1609 = var2[10]*t1608;
  t1700 = 0.1*var2[12]*t1619;
  t1653 = 0.05*t1648;
  t1654 = 0.1*t1651;
  t1655 = t1653 + t1654;
  t1656 = var2[11]*t1655;
  t1714 = -0.1*var2[13]*t1665;
  t1695 = -0.1*var3[12]*t1604;
  t1703 = 0.1*var2[10]*t1619;
  t1704 = t1703 + t1700;
  t1705 = var2[12]*t1704;
  t1708 = 0.1*var3[13]*t1651;
  t1717 = -0.1*var2[11]*t1665;
  t1718 = t1717 + t1714;
  t1719 = var2[13]*t1718;
  t1728 = -0.2*var2[12]*t1604;
  t1731 = 0.2*var2[13]*t1651;
  p_output1[0]=t364 + t430 + t578 + t789 + t790 + (t491 + t501)*var2[14] + t679*var2[14] + t679*var3[14];
  p_output1[1]=t1015 + t1018 + t850 + t894 + t954 + t1008*var2[15] + (t916 + t940)*var2[15] + t1008*var3[15];
  p_output1[2]=t430 + t578 + t789 + t790 + t563*var2[14] - 0.1*t637*var2[14] - 0.1*t637*var3[14];
  p_output1[3]=t1015 + t1018 + t894 + t954 + t950*var2[15] + 0.1*t981*var2[15] + 0.1*t981*var3[15];
  p_output1[4]=t1063 + t364 + t430 + 2.*t679*var2[14];
  p_output1[5]=t1077 + t850 + t894 + 2.*t1008*var2[15];
  p_output1[6]=t1063 + t430 - 0.2*t637*var2[14];
  p_output1[7]=t1077 + t894 + 0.2*t981*var2[15];
  p_output1[8]=t364 + t430;
  p_output1[9]=t850 + t894;
  p_output1[10]=t430;
  p_output1[11]=t894;
  p_output1[12]=-1.;
  p_output1[13]=t1102 + t1132 + t491 + t501 + t632 + t677 + var2[14]*(t1123 + (0.05*t579 + 0.1*t637)*var2[14]) + t453*var3[14];
  p_output1[14]=t1145 + t1196 + t916 + t940 + t966 + t997 + var2[15]*(t1191 + (-0.05*t965 - 0.1*t981)*var2[15]) + t911*var3[15];
  p_output1[15]=t1102 + t1132 + t501 + t555 + t677 + t1131*var2[14] - 0.1*t412*var3[14];
  p_output1[16]=t1145 + t1196 + t940 + t946 + t997 + t1195*var2[15] + 0.1*t862*var3[15];
  p_output1[17]=t1205 + t632 + t677 + 2.*t453*var2[14];
  p_output1[18]=t1222 + t966 + t997 + 2.*t911*var2[15];
  p_output1[19]=t1205 + t677 - 0.2*t412*var2[14];
  p_output1[20]=t1222 + t997 + 0.2*t862*var2[15];
  p_output1[21]=t679;
  p_output1[22]=t1008;
  p_output1[23]=t677;
  p_output1[24]=t997;
  p_output1[25]=-1.;
  p_output1[26]=t1230 + t1233 + t1247 + t1261 + t1262 + (t1237 + t1238)*var2[6] + t1258*var2[6] + t1258*var3[6];
  p_output1[27]=t1265 + t1271 + t1281 + t1289 + t1290 + (t1275 + t1276)*var2[7] + t1286*var2[7] + t1286*var3[7];
  p_output1[28]=t1233 + t1247 + t1261 + t1262 + t1242*var2[6] - 0.1*t1256*var2[6] - 0.1*t1256*var3[6];
  p_output1[29]=t1271 + t1281 + t1289 + t1290 + t1280*var2[7] + 0.1*t1284*var2[7] + 0.1*t1284*var3[7];
  p_output1[30]=t1230 + t1233 + t1305 + 2.*t1258*var2[6];
  p_output1[31]=t1265 + t1271 + t1330 + 2.*t1286*var2[7];
  p_output1[32]=t1233 + t1305 - 0.2*t1256*var2[6];
  p_output1[33]=t1271 + t1330 + 0.2*t1284*var2[7];
  p_output1[34]=t1230 + t1233;
  p_output1[35]=t1265 + t1271;
  p_output1[36]=t1233;
  p_output1[37]=t1271;
  p_output1[38]=-1.;
  p_output1[39]=t1237 + t1238 + t1255 + t1257 + t1340 + t1351 + var2[6]*(t1345 + (0.05*t1252 + 0.1*t1256)*var2[6]) + t1236*var3[6];
  p_output1[40]=t1275 + t1276 + t1283 + t1285 + t1354 + t1467 + var2[7]*(t1462 + (-0.05*t1282 - 0.1*t1284)*var2[7]) + t1274*var3[7];
  p_output1[41]=t1238 + t1241 + t1257 + t1340 + t1351 + t1350*var2[6] - 0.1*t1232*var3[6];
  p_output1[42]=t1276 + t1279 + t1285 + t1354 + t1467 + t1466*var2[7] + 0.1*t1270*var3[7];
  p_output1[43]=t1255 + t1257 + t1476 + 2.*t1236*var2[6];
  p_output1[44]=t1283 + t1285 + t1479 + 2.*t1274*var2[7];
  p_output1[45]=t1257 + t1476 - 0.2*t1232*var2[6];
  p_output1[46]=t1285 + t1479 + 0.2*t1270*var2[7];
  p_output1[47]=t1258;
  p_output1[48]=t1286;
  p_output1[49]=t1257;
  p_output1[50]=t1285;
  p_output1[51]=-1.;
  p_output1[52]=t1486 + t1489 + t1500 + t1508 + t1509 + (t1493 + t1494)*var2[18] + t1505*var2[18] + t1505*var3[18];
  p_output1[53]=t1512 + t1515 + t1525 + t1533 + t1534 + (t1519 + t1520)*var2[19] + t1530*var2[19] + t1530*var3[19];
  p_output1[54]=t1489 + t1500 + t1508 + t1509 + t1499*var2[18] - 0.1*t1503*var2[18] - 0.1*t1503*var3[18];
  p_output1[55]=t1515 + t1525 + t1533 + t1534 + t1524*var2[19] + 0.1*t1528*var2[19] + 0.1*t1528*var3[19];
  p_output1[56]=t1486 + t1489 + t1546 + 2.*t1505*var2[18];
  p_output1[57]=t1512 + t1515 + t1549 + 2.*t1530*var2[19];
  p_output1[58]=t1489 + t1546 - 0.2*t1503*var2[18];
  p_output1[59]=t1515 + t1549 + 0.2*t1528*var2[19];
  p_output1[60]=t1486 + t1489;
  p_output1[61]=t1512 + t1515;
  p_output1[62]=t1489;
  p_output1[63]=t1515;
  p_output1[64]=-1.;
  p_output1[65]=t1493 + t1494 + t1502 + t1504 + t1558 + t1568 + var2[18]*(t1563 + (0.05*t1501 + 0.1*t1503)*var2[18]) + t1492*var3[18];
  p_output1[66]=t1519 + t1520 + t1527 + t1529 + t1572 + t1582 + var2[19]*(t1577 + (-0.05*t1526 - 0.1*t1528)*var2[19]) + t1518*var3[19];
  p_output1[67]=t1494 + t1498 + t1504 + t1558 + t1568 + t1567*var2[18] - 0.1*t1488*var3[18];
  p_output1[68]=t1520 + t1523 + t1529 + t1572 + t1582 + t1581*var2[19] + 0.1*t1514*var3[19];
  p_output1[69]=t1502 + t1504 + t1591 + 2.*t1492*var2[18];
  p_output1[70]=t1527 + t1529 + t1594 + 2.*t1518*var2[19];
  p_output1[71]=t1504 + t1591 - 0.2*t1488*var2[18];
  p_output1[72]=t1529 + t1594 + 0.2*t1514*var2[19];
  p_output1[73]=t1505;
  p_output1[74]=t1530;
  p_output1[75]=t1504;
  p_output1[76]=t1529;
  p_output1[77]=-1.;
  p_output1[78]=t1601 + t1605 + t1615 + t1625 + t1646 + (t1609 + t1610)*var2[10] + t1622*var2[10] + t1622*var3[10];
  p_output1[79]=t1649 + t1652 + t1662 + t1670 + t1671 + (t1656 + t1657)*var2[11] + t1667*var2[11] + t1667*var3[11];
  p_output1[80]=t1605 + t1615 + t1625 + t1646 + t1614*var2[10] - 0.1*t1619*var2[10] - 0.1*t1619*var3[10];
  p_output1[81]=t1652 + t1662 + t1670 + t1671 + t1661*var2[11] + 0.1*t1665*var2[11] + 0.1*t1665*var3[11];
  p_output1[82]=t1601 + t1605 + t1683 + 2.*t1622*var2[10];
  p_output1[83]=t1649 + t1652 + t1686 + 2.*t1667*var2[11];
  p_output1[84]=t1605 + t1683 - 0.2*t1619*var2[10];
  p_output1[85]=t1652 + t1686 + 0.2*t1665*var2[11];
  p_output1[86]=t1601 + t1605;
  p_output1[87]=t1649 + t1652;
  p_output1[88]=t1605;
  p_output1[89]=t1652;
  p_output1[90]=-1.;
  p_output1[91]=t1609 + t1610 + t1618 + t1620 + t1695 + t1705 + var2[10]*(t1700 + (0.05*t1617 + 0.1*t1619)*var2[10]) + t1608*var3[10];
  p_output1[92]=t1656 + t1657 + t1664 + t1666 + t1708 + t1719 + var2[11]*(t1714 + (-0.05*t1663 - 0.1*t1665)*var2[11]) + t1655*var3[11];
  p_output1[93]=t1610 + t1613 + t1620 + t1695 + t1705 + t1704*var2[10] - 0.1*t1604*var3[10];
  p_output1[94]=t1657 + t1660 + t1666 + t1708 + t1719 + t1718*var2[11] + 0.1*t1651*var3[11];
  p_output1[95]=t1618 + t1620 + t1728 + 2.*t1608*var2[10];
  p_output1[96]=t1664 + t1666 + t1731 + 2.*t1655*var2[11];
  p_output1[97]=t1620 + t1728 - 0.2*t1604*var2[10];
  p_output1[98]=t1666 + t1731 + 0.2*t1651*var2[11];
  p_output1[99]=t1622;
  p_output1[100]=t1667;
  p_output1[101]=t1620;
  p_output1[102]=t1666;
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
