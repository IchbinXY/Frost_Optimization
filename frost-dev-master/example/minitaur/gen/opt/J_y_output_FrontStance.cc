/*
 * Automatically Generated from Mathematica.
 * Wed 29 May 2019 23:46:24 GMT-04:00
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
  double t1943;
  double t1126;
  double t1732;
  double t1864;
  double t1920;
  double t1941;
  double t1945;
  double t1949;
  double t1950;
  double t1951;
  double t1953;
  double t1954;
  double t1955;
  double t2011;
  double t2018;
  double t2025;
  double t2028;
  double t2030;
  double t2064;
  double t2073;
  double t2091;
  double t2144;
  double t2145;
  double t2175;
  double t2795;
  double t3215;
  double t3235;
  double t3058;
  double t2387;
  double t2401;
  double t2407;
  double t2427;
  double t2658;
  double t2659;
  double t2960;
  t1943 = -1.*var4[0];
  t1126 = -1. + var5[0];
  t1732 = -1. + var6[0];
  t1864 = 1/t1732;
  t1920 = -1.*t1126*t1864;
  t1941 = 1. + t1920;
  t1945 = t1943 + var4[1];
  t1949 = Power(t1945,-5);
  t1950 = -1.*var1[0];
  t1951 = t1950 + var1[1];
  t1953 = t1126*t1864*t1951;
  t1954 = t1943 + var1[0] + t1953;
  t1955 = Power(t1954,4);
  t2011 = Power(t1945,-4);
  t2018 = Power(t1954,3);
  t2025 = 1/t1945;
  t2028 = -1.*t2025*t1954;
  t2030 = 1. + t2028;
  t2064 = Power(t1945,-3);
  t2073 = Power(t1954,2);
  t2091 = Power(t2030,2);
  t2144 = Power(t1945,-2);
  t2145 = Power(t2030,3);
  t2175 = Power(t2030,4);
  t2795 = Power(t1954,5);
  t3215 = -1.*t2144*t1954;
  t3235 = t2025 + t3215;
  t3058 = Power(t1945,-6);
  t2387 = Power(t2030,5);
  t2401 = -1.*t2387;
  t2407 = -5.*t2025*t1954*t2175;
  t2427 = -10.*t2144*t2073*t2145;
  t2658 = -10.*t2064*t2018*t2091;
  t2659 = -5.*t2011*t1955*t2030;
  t2960 = -1.*t1949*t2795;
  p_output1[0]=5.*t1941*t2025*t2175*var3[0] + 20.*t1941*t1954*t2144*t2145*var3[8] - 5.*t1941*t2025*t2175*var3[8] + 30.*t1941*t2064*t2073*t2091*var3[16] - 20.*t1941*t1954*t2144*t2145*var3[16] + 20.*t1941*t2011*t2018*t2030*var3[24] - 30.*t1941*t2064*t2073*t2091*var3[24] + 5.*t1941*t1949*t1955*var3[32] - 20.*t1941*t2011*t2018*t2030*var3[32] - 5.*t1941*t1949*t1955*var3[40];
  p_output1[1]=5.*t1126*t1864*t2025*t2175*var3[0] + 20.*t1126*t1864*t1954*t2144*t2145*var3[8] - 5.*t1126*t1864*t2025*t2175*var3[8] + 30.*t1126*t1864*t2064*t2073*t2091*var3[16] - 20.*t1126*t1864*t1954*t2144*t2145*var3[16] + 20.*t1126*t1864*t2011*t2018*t2030*var3[24] - 30.*t1126*t1864*t2064*t2073*t2091*var3[24] + 5.*t1126*t1864*t1949*t1955*var3[32] - 20.*t1126*t1864*t2011*t2018*t2030*var3[32] - 5.*t1126*t1864*t1949*t1955*var3[40];
  p_output1[2]=0.5;
  p_output1[3]=0.5;
  p_output1[4]=t2401;
  p_output1[5]=t2407;
  p_output1[6]=t2427;
  p_output1[7]=t2658;
  p_output1[8]=t2659;
  p_output1[9]=t2960;
  p_output1[10]=-5.*t2175*t3235*var3[0] + 5.*t2025*t2175*var3[8] - 5.*t1954*t2144*t2175*var3[8] - 20.*t1954*t2025*t2145*t3235*var3[8] - 20.*t2064*t2073*t2145*var3[16] + 20.*t1954*t2144*t2145*var3[16] - 30.*t2073*t2091*t2144*t3235*var3[16] - 30.*t2011*t2018*t2091*var3[24] + 30.*t2064*t2073*t2091*var3[24] - 20.*t2018*t2030*t2064*t3235*var3[24] - 20.*t1949*t1955*t2030*var3[32] + 20.*t2011*t2018*t2030*var3[32] - 5.*t1955*t2011*t3235*var3[32] + 5.*t1949*t1955*var3[40] - 5.*t2795*t3058*var3[40];
  p_output1[11]=-5.*t1954*t2144*t2175*var3[0] - 20.*t2064*t2073*t2145*var3[8] + 5.*t1954*t2144*t2175*var3[8] - 30.*t2011*t2018*t2091*var3[16] + 20.*t2064*t2073*t2145*var3[16] - 20.*t1949*t1955*t2030*var3[24] + 30.*t2011*t2018*t2091*var3[24] + 20.*t1949*t1955*t2030*var3[32] - 5.*t2795*t3058*var3[32] + 5.*t2795*t3058*var3[40];
  p_output1[12]=5.*t1941*t2025*t2175*var3[1] + 20.*t1941*t1954*t2144*t2145*var3[9] - 5.*t1941*t2025*t2175*var3[9] + 30.*t1941*t2064*t2073*t2091*var3[17] - 20.*t1941*t1954*t2144*t2145*var3[17] + 20.*t1941*t2011*t2018*t2030*var3[25] - 30.*t1941*t2064*t2073*t2091*var3[25] + 5.*t1941*t1949*t1955*var3[33] - 20.*t1941*t2011*t2018*t2030*var3[33] - 5.*t1941*t1949*t1955*var3[41];
  p_output1[13]=5.*t1126*t1864*t2025*t2175*var3[1] + 20.*t1126*t1864*t1954*t2144*t2145*var3[9] - 5.*t1126*t1864*t2025*t2175*var3[9] + 30.*t1126*t1864*t2064*t2073*t2091*var3[17] - 20.*t1126*t1864*t1954*t2144*t2145*var3[17] + 20.*t1126*t1864*t2011*t2018*t2030*var3[25] - 30.*t1126*t1864*t2064*t2073*t2091*var3[25] + 5.*t1126*t1864*t1949*t1955*var3[33] - 20.*t1126*t1864*t2011*t2018*t2030*var3[33] - 5.*t1126*t1864*t1949*t1955*var3[41];
  p_output1[14]=-1.;
  p_output1[15]=1.;
  p_output1[16]=t2401;
  p_output1[17]=t2407;
  p_output1[18]=t2427;
  p_output1[19]=t2658;
  p_output1[20]=t2659;
  p_output1[21]=t2960;
  p_output1[22]=-5.*t2175*t3235*var3[1] + 5.*t2025*t2175*var3[9] - 5.*t1954*t2144*t2175*var3[9] - 20.*t1954*t2025*t2145*t3235*var3[9] - 20.*t2064*t2073*t2145*var3[17] + 20.*t1954*t2144*t2145*var3[17] - 30.*t2073*t2091*t2144*t3235*var3[17] - 30.*t2011*t2018*t2091*var3[25] + 30.*t2064*t2073*t2091*var3[25] - 20.*t2018*t2030*t2064*t3235*var3[25] - 20.*t1949*t1955*t2030*var3[33] + 20.*t2011*t2018*t2030*var3[33] - 5.*t1955*t2011*t3235*var3[33] + 5.*t1949*t1955*var3[41] - 5.*t2795*t3058*var3[41];
  p_output1[23]=-5.*t1954*t2144*t2175*var3[1] - 20.*t2064*t2073*t2145*var3[9] + 5.*t1954*t2144*t2175*var3[9] - 30.*t2011*t2018*t2091*var3[17] + 20.*t2064*t2073*t2145*var3[17] - 20.*t1949*t1955*t2030*var3[25] + 30.*t2011*t2018*t2091*var3[25] + 20.*t1949*t1955*t2030*var3[33] - 5.*t2795*t3058*var3[33] + 5.*t2795*t3058*var3[41];
  p_output1[24]=5.*t1941*t2025*t2175*var3[2] + 20.*t1941*t1954*t2144*t2145*var3[10] - 5.*t1941*t2025*t2175*var3[10] + 30.*t1941*t2064*t2073*t2091*var3[18] - 20.*t1941*t1954*t2144*t2145*var3[18] + 20.*t1941*t2011*t2018*t2030*var3[26] - 30.*t1941*t2064*t2073*t2091*var3[26] + 5.*t1941*t1949*t1955*var3[34] - 20.*t1941*t2011*t2018*t2030*var3[34] - 5.*t1941*t1949*t1955*var3[42];
  p_output1[25]=5.*t1126*t1864*t2025*t2175*var3[2] + 20.*t1126*t1864*t1954*t2144*t2145*var3[10] - 5.*t1126*t1864*t2025*t2175*var3[10] + 30.*t1126*t1864*t2064*t2073*t2091*var3[18] - 20.*t1126*t1864*t1954*t2144*t2145*var3[18] + 20.*t1126*t1864*t2011*t2018*t2030*var3[26] - 30.*t1126*t1864*t2064*t2073*t2091*var3[26] + 5.*t1126*t1864*t1949*t1955*var3[34] - 20.*t1126*t1864*t2011*t2018*t2030*var3[34] - 5.*t1126*t1864*t1949*t1955*var3[42];
  p_output1[26]=0.5;
  p_output1[27]=0.5;
  p_output1[28]=t2401;
  p_output1[29]=t2407;
  p_output1[30]=t2427;
  p_output1[31]=t2658;
  p_output1[32]=t2659;
  p_output1[33]=t2960;
  p_output1[34]=-5.*t2175*t3235*var3[2] + 5.*t2025*t2175*var3[10] - 5.*t1954*t2144*t2175*var3[10] - 20.*t1954*t2025*t2145*t3235*var3[10] - 20.*t2064*t2073*t2145*var3[18] + 20.*t1954*t2144*t2145*var3[18] - 30.*t2073*t2091*t2144*t3235*var3[18] - 30.*t2011*t2018*t2091*var3[26] + 30.*t2064*t2073*t2091*var3[26] - 20.*t2018*t2030*t2064*t3235*var3[26] - 20.*t1949*t1955*t2030*var3[34] + 20.*t2011*t2018*t2030*var3[34] - 5.*t1955*t2011*t3235*var3[34] + 5.*t1949*t1955*var3[42] - 5.*t2795*t3058*var3[42];
  p_output1[35]=-5.*t1954*t2144*t2175*var3[2] - 20.*t2064*t2073*t2145*var3[10] + 5.*t1954*t2144*t2175*var3[10] - 30.*t2011*t2018*t2091*var3[18] + 20.*t2064*t2073*t2145*var3[18] - 20.*t1949*t1955*t2030*var3[26] + 30.*t2011*t2018*t2091*var3[26] + 20.*t1949*t1955*t2030*var3[34] - 5.*t2795*t3058*var3[34] + 5.*t2795*t3058*var3[42];
  p_output1[36]=5.*t1941*t2025*t2175*var3[3] + 20.*t1941*t1954*t2144*t2145*var3[11] - 5.*t1941*t2025*t2175*var3[11] + 30.*t1941*t2064*t2073*t2091*var3[19] - 20.*t1941*t1954*t2144*t2145*var3[19] + 20.*t1941*t2011*t2018*t2030*var3[27] - 30.*t1941*t2064*t2073*t2091*var3[27] + 5.*t1941*t1949*t1955*var3[35] - 20.*t1941*t2011*t2018*t2030*var3[35] - 5.*t1941*t1949*t1955*var3[43];
  p_output1[37]=5.*t1126*t1864*t2025*t2175*var3[3] + 20.*t1126*t1864*t1954*t2144*t2145*var3[11] - 5.*t1126*t1864*t2025*t2175*var3[11] + 30.*t1126*t1864*t2064*t2073*t2091*var3[19] - 20.*t1126*t1864*t1954*t2144*t2145*var3[19] + 20.*t1126*t1864*t2011*t2018*t2030*var3[27] - 30.*t1126*t1864*t2064*t2073*t2091*var3[27] + 5.*t1126*t1864*t1949*t1955*var3[35] - 20.*t1126*t1864*t2011*t2018*t2030*var3[35] - 5.*t1126*t1864*t1949*t1955*var3[43];
  p_output1[38]=-1.;
  p_output1[39]=1.;
  p_output1[40]=t2401;
  p_output1[41]=t2407;
  p_output1[42]=t2427;
  p_output1[43]=t2658;
  p_output1[44]=t2659;
  p_output1[45]=t2960;
  p_output1[46]=-5.*t2175*t3235*var3[3] + 5.*t2025*t2175*var3[11] - 5.*t1954*t2144*t2175*var3[11] - 20.*t1954*t2025*t2145*t3235*var3[11] - 20.*t2064*t2073*t2145*var3[19] + 20.*t1954*t2144*t2145*var3[19] - 30.*t2073*t2091*t2144*t3235*var3[19] - 30.*t2011*t2018*t2091*var3[27] + 30.*t2064*t2073*t2091*var3[27] - 20.*t2018*t2030*t2064*t3235*var3[27] - 20.*t1949*t1955*t2030*var3[35] + 20.*t2011*t2018*t2030*var3[35] - 5.*t1955*t2011*t3235*var3[35] + 5.*t1949*t1955*var3[43] - 5.*t2795*t3058*var3[43];
  p_output1[47]=-5.*t1954*t2144*t2175*var3[3] - 20.*t2064*t2073*t2145*var3[11] + 5.*t1954*t2144*t2175*var3[11] - 30.*t2011*t2018*t2091*var3[19] + 20.*t2064*t2073*t2145*var3[19] - 20.*t1949*t1955*t2030*var3[27] + 30.*t2011*t2018*t2091*var3[27] + 20.*t1949*t1955*t2030*var3[35] - 5.*t2795*t3058*var3[35] + 5.*t2795*t3058*var3[43];
  p_output1[48]=5.*t1941*t2025*t2175*var3[4] + 20.*t1941*t1954*t2144*t2145*var3[12] - 5.*t1941*t2025*t2175*var3[12] + 30.*t1941*t2064*t2073*t2091*var3[20] - 20.*t1941*t1954*t2144*t2145*var3[20] + 20.*t1941*t2011*t2018*t2030*var3[28] - 30.*t1941*t2064*t2073*t2091*var3[28] + 5.*t1941*t1949*t1955*var3[36] - 20.*t1941*t2011*t2018*t2030*var3[36] - 5.*t1941*t1949*t1955*var3[44];
  p_output1[49]=5.*t1126*t1864*t2025*t2175*var3[4] + 20.*t1126*t1864*t1954*t2144*t2145*var3[12] - 5.*t1126*t1864*t2025*t2175*var3[12] + 30.*t1126*t1864*t2064*t2073*t2091*var3[20] - 20.*t1126*t1864*t1954*t2144*t2145*var3[20] + 20.*t1126*t1864*t2011*t2018*t2030*var3[28] - 30.*t1126*t1864*t2064*t2073*t2091*var3[28] + 5.*t1126*t1864*t1949*t1955*var3[36] - 20.*t1126*t1864*t2011*t2018*t2030*var3[36] - 5.*t1126*t1864*t1949*t1955*var3[44];
  p_output1[50]=0.5;
  p_output1[51]=0.5;
  p_output1[52]=t2401;
  p_output1[53]=t2407;
  p_output1[54]=t2427;
  p_output1[55]=t2658;
  p_output1[56]=t2659;
  p_output1[57]=t2960;
  p_output1[58]=-5.*t2175*t3235*var3[4] + 5.*t2025*t2175*var3[12] - 5.*t1954*t2144*t2175*var3[12] - 20.*t1954*t2025*t2145*t3235*var3[12] - 20.*t2064*t2073*t2145*var3[20] + 20.*t1954*t2144*t2145*var3[20] - 30.*t2073*t2091*t2144*t3235*var3[20] - 30.*t2011*t2018*t2091*var3[28] + 30.*t2064*t2073*t2091*var3[28] - 20.*t2018*t2030*t2064*t3235*var3[28] - 20.*t1949*t1955*t2030*var3[36] + 20.*t2011*t2018*t2030*var3[36] - 5.*t1955*t2011*t3235*var3[36] + 5.*t1949*t1955*var3[44] - 5.*t2795*t3058*var3[44];
  p_output1[59]=-5.*t1954*t2144*t2175*var3[4] - 20.*t2064*t2073*t2145*var3[12] + 5.*t1954*t2144*t2175*var3[12] - 30.*t2011*t2018*t2091*var3[20] + 20.*t2064*t2073*t2145*var3[20] - 20.*t1949*t1955*t2030*var3[28] + 30.*t2011*t2018*t2091*var3[28] + 20.*t1949*t1955*t2030*var3[36] - 5.*t2795*t3058*var3[36] + 5.*t2795*t3058*var3[44];
  p_output1[60]=5.*t1941*t2025*t2175*var3[5] + 20.*t1941*t1954*t2144*t2145*var3[13] - 5.*t1941*t2025*t2175*var3[13] + 30.*t1941*t2064*t2073*t2091*var3[21] - 20.*t1941*t1954*t2144*t2145*var3[21] + 20.*t1941*t2011*t2018*t2030*var3[29] - 30.*t1941*t2064*t2073*t2091*var3[29] + 5.*t1941*t1949*t1955*var3[37] - 20.*t1941*t2011*t2018*t2030*var3[37] - 5.*t1941*t1949*t1955*var3[45];
  p_output1[61]=5.*t1126*t1864*t2025*t2175*var3[5] + 20.*t1126*t1864*t1954*t2144*t2145*var3[13] - 5.*t1126*t1864*t2025*t2175*var3[13] + 30.*t1126*t1864*t2064*t2073*t2091*var3[21] - 20.*t1126*t1864*t1954*t2144*t2145*var3[21] + 20.*t1126*t1864*t2011*t2018*t2030*var3[29] - 30.*t1126*t1864*t2064*t2073*t2091*var3[29] + 5.*t1126*t1864*t1949*t1955*var3[37] - 20.*t1126*t1864*t2011*t2018*t2030*var3[37] - 5.*t1126*t1864*t1949*t1955*var3[45];
  p_output1[62]=-1.;
  p_output1[63]=1.;
  p_output1[64]=t2401;
  p_output1[65]=t2407;
  p_output1[66]=t2427;
  p_output1[67]=t2658;
  p_output1[68]=t2659;
  p_output1[69]=t2960;
  p_output1[70]=-5.*t2175*t3235*var3[5] + 5.*t2025*t2175*var3[13] - 5.*t1954*t2144*t2175*var3[13] - 20.*t1954*t2025*t2145*t3235*var3[13] - 20.*t2064*t2073*t2145*var3[21] + 20.*t1954*t2144*t2145*var3[21] - 30.*t2073*t2091*t2144*t3235*var3[21] - 30.*t2011*t2018*t2091*var3[29] + 30.*t2064*t2073*t2091*var3[29] - 20.*t2018*t2030*t2064*t3235*var3[29] - 20.*t1949*t1955*t2030*var3[37] + 20.*t2011*t2018*t2030*var3[37] - 5.*t1955*t2011*t3235*var3[37] + 5.*t1949*t1955*var3[45] - 5.*t2795*t3058*var3[45];
  p_output1[71]=-5.*t1954*t2144*t2175*var3[5] - 20.*t2064*t2073*t2145*var3[13] + 5.*t1954*t2144*t2175*var3[13] - 30.*t2011*t2018*t2091*var3[21] + 20.*t2064*t2073*t2145*var3[21] - 20.*t1949*t1955*t2030*var3[29] + 30.*t2011*t2018*t2091*var3[29] + 20.*t1949*t1955*t2030*var3[37] - 5.*t2795*t3058*var3[37] + 5.*t2795*t3058*var3[45];
  p_output1[72]=5.*t1941*t2025*t2175*var3[6] + 20.*t1941*t1954*t2144*t2145*var3[14] - 5.*t1941*t2025*t2175*var3[14] + 30.*t1941*t2064*t2073*t2091*var3[22] - 20.*t1941*t1954*t2144*t2145*var3[22] + 20.*t1941*t2011*t2018*t2030*var3[30] - 30.*t1941*t2064*t2073*t2091*var3[30] + 5.*t1941*t1949*t1955*var3[38] - 20.*t1941*t2011*t2018*t2030*var3[38] - 5.*t1941*t1949*t1955*var3[46];
  p_output1[73]=5.*t1126*t1864*t2025*t2175*var3[6] + 20.*t1126*t1864*t1954*t2144*t2145*var3[14] - 5.*t1126*t1864*t2025*t2175*var3[14] + 30.*t1126*t1864*t2064*t2073*t2091*var3[22] - 20.*t1126*t1864*t1954*t2144*t2145*var3[22] + 20.*t1126*t1864*t2011*t2018*t2030*var3[30] - 30.*t1126*t1864*t2064*t2073*t2091*var3[30] + 5.*t1126*t1864*t1949*t1955*var3[38] - 20.*t1126*t1864*t2011*t2018*t2030*var3[38] - 5.*t1126*t1864*t1949*t1955*var3[46];
  p_output1[74]=0.5;
  p_output1[75]=0.5;
  p_output1[76]=t2401;
  p_output1[77]=t2407;
  p_output1[78]=t2427;
  p_output1[79]=t2658;
  p_output1[80]=t2659;
  p_output1[81]=t2960;
  p_output1[82]=-5.*t2175*t3235*var3[6] + 5.*t2025*t2175*var3[14] - 5.*t1954*t2144*t2175*var3[14] - 20.*t1954*t2025*t2145*t3235*var3[14] - 20.*t2064*t2073*t2145*var3[22] + 20.*t1954*t2144*t2145*var3[22] - 30.*t2073*t2091*t2144*t3235*var3[22] - 30.*t2011*t2018*t2091*var3[30] + 30.*t2064*t2073*t2091*var3[30] - 20.*t2018*t2030*t2064*t3235*var3[30] - 20.*t1949*t1955*t2030*var3[38] + 20.*t2011*t2018*t2030*var3[38] - 5.*t1955*t2011*t3235*var3[38] + 5.*t1949*t1955*var3[46] - 5.*t2795*t3058*var3[46];
  p_output1[83]=-5.*t1954*t2144*t2175*var3[6] - 20.*t2064*t2073*t2145*var3[14] + 5.*t1954*t2144*t2175*var3[14] - 30.*t2011*t2018*t2091*var3[22] + 20.*t2064*t2073*t2145*var3[22] - 20.*t1949*t1955*t2030*var3[30] + 30.*t2011*t2018*t2091*var3[30] + 20.*t1949*t1955*t2030*var3[38] - 5.*t2795*t3058*var3[38] + 5.*t2795*t3058*var3[46];
  p_output1[84]=5.*t1941*t2025*t2175*var3[7] + 20.*t1941*t1954*t2144*t2145*var3[15] - 5.*t1941*t2025*t2175*var3[15] + 30.*t1941*t2064*t2073*t2091*var3[23] - 20.*t1941*t1954*t2144*t2145*var3[23] + 20.*t1941*t2011*t2018*t2030*var3[31] - 30.*t1941*t2064*t2073*t2091*var3[31] + 5.*t1941*t1949*t1955*var3[39] - 20.*t1941*t2011*t2018*t2030*var3[39] - 5.*t1941*t1949*t1955*var3[47];
  p_output1[85]=5.*t1126*t1864*t2025*t2175*var3[7] + 20.*t1126*t1864*t1954*t2144*t2145*var3[15] - 5.*t1126*t1864*t2025*t2175*var3[15] + 30.*t1126*t1864*t2064*t2073*t2091*var3[23] - 20.*t1126*t1864*t1954*t2144*t2145*var3[23] + 20.*t1126*t1864*t2011*t2018*t2030*var3[31] - 30.*t1126*t1864*t2064*t2073*t2091*var3[31] + 5.*t1126*t1864*t1949*t1955*var3[39] - 20.*t1126*t1864*t2011*t2018*t2030*var3[39] - 5.*t1126*t1864*t1949*t1955*var3[47];
  p_output1[86]=-1.;
  p_output1[87]=1.;
  p_output1[88]=t2401;
  p_output1[89]=t2407;
  p_output1[90]=t2427;
  p_output1[91]=t2658;
  p_output1[92]=t2659;
  p_output1[93]=t2960;
  p_output1[94]=-5.*t2175*t3235*var3[7] + 5.*t2025*t2175*var3[15] - 5.*t1954*t2144*t2175*var3[15] - 20.*t1954*t2025*t2145*t3235*var3[15] - 20.*t2064*t2073*t2145*var3[23] + 20.*t1954*t2144*t2145*var3[23] - 30.*t2073*t2091*t2144*t3235*var3[23] - 30.*t2011*t2018*t2091*var3[31] + 30.*t2064*t2073*t2091*var3[31] - 20.*t2018*t2030*t2064*t3235*var3[31] - 20.*t1949*t1955*t2030*var3[39] + 20.*t2011*t2018*t2030*var3[39] - 5.*t1955*t2011*t3235*var3[39] + 5.*t1949*t1955*var3[47] - 5.*t2795*t3058*var3[47];
  p_output1[95]=-5.*t1954*t2144*t2175*var3[7] - 20.*t2064*t2073*t2145*var3[15] + 5.*t1954*t2144*t2175*var3[15] - 30.*t2011*t2018*t2091*var3[23] + 20.*t2064*t2073*t2145*var3[23] - 20.*t1949*t1955*t2030*var3[31] + 30.*t2011*t2018*t2091*var3[31] + 20.*t1949*t1955*t2030*var3[39] - 5.*t2795*t3058*var3[39] + 5.*t2795*t3058*var3[47];
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

#include "J_y_output_FrontStance.hh"

namespace FrontStance
{

void J_y_output_FrontStance_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4,const double *var5,const double *var6)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4, var5, var6);

}

}

#endif // MATLAB_MEX_FILE
