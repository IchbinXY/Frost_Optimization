/*
 * Automatically Generated from Mathematica.
 * Wed 29 May 2019 01:36:59 GMT-04:00
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
  double t487;
  double t32;
  double t522;
  double t527;
  double t741;
  double t942;
  double t810;
  double t966;
  double t1182;
  double t1185;
  double t1188;
  double t1196;
  double t1197;
  double t126;
  double t191;
  double t831;
  double t998;
  double t1010;
  double t1032;
  double t1037;
  double t1042;
  double t1225;
  double t1226;
  double t1262;
  double t1200;
  double t1222;
  double t1276;
  double t1232;
  double t1233;
  double t1234;
  double t1235;
  double t1236;
  double t1237;
  double t1357;
  double t1358;
  double t1359;
  double t1360;
  double t1368;
  double t1369;
  double t1370;
  double t1371;
  double t1372;
  double t1377;
  double t1387;
  double t1428;
  double t1449;
  double t1394;
  double t1295;
  double t1390;
  double t1454;
  double t583;
  double t637;
  double t711;
  double t712;
  double t1152;
  double t1195;
  double t1224;
  double t1229;
  double t1231;
  double t1493;
  double t1495;
  double t1497;
  double t1499;
  double t1500;
  double t1501;
  double t1265;
  double t1351;
  double t1354;
  double t1355;
  double t1356;
  double t1362;
  double t1363;
  double t1365;
  double t1366;
  double t1367;
  double t1503;
  double t1504;
  double t1510;
  double t1527;
  double t1395;
  double t1542;
  double t1544;
  double t1546;
  double t1547;
  double t1552;
  double t1554;
  double t1555;
  double t1565;
  double t1457;
  double t1474;
  double t1479;
  double t1682;
  double t1683;
  double t1684;
  double t1685;
  double t1710;
  double t1711;
  double t1712;
  double t1717;
  double t1731;
  double t1752;
  double t1753;
  double t1754;
  double t1870;
  double t1871;
  double t1873;
  double t1874;
  double t1876;
  double t1904;
  double t1905;
  double t1906;
  double t1909;
  double t1910;
  double t1912;
  double t1913;
  double t1968;
  double t1970;
  double t1984;
  double t1985;
  double t1987;
  double t1989;
  double t1990;
  double t1992;
  double t1995;
  double t1996;
  double t2019;
  double t2020;
  double t2093;
  double t2112;
  double t2131;
  double t2133;
  double t2134;
  double t2135;
  double t2137;
  double t2139;
  double t2140;
  double t2442;
  double t2446;
  double t3066;
  double t5215;
  double t6162;
  double t6478;
  double t6732;
  double t7070;
  double t8621;
  double t8796;
  double t8843;
  double t14128;
  double t14926;
  double t15195;
  double t19434;
  double t19436;
  double t19640;
  double t19647;
  double t19671;
  double t19740;
  double t19746;
  double t19821;
  double t20818;
  double t21230;
  double t21439;
  double t21550;
  double t21639;
  double t21778;
  double t21788;
  double t22095;
  double t22184;
  double t22394;
  double t22435;
  double t22617;
  double t23550;
  double t23590;
  double t23708;
  double t23887;
  double t23917;
  double t23962;
  double t23989;
  double t24027;
  double t24068;
  double t24074;
  double t24075;
  double t24086;
  double t24089;
  double t24115;
  double t24366;
  double t26103;
  double t26109;
  double t26118;
  double t28164;
  double t28184;
  double t28199;
  double t28207;
  double t28262;
  double t28401;
  double t28437;
  double t29560;
  double t29561;
  double t29546;
  double t29549;
  double t30928;
  double t30410;
  double t30865;
  double t30868;
  double t30876;
  double t31057;
  double t31075;
  double t31108;
  double t31166;
  double t31167;
  double t31320;
  double t31671;
  double t31502;
  double t29556;
  double t29574;
  double t29587;
  double t30374;
  double t30912;
  double t30930;
  double t30948;
  double t30957;
  double t30968;
  double t31124;
  double t31148;
  double t31151;
  double t31157;
  double t31158;
  double t35407;
  double t35417;
  double t35418;
  double t35420;
  double t35422;
  double t35425;
  double t35426;
  double t31523;
  double t35428;
  double t35429;
  double t32049;
  t487 = Cos(var1[19]);
  t32 = Cos(var1[3]);
  t522 = -1.*t487;
  t527 = 1. + t522;
  t741 = Cos(var1[5]);
  t942 = Sin(var1[3]);
  t810 = Sin(var1[4]);
  t966 = Sin(var1[5]);
  t1182 = Cos(var1[21]);
  t1185 = -1.*t1182;
  t1188 = 1. + t1185;
  t1196 = -3.e-6*t1188;
  t1197 = Sin(var1[21]);
  t126 = Cos(var1[4]);
  t191 = Sin(var1[19]);
  t831 = t32*t741*t810;
  t998 = -1.*t942*t966;
  t1010 = t831 + t998;
  t1032 = -1.*t741*t942;
  t1037 = -1.*t32*t810*t966;
  t1042 = t1032 + t1037;
  t1225 = 3.e-6*t1197;
  t1226 = t1196 + t1225;
  t1262 = 3.e-13*var1[21];
  t1200 = -3.e-6*t1197;
  t1222 = t1196 + t1200;
  t1276 = -9.e-12*t1188;
  t1232 = 3.e-6*t32*t126*t191;
  t1233 = 3.e-6*t527*t1010;
  t1234 = -9.e-12*t527;
  t1235 = 1. + t1234;
  t1236 = t1235*t1042;
  t1237 = t1232 + t1233 + t1236;
  t1357 = -1.*t32*t126*t191;
  t1358 = t487*t1010;
  t1359 = 3.e-6*t527*t1042;
  t1360 = t1357 + t1358 + t1359;
  t1368 = -1.000000000009*t527;
  t1369 = 1. + t1368;
  t1370 = -1.*t1369*t32*t126;
  t1371 = -1.*t191*t1010;
  t1372 = 3.e-6*t191*t1042;
  t1377 = t1370 + t1371 + t1372;
  t1387 = 3.e-6*t1188;
  t1428 = -1.000000000009*t1188;
  t1449 = 1. + t1428;
  t1394 = 9.e-12*t1188;
  t1295 = -1.*t1197;
  t1390 = t1387 + t1200;
  t1454 = t1387 + t1225;
  t583 = -1.8e-12*t527;
  t637 = -1. + t487;
  t711 = 0.2*t637;
  t712 = t583 + t711;
  t1152 = 1.e-7*var1[21];
  t1195 = 5.4e-18*t1188;
  t1224 = -0.200000000003*t1222;
  t1229 = 0.100000000003*t1226;
  t1231 = t1152 + t1195 + t1224 + t1229;
  t1493 = t741*t942*t810;
  t1495 = t32*t966;
  t1497 = t1493 + t1495;
  t1499 = t32*t741;
  t1500 = -1.*t942*t810*t966;
  t1501 = t1499 + t1500;
  t1265 = -0.2000000000048*t1188;
  t1351 = t1276 + t1295;
  t1354 = 0.100000000003*t1351;
  t1355 = 3.e-7*t1226;
  t1356 = t1262 + t1265 + t1354 + t1355;
  t1362 = 0.1000000000039*t1188;
  t1363 = 3.e-7*t1222;
  t1365 = t1276 + t1197;
  t1366 = -0.200000000003*t1365;
  t1367 = t1262 + t1362 + t1363 + t1366;
  t1503 = 3.e-6*t126*t191*t942;
  t1504 = 3.e-6*t527*t1497;
  t1510 = t1235*t1501;
  t1527 = t1503 + t1504 + t1510;
  t1395 = t1394 + t1197;
  t1542 = -1.*t126*t191*t942;
  t1544 = t487*t1497;
  t1546 = 3.e-6*t527*t1501;
  t1547 = t1542 + t1544 + t1546;
  t1552 = -1.*t1369*t126*t942;
  t1554 = -1.*t191*t1497;
  t1555 = 3.e-6*t191*t1501;
  t1565 = t1552 + t1554 + t1555;
  t1457 = t1394 + t1295;
  t1474 = -1.8e-11*t1188;
  t1479 = 1. + t1474;
  t1682 = -3.e-6*t527*t32*t126*t741;
  t1683 = 3.e-6*t32*t191*t810;
  t1684 = t1235*t32*t126*t966;
  t1685 = t1682 + t1683 + t1684;
  t1710 = -1.*t487*t32*t126*t741;
  t1711 = -1.*t32*t191*t810;
  t1712 = 3.e-6*t527*t32*t126*t966;
  t1717 = t1710 + t1711 + t1712;
  t1731 = t32*t126*t741*t191;
  t1752 = -1.*t1369*t32*t810;
  t1753 = 3.e-6*t32*t126*t191*t966;
  t1754 = t1731 + t1752 + t1753;
  t1870 = 3.e-6*t527*t126*t741*t942;
  t1871 = -3.e-6*t191*t942*t810;
  t1873 = -1.*t1235*t126*t942*t966;
  t1874 = t1870 + t1871 + t1873;
  t1876 = t487*t126*t741*t942;
  t1904 = t191*t942*t810;
  t1905 = -3.e-6*t527*t126*t942*t966;
  t1906 = t1876 + t1904 + t1905;
  t1909 = -1.*t126*t741*t191*t942;
  t1910 = t1369*t942*t810;
  t1912 = -3.e-6*t126*t191*t942*t966;
  t1913 = t1909 + t1910 + t1912;
  t1968 = -3.e-6*t126*t191;
  t1970 = -3.e-6*t527*t741*t810;
  t1984 = t1235*t810*t966;
  t1985 = t1968 + t1970 + t1984;
  t1987 = t126*t191;
  t1989 = -1.*t487*t741*t810;
  t1990 = 3.e-6*t527*t810*t966;
  t1992 = t1987 + t1989 + t1990;
  t1995 = t1369*t126;
  t1996 = t741*t191*t810;
  t2019 = 3.e-6*t191*t810*t966;
  t2020 = t1995 + t1996 + t2019;
  t2093 = -1.*t1235*t126*t741;
  t2112 = -3.e-6*t527*t126*t966;
  t2131 = t2093 + t2112;
  t2133 = -3.e-6*t527*t126*t741;
  t2134 = -1.*t487*t126*t966;
  t2135 = t2133 + t2134;
  t2137 = -3.e-6*t126*t741*t191;
  t2139 = t126*t191*t966;
  t2140 = t2137 + t2139;
  t2442 = t741*t942;
  t2446 = t32*t810*t966;
  t3066 = t2442 + t2446;
  t5215 = t1235*t1010;
  t6162 = 3.e-6*t527*t3066;
  t6478 = t5215 + t6162;
  t6732 = t487*t3066;
  t7070 = t1233 + t6732;
  t8621 = 3.e-6*t191*t1010;
  t8796 = -1.*t191*t3066;
  t8843 = t8621 + t8796;
  t14128 = -1.*t741*t942*t810;
  t14926 = -1.*t32*t966;
  t15195 = t14128 + t14926;
  t19434 = t1235*t15195;
  t19436 = t19434 + t1546;
  t19640 = 3.e-6*t527*t15195;
  t19647 = t487*t1501;
  t19671 = t19640 + t19647;
  t19740 = 3.e-6*t191*t15195;
  t19746 = -1.*t191*t1501;
  t19821 = t19740 + t19746;
  t20818 = -1.*t487*t126*t741;
  t21230 = -1.000000000009*t191*t810;
  t21439 = -3.e-6*t487*t126*t966;
  t21550 = t20818 + t21230 + t21439;
  t21639 = -1.*t126*t741*t191;
  t21778 = t487*t810;
  t21788 = -3.e-6*t126*t191*t966;
  t22095 = t21639 + t21778 + t21788;
  t22184 = 3.e-6*t126*t741*t191;
  t22394 = -3.e-6*t487*t810;
  t22435 = 9.e-12*t126*t191*t966;
  t22617 = t22184 + t22394 + t22435;
  t23550 = -1.*t32*t741*t810;
  t23590 = t942*t966;
  t23708 = t23550 + t23590;
  t23887 = -1.000000000009*t32*t126*t191;
  t23917 = -1.*t487*t23708;
  t23962 = 3.e-6*t487*t3066;
  t23989 = t23887 + t23917 + t23962;
  t24027 = -3.e-6*t487*t32*t126;
  t24068 = 3.e-6*t191*t23708;
  t24074 = -9.e-12*t191*t3066;
  t24075 = t24027 + t24068 + t24074;
  t24086 = t487*t32*t126;
  t24089 = -1.*t191*t23708;
  t24115 = 3.e-6*t191*t3066;
  t24366 = t24086 + t24089 + t24115;
  t26103 = 1.000000000009*t126*t191*t942;
  t26109 = -1.*t487*t1497;
  t26118 = 3.e-6*t487*t1501;
  t28164 = t26103 + t26109 + t26118;
  t28184 = 3.e-6*t487*t126*t942;
  t28199 = 3.e-6*t191*t1497;
  t28207 = -9.e-12*t191*t1501;
  t28262 = t28184 + t28199 + t28207;
  t28401 = -1.*t487*t126*t942;
  t28437 = t28401 + t1554 + t1555;
  t29560 = 3.e-6*t1182;
  t29561 = t29560 + t1200;
  t29546 = -3.e-6*t1182;
  t29549 = t29546 + t1200;
  t30928 = -9.e-12*t1197;
  t30410 = 3.e-6*t527*t126*t741;
  t30865 = -3.e-6*t191*t810;
  t30868 = -1.*t1235*t126*t966;
  t30876 = t30410 + t30865 + t30868;
  t31057 = t487*t126*t741;
  t31075 = t191*t810;
  t31108 = t31057 + t31075 + t2112;
  t31166 = t1369*t810;
  t31167 = t21639 + t31166 + t21788;
  t31320 = t29560 + t1225;
  t31671 = t29546 + t1225;
  t31502 = 9.e-12*t1197;
  t29556 = -0.200000000003*t29549;
  t29574 = 0.100000000003*t29561;
  t29587 = 5.4e-18*t1197;
  t30374 = 1.e-7 + t29556 + t29574 + t29587;
  t30912 = 3.e-7*t29561;
  t30930 = t1185 + t30928;
  t30948 = 0.100000000003*t30930;
  t30957 = -0.2000000000048*t1197;
  t30968 = 3.e-13 + t30912 + t30948 + t30957;
  t31124 = 3.e-7*t29549;
  t31148 = t1182 + t30928;
  t31151 = -0.200000000003*t31148;
  t31157 = 0.1000000000039*t1197;
  t31158 = 3.e-13 + t31124 + t31151 + t31157;
  t35407 = -3.e-6*t32*t126*t191;
  t35417 = 3.e-6*t527*t23708;
  t35418 = t1235*t3066;
  t35420 = t35407 + t35417 + t35418;
  t35422 = t32*t126*t191;
  t35425 = t487*t23708;
  t35426 = t35422 + t35425 + t6162;
  t31523 = t1185 + t31502;
  t35428 = t1369*t32*t126;
  t35429 = t35428 + t24089 + t24115;
  t32049 = t1182 + t31502;
  p_output1[0]=var2[0];
  p_output1[1]=var2[1];
  p_output1[2]=var2[2];
  p_output1[3]=(t1231*t1237 + t1356*t1360 + t1367*t1377 - 0.3*(t1237*t1390 + t1360*t1395 + t1377*t1449) + 0.2*(-1.*t1360*t1449 - 1.*t1237*t1454 - 1.*t1377*t1457) - 0.099999*(t1360*t1390 + t1377*t1454 + t1237*t1479) - 0.2000000000018*t126*t191*t32 + 6.000000000054e-7*t1042*t527 + t1010*t712)*var2[1] + (t1231*t1527 + t1356*t1547 + t1367*t1565 - 0.3*(t1390*t1527 + t1395*t1547 + t1449*t1565) - 0.099999*(t1479*t1527 + t1390*t1547 + t1454*t1565) + 0.2*(-1.*t1454*t1527 - 1.*t1449*t1547 - 1.*t1457*t1565) + 6.000000000054e-7*t1501*t527 + t1497*t712 - 0.2000000000018*t126*t191*t942)*var2[2];
  p_output1[4]=(0.2000000000018*t126*t191 + t1231*t1985 + t1356*t1992 + t1367*t2020 - 0.3*(t1390*t1985 + t1395*t1992 + t1449*t2020) - 0.099999*(t1479*t1985 + t1390*t1992 + t1454*t2020) + 0.2*(-1.*t1454*t1985 - 1.*t1449*t1992 - 1.*t1457*t2020) - 1.*t712*t741*t810 + 6.000000000054e-7*t527*t810*t966)*var2[0] + (t1231*t1874 + t1356*t1906 + t1367*t1913 - 0.3*(t1390*t1874 + t1395*t1906 + t1449*t1913) - 0.099999*(t1479*t1874 + t1390*t1906 + t1454*t1913) + 0.2*(-1.*t1454*t1874 - 1.*t1449*t1906 - 1.*t1457*t1913) + t126*t712*t741*t942 + 0.2000000000018*t191*t810*t942 - 6.000000000054e-7*t126*t527*t942*t966)*var2[1] + (t1231*t1685 + t1356*t1717 + t1367*t1754 - 0.3*(t1390*t1685 + t1395*t1717 + t1449*t1754) - 0.099999*(t1479*t1685 + t1390*t1717 + t1454*t1754) + 0.2*(-1.*t1454*t1685 - 1.*t1449*t1717 - 1.*t1457*t1754) - 1.*t126*t32*t712*t741 - 0.2000000000018*t191*t32*t810 + 6.000000000054e-7*t126*t32*t527*t966)*var2[2];
  p_output1[5]=(t1231*t2131 + t1356*t2135 + t1367*t2140 - 0.3*(t1390*t2131 + t1395*t2135 + t1449*t2140) - 0.099999*(t1479*t2131 + t1390*t2135 + t1454*t2140) + 0.2*(-1.*t1454*t2131 - 1.*t1449*t2135 - 1.*t1457*t2140) - 6.000000000054e-7*t126*t527*t741 - 1.*t126*t712*t966)*var2[0] + (t1231*t19436 + t1356*t19671 + t1367*t19821 - 0.3*(t1390*t19436 + t1395*t19671 + t1449*t19821) - 0.099999*(t1479*t19436 + t1390*t19671 + t1454*t19821) + 0.2*(-1.*t1454*t19436 - 1.*t1449*t19671 - 1.*t1457*t19821) + 6.000000000054e-7*t15195*t527 + t1501*t712)*var2[1] + (6.000000000054e-7*t1010*t527 + t1231*t6478 + t1356*t7070 + t3066*t712 + t1367*t8843 - 0.3*(t1390*t6478 + t1395*t7070 + t1449*t8843) - 0.099999*(t1479*t6478 + t1390*t7070 + t1454*t8843) + 0.2*(-1.*t1454*t6478 - 1.*t1449*t7070 - 1.*t1457*t8843))*var2[2];
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=0;
  p_output1[19]=(t1367*t21550 + t1356*t22095 + t1231*t22617 - 0.3*(t1449*t21550 + t1395*t22095 + t1390*t22617) + 0.2*(-1.*t1457*t21550 - 1.*t1449*t22095 - 1.*t1454*t22617) - 0.099999*(t1454*t21550 + t1390*t22095 + t1479*t22617) - 0.2000000000018*t126*t191*t741 + 0.2000000000018*t487*t810 - 6.000000000054e-7*t126*t191*t966)*var2[0] + (-0.2000000000018*t1497*t191 + 6.000000000054e-7*t1501*t191 + t1367*t28164 + t1231*t28262 + t1356*t28437 - 0.099999*(t1454*t28164 + t1479*t28262 + t1390*t28437) - 0.3*(t1449*t28164 + t1390*t28262 + t1395*t28437) + 0.2*(-1.*t1457*t28164 - 1.*t1454*t28262 - 1.*t1449*t28437) - 0.2000000000018*t126*t487*t942)*var2[1] + (-0.2000000000018*t191*t23708 + t1367*t23989 + t1231*t24075 + t1356*t24366 - 0.099999*(t1454*t23989 + t1479*t24075 + t1390*t24366) - 0.3*(t1449*t23989 + t1390*t24075 + t1395*t24366) + 0.2*(-1.*t1457*t23989 - 1.*t1454*t24075 - 1.*t1449*t24366) + 6.000000000054e-7*t191*t3066 + 0.2000000000018*t126*t32*t487)*var2[2];
  p_output1[20]=0;
  p_output1[21]=(t30374*t30876 + t30968*t31108 + t31158*t31167 + 0.2*(1.000000000009*t1197*t31108 - 1.*t30876*t31320 - 1.*t31167*t31523) - 0.099999*(-1.8e-11*t1197*t30876 + t31167*t31320 + t31108*t31671) - 0.3*(-1.000000000009*t1197*t31167 + t30876*t31671 + t31108*t32049))*var2[0] + (t1527*t30374 + t1547*t30968 + t1565*t31158 + 0.2*(1.000000000009*t1197*t1547 - 1.*t1527*t31320 - 1.*t1565*t31523) - 0.099999*(-1.8e-11*t1197*t1527 + t1565*t31320 + t1547*t31671) - 0.3*(-1.000000000009*t1197*t1565 + t1527*t31671 + t1547*t32049))*var2[1] + (t30374*t35420 + t30968*t35426 + t31158*t35429 - 0.3*(t31671*t35420 + t32049*t35426 - 1.000000000009*t1197*t35429) - 0.099999*(-1.8e-11*t1197*t35420 + t31671*t35426 + t31320*t35429) + 0.2*(-1.*t31320*t35420 + 1.000000000009*t1197*t35426 - 1.*t31523*t35429))*var2[2];
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

#include "fRightBackFoot_vec_BackStance.hh"

namespace BackStance
{

void fRightBackFoot_vec_BackStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
