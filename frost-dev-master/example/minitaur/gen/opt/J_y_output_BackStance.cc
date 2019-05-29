/*
 * Automatically Generated from Mathematica.
 * Wed 29 May 2019 15:13:34 GMT-04:00
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
  double t12985;
  double t427;
  double t581;
  double t757;
  double t11522;
  double t12535;
  double t13011;
  double t13039;
  double t13070;
  double t14520;
  double t14692;
  double t15319;
  double t15632;
  double t15876;
  double t15896;
  double t15933;
  double t15971;
  double t15986;
  double t16034;
  double t16040;
  double t16194;
  double t16443;
  double t16501;
  double t16969;
  double t26229;
  double t26414;
  double t26417;
  double t26408;
  double t22266;
  double t22301;
  double t22498;
  double t23554;
  double t24332;
  double t24583;
  double t26235;
  t12985 = -1.*var4[0];
  t427 = -1. + var5[0];
  t581 = -1. + var6[0];
  t757 = 1/t581;
  t11522 = -1.*t427*t757;
  t12535 = 1. + t11522;
  t13011 = t12985 + var4[1];
  t13039 = Power(t13011,-5);
  t13070 = -1.*var1[0];
  t14520 = t13070 + var1[1];
  t14692 = t427*t757*t14520;
  t15319 = t12985 + var1[0] + t14692;
  t15632 = Power(t15319,4);
  t15876 = Power(t13011,-4);
  t15896 = Power(t15319,3);
  t15933 = 1/t13011;
  t15971 = -1.*t15933*t15319;
  t15986 = 1. + t15971;
  t16034 = Power(t13011,-3);
  t16040 = Power(t15319,2);
  t16194 = Power(t15986,2);
  t16443 = Power(t13011,-2);
  t16501 = Power(t15986,3);
  t16969 = Power(t15986,4);
  t26229 = Power(t15319,5);
  t26414 = -1.*t16443*t15319;
  t26417 = t15933 + t26414;
  t26408 = Power(t13011,-6);
  t22266 = Power(t15986,5);
  t22301 = -1.*t22266;
  t22498 = -5.*t15933*t15319*t16969;
  t23554 = -10.*t16443*t16040*t16501;
  t24332 = -10.*t16034*t15896*t16194;
  t24583 = -5.*t15876*t15632*t15986;
  t26235 = -1.*t13039*t26229;
  p_output1[0]=5.*t12535*t15933*t16969*var3[0] + 20.*t12535*t15319*t16443*t16501*var3[8] - 5.*t12535*t15933*t16969*var3[8] + 30.*t12535*t16034*t16040*t16194*var3[16] - 20.*t12535*t15319*t16443*t16501*var3[16] + 20.*t12535*t15876*t15896*t15986*var3[24] - 30.*t12535*t16034*t16040*t16194*var3[24] + 5.*t12535*t13039*t15632*var3[32] - 20.*t12535*t15876*t15896*t15986*var3[32] - 5.*t12535*t13039*t15632*var3[40];
  p_output1[1]=5.*t15933*t16969*t427*t757*var3[0] + 20.*t15319*t16443*t16501*t427*t757*var3[8] - 5.*t15933*t16969*t427*t757*var3[8] + 30.*t16034*t16040*t16194*t427*t757*var3[16] - 20.*t15319*t16443*t16501*t427*t757*var3[16] + 20.*t15876*t15896*t15986*t427*t757*var3[24] - 30.*t16034*t16040*t16194*t427*t757*var3[24] + 5.*t13039*t15632*t427*t757*var3[32] - 20.*t15876*t15896*t15986*t427*t757*var3[32] - 5.*t13039*t15632*t427*t757*var3[40];
  p_output1[2]=0.5;
  p_output1[3]=0.5;
  p_output1[4]=t22301;
  p_output1[5]=t22498;
  p_output1[6]=t23554;
  p_output1[7]=t24332;
  p_output1[8]=t24583;
  p_output1[9]=t26235;
  p_output1[10]=-5.*t16969*t26417*var3[0] + 5.*t15933*t16969*var3[8] - 5.*t15319*t16443*t16969*var3[8] - 20.*t15319*t15933*t16501*t26417*var3[8] - 20.*t16034*t16040*t16501*var3[16] + 20.*t15319*t16443*t16501*var3[16] - 30.*t16040*t16194*t16443*t26417*var3[16] - 30.*t15876*t15896*t16194*var3[24] + 30.*t16034*t16040*t16194*var3[24] - 20.*t15896*t15986*t16034*t26417*var3[24] - 20.*t13039*t15632*t15986*var3[32] + 20.*t15876*t15896*t15986*var3[32] - 5.*t15632*t15876*t26417*var3[32] + 5.*t13039*t15632*var3[40] - 5.*t26229*t26408*var3[40];
  p_output1[11]=-5.*t15319*t16443*t16969*var3[0] - 20.*t16034*t16040*t16501*var3[8] + 5.*t15319*t16443*t16969*var3[8] - 30.*t15876*t15896*t16194*var3[16] + 20.*t16034*t16040*t16501*var3[16] - 20.*t13039*t15632*t15986*var3[24] + 30.*t15876*t15896*t16194*var3[24] + 20.*t13039*t15632*t15986*var3[32] - 5.*t26229*t26408*var3[32] + 5.*t26229*t26408*var3[40];
  p_output1[12]=5.*t12535*t15933*t16969*var3[1] + 20.*t12535*t15319*t16443*t16501*var3[9] - 5.*t12535*t15933*t16969*var3[9] + 30.*t12535*t16034*t16040*t16194*var3[17] - 20.*t12535*t15319*t16443*t16501*var3[17] + 20.*t12535*t15876*t15896*t15986*var3[25] - 30.*t12535*t16034*t16040*t16194*var3[25] + 5.*t12535*t13039*t15632*var3[33] - 20.*t12535*t15876*t15896*t15986*var3[33] - 5.*t12535*t13039*t15632*var3[41];
  p_output1[13]=5.*t15933*t16969*t427*t757*var3[1] + 20.*t15319*t16443*t16501*t427*t757*var3[9] - 5.*t15933*t16969*t427*t757*var3[9] + 30.*t16034*t16040*t16194*t427*t757*var3[17] - 20.*t15319*t16443*t16501*t427*t757*var3[17] + 20.*t15876*t15896*t15986*t427*t757*var3[25] - 30.*t16034*t16040*t16194*t427*t757*var3[25] + 5.*t13039*t15632*t427*t757*var3[33] - 20.*t15876*t15896*t15986*t427*t757*var3[33] - 5.*t13039*t15632*t427*t757*var3[41];
  p_output1[14]=-1.;
  p_output1[15]=1.;
  p_output1[16]=t22301;
  p_output1[17]=t22498;
  p_output1[18]=t23554;
  p_output1[19]=t24332;
  p_output1[20]=t24583;
  p_output1[21]=t26235;
  p_output1[22]=-5.*t16969*t26417*var3[1] + 5.*t15933*t16969*var3[9] - 5.*t15319*t16443*t16969*var3[9] - 20.*t15319*t15933*t16501*t26417*var3[9] - 20.*t16034*t16040*t16501*var3[17] + 20.*t15319*t16443*t16501*var3[17] - 30.*t16040*t16194*t16443*t26417*var3[17] - 30.*t15876*t15896*t16194*var3[25] + 30.*t16034*t16040*t16194*var3[25] - 20.*t15896*t15986*t16034*t26417*var3[25] - 20.*t13039*t15632*t15986*var3[33] + 20.*t15876*t15896*t15986*var3[33] - 5.*t15632*t15876*t26417*var3[33] + 5.*t13039*t15632*var3[41] - 5.*t26229*t26408*var3[41];
  p_output1[23]=-5.*t15319*t16443*t16969*var3[1] - 20.*t16034*t16040*t16501*var3[9] + 5.*t15319*t16443*t16969*var3[9] - 30.*t15876*t15896*t16194*var3[17] + 20.*t16034*t16040*t16501*var3[17] - 20.*t13039*t15632*t15986*var3[25] + 30.*t15876*t15896*t16194*var3[25] + 20.*t13039*t15632*t15986*var3[33] - 5.*t26229*t26408*var3[33] + 5.*t26229*t26408*var3[41];
  p_output1[24]=5.*t12535*t15933*t16969*var3[2] + 20.*t12535*t15319*t16443*t16501*var3[10] - 5.*t12535*t15933*t16969*var3[10] + 30.*t12535*t16034*t16040*t16194*var3[18] - 20.*t12535*t15319*t16443*t16501*var3[18] + 20.*t12535*t15876*t15896*t15986*var3[26] - 30.*t12535*t16034*t16040*t16194*var3[26] + 5.*t12535*t13039*t15632*var3[34] - 20.*t12535*t15876*t15896*t15986*var3[34] - 5.*t12535*t13039*t15632*var3[42];
  p_output1[25]=5.*t15933*t16969*t427*t757*var3[2] + 20.*t15319*t16443*t16501*t427*t757*var3[10] - 5.*t15933*t16969*t427*t757*var3[10] + 30.*t16034*t16040*t16194*t427*t757*var3[18] - 20.*t15319*t16443*t16501*t427*t757*var3[18] + 20.*t15876*t15896*t15986*t427*t757*var3[26] - 30.*t16034*t16040*t16194*t427*t757*var3[26] + 5.*t13039*t15632*t427*t757*var3[34] - 20.*t15876*t15896*t15986*t427*t757*var3[34] - 5.*t13039*t15632*t427*t757*var3[42];
  p_output1[26]=0.5;
  p_output1[27]=0.5;
  p_output1[28]=t22301;
  p_output1[29]=t22498;
  p_output1[30]=t23554;
  p_output1[31]=t24332;
  p_output1[32]=t24583;
  p_output1[33]=t26235;
  p_output1[34]=-5.*t16969*t26417*var3[2] + 5.*t15933*t16969*var3[10] - 5.*t15319*t16443*t16969*var3[10] - 20.*t15319*t15933*t16501*t26417*var3[10] - 20.*t16034*t16040*t16501*var3[18] + 20.*t15319*t16443*t16501*var3[18] - 30.*t16040*t16194*t16443*t26417*var3[18] - 30.*t15876*t15896*t16194*var3[26] + 30.*t16034*t16040*t16194*var3[26] - 20.*t15896*t15986*t16034*t26417*var3[26] - 20.*t13039*t15632*t15986*var3[34] + 20.*t15876*t15896*t15986*var3[34] - 5.*t15632*t15876*t26417*var3[34] + 5.*t13039*t15632*var3[42] - 5.*t26229*t26408*var3[42];
  p_output1[35]=-5.*t15319*t16443*t16969*var3[2] - 20.*t16034*t16040*t16501*var3[10] + 5.*t15319*t16443*t16969*var3[10] - 30.*t15876*t15896*t16194*var3[18] + 20.*t16034*t16040*t16501*var3[18] - 20.*t13039*t15632*t15986*var3[26] + 30.*t15876*t15896*t16194*var3[26] + 20.*t13039*t15632*t15986*var3[34] - 5.*t26229*t26408*var3[34] + 5.*t26229*t26408*var3[42];
  p_output1[36]=5.*t12535*t15933*t16969*var3[3] + 20.*t12535*t15319*t16443*t16501*var3[11] - 5.*t12535*t15933*t16969*var3[11] + 30.*t12535*t16034*t16040*t16194*var3[19] - 20.*t12535*t15319*t16443*t16501*var3[19] + 20.*t12535*t15876*t15896*t15986*var3[27] - 30.*t12535*t16034*t16040*t16194*var3[27] + 5.*t12535*t13039*t15632*var3[35] - 20.*t12535*t15876*t15896*t15986*var3[35] - 5.*t12535*t13039*t15632*var3[43];
  p_output1[37]=5.*t15933*t16969*t427*t757*var3[3] + 20.*t15319*t16443*t16501*t427*t757*var3[11] - 5.*t15933*t16969*t427*t757*var3[11] + 30.*t16034*t16040*t16194*t427*t757*var3[19] - 20.*t15319*t16443*t16501*t427*t757*var3[19] + 20.*t15876*t15896*t15986*t427*t757*var3[27] - 30.*t16034*t16040*t16194*t427*t757*var3[27] + 5.*t13039*t15632*t427*t757*var3[35] - 20.*t15876*t15896*t15986*t427*t757*var3[35] - 5.*t13039*t15632*t427*t757*var3[43];
  p_output1[38]=-1.;
  p_output1[39]=1.;
  p_output1[40]=t22301;
  p_output1[41]=t22498;
  p_output1[42]=t23554;
  p_output1[43]=t24332;
  p_output1[44]=t24583;
  p_output1[45]=t26235;
  p_output1[46]=-5.*t16969*t26417*var3[3] + 5.*t15933*t16969*var3[11] - 5.*t15319*t16443*t16969*var3[11] - 20.*t15319*t15933*t16501*t26417*var3[11] - 20.*t16034*t16040*t16501*var3[19] + 20.*t15319*t16443*t16501*var3[19] - 30.*t16040*t16194*t16443*t26417*var3[19] - 30.*t15876*t15896*t16194*var3[27] + 30.*t16034*t16040*t16194*var3[27] - 20.*t15896*t15986*t16034*t26417*var3[27] - 20.*t13039*t15632*t15986*var3[35] + 20.*t15876*t15896*t15986*var3[35] - 5.*t15632*t15876*t26417*var3[35] + 5.*t13039*t15632*var3[43] - 5.*t26229*t26408*var3[43];
  p_output1[47]=-5.*t15319*t16443*t16969*var3[3] - 20.*t16034*t16040*t16501*var3[11] + 5.*t15319*t16443*t16969*var3[11] - 30.*t15876*t15896*t16194*var3[19] + 20.*t16034*t16040*t16501*var3[19] - 20.*t13039*t15632*t15986*var3[27] + 30.*t15876*t15896*t16194*var3[27] + 20.*t13039*t15632*t15986*var3[35] - 5.*t26229*t26408*var3[35] + 5.*t26229*t26408*var3[43];
  p_output1[48]=5.*t12535*t15933*t16969*var3[4] + 20.*t12535*t15319*t16443*t16501*var3[12] - 5.*t12535*t15933*t16969*var3[12] + 30.*t12535*t16034*t16040*t16194*var3[20] - 20.*t12535*t15319*t16443*t16501*var3[20] + 20.*t12535*t15876*t15896*t15986*var3[28] - 30.*t12535*t16034*t16040*t16194*var3[28] + 5.*t12535*t13039*t15632*var3[36] - 20.*t12535*t15876*t15896*t15986*var3[36] - 5.*t12535*t13039*t15632*var3[44];
  p_output1[49]=5.*t15933*t16969*t427*t757*var3[4] + 20.*t15319*t16443*t16501*t427*t757*var3[12] - 5.*t15933*t16969*t427*t757*var3[12] + 30.*t16034*t16040*t16194*t427*t757*var3[20] - 20.*t15319*t16443*t16501*t427*t757*var3[20] + 20.*t15876*t15896*t15986*t427*t757*var3[28] - 30.*t16034*t16040*t16194*t427*t757*var3[28] + 5.*t13039*t15632*t427*t757*var3[36] - 20.*t15876*t15896*t15986*t427*t757*var3[36] - 5.*t13039*t15632*t427*t757*var3[44];
  p_output1[50]=0.5;
  p_output1[51]=0.5;
  p_output1[52]=t22301;
  p_output1[53]=t22498;
  p_output1[54]=t23554;
  p_output1[55]=t24332;
  p_output1[56]=t24583;
  p_output1[57]=t26235;
  p_output1[58]=-5.*t16969*t26417*var3[4] + 5.*t15933*t16969*var3[12] - 5.*t15319*t16443*t16969*var3[12] - 20.*t15319*t15933*t16501*t26417*var3[12] - 20.*t16034*t16040*t16501*var3[20] + 20.*t15319*t16443*t16501*var3[20] - 30.*t16040*t16194*t16443*t26417*var3[20] - 30.*t15876*t15896*t16194*var3[28] + 30.*t16034*t16040*t16194*var3[28] - 20.*t15896*t15986*t16034*t26417*var3[28] - 20.*t13039*t15632*t15986*var3[36] + 20.*t15876*t15896*t15986*var3[36] - 5.*t15632*t15876*t26417*var3[36] + 5.*t13039*t15632*var3[44] - 5.*t26229*t26408*var3[44];
  p_output1[59]=-5.*t15319*t16443*t16969*var3[4] - 20.*t16034*t16040*t16501*var3[12] + 5.*t15319*t16443*t16969*var3[12] - 30.*t15876*t15896*t16194*var3[20] + 20.*t16034*t16040*t16501*var3[20] - 20.*t13039*t15632*t15986*var3[28] + 30.*t15876*t15896*t16194*var3[28] + 20.*t13039*t15632*t15986*var3[36] - 5.*t26229*t26408*var3[36] + 5.*t26229*t26408*var3[44];
  p_output1[60]=5.*t12535*t15933*t16969*var3[5] + 20.*t12535*t15319*t16443*t16501*var3[13] - 5.*t12535*t15933*t16969*var3[13] + 30.*t12535*t16034*t16040*t16194*var3[21] - 20.*t12535*t15319*t16443*t16501*var3[21] + 20.*t12535*t15876*t15896*t15986*var3[29] - 30.*t12535*t16034*t16040*t16194*var3[29] + 5.*t12535*t13039*t15632*var3[37] - 20.*t12535*t15876*t15896*t15986*var3[37] - 5.*t12535*t13039*t15632*var3[45];
  p_output1[61]=5.*t15933*t16969*t427*t757*var3[5] + 20.*t15319*t16443*t16501*t427*t757*var3[13] - 5.*t15933*t16969*t427*t757*var3[13] + 30.*t16034*t16040*t16194*t427*t757*var3[21] - 20.*t15319*t16443*t16501*t427*t757*var3[21] + 20.*t15876*t15896*t15986*t427*t757*var3[29] - 30.*t16034*t16040*t16194*t427*t757*var3[29] + 5.*t13039*t15632*t427*t757*var3[37] - 20.*t15876*t15896*t15986*t427*t757*var3[37] - 5.*t13039*t15632*t427*t757*var3[45];
  p_output1[62]=-1.;
  p_output1[63]=1.;
  p_output1[64]=t22301;
  p_output1[65]=t22498;
  p_output1[66]=t23554;
  p_output1[67]=t24332;
  p_output1[68]=t24583;
  p_output1[69]=t26235;
  p_output1[70]=-5.*t16969*t26417*var3[5] + 5.*t15933*t16969*var3[13] - 5.*t15319*t16443*t16969*var3[13] - 20.*t15319*t15933*t16501*t26417*var3[13] - 20.*t16034*t16040*t16501*var3[21] + 20.*t15319*t16443*t16501*var3[21] - 30.*t16040*t16194*t16443*t26417*var3[21] - 30.*t15876*t15896*t16194*var3[29] + 30.*t16034*t16040*t16194*var3[29] - 20.*t15896*t15986*t16034*t26417*var3[29] - 20.*t13039*t15632*t15986*var3[37] + 20.*t15876*t15896*t15986*var3[37] - 5.*t15632*t15876*t26417*var3[37] + 5.*t13039*t15632*var3[45] - 5.*t26229*t26408*var3[45];
  p_output1[71]=-5.*t15319*t16443*t16969*var3[5] - 20.*t16034*t16040*t16501*var3[13] + 5.*t15319*t16443*t16969*var3[13] - 30.*t15876*t15896*t16194*var3[21] + 20.*t16034*t16040*t16501*var3[21] - 20.*t13039*t15632*t15986*var3[29] + 30.*t15876*t15896*t16194*var3[29] + 20.*t13039*t15632*t15986*var3[37] - 5.*t26229*t26408*var3[37] + 5.*t26229*t26408*var3[45];
  p_output1[72]=5.*t12535*t15933*t16969*var3[6] + 20.*t12535*t15319*t16443*t16501*var3[14] - 5.*t12535*t15933*t16969*var3[14] + 30.*t12535*t16034*t16040*t16194*var3[22] - 20.*t12535*t15319*t16443*t16501*var3[22] + 20.*t12535*t15876*t15896*t15986*var3[30] - 30.*t12535*t16034*t16040*t16194*var3[30] + 5.*t12535*t13039*t15632*var3[38] - 20.*t12535*t15876*t15896*t15986*var3[38] - 5.*t12535*t13039*t15632*var3[46];
  p_output1[73]=5.*t15933*t16969*t427*t757*var3[6] + 20.*t15319*t16443*t16501*t427*t757*var3[14] - 5.*t15933*t16969*t427*t757*var3[14] + 30.*t16034*t16040*t16194*t427*t757*var3[22] - 20.*t15319*t16443*t16501*t427*t757*var3[22] + 20.*t15876*t15896*t15986*t427*t757*var3[30] - 30.*t16034*t16040*t16194*t427*t757*var3[30] + 5.*t13039*t15632*t427*t757*var3[38] - 20.*t15876*t15896*t15986*t427*t757*var3[38] - 5.*t13039*t15632*t427*t757*var3[46];
  p_output1[74]=0.5;
  p_output1[75]=0.5;
  p_output1[76]=t22301;
  p_output1[77]=t22498;
  p_output1[78]=t23554;
  p_output1[79]=t24332;
  p_output1[80]=t24583;
  p_output1[81]=t26235;
  p_output1[82]=-5.*t16969*t26417*var3[6] + 5.*t15933*t16969*var3[14] - 5.*t15319*t16443*t16969*var3[14] - 20.*t15319*t15933*t16501*t26417*var3[14] - 20.*t16034*t16040*t16501*var3[22] + 20.*t15319*t16443*t16501*var3[22] - 30.*t16040*t16194*t16443*t26417*var3[22] - 30.*t15876*t15896*t16194*var3[30] + 30.*t16034*t16040*t16194*var3[30] - 20.*t15896*t15986*t16034*t26417*var3[30] - 20.*t13039*t15632*t15986*var3[38] + 20.*t15876*t15896*t15986*var3[38] - 5.*t15632*t15876*t26417*var3[38] + 5.*t13039*t15632*var3[46] - 5.*t26229*t26408*var3[46];
  p_output1[83]=-5.*t15319*t16443*t16969*var3[6] - 20.*t16034*t16040*t16501*var3[14] + 5.*t15319*t16443*t16969*var3[14] - 30.*t15876*t15896*t16194*var3[22] + 20.*t16034*t16040*t16501*var3[22] - 20.*t13039*t15632*t15986*var3[30] + 30.*t15876*t15896*t16194*var3[30] + 20.*t13039*t15632*t15986*var3[38] - 5.*t26229*t26408*var3[38] + 5.*t26229*t26408*var3[46];
  p_output1[84]=5.*t12535*t15933*t16969*var3[7] + 20.*t12535*t15319*t16443*t16501*var3[15] - 5.*t12535*t15933*t16969*var3[15] + 30.*t12535*t16034*t16040*t16194*var3[23] - 20.*t12535*t15319*t16443*t16501*var3[23] + 20.*t12535*t15876*t15896*t15986*var3[31] - 30.*t12535*t16034*t16040*t16194*var3[31] + 5.*t12535*t13039*t15632*var3[39] - 20.*t12535*t15876*t15896*t15986*var3[39] - 5.*t12535*t13039*t15632*var3[47];
  p_output1[85]=5.*t15933*t16969*t427*t757*var3[7] + 20.*t15319*t16443*t16501*t427*t757*var3[15] - 5.*t15933*t16969*t427*t757*var3[15] + 30.*t16034*t16040*t16194*t427*t757*var3[23] - 20.*t15319*t16443*t16501*t427*t757*var3[23] + 20.*t15876*t15896*t15986*t427*t757*var3[31] - 30.*t16034*t16040*t16194*t427*t757*var3[31] + 5.*t13039*t15632*t427*t757*var3[39] - 20.*t15876*t15896*t15986*t427*t757*var3[39] - 5.*t13039*t15632*t427*t757*var3[47];
  p_output1[86]=-1.;
  p_output1[87]=1.;
  p_output1[88]=t22301;
  p_output1[89]=t22498;
  p_output1[90]=t23554;
  p_output1[91]=t24332;
  p_output1[92]=t24583;
  p_output1[93]=t26235;
  p_output1[94]=-5.*t16969*t26417*var3[7] + 5.*t15933*t16969*var3[15] - 5.*t15319*t16443*t16969*var3[15] - 20.*t15319*t15933*t16501*t26417*var3[15] - 20.*t16034*t16040*t16501*var3[23] + 20.*t15319*t16443*t16501*var3[23] - 30.*t16040*t16194*t16443*t26417*var3[23] - 30.*t15876*t15896*t16194*var3[31] + 30.*t16034*t16040*t16194*var3[31] - 20.*t15896*t15986*t16034*t26417*var3[31] - 20.*t13039*t15632*t15986*var3[39] + 20.*t15876*t15896*t15986*var3[39] - 5.*t15632*t15876*t26417*var3[39] + 5.*t13039*t15632*var3[47] - 5.*t26229*t26408*var3[47];
  p_output1[95]=-5.*t15319*t16443*t16969*var3[7] - 20.*t16034*t16040*t16501*var3[15] + 5.*t15319*t16443*t16969*var3[15] - 30.*t15876*t15896*t16194*var3[23] + 20.*t16034*t16040*t16501*var3[23] - 20.*t13039*t15632*t15986*var3[31] + 30.*t15876*t15896*t16194*var3[31] + 20.*t13039*t15632*t15986*var3[39] - 5.*t26229*t26408*var3[39] + 5.*t26229*t26408*var3[47];
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
