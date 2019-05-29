/*
 * Automatically Generated from Mathematica.
 * Tue 28 May 2019 22:30:09 GMT-04:00
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
  double t428;
  double t852;
  double t877;
  double t1625;
  double t1630;
  double t1631;
  double t1641;
  double t1579;
  double t1582;
  double t1645;
  double t1658;
  double t1667;
  double t1688;
  double t457;
  double t1075;
  double t1806;
  double t1647;
  double t1669;
  double t1671;
  double t1676;
  double t1691;
  double t1692;
  double t1827;
  double t1836;
  double t1872;
  double t1882;
  double t1791;
  double t1928;
  double t1932;
  double t1933;
  double t1937;
  double t1963;
  double t1973;
  double t1983;
  double t1988;
  double t2011;
  double t2000;
  double t2215;
  double t2212;
  double t2238;
  double t2219;
  double t2228;
  double t2437;
  double t2297;
  double t2303;
  double t2320;
  double t2382;
  double t2512;
  double t2453;
  double t2456;
  double t2478;
  double t2479;
  double t2480;
  double t2481;
  double t2623;
  double t2651;
  double t2418;
  double t2637;
  double t2642;
  double t2595;
  double t2459;
  double t2469;
  double t2470;
  double t2472;
  double t2475;
  double t2414;
  double t2420;
  double t2424;
  double t2443;
  double t2450;
  double t2217;
  double t2230;
  double t2240;
  double t2242;
  double t2244;
  double t2790;
  double t2794;
  double t2652;
  double t2954;
  double t2955;
  double t2980;
  double t3011;
  double t3014;
  double t3017;
  double t2676;
  double t2628;
  double t2630;
  double t3249;
  double t3289;
  double t3307;
  double t3317;
  double t3323;
  double t3325;
  double t3333;
  double t3336;
  double t3391;
  double t3402;
  double t3407;
  double t3408;
  double t3962;
  double t3979;
  double t3990;
  double t3991;
  double t4551;
  double t4596;
  double t4688;
  double t4951;
  double t5266;
  double t5485;
  double t5486;
  double t5496;
  double t5505;
  double t6183;
  double t6199;
  double t6202;
  double t6203;
  double t6205;
  double t6206;
  double t6207;
  double t6209;
  double t6210;
  double t6211;
  double t6212;
  double t6214;
  double t6215;
  double t6219;
  double t6220;
  double t6245;
  double t6253;
  double t6254;
  double t6255;
  double t6303;
  double t6328;
  double t6329;
  double t6337;
  double t6341;
  double t6342;
  double t6344;
  double t6345;
  double t6346;
  double t6348;
  double t6349;
  double t6350;
  double t6352;
  double t6354;
  double t6355;
  double t1275;
  double t1598;
  double t1619;
  double t1621;
  double t1769;
  double t1810;
  double t1811;
  double t1813;
  double t1822;
  double t6437;
  double t6439;
  double t6440;
  double t1919;
  double t1923;
  double t1924;
  double t1925;
  double t1926;
  double t6431;
  double t6442;
  double t6446;
  double t6447;
  double t6465;
  double t6468;
  double t6472;
  double t2001;
  double t6475;
  double t6477;
  double t6482;
  double t6484;
  double t2120;
  double t6549;
  double t6550;
  double t6554;
  double t6556;
  double t6565;
  double t6566;
  double t6567;
  double t6572;
  double t6574;
  double t6578;
  double t6654;
  double t6657;
  double t6659;
  double t6660;
  double t6662;
  double t6663;
  double t6664;
  double t6665;
  double t6667;
  double t6668;
  double t6669;
  double t6670;
  double t6740;
  double t6746;
  double t6751;
  double t6754;
  double t6755;
  double t6761;
  double t6764;
  double t6766;
  double t6769;
  double t6771;
  double t6772;
  double t6829;
  double t6844;
  double t6849;
  double t6819;
  double t6850;
  double t6870;
  double t6873;
  double t6881;
  double t6882;
  double t6885;
  double t6891;
  double t6893;
  double t6898;
  double t6900;
  double t6960;
  double t6962;
  double t6963;
  double t6965;
  double t6967;
  double t6968;
  double t6970;
  double t6971;
  double t6973;
  double t6975;
  t428 = Cos(var1[17]);
  t852 = Sin(var1[17]);
  t877 = -3.e-6*t852;
  t1625 = Cos(var1[15]);
  t1630 = -1.*t1625;
  t1631 = 1. + t1630;
  t1641 = Cos(var1[4]);
  t1579 = 3.e-6*t428;
  t1582 = t1579 + t877;
  t1645 = Cos(var1[5]);
  t1658 = Sin(var1[15]);
  t1667 = Sin(var1[4]);
  t1688 = Sin(var1[5]);
  t457 = -3.e-6*t428;
  t1075 = t457 + t877;
  t1806 = -9.e-12*t852;
  t1647 = 3.e-6*t1631*t1641*t1645;
  t1669 = -3.e-6*t1658*t1667;
  t1671 = -9.e-12*t1631;
  t1676 = 1. + t1671;
  t1691 = -1.*t1676*t1641*t1688;
  t1692 = t1647 + t1669 + t1691;
  t1827 = t1625*t1641*t1645;
  t1836 = t1658*t1667;
  t1872 = -3.e-6*t1631*t1641*t1688;
  t1882 = t1827 + t1836 + t1872;
  t1791 = -1.*t428;
  t1928 = -1.*t1641*t1645*t1658;
  t1932 = -1.000000000009*t1631;
  t1933 = 1. + t1932;
  t1937 = t1933*t1667;
  t1963 = -3.e-6*t1641*t1658*t1688;
  t1973 = t1928 + t1937 + t1963;
  t1983 = 3.e-6*t852;
  t1988 = t1579 + t1983;
  t2011 = t457 + t1983;
  t2000 = 9.e-12*t852;
  t2215 = 1. + t1791;
  t2212 = 9.e-13*var1[17];
  t2238 = -9.e-12*t2215;
  t2219 = -3.e-6*t2215;
  t2228 = t2219 + t877;
  t2437 = t2219 + t1983;
  t2297 = -1.*t1625*t1641*t1645;
  t2303 = -1.000000000009*t1658*t1667;
  t2320 = -3.e-6*t1625*t1641*t1688;
  t2382 = t2297 + t2303 + t2320;
  t2512 = 3.e-6*t2215;
  t2453 = t1625*t1667;
  t2456 = t1928 + t2453 + t1963;
  t2478 = 3.e-6*t1641*t1645*t1658;
  t2479 = -3.e-6*t1625*t1667;
  t2480 = 9.e-12*t1641*t1658*t1688;
  t2481 = t2478 + t2479 + t2480;
  t2623 = t2512 + t877;
  t2651 = 9.e-12*t2215;
  t2418 = -1.*t852;
  t2637 = -1.000000000009*t2215;
  t2642 = 1. + t2637;
  t2595 = t2512 + t1983;
  t2459 = 3.e-7*var1[17];
  t2469 = -1.62e-17*t2215;
  t2470 = 0.2*t2228;
  t2472 = 0.1*t2437;
  t2475 = t2459 + t2469 + t2470 + t2472;
  t2414 = 0.2000000000018*t2215;
  t2420 = t2238 + t2418;
  t2424 = 0.1*t2420;
  t2443 = -9.e-7*t2437;
  t2450 = t2212 + t2414 + t2424 + t2443;
  t2217 = 0.1000000000009*t2215;
  t2230 = -9.e-7*t2228;
  t2240 = t2238 + t852;
  t2242 = 0.2*t2240;
  t2244 = t2212 + t2217 + t2230 + t2242;
  t2790 = -1.*t1676*t1641*t1645;
  t2794 = t2790 + t1872;
  t2652 = t2651 + t852;
  t2954 = -3.e-6*t1631*t1641*t1645;
  t2955 = -1.*t1625*t1641*t1688;
  t2980 = t2954 + t2955;
  t3011 = -3.e-6*t1641*t1645*t1658;
  t3014 = t1641*t1658*t1688;
  t3017 = t3011 + t3014;
  t2676 = t2651 + t2418;
  t2628 = -1.8e-11*t2215;
  t2630 = 1. + t2628;
  t3249 = -3.e-6*t1641*t1658;
  t3289 = -3.e-6*t1631*t1645*t1667;
  t3307 = t1676*t1667*t1688;
  t3317 = t3249 + t3289 + t3307;
  t3323 = t1641*t1658;
  t3325 = -1.*t1625*t1645*t1667;
  t3333 = 3.e-6*t1631*t1667*t1688;
  t3336 = t3323 + t3325 + t3333;
  t3391 = t1933*t1641;
  t3402 = t1645*t1658*t1667;
  t3407 = 3.e-6*t1658*t1667*t1688;
  t3408 = t3391 + t3402 + t3407;
  t3962 = Sin(var1[3]);
  t3979 = 3.e-6*t1631*t1641*t1645*t3962;
  t3990 = -3.e-6*t1658*t3962*t1667;
  t3991 = -1.*t1676*t1641*t3962*t1688;
  t4551 = t3979 + t3990 + t3991;
  t4596 = t1625*t1641*t1645*t3962;
  t4688 = t1658*t3962*t1667;
  t4951 = -3.e-6*t1631*t1641*t3962*t1688;
  t5266 = t4596 + t4688 + t4951;
  t5485 = -1.*t1641*t1645*t1658*t3962;
  t5486 = t1933*t3962*t1667;
  t5496 = -3.e-6*t1641*t1658*t3962*t1688;
  t5505 = t5485 + t5486 + t5496;
  t6183 = Cos(var1[3]);
  t6199 = t6183*t1645*t1667;
  t6202 = -1.*t3962*t1688;
  t6203 = t6199 + t6202;
  t6205 = -1.*t1645*t3962;
  t6206 = -1.*t6183*t1667*t1688;
  t6207 = t6205 + t6206;
  t6209 = 3.e-6*t6183*t1641*t1658;
  t6210 = 3.e-6*t1631*t6203;
  t6211 = t1676*t6207;
  t6212 = t6209 + t6210 + t6211;
  t6214 = -1.*t6183*t1641*t1658;
  t6215 = t1625*t6203;
  t6219 = 3.e-6*t1631*t6207;
  t6220 = t6214 + t6215 + t6219;
  t6245 = -1.*t1933*t6183*t1641;
  t6253 = -1.*t1658*t6203;
  t6254 = 3.e-6*t1658*t6207;
  t6255 = t6245 + t6253 + t6254;
  t6303 = -1.*t1645*t3962*t1667;
  t6328 = -1.*t6183*t1688;
  t6329 = t6303 + t6328;
  t6337 = t6183*t1645;
  t6341 = -1.*t3962*t1667*t1688;
  t6342 = t6337 + t6341;
  t6344 = t1676*t6329;
  t6345 = 3.e-6*t1631*t6342;
  t6346 = t6344 + t6345;
  t6348 = 3.e-6*t1631*t6329;
  t6349 = t1625*t6342;
  t6350 = t6348 + t6349;
  t6352 = 3.e-6*t1658*t6329;
  t6354 = -1.*t1658*t6342;
  t6355 = t6352 + t6354;
  t1275 = 0.2*t1075;
  t1598 = 0.1*t1582;
  t1619 = -1.62e-17*t852;
  t1621 = 3.e-7 + t1275 + t1598 + t1619;
  t1769 = -9.e-7*t1582;
  t1810 = t1791 + t1806;
  t1811 = 0.1*t1810;
  t1813 = 0.2000000000018*t852;
  t1822 = 9.e-13 + t1769 + t1811 + t1813;
  t6437 = t1645*t3962*t1667;
  t6439 = t6183*t1688;
  t6440 = t6437 + t6439;
  t1919 = -9.e-7*t1075;
  t1923 = t428 + t1806;
  t1924 = 0.2*t1923;
  t1925 = 0.1000000000009*t852;
  t1926 = 9.e-13 + t1919 + t1924 + t1925;
  t6431 = 3.e-6*t1641*t1658*t3962;
  t6442 = 3.e-6*t1631*t6440;
  t6446 = t1676*t6342;
  t6447 = t6431 + t6442 + t6446;
  t6465 = -1.*t1641*t1658*t3962;
  t6468 = t1625*t6440;
  t6472 = t6465 + t6468 + t6345;
  t2001 = t1791 + t2000;
  t6475 = -1.*t1933*t1641*t3962;
  t6477 = -1.*t1658*t6440;
  t6482 = 3.e-6*t1658*t6342;
  t6484 = t6475 + t6477 + t6482;
  t2120 = t428 + t2000;
  t6549 = 1.000000000009*t1641*t1658*t3962;
  t6550 = -1.*t1625*t6440;
  t6554 = 3.e-6*t1625*t6342;
  t6556 = t6549 + t6550 + t6554;
  t6565 = 3.e-6*t1625*t1641*t3962;
  t6566 = 3.e-6*t1658*t6440;
  t6567 = -9.e-12*t1658*t6342;
  t6572 = t6565 + t6566 + t6567;
  t6574 = -1.*t1625*t1641*t3962;
  t6578 = t6574 + t6477 + t6482;
  t6654 = -3.e-6*t1631*t6183*t1641*t1645;
  t6657 = 3.e-6*t6183*t1658*t1667;
  t6659 = t1676*t6183*t1641*t1688;
  t6660 = t6654 + t6657 + t6659;
  t6662 = -1.*t1625*t6183*t1641*t1645;
  t6663 = -1.*t6183*t1658*t1667;
  t6664 = 3.e-6*t1631*t6183*t1641*t1688;
  t6665 = t6662 + t6663 + t6664;
  t6667 = t6183*t1641*t1645*t1658;
  t6668 = -1.*t1933*t6183*t1667;
  t6669 = 3.e-6*t6183*t1641*t1658*t1688;
  t6670 = t6667 + t6668 + t6669;
  t6740 = t1645*t3962;
  t6746 = t6183*t1667*t1688;
  t6751 = t6740 + t6746;
  t6754 = t1676*t6203;
  t6755 = 3.e-6*t1631*t6751;
  t6761 = t6754 + t6755;
  t6764 = t1625*t6751;
  t6766 = t6210 + t6764;
  t6769 = 3.e-6*t1658*t6203;
  t6771 = -1.*t1658*t6751;
  t6772 = t6769 + t6771;
  t6829 = -1.*t6183*t1645*t1667;
  t6844 = t3962*t1688;
  t6849 = t6829 + t6844;
  t6819 = -3.e-6*t6183*t1641*t1658;
  t6850 = 3.e-6*t1631*t6849;
  t6870 = t1676*t6751;
  t6873 = t6819 + t6850 + t6870;
  t6881 = t6183*t1641*t1658;
  t6882 = t1625*t6849;
  t6885 = t6881 + t6882 + t6755;
  t6891 = t1933*t6183*t1641;
  t6893 = -1.*t1658*t6849;
  t6898 = 3.e-6*t1658*t6751;
  t6900 = t6891 + t6893 + t6898;
  t6960 = -1.000000000009*t6183*t1641*t1658;
  t6962 = -1.*t1625*t6849;
  t6963 = 3.e-6*t1625*t6751;
  t6965 = t6960 + t6962 + t6963;
  t6967 = -3.e-6*t1625*t6183*t1641;
  t6968 = 3.e-6*t1658*t6849;
  t6970 = -9.e-12*t1658*t6751;
  t6971 = t6967 + t6968 + t6970;
  t6973 = t1625*t6183*t1641;
  t6975 = t6973 + t6893 + t6898;
  p_output1[0]=var2[0] + (-0.2000000000018*t1641*t1658 - 0.2000000000018*t1631*t1645*t1667 - 6.000000000054e-7*t1631*t1667*t1688 + t2475*t3317 + t2450*t3336 + t2244*t3408 - 0.099999*(t2630*t3317 + t2623*t3336 + t2595*t3408) - 0.3*(t2623*t3317 + t2652*t3336 + t2642*t3408) + 0.2*(t2595*t3317 + t2642*t3336 + t2676*t3408))*var2[4] + (6.000000000054e-7*t1631*t1641*t1645 - 0.2000000000018*t1631*t1641*t1688 + t2475*t2794 + t2450*t2980 + t2244*t3017 - 0.099999*(t2630*t2794 + t2623*t2980 + t2595*t3017) - 0.3*(t2623*t2794 + t2652*t2980 + t2642*t3017) + 0.2*(t2595*t2794 + t2642*t2980 + t2676*t3017))*var2[5] + (0.2000000000018*t1641*t1645*t1658 - 0.2000000000018*t1625*t1667 + 6.000000000054e-7*t1641*t1658*t1688 + t2244*t2382 + t2450*t2456 + t2475*t2481 - 0.099999*(t2382*t2595 + t2456*t2623 + t2481*t2630) - 0.3*(t2481*t2623 + t2382*t2642 + t2456*t2652) + 0.2*(t2481*t2595 + t2456*t2642 + t2382*t2676))*var2[15] + (t1621*t1692 + t1822*t1882 + t1926*t1973 - 0.099999*(t1973*t1988 + t1882*t2011 - 1.8e-11*t1692*t852) + 0.2*(t1692*t1988 + t1973*t2001 - 1.000000000009*t1882*t852) - 0.3*(t1692*t2011 + t1882*t2120 - 1.000000000009*t1973*t852))*var2[17];
  p_output1[1]=var2[1] + (0.2000000000018*t1641*t1658*t6183 + 0.2000000000018*t1631*t6203 - 6.000000000054e-7*t1631*t6207 + t2475*t6212 + t2450*t6220 + t2244*t6255 - 0.099999*(t2630*t6212 + t2623*t6220 + t2595*t6255) - 0.3*(t2623*t6212 + t2652*t6220 + t2642*t6255) + 0.2*(t2595*t6212 + t2642*t6220 + t2676*t6255))*var2[3] + (0.2000000000018*t1631*t1641*t1645*t3962 - 0.2000000000018*t1658*t1667*t3962 + 6.000000000054e-7*t1631*t1641*t1688*t3962 + t2475*t4551 + t2450*t5266 + t2244*t5505 - 0.099999*(t2630*t4551 + t2623*t5266 + t2595*t5505) - 0.3*(t2623*t4551 + t2652*t5266 + t2642*t5505) + 0.2*(t2595*t4551 + t2642*t5266 + t2676*t5505))*var2[4] + (-6.000000000054e-7*t1631*t6329 + 0.2000000000018*t1631*t6342 + t2475*t6346 + t2450*t6350 + t2244*t6355 - 0.099999*(t2630*t6346 + t2623*t6350 + t2595*t6355) - 0.3*(t2623*t6346 + t2652*t6350 + t2642*t6355) + 0.2*(t2595*t6346 + t2642*t6350 + t2676*t6355))*var2[5] + (0.2000000000018*t1625*t1641*t3962 - 6.000000000054e-7*t1658*t6342 + 0.2000000000018*t1658*t6440 + t2244*t6556 + t2475*t6572 + t2450*t6578 - 0.099999*(t2595*t6556 + t2630*t6572 + t2623*t6578) + 0.2*(t2676*t6556 + t2595*t6572 + t2642*t6578) - 0.3*(t2642*t6556 + t2623*t6572 + t2652*t6578))*var2[15] + (t1621*t6447 + t1822*t6472 + t1926*t6484 - 0.099999*(t2011*t6472 + t1988*t6484 - 1.8e-11*t6447*t852) + 0.2*(t1988*t6447 + t2001*t6484 - 1.000000000009*t6472*t852) - 0.3*(t2011*t6447 + t2120*t6472 - 1.000000000009*t6484*t852))*var2[17];
  p_output1[2]=var2[2] + (0.2000000000018*t1641*t1658*t3962 - 6.000000000054e-7*t1631*t6342 + 0.2000000000018*t1631*t6440 + t2475*t6447 + t2450*t6472 + t2244*t6484 - 0.099999*(t2630*t6447 + t2623*t6472 + t2595*t6484) - 0.3*(t2623*t6447 + t2652*t6472 + t2642*t6484) + 0.2*(t2595*t6447 + t2642*t6472 + t2676*t6484))*var2[3] + (-0.2000000000018*t1631*t1641*t1645*t6183 + 0.2000000000018*t1658*t1667*t6183 - 6.000000000054e-7*t1631*t1641*t1688*t6183 + t2475*t6660 + t2450*t6665 + t2244*t6670 - 0.099999*(t2630*t6660 + t2623*t6665 + t2595*t6670) - 0.3*(t2623*t6660 + t2652*t6665 + t2642*t6670) + 0.2*(t2595*t6660 + t2642*t6665 + t2676*t6670))*var2[4] + (-6.000000000054e-7*t1631*t6203 + 0.2000000000018*t1631*t6751 + t2475*t6761 + t2450*t6766 + t2244*t6772 - 0.099999*(t2630*t6761 + t2623*t6766 + t2595*t6772) - 0.3*(t2623*t6761 + t2652*t6766 + t2642*t6772) + 0.2*(t2595*t6761 + t2642*t6766 + t2676*t6772))*var2[5] + (-0.2000000000018*t1625*t1641*t6183 - 6.000000000054e-7*t1658*t6751 + 0.2000000000018*t1658*t6849 + t2244*t6965 + t2475*t6971 + t2450*t6975 - 0.099999*(t2595*t6965 + t2630*t6971 + t2623*t6975) + 0.2*(t2676*t6965 + t2595*t6971 + t2642*t6975) - 0.3*(t2642*t6965 + t2623*t6971 + t2652*t6975))*var2[15] + (t1621*t6873 + t1822*t6885 + t1926*t6900 - 0.099999*(t2011*t6885 + t1988*t6900 - 1.8e-11*t6873*t852) + 0.2*(t1988*t6873 + t2001*t6900 - 1.000000000009*t6885*t852) - 0.3*(t2011*t6873 + t2120*t6885 - 1.000000000009*t6900*t852))*var2[17];
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
