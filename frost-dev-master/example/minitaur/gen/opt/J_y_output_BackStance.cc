/*
 * Automatically Generated from Mathematica.
 * Tue 28 May 2019 22:43:33 GMT-04:00
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
static void output1(double *p_output1,const double *var1,const double *var2,const double *var3,const double *var4,const double *var5,const double *var6)
{
  double t604;
  double t301;
  double t413;
  double t480;
  double t523;
  double t597;
  double t617;
  double t625;
  double t626;
  double t632;
  double t633;
  double t661;
  double t662;
  double t689;
  double t694;
  double t703;
  double t714;
  double t715;
  double t743;
  double t752;
  double t753;
  double t773;
  double t774;
  double t790;
  double t1525;
  double t1738;
  double t1807;
  double t1616;
  double t1211;
  double t1255;
  double t1256;
  double t1274;
  double t1301;
  double t1316;
  double t1568;
  t604 = -1.*var4[0];
  t301 = -1. + var5[0];
  t413 = -1. + var6[0];
  t480 = 1/t413;
  t523 = -1.*t301*t480;
  t597 = 1. + t523;
  t617 = t604 + var4[1];
  t625 = Power(t617,-5);
  t626 = -1.*var1[0];
  t632 = t626 + var1[1];
  t633 = t301*t480*t632;
  t661 = t604 + var1[0] + t633;
  t662 = Power(t661,4);
  t689 = Power(t617,-4);
  t694 = Power(t661,3);
  t703 = 1/t617;
  t714 = -1.*t703*t661;
  t715 = 1. + t714;
  t743 = Power(t617,-3);
  t752 = Power(t661,2);
  t753 = Power(t715,2);
  t773 = Power(t617,-2);
  t774 = Power(t715,3);
  t790 = Power(t715,4);
  t1525 = Power(t661,5);
  t1738 = -1.*t773*t661;
  t1807 = t703 + t1738;
  t1616 = Power(t617,-6);
  t1211 = Power(t715,5);
  t1255 = -1.*t1211;
  t1256 = -5.*t703*t661*t790;
  t1274 = -10.*t773*t752*t774;
  t1301 = -10.*t743*t694*t753;
  t1316 = -5.*t689*t662*t715;
  t1568 = -1.*t625*t1525;
  p_output1[0]=5.*t597*t703*t790*var3[0] + 20.*t597*t661*t773*t774*var3[8] - 5.*t597*t703*t790*var3[8] + 30.*t597*t743*t752*t753*var3[16] - 20.*t597*t661*t773*t774*var3[16] + 20.*t597*t689*t694*t715*var3[24] - 30.*t597*t743*t752*t753*var3[24] + 5.*t597*t625*t662*var3[32] - 20.*t597*t689*t694*t715*var3[32] - 5.*t597*t625*t662*var3[40];
  p_output1[1]=5.*t301*t480*t703*t790*var3[0] + 20.*t301*t480*t661*t773*t774*var3[8] - 5.*t301*t480*t703*t790*var3[8] + 30.*t301*t480*t743*t752*t753*var3[16] - 20.*t301*t480*t661*t773*t774*var3[16] + 20.*t301*t480*t689*t694*t715*var3[24] - 30.*t301*t480*t743*t752*t753*var3[24] + 5.*t301*t480*t625*t662*var3[32] - 20.*t301*t480*t689*t694*t715*var3[32] - 5.*t301*t480*t625*t662*var3[40];
  p_output1[2]=0.5;
  p_output1[3]=0.5;
  p_output1[4]=t1255;
  p_output1[5]=t1256;
  p_output1[6]=t1274;
  p_output1[7]=t1301;
  p_output1[8]=t1316;
  p_output1[9]=t1568;
  p_output1[10]=-5.*t1807*t790*var3[0] - 20.*t1807*t661*t703*t774*var3[8] + 5.*t703*t790*var3[8] - 5.*t661*t773*t790*var3[8] - 30.*t1807*t752*t753*t773*var3[16] - 20.*t743*t752*t774*var3[16] + 20.*t661*t773*t774*var3[16] - 20.*t1807*t694*t715*t743*var3[24] - 30.*t689*t694*t753*var3[24] + 30.*t743*t752*t753*var3[24] - 5.*t1807*t662*t689*var3[32] - 20.*t625*t662*t715*var3[32] + 20.*t689*t694*t715*var3[32] - 5.*t1525*t1616*var3[40] + 5.*t625*t662*var3[40];
  p_output1[11]=-5.*t661*t773*t790*var3[0] - 20.*t743*t752*t774*var3[8] + 5.*t661*t773*t790*var3[8] - 30.*t689*t694*t753*var3[16] + 20.*t743*t752*t774*var3[16] - 20.*t625*t662*t715*var3[24] + 30.*t689*t694*t753*var3[24] - 5.*t1525*t1616*var3[32] + 20.*t625*t662*t715*var3[32] + 5.*t1525*t1616*var3[40];
  p_output1[12]=5.*t597*t703*t790*var3[1] + 20.*t597*t661*t773*t774*var3[9] - 5.*t597*t703*t790*var3[9] + 30.*t597*t743*t752*t753*var3[17] - 20.*t597*t661*t773*t774*var3[17] + 20.*t597*t689*t694*t715*var3[25] - 30.*t597*t743*t752*t753*var3[25] + 5.*t597*t625*t662*var3[33] - 20.*t597*t689*t694*t715*var3[33] - 5.*t597*t625*t662*var3[41];
  p_output1[13]=5.*t301*t480*t703*t790*var3[1] + 20.*t301*t480*t661*t773*t774*var3[9] - 5.*t301*t480*t703*t790*var3[9] + 30.*t301*t480*t743*t752*t753*var3[17] - 20.*t301*t480*t661*t773*t774*var3[17] + 20.*t301*t480*t689*t694*t715*var3[25] - 30.*t301*t480*t743*t752*t753*var3[25] + 5.*t301*t480*t625*t662*var3[33] - 20.*t301*t480*t689*t694*t715*var3[33] - 5.*t301*t480*t625*t662*var3[41];
  p_output1[14]=-1.;
  p_output1[15]=1.;
  p_output1[16]=t1255;
  p_output1[17]=t1256;
  p_output1[18]=t1274;
  p_output1[19]=t1301;
  p_output1[20]=t1316;
  p_output1[21]=t1568;
  p_output1[22]=-5.*t1807*t790*var3[1] - 20.*t1807*t661*t703*t774*var3[9] + 5.*t703*t790*var3[9] - 5.*t661*t773*t790*var3[9] - 30.*t1807*t752*t753*t773*var3[17] - 20.*t743*t752*t774*var3[17] + 20.*t661*t773*t774*var3[17] - 20.*t1807*t694*t715*t743*var3[25] - 30.*t689*t694*t753*var3[25] + 30.*t743*t752*t753*var3[25] - 5.*t1807*t662*t689*var3[33] - 20.*t625*t662*t715*var3[33] + 20.*t689*t694*t715*var3[33] - 5.*t1525*t1616*var3[41] + 5.*t625*t662*var3[41];
  p_output1[23]=-5.*t661*t773*t790*var3[1] - 20.*t743*t752*t774*var3[9] + 5.*t661*t773*t790*var3[9] - 30.*t689*t694*t753*var3[17] + 20.*t743*t752*t774*var3[17] - 20.*t625*t662*t715*var3[25] + 30.*t689*t694*t753*var3[25] - 5.*t1525*t1616*var3[33] + 20.*t625*t662*t715*var3[33] + 5.*t1525*t1616*var3[41];
  p_output1[24]=5.*t597*t703*t790*var3[2] + 20.*t597*t661*t773*t774*var3[10] - 5.*t597*t703*t790*var3[10] + 30.*t597*t743*t752*t753*var3[18] - 20.*t597*t661*t773*t774*var3[18] + 20.*t597*t689*t694*t715*var3[26] - 30.*t597*t743*t752*t753*var3[26] + 5.*t597*t625*t662*var3[34] - 20.*t597*t689*t694*t715*var3[34] - 5.*t597*t625*t662*var3[42];
  p_output1[25]=5.*t301*t480*t703*t790*var3[2] + 20.*t301*t480*t661*t773*t774*var3[10] - 5.*t301*t480*t703*t790*var3[10] + 30.*t301*t480*t743*t752*t753*var3[18] - 20.*t301*t480*t661*t773*t774*var3[18] + 20.*t301*t480*t689*t694*t715*var3[26] - 30.*t301*t480*t743*t752*t753*var3[26] + 5.*t301*t480*t625*t662*var3[34] - 20.*t301*t480*t689*t694*t715*var3[34] - 5.*t301*t480*t625*t662*var3[42];
  p_output1[26]=0.5;
  p_output1[27]=0.5;
  p_output1[28]=t1255;
  p_output1[29]=t1256;
  p_output1[30]=t1274;
  p_output1[31]=t1301;
  p_output1[32]=t1316;
  p_output1[33]=t1568;
  p_output1[34]=-5.*t1807*t790*var3[2] - 20.*t1807*t661*t703*t774*var3[10] + 5.*t703*t790*var3[10] - 5.*t661*t773*t790*var3[10] - 30.*t1807*t752*t753*t773*var3[18] - 20.*t743*t752*t774*var3[18] + 20.*t661*t773*t774*var3[18] - 20.*t1807*t694*t715*t743*var3[26] - 30.*t689*t694*t753*var3[26] + 30.*t743*t752*t753*var3[26] - 5.*t1807*t662*t689*var3[34] - 20.*t625*t662*t715*var3[34] + 20.*t689*t694*t715*var3[34] - 5.*t1525*t1616*var3[42] + 5.*t625*t662*var3[42];
  p_output1[35]=-5.*t661*t773*t790*var3[2] - 20.*t743*t752*t774*var3[10] + 5.*t661*t773*t790*var3[10] - 30.*t689*t694*t753*var3[18] + 20.*t743*t752*t774*var3[18] - 20.*t625*t662*t715*var3[26] + 30.*t689*t694*t753*var3[26] - 5.*t1525*t1616*var3[34] + 20.*t625*t662*t715*var3[34] + 5.*t1525*t1616*var3[42];
  p_output1[36]=5.*t597*t703*t790*var3[3] + 20.*t597*t661*t773*t774*var3[11] - 5.*t597*t703*t790*var3[11] + 30.*t597*t743*t752*t753*var3[19] - 20.*t597*t661*t773*t774*var3[19] + 20.*t597*t689*t694*t715*var3[27] - 30.*t597*t743*t752*t753*var3[27] + 5.*t597*t625*t662*var3[35] - 20.*t597*t689*t694*t715*var3[35] - 5.*t597*t625*t662*var3[43];
  p_output1[37]=5.*t301*t480*t703*t790*var3[3] + 20.*t301*t480*t661*t773*t774*var3[11] - 5.*t301*t480*t703*t790*var3[11] + 30.*t301*t480*t743*t752*t753*var3[19] - 20.*t301*t480*t661*t773*t774*var3[19] + 20.*t301*t480*t689*t694*t715*var3[27] - 30.*t301*t480*t743*t752*t753*var3[27] + 5.*t301*t480*t625*t662*var3[35] - 20.*t301*t480*t689*t694*t715*var3[35] - 5.*t301*t480*t625*t662*var3[43];
  p_output1[38]=-1.;
  p_output1[39]=1.;
  p_output1[40]=t1255;
  p_output1[41]=t1256;
  p_output1[42]=t1274;
  p_output1[43]=t1301;
  p_output1[44]=t1316;
  p_output1[45]=t1568;
  p_output1[46]=-5.*t1807*t790*var3[3] - 20.*t1807*t661*t703*t774*var3[11] + 5.*t703*t790*var3[11] - 5.*t661*t773*t790*var3[11] - 30.*t1807*t752*t753*t773*var3[19] - 20.*t743*t752*t774*var3[19] + 20.*t661*t773*t774*var3[19] - 20.*t1807*t694*t715*t743*var3[27] - 30.*t689*t694*t753*var3[27] + 30.*t743*t752*t753*var3[27] - 5.*t1807*t662*t689*var3[35] - 20.*t625*t662*t715*var3[35] + 20.*t689*t694*t715*var3[35] - 5.*t1525*t1616*var3[43] + 5.*t625*t662*var3[43];
  p_output1[47]=-5.*t661*t773*t790*var3[3] - 20.*t743*t752*t774*var3[11] + 5.*t661*t773*t790*var3[11] - 30.*t689*t694*t753*var3[19] + 20.*t743*t752*t774*var3[19] - 20.*t625*t662*t715*var3[27] + 30.*t689*t694*t753*var3[27] - 5.*t1525*t1616*var3[35] + 20.*t625*t662*t715*var3[35] + 5.*t1525*t1616*var3[43];
  p_output1[48]=5.*t597*t703*t790*var3[4] + 20.*t597*t661*t773*t774*var3[12] - 5.*t597*t703*t790*var3[12] + 30.*t597*t743*t752*t753*var3[20] - 20.*t597*t661*t773*t774*var3[20] + 20.*t597*t689*t694*t715*var3[28] - 30.*t597*t743*t752*t753*var3[28] + 5.*t597*t625*t662*var3[36] - 20.*t597*t689*t694*t715*var3[36] - 5.*t597*t625*t662*var3[44];
  p_output1[49]=5.*t301*t480*t703*t790*var3[4] + 20.*t301*t480*t661*t773*t774*var3[12] - 5.*t301*t480*t703*t790*var3[12] + 30.*t301*t480*t743*t752*t753*var3[20] - 20.*t301*t480*t661*t773*t774*var3[20] + 20.*t301*t480*t689*t694*t715*var3[28] - 30.*t301*t480*t743*t752*t753*var3[28] + 5.*t301*t480*t625*t662*var3[36] - 20.*t301*t480*t689*t694*t715*var3[36] - 5.*t301*t480*t625*t662*var3[44];
  p_output1[50]=0.5;
  p_output1[51]=0.5;
  p_output1[52]=t1255;
  p_output1[53]=t1256;
  p_output1[54]=t1274;
  p_output1[55]=t1301;
  p_output1[56]=t1316;
  p_output1[57]=t1568;
  p_output1[58]=-5.*t1807*t790*var3[4] - 20.*t1807*t661*t703*t774*var3[12] + 5.*t703*t790*var3[12] - 5.*t661*t773*t790*var3[12] - 30.*t1807*t752*t753*t773*var3[20] - 20.*t743*t752*t774*var3[20] + 20.*t661*t773*t774*var3[20] - 20.*t1807*t694*t715*t743*var3[28] - 30.*t689*t694*t753*var3[28] + 30.*t743*t752*t753*var3[28] - 5.*t1807*t662*t689*var3[36] - 20.*t625*t662*t715*var3[36] + 20.*t689*t694*t715*var3[36] - 5.*t1525*t1616*var3[44] + 5.*t625*t662*var3[44];
  p_output1[59]=-5.*t661*t773*t790*var3[4] - 20.*t743*t752*t774*var3[12] + 5.*t661*t773*t790*var3[12] - 30.*t689*t694*t753*var3[20] + 20.*t743*t752*t774*var3[20] - 20.*t625*t662*t715*var3[28] + 30.*t689*t694*t753*var3[28] - 5.*t1525*t1616*var3[36] + 20.*t625*t662*t715*var3[36] + 5.*t1525*t1616*var3[44];
  p_output1[60]=5.*t597*t703*t790*var3[5] + 20.*t597*t661*t773*t774*var3[13] - 5.*t597*t703*t790*var3[13] + 30.*t597*t743*t752*t753*var3[21] - 20.*t597*t661*t773*t774*var3[21] + 20.*t597*t689*t694*t715*var3[29] - 30.*t597*t743*t752*t753*var3[29] + 5.*t597*t625*t662*var3[37] - 20.*t597*t689*t694*t715*var3[37] - 5.*t597*t625*t662*var3[45];
  p_output1[61]=5.*t301*t480*t703*t790*var3[5] + 20.*t301*t480*t661*t773*t774*var3[13] - 5.*t301*t480*t703*t790*var3[13] + 30.*t301*t480*t743*t752*t753*var3[21] - 20.*t301*t480*t661*t773*t774*var3[21] + 20.*t301*t480*t689*t694*t715*var3[29] - 30.*t301*t480*t743*t752*t753*var3[29] + 5.*t301*t480*t625*t662*var3[37] - 20.*t301*t480*t689*t694*t715*var3[37] - 5.*t301*t480*t625*t662*var3[45];
  p_output1[62]=-1.;
  p_output1[63]=1.;
  p_output1[64]=t1255;
  p_output1[65]=t1256;
  p_output1[66]=t1274;
  p_output1[67]=t1301;
  p_output1[68]=t1316;
  p_output1[69]=t1568;
  p_output1[70]=-5.*t1807*t790*var3[5] - 20.*t1807*t661*t703*t774*var3[13] + 5.*t703*t790*var3[13] - 5.*t661*t773*t790*var3[13] - 30.*t1807*t752*t753*t773*var3[21] - 20.*t743*t752*t774*var3[21] + 20.*t661*t773*t774*var3[21] - 20.*t1807*t694*t715*t743*var3[29] - 30.*t689*t694*t753*var3[29] + 30.*t743*t752*t753*var3[29] - 5.*t1807*t662*t689*var3[37] - 20.*t625*t662*t715*var3[37] + 20.*t689*t694*t715*var3[37] - 5.*t1525*t1616*var3[45] + 5.*t625*t662*var3[45];
  p_output1[71]=-5.*t661*t773*t790*var3[5] - 20.*t743*t752*t774*var3[13] + 5.*t661*t773*t790*var3[13] - 30.*t689*t694*t753*var3[21] + 20.*t743*t752*t774*var3[21] - 20.*t625*t662*t715*var3[29] + 30.*t689*t694*t753*var3[29] - 5.*t1525*t1616*var3[37] + 20.*t625*t662*t715*var3[37] + 5.*t1525*t1616*var3[45];
  p_output1[72]=5.*t597*t703*t790*var3[6] + 20.*t597*t661*t773*t774*var3[14] - 5.*t597*t703*t790*var3[14] + 30.*t597*t743*t752*t753*var3[22] - 20.*t597*t661*t773*t774*var3[22] + 20.*t597*t689*t694*t715*var3[30] - 30.*t597*t743*t752*t753*var3[30] + 5.*t597*t625*t662*var3[38] - 20.*t597*t689*t694*t715*var3[38] - 5.*t597*t625*t662*var3[46];
  p_output1[73]=5.*t301*t480*t703*t790*var3[6] + 20.*t301*t480*t661*t773*t774*var3[14] - 5.*t301*t480*t703*t790*var3[14] + 30.*t301*t480*t743*t752*t753*var3[22] - 20.*t301*t480*t661*t773*t774*var3[22] + 20.*t301*t480*t689*t694*t715*var3[30] - 30.*t301*t480*t743*t752*t753*var3[30] + 5.*t301*t480*t625*t662*var3[38] - 20.*t301*t480*t689*t694*t715*var3[38] - 5.*t301*t480*t625*t662*var3[46];
  p_output1[74]=0.5;
  p_output1[75]=0.5;
  p_output1[76]=t1255;
  p_output1[77]=t1256;
  p_output1[78]=t1274;
  p_output1[79]=t1301;
  p_output1[80]=t1316;
  p_output1[81]=t1568;
  p_output1[82]=-5.*t1807*t790*var3[6] - 20.*t1807*t661*t703*t774*var3[14] + 5.*t703*t790*var3[14] - 5.*t661*t773*t790*var3[14] - 30.*t1807*t752*t753*t773*var3[22] - 20.*t743*t752*t774*var3[22] + 20.*t661*t773*t774*var3[22] - 20.*t1807*t694*t715*t743*var3[30] - 30.*t689*t694*t753*var3[30] + 30.*t743*t752*t753*var3[30] - 5.*t1807*t662*t689*var3[38] - 20.*t625*t662*t715*var3[38] + 20.*t689*t694*t715*var3[38] - 5.*t1525*t1616*var3[46] + 5.*t625*t662*var3[46];
  p_output1[83]=-5.*t661*t773*t790*var3[6] - 20.*t743*t752*t774*var3[14] + 5.*t661*t773*t790*var3[14] - 30.*t689*t694*t753*var3[22] + 20.*t743*t752*t774*var3[22] - 20.*t625*t662*t715*var3[30] + 30.*t689*t694*t753*var3[30] - 5.*t1525*t1616*var3[38] + 20.*t625*t662*t715*var3[38] + 5.*t1525*t1616*var3[46];
  p_output1[84]=5.*t597*t703*t790*var3[7] + 20.*t597*t661*t773*t774*var3[15] - 5.*t597*t703*t790*var3[15] + 30.*t597*t743*t752*t753*var3[23] - 20.*t597*t661*t773*t774*var3[23] + 20.*t597*t689*t694*t715*var3[31] - 30.*t597*t743*t752*t753*var3[31] + 5.*t597*t625*t662*var3[39] - 20.*t597*t689*t694*t715*var3[39] - 5.*t597*t625*t662*var3[47];
  p_output1[85]=5.*t301*t480*t703*t790*var3[7] + 20.*t301*t480*t661*t773*t774*var3[15] - 5.*t301*t480*t703*t790*var3[15] + 30.*t301*t480*t743*t752*t753*var3[23] - 20.*t301*t480*t661*t773*t774*var3[23] + 20.*t301*t480*t689*t694*t715*var3[31] - 30.*t301*t480*t743*t752*t753*var3[31] + 5.*t301*t480*t625*t662*var3[39] - 20.*t301*t480*t689*t694*t715*var3[39] - 5.*t301*t480*t625*t662*var3[47];
  p_output1[86]=-1.;
  p_output1[87]=1.;
  p_output1[88]=t1255;
  p_output1[89]=t1256;
  p_output1[90]=t1274;
  p_output1[91]=t1301;
  p_output1[92]=t1316;
  p_output1[93]=t1568;
  p_output1[94]=-5.*t1807*t790*var3[7] - 20.*t1807*t661*t703*t774*var3[15] + 5.*t703*t790*var3[15] - 5.*t661*t773*t790*var3[15] - 30.*t1807*t752*t753*t773*var3[23] - 20.*t743*t752*t774*var3[23] + 20.*t661*t773*t774*var3[23] - 20.*t1807*t694*t715*t743*var3[31] - 30.*t689*t694*t753*var3[31] + 30.*t743*t752*t753*var3[31] - 5.*t1807*t662*t689*var3[39] - 20.*t625*t662*t715*var3[39] + 20.*t689*t694*t715*var3[39] - 5.*t1525*t1616*var3[47] + 5.*t625*t662*var3[47];
  p_output1[95]=-5.*t661*t773*t790*var3[7] - 20.*t743*t752*t774*var3[15] + 5.*t661*t773*t790*var3[15] - 30.*t689*t694*t753*var3[23] + 20.*t743*t752*t774*var3[23] - 20.*t625*t662*t715*var3[31] + 30.*t689*t694*t753*var3[31] - 5.*t1525*t1616*var3[39] + 20.*t625*t662*t715*var3[39] + 5.*t1525*t1616*var3[47];
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

  double *var1,*var2,*var3,*var4,*var5,*var6;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 6)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Six input(s) required (var1,var2,var3,var4,var5,var6).");
    }
  else if( nlhs > 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:maxlhs", "Too many output arguments.");
    }

  /*  The input must be a noncomplex double vector or scaler.  */
  mrows = mxGetM(prhs[0]);
  ncols = mxGetN(prhs[0]);
  if( !mxIsDouble(prhs[0]) || mxIsComplex(prhs[0]) ||
    ( !(mrows == 2 && ncols == 1) && 
      !(mrows == 1 && ncols == 2))) 
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
    ( !(mrows == 48 && ncols == 1) && 
      !(mrows == 1 && ncols == 48))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var3 is wrong.");
    }
  mrows = mxGetM(prhs[3]);
  ncols = mxGetN(prhs[3]);
  if( !mxIsDouble(prhs[3]) || mxIsComplex(prhs[3]) ||
    ( !(mrows == 2 && ncols == 1) && 
      !(mrows == 1 && ncols == 2))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var4 is wrong.");
    }
  mrows = mxGetM(prhs[4]);
  ncols = mxGetN(prhs[4]);
  if( !mxIsDouble(prhs[4]) || mxIsComplex(prhs[4]) ||
    ( !(mrows == 1 && ncols == 1) && 
      !(mrows == 1 && ncols == 1))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var5 is wrong.");
    }
  mrows = mxGetM(prhs[5]);
  ncols = mxGetN(prhs[5]);
  if( !mxIsDouble(prhs[5]) || mxIsComplex(prhs[5]) ||
    ( !(mrows == 1 && ncols == 1) && 
      !(mrows == 1 && ncols == 1))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var6 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
  var3 = mxGetPr(prhs[2]);
  var4 = mxGetPr(prhs[3]);
  var5 = mxGetPr(prhs[4]);
  var6 = mxGetPr(prhs[5]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 96, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3,var4,var5,var6);


}

#else // MATLAB_MEX_FILE

#include "J_y_output_BackStance.hh"

namespace BackStance
{

void J_y_output_BackStance_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4,const double *var5,const double *var6)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4, var5, var6);

}

}

#endif // MATLAB_MEX_FILE
