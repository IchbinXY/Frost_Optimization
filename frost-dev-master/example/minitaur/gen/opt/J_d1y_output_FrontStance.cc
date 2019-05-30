/*
 * Automatically Generated from Mathematica.
 * Wed 29 May 2019 23:46:36 GMT-04:00
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
static void output1(double *p_output1,const double *var1,const double *var2,const double *var3,const double *var4,const double *var5,const double *var6,const double *var7)
{
  double t2289;
  double t990;
  double t1382;
  double t2179;
  double t2181;
  double t2229;
  double t2971;
  double t3084;
  double t3402;
  double t3438;
  double t3485;
  double t3495;
  double t3501;
  double t3575;
  double t3660;
  double t3677;
  double t3709;
  double t3772;
  double t3830;
  double t3865;
  double t3999;
  double t4013;
  double t4461;
  double t4733;
  double t5113;
  double t5141;
  double t5147;
  double t4462;
  double t4473;
  double t4490;
  double t4508;
  double t4519;
  double t4596;
  double t4616;
  double t4632;
  double t4642;
  double t4670;
  double t4739;
  double t4805;
  double t5040;
  double t5072;
  t2289 = -1.*var5[0];
  t990 = -1. + var6[0];
  t1382 = -1. + var7[0];
  t2179 = 1/t1382;
  t2181 = -1.*t990*t2179;
  t2229 = 1. + t2181;
  t2971 = t2289 + var5[1];
  t3084 = Power(t2971,-5);
  t3402 = -1.*var1[0];
  t3438 = t3402 + var1[1];
  t3485 = t990*t2179*t3438;
  t3495 = t2289 + var1[0] + t3485;
  t3501 = Power(t3495,3);
  t3575 = Power(t2971,-4);
  t3660 = Power(t3495,2);
  t3677 = 1/t2971;
  t3709 = -1.*t3677*t3495;
  t3772 = 1. + t3709;
  t3830 = Power(t2971,-3);
  t3865 = Power(t3772,2);
  t3999 = Power(t2971,-2);
  t4013 = Power(t3772,3);
  t4461 = Power(t3772,4);
  t4733 = Power(t3495,4);
  t5113 = Power(t2971,-6);
  t5141 = -1.*t3999*t3495;
  t5147 = t3677 + t5141;
  t4462 = 5.*t3677*t4461;
  t4473 = 20.*t3999*t3495*t4013;
  t4490 = -5.*t3677*t4461;
  t4508 = t4473 + t4490;
  t4519 = 30.*t3830*t3660*t3865;
  t4596 = -20.*t3999*t3495*t4013;
  t4616 = t4519 + t4596;
  t4632 = 20.*t3575*t3501*t3772;
  t4642 = -30.*t3830*t3660*t3865;
  t4670 = t4632 + t4642;
  t4739 = 5.*t3084*t4733;
  t4805 = -20.*t3575*t3501*t3772;
  t5040 = t4739 + t4805;
  t5072 = -5.*t3084*t4733;
  p_output1[0]=-20.*t2229*t3999*t4013*var4[0] - 60.*t2229*t3495*t3830*t3865*var4[8] + 40.*t2229*t3999*t4013*var4[8] - 60.*t2229*t3575*t3660*t3772*var4[16] + 120.*t2229*t3495*t3830*t3865*var4[16] - 20.*t2229*t3999*t4013*var4[16] - 20.*t2229*t3084*t3501*var4[24] + 120.*t2229*t3575*t3660*t3772*var4[24] - 60.*t2229*t3495*t3830*t3865*var4[24] + 40.*t2229*t3084*t3501*var4[32] - 60.*t2229*t3575*t3660*t3772*var4[32] - 20.*t2229*t3084*t3501*var4[40];
  p_output1[1]=-20.*t2179*t3999*t4013*t990*var4[0] - 60.*t2179*t3495*t3830*t3865*t990*var4[8] + 40.*t2179*t3999*t4013*t990*var4[8] - 60.*t2179*t3575*t3660*t3772*t990*var4[16] + 120.*t2179*t3495*t3830*t3865*t990*var4[16] - 20.*t2179*t3999*t4013*t990*var4[16] - 20.*t2179*t3084*t3501*t990*var4[24] + 120.*t2179*t3575*t3660*t3772*t990*var4[24] - 60.*t2179*t3495*t3830*t3865*t990*var4[24] + 40.*t2179*t3084*t3501*t990*var4[32] - 60.*t2179*t3575*t3660*t3772*t990*var4[32] - 20.*t2179*t3084*t3501*t990*var4[40];
  p_output1[2]=0.5;
  p_output1[3]=0.5;
  p_output1[4]=t4462;
  p_output1[5]=t4508;
  p_output1[6]=t4616;
  p_output1[7]=t4670;
  p_output1[8]=t5040;
  p_output1[9]=t5072;
  p_output1[10]=5.*t3999*t4461*var4[0] + 20.*t3677*t4013*t5147*var4[0] + 40.*t3495*t3830*t4013*var4[8] - 20.*t3999*t4013*var4[8] - 5.*t3999*t4461*var4[8] + 60.*t3495*t3865*t3999*t5147*var4[8] - 20.*t3677*t4013*t5147*var4[8] + 90.*t3575*t3660*t3865*var4[16] - 60.*t3495*t3830*t3865*var4[16] - 40.*t3495*t3830*t4013*var4[16] + 20.*t3999*t4013*var4[16] + 60.*t3660*t3772*t3830*t5147*var4[16] - 60.*t3495*t3865*t3999*t5147*var4[16] + 80.*t3084*t3501*t3772*var4[24] - 60.*t3575*t3660*t3772*var4[24] - 90.*t3575*t3660*t3865*var4[24] + 60.*t3495*t3830*t3865*var4[24] + 20.*t3501*t3575*t5147*var4[24] - 60.*t3660*t3772*t3830*t5147*var4[24] - 20.*t3084*t3501*var4[32] - 80.*t3084*t3501*t3772*var4[32] + 60.*t3575*t3660*t3772*var4[32] + 25.*t4733*t5113*var4[32] - 20.*t3501*t3575*t5147*var4[32] + 20.*t3084*t3501*var4[40] - 25.*t4733*t5113*var4[40];
  p_output1[11]=20.*t3495*t3830*t4013*var4[0] - 5.*t3999*t4461*var4[0] + 60.*t3575*t3660*t3865*var4[8] - 60.*t3495*t3830*t4013*var4[8] + 5.*t3999*t4461*var4[8] + 60.*t3084*t3501*t3772*var4[16] - 150.*t3575*t3660*t3865*var4[16] + 40.*t3495*t3830*t4013*var4[16] - 140.*t3084*t3501*t3772*var4[24] + 90.*t3575*t3660*t3865*var4[24] + 20.*t4733*t5113*var4[24] + 80.*t3084*t3501*t3772*var4[32] - 45.*t4733*t5113*var4[32] + 25.*t4733*t5113*var4[40];
  p_output1[12]=-20.*t2229*t3999*t4013*var4[1] - 60.*t2229*t3495*t3830*t3865*var4[9] + 40.*t2229*t3999*t4013*var4[9] - 60.*t2229*t3575*t3660*t3772*var4[17] + 120.*t2229*t3495*t3830*t3865*var4[17] - 20.*t2229*t3999*t4013*var4[17] - 20.*t2229*t3084*t3501*var4[25] + 120.*t2229*t3575*t3660*t3772*var4[25] - 60.*t2229*t3495*t3830*t3865*var4[25] + 40.*t2229*t3084*t3501*var4[33] - 60.*t2229*t3575*t3660*t3772*var4[33] - 20.*t2229*t3084*t3501*var4[41];
  p_output1[13]=-20.*t2179*t3999*t4013*t990*var4[1] - 60.*t2179*t3495*t3830*t3865*t990*var4[9] + 40.*t2179*t3999*t4013*t990*var4[9] - 60.*t2179*t3575*t3660*t3772*t990*var4[17] + 120.*t2179*t3495*t3830*t3865*t990*var4[17] - 20.*t2179*t3999*t4013*t990*var4[17] - 20.*t2179*t3084*t3501*t990*var4[25] + 120.*t2179*t3575*t3660*t3772*t990*var4[25] - 60.*t2179*t3495*t3830*t3865*t990*var4[25] + 40.*t2179*t3084*t3501*t990*var4[33] - 60.*t2179*t3575*t3660*t3772*t990*var4[33] - 20.*t2179*t3084*t3501*t990*var4[41];
  p_output1[14]=-1.;
  p_output1[15]=1.;
  p_output1[16]=t4462;
  p_output1[17]=t4508;
  p_output1[18]=t4616;
  p_output1[19]=t4670;
  p_output1[20]=t5040;
  p_output1[21]=t5072;
  p_output1[22]=5.*t3999*t4461*var4[1] + 20.*t3677*t4013*t5147*var4[1] + 40.*t3495*t3830*t4013*var4[9] - 20.*t3999*t4013*var4[9] - 5.*t3999*t4461*var4[9] + 60.*t3495*t3865*t3999*t5147*var4[9] - 20.*t3677*t4013*t5147*var4[9] + 90.*t3575*t3660*t3865*var4[17] - 60.*t3495*t3830*t3865*var4[17] - 40.*t3495*t3830*t4013*var4[17] + 20.*t3999*t4013*var4[17] + 60.*t3660*t3772*t3830*t5147*var4[17] - 60.*t3495*t3865*t3999*t5147*var4[17] + 80.*t3084*t3501*t3772*var4[25] - 60.*t3575*t3660*t3772*var4[25] - 90.*t3575*t3660*t3865*var4[25] + 60.*t3495*t3830*t3865*var4[25] + 20.*t3501*t3575*t5147*var4[25] - 60.*t3660*t3772*t3830*t5147*var4[25] - 20.*t3084*t3501*var4[33] - 80.*t3084*t3501*t3772*var4[33] + 60.*t3575*t3660*t3772*var4[33] + 25.*t4733*t5113*var4[33] - 20.*t3501*t3575*t5147*var4[33] + 20.*t3084*t3501*var4[41] - 25.*t4733*t5113*var4[41];
  p_output1[23]=20.*t3495*t3830*t4013*var4[1] - 5.*t3999*t4461*var4[1] + 60.*t3575*t3660*t3865*var4[9] - 60.*t3495*t3830*t4013*var4[9] + 5.*t3999*t4461*var4[9] + 60.*t3084*t3501*t3772*var4[17] - 150.*t3575*t3660*t3865*var4[17] + 40.*t3495*t3830*t4013*var4[17] - 140.*t3084*t3501*t3772*var4[25] + 90.*t3575*t3660*t3865*var4[25] + 20.*t4733*t5113*var4[25] + 80.*t3084*t3501*t3772*var4[33] - 45.*t4733*t5113*var4[33] + 25.*t4733*t5113*var4[41];
  p_output1[24]=-20.*t2229*t3999*t4013*var4[2] - 60.*t2229*t3495*t3830*t3865*var4[10] + 40.*t2229*t3999*t4013*var4[10] - 60.*t2229*t3575*t3660*t3772*var4[18] + 120.*t2229*t3495*t3830*t3865*var4[18] - 20.*t2229*t3999*t4013*var4[18] - 20.*t2229*t3084*t3501*var4[26] + 120.*t2229*t3575*t3660*t3772*var4[26] - 60.*t2229*t3495*t3830*t3865*var4[26] + 40.*t2229*t3084*t3501*var4[34] - 60.*t2229*t3575*t3660*t3772*var4[34] - 20.*t2229*t3084*t3501*var4[42];
  p_output1[25]=-20.*t2179*t3999*t4013*t990*var4[2] - 60.*t2179*t3495*t3830*t3865*t990*var4[10] + 40.*t2179*t3999*t4013*t990*var4[10] - 60.*t2179*t3575*t3660*t3772*t990*var4[18] + 120.*t2179*t3495*t3830*t3865*t990*var4[18] - 20.*t2179*t3999*t4013*t990*var4[18] - 20.*t2179*t3084*t3501*t990*var4[26] + 120.*t2179*t3575*t3660*t3772*t990*var4[26] - 60.*t2179*t3495*t3830*t3865*t990*var4[26] + 40.*t2179*t3084*t3501*t990*var4[34] - 60.*t2179*t3575*t3660*t3772*t990*var4[34] - 20.*t2179*t3084*t3501*t990*var4[42];
  p_output1[26]=0.5;
  p_output1[27]=0.5;
  p_output1[28]=t4462;
  p_output1[29]=t4508;
  p_output1[30]=t4616;
  p_output1[31]=t4670;
  p_output1[32]=t5040;
  p_output1[33]=t5072;
  p_output1[34]=5.*t3999*t4461*var4[2] + 20.*t3677*t4013*t5147*var4[2] + 40.*t3495*t3830*t4013*var4[10] - 20.*t3999*t4013*var4[10] - 5.*t3999*t4461*var4[10] + 60.*t3495*t3865*t3999*t5147*var4[10] - 20.*t3677*t4013*t5147*var4[10] + 90.*t3575*t3660*t3865*var4[18] - 60.*t3495*t3830*t3865*var4[18] - 40.*t3495*t3830*t4013*var4[18] + 20.*t3999*t4013*var4[18] + 60.*t3660*t3772*t3830*t5147*var4[18] - 60.*t3495*t3865*t3999*t5147*var4[18] + 80.*t3084*t3501*t3772*var4[26] - 60.*t3575*t3660*t3772*var4[26] - 90.*t3575*t3660*t3865*var4[26] + 60.*t3495*t3830*t3865*var4[26] + 20.*t3501*t3575*t5147*var4[26] - 60.*t3660*t3772*t3830*t5147*var4[26] - 20.*t3084*t3501*var4[34] - 80.*t3084*t3501*t3772*var4[34] + 60.*t3575*t3660*t3772*var4[34] + 25.*t4733*t5113*var4[34] - 20.*t3501*t3575*t5147*var4[34] + 20.*t3084*t3501*var4[42] - 25.*t4733*t5113*var4[42];
  p_output1[35]=20.*t3495*t3830*t4013*var4[2] - 5.*t3999*t4461*var4[2] + 60.*t3575*t3660*t3865*var4[10] - 60.*t3495*t3830*t4013*var4[10] + 5.*t3999*t4461*var4[10] + 60.*t3084*t3501*t3772*var4[18] - 150.*t3575*t3660*t3865*var4[18] + 40.*t3495*t3830*t4013*var4[18] - 140.*t3084*t3501*t3772*var4[26] + 90.*t3575*t3660*t3865*var4[26] + 20.*t4733*t5113*var4[26] + 80.*t3084*t3501*t3772*var4[34] - 45.*t4733*t5113*var4[34] + 25.*t4733*t5113*var4[42];
  p_output1[36]=-20.*t2229*t3999*t4013*var4[3] - 60.*t2229*t3495*t3830*t3865*var4[11] + 40.*t2229*t3999*t4013*var4[11] - 60.*t2229*t3575*t3660*t3772*var4[19] + 120.*t2229*t3495*t3830*t3865*var4[19] - 20.*t2229*t3999*t4013*var4[19] - 20.*t2229*t3084*t3501*var4[27] + 120.*t2229*t3575*t3660*t3772*var4[27] - 60.*t2229*t3495*t3830*t3865*var4[27] + 40.*t2229*t3084*t3501*var4[35] - 60.*t2229*t3575*t3660*t3772*var4[35] - 20.*t2229*t3084*t3501*var4[43];
  p_output1[37]=-20.*t2179*t3999*t4013*t990*var4[3] - 60.*t2179*t3495*t3830*t3865*t990*var4[11] + 40.*t2179*t3999*t4013*t990*var4[11] - 60.*t2179*t3575*t3660*t3772*t990*var4[19] + 120.*t2179*t3495*t3830*t3865*t990*var4[19] - 20.*t2179*t3999*t4013*t990*var4[19] - 20.*t2179*t3084*t3501*t990*var4[27] + 120.*t2179*t3575*t3660*t3772*t990*var4[27] - 60.*t2179*t3495*t3830*t3865*t990*var4[27] + 40.*t2179*t3084*t3501*t990*var4[35] - 60.*t2179*t3575*t3660*t3772*t990*var4[35] - 20.*t2179*t3084*t3501*t990*var4[43];
  p_output1[38]=-1.;
  p_output1[39]=1.;
  p_output1[40]=t4462;
  p_output1[41]=t4508;
  p_output1[42]=t4616;
  p_output1[43]=t4670;
  p_output1[44]=t5040;
  p_output1[45]=t5072;
  p_output1[46]=5.*t3999*t4461*var4[3] + 20.*t3677*t4013*t5147*var4[3] + 40.*t3495*t3830*t4013*var4[11] - 20.*t3999*t4013*var4[11] - 5.*t3999*t4461*var4[11] + 60.*t3495*t3865*t3999*t5147*var4[11] - 20.*t3677*t4013*t5147*var4[11] + 90.*t3575*t3660*t3865*var4[19] - 60.*t3495*t3830*t3865*var4[19] - 40.*t3495*t3830*t4013*var4[19] + 20.*t3999*t4013*var4[19] + 60.*t3660*t3772*t3830*t5147*var4[19] - 60.*t3495*t3865*t3999*t5147*var4[19] + 80.*t3084*t3501*t3772*var4[27] - 60.*t3575*t3660*t3772*var4[27] - 90.*t3575*t3660*t3865*var4[27] + 60.*t3495*t3830*t3865*var4[27] + 20.*t3501*t3575*t5147*var4[27] - 60.*t3660*t3772*t3830*t5147*var4[27] - 20.*t3084*t3501*var4[35] - 80.*t3084*t3501*t3772*var4[35] + 60.*t3575*t3660*t3772*var4[35] + 25.*t4733*t5113*var4[35] - 20.*t3501*t3575*t5147*var4[35] + 20.*t3084*t3501*var4[43] - 25.*t4733*t5113*var4[43];
  p_output1[47]=20.*t3495*t3830*t4013*var4[3] - 5.*t3999*t4461*var4[3] + 60.*t3575*t3660*t3865*var4[11] - 60.*t3495*t3830*t4013*var4[11] + 5.*t3999*t4461*var4[11] + 60.*t3084*t3501*t3772*var4[19] - 150.*t3575*t3660*t3865*var4[19] + 40.*t3495*t3830*t4013*var4[19] - 140.*t3084*t3501*t3772*var4[27] + 90.*t3575*t3660*t3865*var4[27] + 20.*t4733*t5113*var4[27] + 80.*t3084*t3501*t3772*var4[35] - 45.*t4733*t5113*var4[35] + 25.*t4733*t5113*var4[43];
  p_output1[48]=-20.*t2229*t3999*t4013*var4[4] - 60.*t2229*t3495*t3830*t3865*var4[12] + 40.*t2229*t3999*t4013*var4[12] - 60.*t2229*t3575*t3660*t3772*var4[20] + 120.*t2229*t3495*t3830*t3865*var4[20] - 20.*t2229*t3999*t4013*var4[20] - 20.*t2229*t3084*t3501*var4[28] + 120.*t2229*t3575*t3660*t3772*var4[28] - 60.*t2229*t3495*t3830*t3865*var4[28] + 40.*t2229*t3084*t3501*var4[36] - 60.*t2229*t3575*t3660*t3772*var4[36] - 20.*t2229*t3084*t3501*var4[44];
  p_output1[49]=-20.*t2179*t3999*t4013*t990*var4[4] - 60.*t2179*t3495*t3830*t3865*t990*var4[12] + 40.*t2179*t3999*t4013*t990*var4[12] - 60.*t2179*t3575*t3660*t3772*t990*var4[20] + 120.*t2179*t3495*t3830*t3865*t990*var4[20] - 20.*t2179*t3999*t4013*t990*var4[20] - 20.*t2179*t3084*t3501*t990*var4[28] + 120.*t2179*t3575*t3660*t3772*t990*var4[28] - 60.*t2179*t3495*t3830*t3865*t990*var4[28] + 40.*t2179*t3084*t3501*t990*var4[36] - 60.*t2179*t3575*t3660*t3772*t990*var4[36] - 20.*t2179*t3084*t3501*t990*var4[44];
  p_output1[50]=0.5;
  p_output1[51]=0.5;
  p_output1[52]=t4462;
  p_output1[53]=t4508;
  p_output1[54]=t4616;
  p_output1[55]=t4670;
  p_output1[56]=t5040;
  p_output1[57]=t5072;
  p_output1[58]=5.*t3999*t4461*var4[4] + 20.*t3677*t4013*t5147*var4[4] + 40.*t3495*t3830*t4013*var4[12] - 20.*t3999*t4013*var4[12] - 5.*t3999*t4461*var4[12] + 60.*t3495*t3865*t3999*t5147*var4[12] - 20.*t3677*t4013*t5147*var4[12] + 90.*t3575*t3660*t3865*var4[20] - 60.*t3495*t3830*t3865*var4[20] - 40.*t3495*t3830*t4013*var4[20] + 20.*t3999*t4013*var4[20] + 60.*t3660*t3772*t3830*t5147*var4[20] - 60.*t3495*t3865*t3999*t5147*var4[20] + 80.*t3084*t3501*t3772*var4[28] - 60.*t3575*t3660*t3772*var4[28] - 90.*t3575*t3660*t3865*var4[28] + 60.*t3495*t3830*t3865*var4[28] + 20.*t3501*t3575*t5147*var4[28] - 60.*t3660*t3772*t3830*t5147*var4[28] - 20.*t3084*t3501*var4[36] - 80.*t3084*t3501*t3772*var4[36] + 60.*t3575*t3660*t3772*var4[36] + 25.*t4733*t5113*var4[36] - 20.*t3501*t3575*t5147*var4[36] + 20.*t3084*t3501*var4[44] - 25.*t4733*t5113*var4[44];
  p_output1[59]=20.*t3495*t3830*t4013*var4[4] - 5.*t3999*t4461*var4[4] + 60.*t3575*t3660*t3865*var4[12] - 60.*t3495*t3830*t4013*var4[12] + 5.*t3999*t4461*var4[12] + 60.*t3084*t3501*t3772*var4[20] - 150.*t3575*t3660*t3865*var4[20] + 40.*t3495*t3830*t4013*var4[20] - 140.*t3084*t3501*t3772*var4[28] + 90.*t3575*t3660*t3865*var4[28] + 20.*t4733*t5113*var4[28] + 80.*t3084*t3501*t3772*var4[36] - 45.*t4733*t5113*var4[36] + 25.*t4733*t5113*var4[44];
  p_output1[60]=-20.*t2229*t3999*t4013*var4[5] - 60.*t2229*t3495*t3830*t3865*var4[13] + 40.*t2229*t3999*t4013*var4[13] - 60.*t2229*t3575*t3660*t3772*var4[21] + 120.*t2229*t3495*t3830*t3865*var4[21] - 20.*t2229*t3999*t4013*var4[21] - 20.*t2229*t3084*t3501*var4[29] + 120.*t2229*t3575*t3660*t3772*var4[29] - 60.*t2229*t3495*t3830*t3865*var4[29] + 40.*t2229*t3084*t3501*var4[37] - 60.*t2229*t3575*t3660*t3772*var4[37] - 20.*t2229*t3084*t3501*var4[45];
  p_output1[61]=-20.*t2179*t3999*t4013*t990*var4[5] - 60.*t2179*t3495*t3830*t3865*t990*var4[13] + 40.*t2179*t3999*t4013*t990*var4[13] - 60.*t2179*t3575*t3660*t3772*t990*var4[21] + 120.*t2179*t3495*t3830*t3865*t990*var4[21] - 20.*t2179*t3999*t4013*t990*var4[21] - 20.*t2179*t3084*t3501*t990*var4[29] + 120.*t2179*t3575*t3660*t3772*t990*var4[29] - 60.*t2179*t3495*t3830*t3865*t990*var4[29] + 40.*t2179*t3084*t3501*t990*var4[37] - 60.*t2179*t3575*t3660*t3772*t990*var4[37] - 20.*t2179*t3084*t3501*t990*var4[45];
  p_output1[62]=-1.;
  p_output1[63]=1.;
  p_output1[64]=t4462;
  p_output1[65]=t4508;
  p_output1[66]=t4616;
  p_output1[67]=t4670;
  p_output1[68]=t5040;
  p_output1[69]=t5072;
  p_output1[70]=5.*t3999*t4461*var4[5] + 20.*t3677*t4013*t5147*var4[5] + 40.*t3495*t3830*t4013*var4[13] - 20.*t3999*t4013*var4[13] - 5.*t3999*t4461*var4[13] + 60.*t3495*t3865*t3999*t5147*var4[13] - 20.*t3677*t4013*t5147*var4[13] + 90.*t3575*t3660*t3865*var4[21] - 60.*t3495*t3830*t3865*var4[21] - 40.*t3495*t3830*t4013*var4[21] + 20.*t3999*t4013*var4[21] + 60.*t3660*t3772*t3830*t5147*var4[21] - 60.*t3495*t3865*t3999*t5147*var4[21] + 80.*t3084*t3501*t3772*var4[29] - 60.*t3575*t3660*t3772*var4[29] - 90.*t3575*t3660*t3865*var4[29] + 60.*t3495*t3830*t3865*var4[29] + 20.*t3501*t3575*t5147*var4[29] - 60.*t3660*t3772*t3830*t5147*var4[29] - 20.*t3084*t3501*var4[37] - 80.*t3084*t3501*t3772*var4[37] + 60.*t3575*t3660*t3772*var4[37] + 25.*t4733*t5113*var4[37] - 20.*t3501*t3575*t5147*var4[37] + 20.*t3084*t3501*var4[45] - 25.*t4733*t5113*var4[45];
  p_output1[71]=20.*t3495*t3830*t4013*var4[5] - 5.*t3999*t4461*var4[5] + 60.*t3575*t3660*t3865*var4[13] - 60.*t3495*t3830*t4013*var4[13] + 5.*t3999*t4461*var4[13] + 60.*t3084*t3501*t3772*var4[21] - 150.*t3575*t3660*t3865*var4[21] + 40.*t3495*t3830*t4013*var4[21] - 140.*t3084*t3501*t3772*var4[29] + 90.*t3575*t3660*t3865*var4[29] + 20.*t4733*t5113*var4[29] + 80.*t3084*t3501*t3772*var4[37] - 45.*t4733*t5113*var4[37] + 25.*t4733*t5113*var4[45];
  p_output1[72]=-20.*t2229*t3999*t4013*var4[6] - 60.*t2229*t3495*t3830*t3865*var4[14] + 40.*t2229*t3999*t4013*var4[14] - 60.*t2229*t3575*t3660*t3772*var4[22] + 120.*t2229*t3495*t3830*t3865*var4[22] - 20.*t2229*t3999*t4013*var4[22] - 20.*t2229*t3084*t3501*var4[30] + 120.*t2229*t3575*t3660*t3772*var4[30] - 60.*t2229*t3495*t3830*t3865*var4[30] + 40.*t2229*t3084*t3501*var4[38] - 60.*t2229*t3575*t3660*t3772*var4[38] - 20.*t2229*t3084*t3501*var4[46];
  p_output1[73]=-20.*t2179*t3999*t4013*t990*var4[6] - 60.*t2179*t3495*t3830*t3865*t990*var4[14] + 40.*t2179*t3999*t4013*t990*var4[14] - 60.*t2179*t3575*t3660*t3772*t990*var4[22] + 120.*t2179*t3495*t3830*t3865*t990*var4[22] - 20.*t2179*t3999*t4013*t990*var4[22] - 20.*t2179*t3084*t3501*t990*var4[30] + 120.*t2179*t3575*t3660*t3772*t990*var4[30] - 60.*t2179*t3495*t3830*t3865*t990*var4[30] + 40.*t2179*t3084*t3501*t990*var4[38] - 60.*t2179*t3575*t3660*t3772*t990*var4[38] - 20.*t2179*t3084*t3501*t990*var4[46];
  p_output1[74]=0.5;
  p_output1[75]=0.5;
  p_output1[76]=t4462;
  p_output1[77]=t4508;
  p_output1[78]=t4616;
  p_output1[79]=t4670;
  p_output1[80]=t5040;
  p_output1[81]=t5072;
  p_output1[82]=5.*t3999*t4461*var4[6] + 20.*t3677*t4013*t5147*var4[6] + 40.*t3495*t3830*t4013*var4[14] - 20.*t3999*t4013*var4[14] - 5.*t3999*t4461*var4[14] + 60.*t3495*t3865*t3999*t5147*var4[14] - 20.*t3677*t4013*t5147*var4[14] + 90.*t3575*t3660*t3865*var4[22] - 60.*t3495*t3830*t3865*var4[22] - 40.*t3495*t3830*t4013*var4[22] + 20.*t3999*t4013*var4[22] + 60.*t3660*t3772*t3830*t5147*var4[22] - 60.*t3495*t3865*t3999*t5147*var4[22] + 80.*t3084*t3501*t3772*var4[30] - 60.*t3575*t3660*t3772*var4[30] - 90.*t3575*t3660*t3865*var4[30] + 60.*t3495*t3830*t3865*var4[30] + 20.*t3501*t3575*t5147*var4[30] - 60.*t3660*t3772*t3830*t5147*var4[30] - 20.*t3084*t3501*var4[38] - 80.*t3084*t3501*t3772*var4[38] + 60.*t3575*t3660*t3772*var4[38] + 25.*t4733*t5113*var4[38] - 20.*t3501*t3575*t5147*var4[38] + 20.*t3084*t3501*var4[46] - 25.*t4733*t5113*var4[46];
  p_output1[83]=20.*t3495*t3830*t4013*var4[6] - 5.*t3999*t4461*var4[6] + 60.*t3575*t3660*t3865*var4[14] - 60.*t3495*t3830*t4013*var4[14] + 5.*t3999*t4461*var4[14] + 60.*t3084*t3501*t3772*var4[22] - 150.*t3575*t3660*t3865*var4[22] + 40.*t3495*t3830*t4013*var4[22] - 140.*t3084*t3501*t3772*var4[30] + 90.*t3575*t3660*t3865*var4[30] + 20.*t4733*t5113*var4[30] + 80.*t3084*t3501*t3772*var4[38] - 45.*t4733*t5113*var4[38] + 25.*t4733*t5113*var4[46];
  p_output1[84]=-20.*t2229*t3999*t4013*var4[7] - 60.*t2229*t3495*t3830*t3865*var4[15] + 40.*t2229*t3999*t4013*var4[15] - 60.*t2229*t3575*t3660*t3772*var4[23] + 120.*t2229*t3495*t3830*t3865*var4[23] - 20.*t2229*t3999*t4013*var4[23] - 20.*t2229*t3084*t3501*var4[31] + 120.*t2229*t3575*t3660*t3772*var4[31] - 60.*t2229*t3495*t3830*t3865*var4[31] + 40.*t2229*t3084*t3501*var4[39] - 60.*t2229*t3575*t3660*t3772*var4[39] - 20.*t2229*t3084*t3501*var4[47];
  p_output1[85]=-20.*t2179*t3999*t4013*t990*var4[7] - 60.*t2179*t3495*t3830*t3865*t990*var4[15] + 40.*t2179*t3999*t4013*t990*var4[15] - 60.*t2179*t3575*t3660*t3772*t990*var4[23] + 120.*t2179*t3495*t3830*t3865*t990*var4[23] - 20.*t2179*t3999*t4013*t990*var4[23] - 20.*t2179*t3084*t3501*t990*var4[31] + 120.*t2179*t3575*t3660*t3772*t990*var4[31] - 60.*t2179*t3495*t3830*t3865*t990*var4[31] + 40.*t2179*t3084*t3501*t990*var4[39] - 60.*t2179*t3575*t3660*t3772*t990*var4[39] - 20.*t2179*t3084*t3501*t990*var4[47];
  p_output1[86]=-1.;
  p_output1[87]=1.;
  p_output1[88]=t4462;
  p_output1[89]=t4508;
  p_output1[90]=t4616;
  p_output1[91]=t4670;
  p_output1[92]=t5040;
  p_output1[93]=t5072;
  p_output1[94]=5.*t3999*t4461*var4[7] + 20.*t3677*t4013*t5147*var4[7] + 40.*t3495*t3830*t4013*var4[15] - 20.*t3999*t4013*var4[15] - 5.*t3999*t4461*var4[15] + 60.*t3495*t3865*t3999*t5147*var4[15] - 20.*t3677*t4013*t5147*var4[15] + 90.*t3575*t3660*t3865*var4[23] - 60.*t3495*t3830*t3865*var4[23] - 40.*t3495*t3830*t4013*var4[23] + 20.*t3999*t4013*var4[23] + 60.*t3660*t3772*t3830*t5147*var4[23] - 60.*t3495*t3865*t3999*t5147*var4[23] + 80.*t3084*t3501*t3772*var4[31] - 60.*t3575*t3660*t3772*var4[31] - 90.*t3575*t3660*t3865*var4[31] + 60.*t3495*t3830*t3865*var4[31] + 20.*t3501*t3575*t5147*var4[31] - 60.*t3660*t3772*t3830*t5147*var4[31] - 20.*t3084*t3501*var4[39] - 80.*t3084*t3501*t3772*var4[39] + 60.*t3575*t3660*t3772*var4[39] + 25.*t4733*t5113*var4[39] - 20.*t3501*t3575*t5147*var4[39] + 20.*t3084*t3501*var4[47] - 25.*t4733*t5113*var4[47];
  p_output1[95]=20.*t3495*t3830*t4013*var4[7] - 5.*t3999*t4461*var4[7] + 60.*t3575*t3660*t3865*var4[15] - 60.*t3495*t3830*t4013*var4[15] + 5.*t3999*t4461*var4[15] + 60.*t3084*t3501*t3772*var4[23] - 150.*t3575*t3660*t3865*var4[23] + 40.*t3495*t3830*t4013*var4[23] - 140.*t3084*t3501*t3772*var4[31] + 90.*t3575*t3660*t3865*var4[31] + 20.*t4733*t5113*var4[31] + 80.*t3084*t3501*t3772*var4[39] - 45.*t4733*t5113*var4[39] + 25.*t4733*t5113*var4[47];
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

  double *var1,*var2,*var3,*var4,*var5,*var6,*var7;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 7)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Seven input(s) required (var1,var2,var3,var4,var5,var6,var7).");
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
    ( !(mrows == 22 && ncols == 1) && 
      !(mrows == 1 && ncols == 22))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var3 is wrong.");
    }
  mrows = mxGetM(prhs[3]);
  ncols = mxGetN(prhs[3]);
  if( !mxIsDouble(prhs[3]) || mxIsComplex(prhs[3]) ||
    ( !(mrows == 48 && ncols == 1) && 
      !(mrows == 1 && ncols == 48))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var4 is wrong.");
    }
  mrows = mxGetM(prhs[4]);
  ncols = mxGetN(prhs[4]);
  if( !mxIsDouble(prhs[4]) || mxIsComplex(prhs[4]) ||
    ( !(mrows == 2 && ncols == 1) && 
      !(mrows == 1 && ncols == 2))) 
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
  mrows = mxGetM(prhs[6]);
  ncols = mxGetN(prhs[6]);
  if( !mxIsDouble(prhs[6]) || mxIsComplex(prhs[6]) ||
    ( !(mrows == 1 && ncols == 1) && 
      !(mrows == 1 && ncols == 1))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var7 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
  var3 = mxGetPr(prhs[2]);
  var4 = mxGetPr(prhs[3]);
  var5 = mxGetPr(prhs[4]);
  var6 = mxGetPr(prhs[5]);
  var7 = mxGetPr(prhs[6]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 96, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3,var4,var5,var6,var7);


}

#else // MATLAB_MEX_FILE

#include "J_d1y_output_FrontStance.hh"

namespace FrontStance
{

void J_d1y_output_FrontStance_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4,const double *var5,const double *var6,const double *var7)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4, var5, var6, var7);

}

}

#endif // MATLAB_MEX_FILE
