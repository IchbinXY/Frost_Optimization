/*
 * Automatically Generated from Mathematica.
 * Thu 30 May 2019 00:01:31 GMT-04:00
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
  double t38310;
  double t37649;
  double t37967;
  double t38075;
  double t38207;
  double t38242;
  double t38322;
  double t38366;
  double t38379;
  double t38389;
  double t38397;
  double t38408;
  double t38602;
  double t38844;
  double t38851;
  double t38862;
  double t38873;
  double t38885;
  double t39353;
  double t39382;
  double t39383;
  double t39401;
  double t39404;
  double t39537;
  double t40210;
  double t40521;
  double t40692;
  double t40461;
  double t40120;
  double t40136;
  double t40155;
  double t40173;
  double t40186;
  double t40208;
  double t40222;
  t38310 = -1.*var4[0];
  t37649 = -1. + var5[0];
  t37967 = -1. + var6[0];
  t38075 = 1/t37967;
  t38207 = -1.*t37649*t38075;
  t38242 = 1. + t38207;
  t38322 = t38310 + var4[1];
  t38366 = Power(t38322,-5);
  t38379 = -1.*var1[0];
  t38389 = t38379 + var1[1];
  t38397 = t37649*t38075*t38389;
  t38408 = t38310 + var1[0] + t38397;
  t38602 = Power(t38408,4);
  t38844 = Power(t38322,-4);
  t38851 = Power(t38408,3);
  t38862 = 1/t38322;
  t38873 = -1.*t38862*t38408;
  t38885 = 1. + t38873;
  t39353 = Power(t38322,-3);
  t39382 = Power(t38408,2);
  t39383 = Power(t38885,2);
  t39401 = Power(t38322,-2);
  t39404 = Power(t38885,3);
  t39537 = Power(t38885,4);
  t40210 = Power(t38408,5);
  t40521 = -1.*t39401*t38408;
  t40692 = t38862 + t40521;
  t40461 = Power(t38322,-6);
  t40120 = Power(t38885,5);
  t40136 = -1.*t40120;
  t40155 = -5.*t38862*t38408*t39537;
  t40173 = -10.*t39401*t39382*t39404;
  t40186 = -10.*t39353*t38851*t39383;
  t40208 = -5.*t38844*t38602*t38885;
  t40222 = -1.*t38366*t40210;
  p_output1[0]=5.*t38242*t38862*t39537*var3[0] + 20.*t38242*t38408*t39401*t39404*var3[8] - 5.*t38242*t38862*t39537*var3[8] + 30.*t38242*t39353*t39382*t39383*var3[16] - 20.*t38242*t38408*t39401*t39404*var3[16] + 20.*t38242*t38844*t38851*t38885*var3[24] - 30.*t38242*t39353*t39382*t39383*var3[24] + 5.*t38242*t38366*t38602*var3[32] - 20.*t38242*t38844*t38851*t38885*var3[32] - 5.*t38242*t38366*t38602*var3[40];
  p_output1[1]=5.*t37649*t38075*t38862*t39537*var3[0] + 20.*t37649*t38075*t38408*t39401*t39404*var3[8] - 5.*t37649*t38075*t38862*t39537*var3[8] + 30.*t37649*t38075*t39353*t39382*t39383*var3[16] - 20.*t37649*t38075*t38408*t39401*t39404*var3[16] + 20.*t37649*t38075*t38844*t38851*t38885*var3[24] - 30.*t37649*t38075*t39353*t39382*t39383*var3[24] + 5.*t37649*t38075*t38366*t38602*var3[32] - 20.*t37649*t38075*t38844*t38851*t38885*var3[32] - 5.*t37649*t38075*t38366*t38602*var3[40];
  p_output1[2]=0.5;
  p_output1[3]=0.5;
  p_output1[4]=t40136;
  p_output1[5]=t40155;
  p_output1[6]=t40173;
  p_output1[7]=t40186;
  p_output1[8]=t40208;
  p_output1[9]=t40222;
  p_output1[10]=-5.*t39537*t40692*var3[0] + 5.*t38862*t39537*var3[8] - 5.*t38408*t39401*t39537*var3[8] - 20.*t38408*t38862*t39404*t40692*var3[8] - 20.*t39353*t39382*t39404*var3[16] + 20.*t38408*t39401*t39404*var3[16] - 30.*t39382*t39383*t39401*t40692*var3[16] - 30.*t38844*t38851*t39383*var3[24] + 30.*t39353*t39382*t39383*var3[24] - 20.*t38851*t38885*t39353*t40692*var3[24] - 20.*t38366*t38602*t38885*var3[32] + 20.*t38844*t38851*t38885*var3[32] - 5.*t38602*t38844*t40692*var3[32] + 5.*t38366*t38602*var3[40] - 5.*t40210*t40461*var3[40];
  p_output1[11]=-5.*t38408*t39401*t39537*var3[0] - 20.*t39353*t39382*t39404*var3[8] + 5.*t38408*t39401*t39537*var3[8] - 30.*t38844*t38851*t39383*var3[16] + 20.*t39353*t39382*t39404*var3[16] - 20.*t38366*t38602*t38885*var3[24] + 30.*t38844*t38851*t39383*var3[24] + 20.*t38366*t38602*t38885*var3[32] - 5.*t40210*t40461*var3[32] + 5.*t40210*t40461*var3[40];
  p_output1[12]=5.*t38242*t38862*t39537*var3[1] + 20.*t38242*t38408*t39401*t39404*var3[9] - 5.*t38242*t38862*t39537*var3[9] + 30.*t38242*t39353*t39382*t39383*var3[17] - 20.*t38242*t38408*t39401*t39404*var3[17] + 20.*t38242*t38844*t38851*t38885*var3[25] - 30.*t38242*t39353*t39382*t39383*var3[25] + 5.*t38242*t38366*t38602*var3[33] - 20.*t38242*t38844*t38851*t38885*var3[33] - 5.*t38242*t38366*t38602*var3[41];
  p_output1[13]=5.*t37649*t38075*t38862*t39537*var3[1] + 20.*t37649*t38075*t38408*t39401*t39404*var3[9] - 5.*t37649*t38075*t38862*t39537*var3[9] + 30.*t37649*t38075*t39353*t39382*t39383*var3[17] - 20.*t37649*t38075*t38408*t39401*t39404*var3[17] + 20.*t37649*t38075*t38844*t38851*t38885*var3[25] - 30.*t37649*t38075*t39353*t39382*t39383*var3[25] + 5.*t37649*t38075*t38366*t38602*var3[33] - 20.*t37649*t38075*t38844*t38851*t38885*var3[33] - 5.*t37649*t38075*t38366*t38602*var3[41];
  p_output1[14]=-1.;
  p_output1[15]=1.;
  p_output1[16]=t40136;
  p_output1[17]=t40155;
  p_output1[18]=t40173;
  p_output1[19]=t40186;
  p_output1[20]=t40208;
  p_output1[21]=t40222;
  p_output1[22]=-5.*t39537*t40692*var3[1] + 5.*t38862*t39537*var3[9] - 5.*t38408*t39401*t39537*var3[9] - 20.*t38408*t38862*t39404*t40692*var3[9] - 20.*t39353*t39382*t39404*var3[17] + 20.*t38408*t39401*t39404*var3[17] - 30.*t39382*t39383*t39401*t40692*var3[17] - 30.*t38844*t38851*t39383*var3[25] + 30.*t39353*t39382*t39383*var3[25] - 20.*t38851*t38885*t39353*t40692*var3[25] - 20.*t38366*t38602*t38885*var3[33] + 20.*t38844*t38851*t38885*var3[33] - 5.*t38602*t38844*t40692*var3[33] + 5.*t38366*t38602*var3[41] - 5.*t40210*t40461*var3[41];
  p_output1[23]=-5.*t38408*t39401*t39537*var3[1] - 20.*t39353*t39382*t39404*var3[9] + 5.*t38408*t39401*t39537*var3[9] - 30.*t38844*t38851*t39383*var3[17] + 20.*t39353*t39382*t39404*var3[17] - 20.*t38366*t38602*t38885*var3[25] + 30.*t38844*t38851*t39383*var3[25] + 20.*t38366*t38602*t38885*var3[33] - 5.*t40210*t40461*var3[33] + 5.*t40210*t40461*var3[41];
  p_output1[24]=5.*t38242*t38862*t39537*var3[2] + 20.*t38242*t38408*t39401*t39404*var3[10] - 5.*t38242*t38862*t39537*var3[10] + 30.*t38242*t39353*t39382*t39383*var3[18] - 20.*t38242*t38408*t39401*t39404*var3[18] + 20.*t38242*t38844*t38851*t38885*var3[26] - 30.*t38242*t39353*t39382*t39383*var3[26] + 5.*t38242*t38366*t38602*var3[34] - 20.*t38242*t38844*t38851*t38885*var3[34] - 5.*t38242*t38366*t38602*var3[42];
  p_output1[25]=5.*t37649*t38075*t38862*t39537*var3[2] + 20.*t37649*t38075*t38408*t39401*t39404*var3[10] - 5.*t37649*t38075*t38862*t39537*var3[10] + 30.*t37649*t38075*t39353*t39382*t39383*var3[18] - 20.*t37649*t38075*t38408*t39401*t39404*var3[18] + 20.*t37649*t38075*t38844*t38851*t38885*var3[26] - 30.*t37649*t38075*t39353*t39382*t39383*var3[26] + 5.*t37649*t38075*t38366*t38602*var3[34] - 20.*t37649*t38075*t38844*t38851*t38885*var3[34] - 5.*t37649*t38075*t38366*t38602*var3[42];
  p_output1[26]=0.5;
  p_output1[27]=0.5;
  p_output1[28]=t40136;
  p_output1[29]=t40155;
  p_output1[30]=t40173;
  p_output1[31]=t40186;
  p_output1[32]=t40208;
  p_output1[33]=t40222;
  p_output1[34]=-5.*t39537*t40692*var3[2] + 5.*t38862*t39537*var3[10] - 5.*t38408*t39401*t39537*var3[10] - 20.*t38408*t38862*t39404*t40692*var3[10] - 20.*t39353*t39382*t39404*var3[18] + 20.*t38408*t39401*t39404*var3[18] - 30.*t39382*t39383*t39401*t40692*var3[18] - 30.*t38844*t38851*t39383*var3[26] + 30.*t39353*t39382*t39383*var3[26] - 20.*t38851*t38885*t39353*t40692*var3[26] - 20.*t38366*t38602*t38885*var3[34] + 20.*t38844*t38851*t38885*var3[34] - 5.*t38602*t38844*t40692*var3[34] + 5.*t38366*t38602*var3[42] - 5.*t40210*t40461*var3[42];
  p_output1[35]=-5.*t38408*t39401*t39537*var3[2] - 20.*t39353*t39382*t39404*var3[10] + 5.*t38408*t39401*t39537*var3[10] - 30.*t38844*t38851*t39383*var3[18] + 20.*t39353*t39382*t39404*var3[18] - 20.*t38366*t38602*t38885*var3[26] + 30.*t38844*t38851*t39383*var3[26] + 20.*t38366*t38602*t38885*var3[34] - 5.*t40210*t40461*var3[34] + 5.*t40210*t40461*var3[42];
  p_output1[36]=5.*t38242*t38862*t39537*var3[3] + 20.*t38242*t38408*t39401*t39404*var3[11] - 5.*t38242*t38862*t39537*var3[11] + 30.*t38242*t39353*t39382*t39383*var3[19] - 20.*t38242*t38408*t39401*t39404*var3[19] + 20.*t38242*t38844*t38851*t38885*var3[27] - 30.*t38242*t39353*t39382*t39383*var3[27] + 5.*t38242*t38366*t38602*var3[35] - 20.*t38242*t38844*t38851*t38885*var3[35] - 5.*t38242*t38366*t38602*var3[43];
  p_output1[37]=5.*t37649*t38075*t38862*t39537*var3[3] + 20.*t37649*t38075*t38408*t39401*t39404*var3[11] - 5.*t37649*t38075*t38862*t39537*var3[11] + 30.*t37649*t38075*t39353*t39382*t39383*var3[19] - 20.*t37649*t38075*t38408*t39401*t39404*var3[19] + 20.*t37649*t38075*t38844*t38851*t38885*var3[27] - 30.*t37649*t38075*t39353*t39382*t39383*var3[27] + 5.*t37649*t38075*t38366*t38602*var3[35] - 20.*t37649*t38075*t38844*t38851*t38885*var3[35] - 5.*t37649*t38075*t38366*t38602*var3[43];
  p_output1[38]=-1.;
  p_output1[39]=1.;
  p_output1[40]=t40136;
  p_output1[41]=t40155;
  p_output1[42]=t40173;
  p_output1[43]=t40186;
  p_output1[44]=t40208;
  p_output1[45]=t40222;
  p_output1[46]=-5.*t39537*t40692*var3[3] + 5.*t38862*t39537*var3[11] - 5.*t38408*t39401*t39537*var3[11] - 20.*t38408*t38862*t39404*t40692*var3[11] - 20.*t39353*t39382*t39404*var3[19] + 20.*t38408*t39401*t39404*var3[19] - 30.*t39382*t39383*t39401*t40692*var3[19] - 30.*t38844*t38851*t39383*var3[27] + 30.*t39353*t39382*t39383*var3[27] - 20.*t38851*t38885*t39353*t40692*var3[27] - 20.*t38366*t38602*t38885*var3[35] + 20.*t38844*t38851*t38885*var3[35] - 5.*t38602*t38844*t40692*var3[35] + 5.*t38366*t38602*var3[43] - 5.*t40210*t40461*var3[43];
  p_output1[47]=-5.*t38408*t39401*t39537*var3[3] - 20.*t39353*t39382*t39404*var3[11] + 5.*t38408*t39401*t39537*var3[11] - 30.*t38844*t38851*t39383*var3[19] + 20.*t39353*t39382*t39404*var3[19] - 20.*t38366*t38602*t38885*var3[27] + 30.*t38844*t38851*t39383*var3[27] + 20.*t38366*t38602*t38885*var3[35] - 5.*t40210*t40461*var3[35] + 5.*t40210*t40461*var3[43];
  p_output1[48]=5.*t38242*t38862*t39537*var3[4] + 20.*t38242*t38408*t39401*t39404*var3[12] - 5.*t38242*t38862*t39537*var3[12] + 30.*t38242*t39353*t39382*t39383*var3[20] - 20.*t38242*t38408*t39401*t39404*var3[20] + 20.*t38242*t38844*t38851*t38885*var3[28] - 30.*t38242*t39353*t39382*t39383*var3[28] + 5.*t38242*t38366*t38602*var3[36] - 20.*t38242*t38844*t38851*t38885*var3[36] - 5.*t38242*t38366*t38602*var3[44];
  p_output1[49]=5.*t37649*t38075*t38862*t39537*var3[4] + 20.*t37649*t38075*t38408*t39401*t39404*var3[12] - 5.*t37649*t38075*t38862*t39537*var3[12] + 30.*t37649*t38075*t39353*t39382*t39383*var3[20] - 20.*t37649*t38075*t38408*t39401*t39404*var3[20] + 20.*t37649*t38075*t38844*t38851*t38885*var3[28] - 30.*t37649*t38075*t39353*t39382*t39383*var3[28] + 5.*t37649*t38075*t38366*t38602*var3[36] - 20.*t37649*t38075*t38844*t38851*t38885*var3[36] - 5.*t37649*t38075*t38366*t38602*var3[44];
  p_output1[50]=0.5;
  p_output1[51]=0.5;
  p_output1[52]=t40136;
  p_output1[53]=t40155;
  p_output1[54]=t40173;
  p_output1[55]=t40186;
  p_output1[56]=t40208;
  p_output1[57]=t40222;
  p_output1[58]=-5.*t39537*t40692*var3[4] + 5.*t38862*t39537*var3[12] - 5.*t38408*t39401*t39537*var3[12] - 20.*t38408*t38862*t39404*t40692*var3[12] - 20.*t39353*t39382*t39404*var3[20] + 20.*t38408*t39401*t39404*var3[20] - 30.*t39382*t39383*t39401*t40692*var3[20] - 30.*t38844*t38851*t39383*var3[28] + 30.*t39353*t39382*t39383*var3[28] - 20.*t38851*t38885*t39353*t40692*var3[28] - 20.*t38366*t38602*t38885*var3[36] + 20.*t38844*t38851*t38885*var3[36] - 5.*t38602*t38844*t40692*var3[36] + 5.*t38366*t38602*var3[44] - 5.*t40210*t40461*var3[44];
  p_output1[59]=-5.*t38408*t39401*t39537*var3[4] - 20.*t39353*t39382*t39404*var3[12] + 5.*t38408*t39401*t39537*var3[12] - 30.*t38844*t38851*t39383*var3[20] + 20.*t39353*t39382*t39404*var3[20] - 20.*t38366*t38602*t38885*var3[28] + 30.*t38844*t38851*t39383*var3[28] + 20.*t38366*t38602*t38885*var3[36] - 5.*t40210*t40461*var3[36] + 5.*t40210*t40461*var3[44];
  p_output1[60]=5.*t38242*t38862*t39537*var3[5] + 20.*t38242*t38408*t39401*t39404*var3[13] - 5.*t38242*t38862*t39537*var3[13] + 30.*t38242*t39353*t39382*t39383*var3[21] - 20.*t38242*t38408*t39401*t39404*var3[21] + 20.*t38242*t38844*t38851*t38885*var3[29] - 30.*t38242*t39353*t39382*t39383*var3[29] + 5.*t38242*t38366*t38602*var3[37] - 20.*t38242*t38844*t38851*t38885*var3[37] - 5.*t38242*t38366*t38602*var3[45];
  p_output1[61]=5.*t37649*t38075*t38862*t39537*var3[5] + 20.*t37649*t38075*t38408*t39401*t39404*var3[13] - 5.*t37649*t38075*t38862*t39537*var3[13] + 30.*t37649*t38075*t39353*t39382*t39383*var3[21] - 20.*t37649*t38075*t38408*t39401*t39404*var3[21] + 20.*t37649*t38075*t38844*t38851*t38885*var3[29] - 30.*t37649*t38075*t39353*t39382*t39383*var3[29] + 5.*t37649*t38075*t38366*t38602*var3[37] - 20.*t37649*t38075*t38844*t38851*t38885*var3[37] - 5.*t37649*t38075*t38366*t38602*var3[45];
  p_output1[62]=-1.;
  p_output1[63]=1.;
  p_output1[64]=t40136;
  p_output1[65]=t40155;
  p_output1[66]=t40173;
  p_output1[67]=t40186;
  p_output1[68]=t40208;
  p_output1[69]=t40222;
  p_output1[70]=-5.*t39537*t40692*var3[5] + 5.*t38862*t39537*var3[13] - 5.*t38408*t39401*t39537*var3[13] - 20.*t38408*t38862*t39404*t40692*var3[13] - 20.*t39353*t39382*t39404*var3[21] + 20.*t38408*t39401*t39404*var3[21] - 30.*t39382*t39383*t39401*t40692*var3[21] - 30.*t38844*t38851*t39383*var3[29] + 30.*t39353*t39382*t39383*var3[29] - 20.*t38851*t38885*t39353*t40692*var3[29] - 20.*t38366*t38602*t38885*var3[37] + 20.*t38844*t38851*t38885*var3[37] - 5.*t38602*t38844*t40692*var3[37] + 5.*t38366*t38602*var3[45] - 5.*t40210*t40461*var3[45];
  p_output1[71]=-5.*t38408*t39401*t39537*var3[5] - 20.*t39353*t39382*t39404*var3[13] + 5.*t38408*t39401*t39537*var3[13] - 30.*t38844*t38851*t39383*var3[21] + 20.*t39353*t39382*t39404*var3[21] - 20.*t38366*t38602*t38885*var3[29] + 30.*t38844*t38851*t39383*var3[29] + 20.*t38366*t38602*t38885*var3[37] - 5.*t40210*t40461*var3[37] + 5.*t40210*t40461*var3[45];
  p_output1[72]=5.*t38242*t38862*t39537*var3[6] + 20.*t38242*t38408*t39401*t39404*var3[14] - 5.*t38242*t38862*t39537*var3[14] + 30.*t38242*t39353*t39382*t39383*var3[22] - 20.*t38242*t38408*t39401*t39404*var3[22] + 20.*t38242*t38844*t38851*t38885*var3[30] - 30.*t38242*t39353*t39382*t39383*var3[30] + 5.*t38242*t38366*t38602*var3[38] - 20.*t38242*t38844*t38851*t38885*var3[38] - 5.*t38242*t38366*t38602*var3[46];
  p_output1[73]=5.*t37649*t38075*t38862*t39537*var3[6] + 20.*t37649*t38075*t38408*t39401*t39404*var3[14] - 5.*t37649*t38075*t38862*t39537*var3[14] + 30.*t37649*t38075*t39353*t39382*t39383*var3[22] - 20.*t37649*t38075*t38408*t39401*t39404*var3[22] + 20.*t37649*t38075*t38844*t38851*t38885*var3[30] - 30.*t37649*t38075*t39353*t39382*t39383*var3[30] + 5.*t37649*t38075*t38366*t38602*var3[38] - 20.*t37649*t38075*t38844*t38851*t38885*var3[38] - 5.*t37649*t38075*t38366*t38602*var3[46];
  p_output1[74]=0.5;
  p_output1[75]=0.5;
  p_output1[76]=t40136;
  p_output1[77]=t40155;
  p_output1[78]=t40173;
  p_output1[79]=t40186;
  p_output1[80]=t40208;
  p_output1[81]=t40222;
  p_output1[82]=-5.*t39537*t40692*var3[6] + 5.*t38862*t39537*var3[14] - 5.*t38408*t39401*t39537*var3[14] - 20.*t38408*t38862*t39404*t40692*var3[14] - 20.*t39353*t39382*t39404*var3[22] + 20.*t38408*t39401*t39404*var3[22] - 30.*t39382*t39383*t39401*t40692*var3[22] - 30.*t38844*t38851*t39383*var3[30] + 30.*t39353*t39382*t39383*var3[30] - 20.*t38851*t38885*t39353*t40692*var3[30] - 20.*t38366*t38602*t38885*var3[38] + 20.*t38844*t38851*t38885*var3[38] - 5.*t38602*t38844*t40692*var3[38] + 5.*t38366*t38602*var3[46] - 5.*t40210*t40461*var3[46];
  p_output1[83]=-5.*t38408*t39401*t39537*var3[6] - 20.*t39353*t39382*t39404*var3[14] + 5.*t38408*t39401*t39537*var3[14] - 30.*t38844*t38851*t39383*var3[22] + 20.*t39353*t39382*t39404*var3[22] - 20.*t38366*t38602*t38885*var3[30] + 30.*t38844*t38851*t39383*var3[30] + 20.*t38366*t38602*t38885*var3[38] - 5.*t40210*t40461*var3[38] + 5.*t40210*t40461*var3[46];
  p_output1[84]=5.*t38242*t38862*t39537*var3[7] + 20.*t38242*t38408*t39401*t39404*var3[15] - 5.*t38242*t38862*t39537*var3[15] + 30.*t38242*t39353*t39382*t39383*var3[23] - 20.*t38242*t38408*t39401*t39404*var3[23] + 20.*t38242*t38844*t38851*t38885*var3[31] - 30.*t38242*t39353*t39382*t39383*var3[31] + 5.*t38242*t38366*t38602*var3[39] - 20.*t38242*t38844*t38851*t38885*var3[39] - 5.*t38242*t38366*t38602*var3[47];
  p_output1[85]=5.*t37649*t38075*t38862*t39537*var3[7] + 20.*t37649*t38075*t38408*t39401*t39404*var3[15] - 5.*t37649*t38075*t38862*t39537*var3[15] + 30.*t37649*t38075*t39353*t39382*t39383*var3[23] - 20.*t37649*t38075*t38408*t39401*t39404*var3[23] + 20.*t37649*t38075*t38844*t38851*t38885*var3[31] - 30.*t37649*t38075*t39353*t39382*t39383*var3[31] + 5.*t37649*t38075*t38366*t38602*var3[39] - 20.*t37649*t38075*t38844*t38851*t38885*var3[39] - 5.*t37649*t38075*t38366*t38602*var3[47];
  p_output1[86]=-1.;
  p_output1[87]=1.;
  p_output1[88]=t40136;
  p_output1[89]=t40155;
  p_output1[90]=t40173;
  p_output1[91]=t40186;
  p_output1[92]=t40208;
  p_output1[93]=t40222;
  p_output1[94]=-5.*t39537*t40692*var3[7] + 5.*t38862*t39537*var3[15] - 5.*t38408*t39401*t39537*var3[15] - 20.*t38408*t38862*t39404*t40692*var3[15] - 20.*t39353*t39382*t39404*var3[23] + 20.*t38408*t39401*t39404*var3[23] - 30.*t39382*t39383*t39401*t40692*var3[23] - 30.*t38844*t38851*t39383*var3[31] + 30.*t39353*t39382*t39383*var3[31] - 20.*t38851*t38885*t39353*t40692*var3[31] - 20.*t38366*t38602*t38885*var3[39] + 20.*t38844*t38851*t38885*var3[39] - 5.*t38602*t38844*t40692*var3[39] + 5.*t38366*t38602*var3[47] - 5.*t40210*t40461*var3[47];
  p_output1[95]=-5.*t38408*t39401*t39537*var3[7] - 20.*t39353*t39382*t39404*var3[15] + 5.*t38408*t39401*t39537*var3[15] - 30.*t38844*t38851*t39383*var3[23] + 20.*t39353*t39382*t39404*var3[23] - 20.*t38366*t38602*t38885*var3[31] + 30.*t38844*t38851*t39383*var3[31] + 20.*t38366*t38602*t38885*var3[39] - 5.*t40210*t40461*var3[39] + 5.*t40210*t40461*var3[47];
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

#include "J_y_output_Flight.hh"

namespace Flight2
{

void J_y_output_Flight_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4,const double *var5,const double *var6)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4, var5, var6);

}

}

#endif // MATLAB_MEX_FILE
