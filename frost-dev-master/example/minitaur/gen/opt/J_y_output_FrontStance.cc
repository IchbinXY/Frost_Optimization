/*
 * Automatically Generated from Mathematica.
 * Wed 29 May 2019 15:06:11 GMT-04:00
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
  double t9623;
  double t732;
  double t839;
  double t8285;
  double t9344;
  double t9616;
  double t10137;
  double t10148;
  double t10342;
  double t10343;
  double t10357;
  double t10458;
  double t10459;
  double t10585;
  double t10695;
  double t11077;
  double t11098;
  double t11112;
  double t11120;
  double t11216;
  double t11256;
  double t11307;
  double t11399;
  double t11424;
  double t11968;
  double t12071;
  double t12076;
  double t11974;
  double t11711;
  double t11737;
  double t11866;
  double t11894;
  double t11944;
  double t11945;
  double t11969;
  t9623 = -1.*var4[0];
  t732 = -1. + var5[0];
  t839 = -1. + var6[0];
  t8285 = 1/t839;
  t9344 = -1.*t732*t8285;
  t9616 = 1. + t9344;
  t10137 = t9623 + var4[1];
  t10148 = Power(t10137,-5);
  t10342 = -1.*var1[0];
  t10343 = t10342 + var1[1];
  t10357 = t732*t8285*t10343;
  t10458 = t9623 + var1[0] + t10357;
  t10459 = Power(t10458,4);
  t10585 = Power(t10137,-4);
  t10695 = Power(t10458,3);
  t11077 = 1/t10137;
  t11098 = -1.*t11077*t10458;
  t11112 = 1. + t11098;
  t11120 = Power(t10137,-3);
  t11216 = Power(t10458,2);
  t11256 = Power(t11112,2);
  t11307 = Power(t10137,-2);
  t11399 = Power(t11112,3);
  t11424 = Power(t11112,4);
  t11968 = Power(t10458,5);
  t12071 = -1.*t11307*t10458;
  t12076 = t11077 + t12071;
  t11974 = Power(t10137,-6);
  t11711 = Power(t11112,5);
  t11737 = -1.*t11711;
  t11866 = -5.*t11077*t10458*t11424;
  t11894 = -10.*t11307*t11216*t11399;
  t11944 = -10.*t11120*t10695*t11256;
  t11945 = -5.*t10585*t10459*t11112;
  t11969 = -1.*t10148*t11968;
  p_output1[0]=5.*t11077*t11424*t9616*var3[0] + 20.*t10458*t11307*t11399*t9616*var3[8] - 5.*t11077*t11424*t9616*var3[8] + 30.*t11120*t11216*t11256*t9616*var3[16] - 20.*t10458*t11307*t11399*t9616*var3[16] + 20.*t10585*t10695*t11112*t9616*var3[24] - 30.*t11120*t11216*t11256*t9616*var3[24] + 5.*t10148*t10459*t9616*var3[32] - 20.*t10585*t10695*t11112*t9616*var3[32] - 5.*t10148*t10459*t9616*var3[40];
  p_output1[1]=5.*t11077*t11424*t732*t8285*var3[0] + 20.*t10458*t11307*t11399*t732*t8285*var3[8] - 5.*t11077*t11424*t732*t8285*var3[8] + 30.*t11120*t11216*t11256*t732*t8285*var3[16] - 20.*t10458*t11307*t11399*t732*t8285*var3[16] + 20.*t10585*t10695*t11112*t732*t8285*var3[24] - 30.*t11120*t11216*t11256*t732*t8285*var3[24] + 5.*t10148*t10459*t732*t8285*var3[32] - 20.*t10585*t10695*t11112*t732*t8285*var3[32] - 5.*t10148*t10459*t732*t8285*var3[40];
  p_output1[2]=0.5;
  p_output1[3]=0.5;
  p_output1[4]=t11737;
  p_output1[5]=t11866;
  p_output1[6]=t11894;
  p_output1[7]=t11944;
  p_output1[8]=t11945;
  p_output1[9]=t11969;
  p_output1[10]=-5.*t11424*t12076*var3[0] + 5.*t11077*t11424*var3[8] - 5.*t10458*t11307*t11424*var3[8] - 20.*t10458*t11077*t11399*t12076*var3[8] - 20.*t11120*t11216*t11399*var3[16] + 20.*t10458*t11307*t11399*var3[16] - 30.*t11216*t11256*t11307*t12076*var3[16] - 30.*t10585*t10695*t11256*var3[24] + 30.*t11120*t11216*t11256*var3[24] - 20.*t10695*t11112*t11120*t12076*var3[24] - 20.*t10148*t10459*t11112*var3[32] + 20.*t10585*t10695*t11112*var3[32] - 5.*t10459*t10585*t12076*var3[32] + 5.*t10148*t10459*var3[40] - 5.*t11968*t11974*var3[40];
  p_output1[11]=-5.*t10458*t11307*t11424*var3[0] - 20.*t11120*t11216*t11399*var3[8] + 5.*t10458*t11307*t11424*var3[8] - 30.*t10585*t10695*t11256*var3[16] + 20.*t11120*t11216*t11399*var3[16] - 20.*t10148*t10459*t11112*var3[24] + 30.*t10585*t10695*t11256*var3[24] + 20.*t10148*t10459*t11112*var3[32] - 5.*t11968*t11974*var3[32] + 5.*t11968*t11974*var3[40];
  p_output1[12]=5.*t11077*t11424*t9616*var3[1] + 20.*t10458*t11307*t11399*t9616*var3[9] - 5.*t11077*t11424*t9616*var3[9] + 30.*t11120*t11216*t11256*t9616*var3[17] - 20.*t10458*t11307*t11399*t9616*var3[17] + 20.*t10585*t10695*t11112*t9616*var3[25] - 30.*t11120*t11216*t11256*t9616*var3[25] + 5.*t10148*t10459*t9616*var3[33] - 20.*t10585*t10695*t11112*t9616*var3[33] - 5.*t10148*t10459*t9616*var3[41];
  p_output1[13]=5.*t11077*t11424*t732*t8285*var3[1] + 20.*t10458*t11307*t11399*t732*t8285*var3[9] - 5.*t11077*t11424*t732*t8285*var3[9] + 30.*t11120*t11216*t11256*t732*t8285*var3[17] - 20.*t10458*t11307*t11399*t732*t8285*var3[17] + 20.*t10585*t10695*t11112*t732*t8285*var3[25] - 30.*t11120*t11216*t11256*t732*t8285*var3[25] + 5.*t10148*t10459*t732*t8285*var3[33] - 20.*t10585*t10695*t11112*t732*t8285*var3[33] - 5.*t10148*t10459*t732*t8285*var3[41];
  p_output1[14]=-1.;
  p_output1[15]=1.;
  p_output1[16]=t11737;
  p_output1[17]=t11866;
  p_output1[18]=t11894;
  p_output1[19]=t11944;
  p_output1[20]=t11945;
  p_output1[21]=t11969;
  p_output1[22]=-5.*t11424*t12076*var3[1] + 5.*t11077*t11424*var3[9] - 5.*t10458*t11307*t11424*var3[9] - 20.*t10458*t11077*t11399*t12076*var3[9] - 20.*t11120*t11216*t11399*var3[17] + 20.*t10458*t11307*t11399*var3[17] - 30.*t11216*t11256*t11307*t12076*var3[17] - 30.*t10585*t10695*t11256*var3[25] + 30.*t11120*t11216*t11256*var3[25] - 20.*t10695*t11112*t11120*t12076*var3[25] - 20.*t10148*t10459*t11112*var3[33] + 20.*t10585*t10695*t11112*var3[33] - 5.*t10459*t10585*t12076*var3[33] + 5.*t10148*t10459*var3[41] - 5.*t11968*t11974*var3[41];
  p_output1[23]=-5.*t10458*t11307*t11424*var3[1] - 20.*t11120*t11216*t11399*var3[9] + 5.*t10458*t11307*t11424*var3[9] - 30.*t10585*t10695*t11256*var3[17] + 20.*t11120*t11216*t11399*var3[17] - 20.*t10148*t10459*t11112*var3[25] + 30.*t10585*t10695*t11256*var3[25] + 20.*t10148*t10459*t11112*var3[33] - 5.*t11968*t11974*var3[33] + 5.*t11968*t11974*var3[41];
  p_output1[24]=5.*t11077*t11424*t9616*var3[2] + 20.*t10458*t11307*t11399*t9616*var3[10] - 5.*t11077*t11424*t9616*var3[10] + 30.*t11120*t11216*t11256*t9616*var3[18] - 20.*t10458*t11307*t11399*t9616*var3[18] + 20.*t10585*t10695*t11112*t9616*var3[26] - 30.*t11120*t11216*t11256*t9616*var3[26] + 5.*t10148*t10459*t9616*var3[34] - 20.*t10585*t10695*t11112*t9616*var3[34] - 5.*t10148*t10459*t9616*var3[42];
  p_output1[25]=5.*t11077*t11424*t732*t8285*var3[2] + 20.*t10458*t11307*t11399*t732*t8285*var3[10] - 5.*t11077*t11424*t732*t8285*var3[10] + 30.*t11120*t11216*t11256*t732*t8285*var3[18] - 20.*t10458*t11307*t11399*t732*t8285*var3[18] + 20.*t10585*t10695*t11112*t732*t8285*var3[26] - 30.*t11120*t11216*t11256*t732*t8285*var3[26] + 5.*t10148*t10459*t732*t8285*var3[34] - 20.*t10585*t10695*t11112*t732*t8285*var3[34] - 5.*t10148*t10459*t732*t8285*var3[42];
  p_output1[26]=0.5;
  p_output1[27]=0.5;
  p_output1[28]=t11737;
  p_output1[29]=t11866;
  p_output1[30]=t11894;
  p_output1[31]=t11944;
  p_output1[32]=t11945;
  p_output1[33]=t11969;
  p_output1[34]=-5.*t11424*t12076*var3[2] + 5.*t11077*t11424*var3[10] - 5.*t10458*t11307*t11424*var3[10] - 20.*t10458*t11077*t11399*t12076*var3[10] - 20.*t11120*t11216*t11399*var3[18] + 20.*t10458*t11307*t11399*var3[18] - 30.*t11216*t11256*t11307*t12076*var3[18] - 30.*t10585*t10695*t11256*var3[26] + 30.*t11120*t11216*t11256*var3[26] - 20.*t10695*t11112*t11120*t12076*var3[26] - 20.*t10148*t10459*t11112*var3[34] + 20.*t10585*t10695*t11112*var3[34] - 5.*t10459*t10585*t12076*var3[34] + 5.*t10148*t10459*var3[42] - 5.*t11968*t11974*var3[42];
  p_output1[35]=-5.*t10458*t11307*t11424*var3[2] - 20.*t11120*t11216*t11399*var3[10] + 5.*t10458*t11307*t11424*var3[10] - 30.*t10585*t10695*t11256*var3[18] + 20.*t11120*t11216*t11399*var3[18] - 20.*t10148*t10459*t11112*var3[26] + 30.*t10585*t10695*t11256*var3[26] + 20.*t10148*t10459*t11112*var3[34] - 5.*t11968*t11974*var3[34] + 5.*t11968*t11974*var3[42];
  p_output1[36]=5.*t11077*t11424*t9616*var3[3] + 20.*t10458*t11307*t11399*t9616*var3[11] - 5.*t11077*t11424*t9616*var3[11] + 30.*t11120*t11216*t11256*t9616*var3[19] - 20.*t10458*t11307*t11399*t9616*var3[19] + 20.*t10585*t10695*t11112*t9616*var3[27] - 30.*t11120*t11216*t11256*t9616*var3[27] + 5.*t10148*t10459*t9616*var3[35] - 20.*t10585*t10695*t11112*t9616*var3[35] - 5.*t10148*t10459*t9616*var3[43];
  p_output1[37]=5.*t11077*t11424*t732*t8285*var3[3] + 20.*t10458*t11307*t11399*t732*t8285*var3[11] - 5.*t11077*t11424*t732*t8285*var3[11] + 30.*t11120*t11216*t11256*t732*t8285*var3[19] - 20.*t10458*t11307*t11399*t732*t8285*var3[19] + 20.*t10585*t10695*t11112*t732*t8285*var3[27] - 30.*t11120*t11216*t11256*t732*t8285*var3[27] + 5.*t10148*t10459*t732*t8285*var3[35] - 20.*t10585*t10695*t11112*t732*t8285*var3[35] - 5.*t10148*t10459*t732*t8285*var3[43];
  p_output1[38]=-1.;
  p_output1[39]=1.;
  p_output1[40]=t11737;
  p_output1[41]=t11866;
  p_output1[42]=t11894;
  p_output1[43]=t11944;
  p_output1[44]=t11945;
  p_output1[45]=t11969;
  p_output1[46]=-5.*t11424*t12076*var3[3] + 5.*t11077*t11424*var3[11] - 5.*t10458*t11307*t11424*var3[11] - 20.*t10458*t11077*t11399*t12076*var3[11] - 20.*t11120*t11216*t11399*var3[19] + 20.*t10458*t11307*t11399*var3[19] - 30.*t11216*t11256*t11307*t12076*var3[19] - 30.*t10585*t10695*t11256*var3[27] + 30.*t11120*t11216*t11256*var3[27] - 20.*t10695*t11112*t11120*t12076*var3[27] - 20.*t10148*t10459*t11112*var3[35] + 20.*t10585*t10695*t11112*var3[35] - 5.*t10459*t10585*t12076*var3[35] + 5.*t10148*t10459*var3[43] - 5.*t11968*t11974*var3[43];
  p_output1[47]=-5.*t10458*t11307*t11424*var3[3] - 20.*t11120*t11216*t11399*var3[11] + 5.*t10458*t11307*t11424*var3[11] - 30.*t10585*t10695*t11256*var3[19] + 20.*t11120*t11216*t11399*var3[19] - 20.*t10148*t10459*t11112*var3[27] + 30.*t10585*t10695*t11256*var3[27] + 20.*t10148*t10459*t11112*var3[35] - 5.*t11968*t11974*var3[35] + 5.*t11968*t11974*var3[43];
  p_output1[48]=5.*t11077*t11424*t9616*var3[4] + 20.*t10458*t11307*t11399*t9616*var3[12] - 5.*t11077*t11424*t9616*var3[12] + 30.*t11120*t11216*t11256*t9616*var3[20] - 20.*t10458*t11307*t11399*t9616*var3[20] + 20.*t10585*t10695*t11112*t9616*var3[28] - 30.*t11120*t11216*t11256*t9616*var3[28] + 5.*t10148*t10459*t9616*var3[36] - 20.*t10585*t10695*t11112*t9616*var3[36] - 5.*t10148*t10459*t9616*var3[44];
  p_output1[49]=5.*t11077*t11424*t732*t8285*var3[4] + 20.*t10458*t11307*t11399*t732*t8285*var3[12] - 5.*t11077*t11424*t732*t8285*var3[12] + 30.*t11120*t11216*t11256*t732*t8285*var3[20] - 20.*t10458*t11307*t11399*t732*t8285*var3[20] + 20.*t10585*t10695*t11112*t732*t8285*var3[28] - 30.*t11120*t11216*t11256*t732*t8285*var3[28] + 5.*t10148*t10459*t732*t8285*var3[36] - 20.*t10585*t10695*t11112*t732*t8285*var3[36] - 5.*t10148*t10459*t732*t8285*var3[44];
  p_output1[50]=0.5;
  p_output1[51]=0.5;
  p_output1[52]=t11737;
  p_output1[53]=t11866;
  p_output1[54]=t11894;
  p_output1[55]=t11944;
  p_output1[56]=t11945;
  p_output1[57]=t11969;
  p_output1[58]=-5.*t11424*t12076*var3[4] + 5.*t11077*t11424*var3[12] - 5.*t10458*t11307*t11424*var3[12] - 20.*t10458*t11077*t11399*t12076*var3[12] - 20.*t11120*t11216*t11399*var3[20] + 20.*t10458*t11307*t11399*var3[20] - 30.*t11216*t11256*t11307*t12076*var3[20] - 30.*t10585*t10695*t11256*var3[28] + 30.*t11120*t11216*t11256*var3[28] - 20.*t10695*t11112*t11120*t12076*var3[28] - 20.*t10148*t10459*t11112*var3[36] + 20.*t10585*t10695*t11112*var3[36] - 5.*t10459*t10585*t12076*var3[36] + 5.*t10148*t10459*var3[44] - 5.*t11968*t11974*var3[44];
  p_output1[59]=-5.*t10458*t11307*t11424*var3[4] - 20.*t11120*t11216*t11399*var3[12] + 5.*t10458*t11307*t11424*var3[12] - 30.*t10585*t10695*t11256*var3[20] + 20.*t11120*t11216*t11399*var3[20] - 20.*t10148*t10459*t11112*var3[28] + 30.*t10585*t10695*t11256*var3[28] + 20.*t10148*t10459*t11112*var3[36] - 5.*t11968*t11974*var3[36] + 5.*t11968*t11974*var3[44];
  p_output1[60]=5.*t11077*t11424*t9616*var3[5] + 20.*t10458*t11307*t11399*t9616*var3[13] - 5.*t11077*t11424*t9616*var3[13] + 30.*t11120*t11216*t11256*t9616*var3[21] - 20.*t10458*t11307*t11399*t9616*var3[21] + 20.*t10585*t10695*t11112*t9616*var3[29] - 30.*t11120*t11216*t11256*t9616*var3[29] + 5.*t10148*t10459*t9616*var3[37] - 20.*t10585*t10695*t11112*t9616*var3[37] - 5.*t10148*t10459*t9616*var3[45];
  p_output1[61]=5.*t11077*t11424*t732*t8285*var3[5] + 20.*t10458*t11307*t11399*t732*t8285*var3[13] - 5.*t11077*t11424*t732*t8285*var3[13] + 30.*t11120*t11216*t11256*t732*t8285*var3[21] - 20.*t10458*t11307*t11399*t732*t8285*var3[21] + 20.*t10585*t10695*t11112*t732*t8285*var3[29] - 30.*t11120*t11216*t11256*t732*t8285*var3[29] + 5.*t10148*t10459*t732*t8285*var3[37] - 20.*t10585*t10695*t11112*t732*t8285*var3[37] - 5.*t10148*t10459*t732*t8285*var3[45];
  p_output1[62]=-1.;
  p_output1[63]=1.;
  p_output1[64]=t11737;
  p_output1[65]=t11866;
  p_output1[66]=t11894;
  p_output1[67]=t11944;
  p_output1[68]=t11945;
  p_output1[69]=t11969;
  p_output1[70]=-5.*t11424*t12076*var3[5] + 5.*t11077*t11424*var3[13] - 5.*t10458*t11307*t11424*var3[13] - 20.*t10458*t11077*t11399*t12076*var3[13] - 20.*t11120*t11216*t11399*var3[21] + 20.*t10458*t11307*t11399*var3[21] - 30.*t11216*t11256*t11307*t12076*var3[21] - 30.*t10585*t10695*t11256*var3[29] + 30.*t11120*t11216*t11256*var3[29] - 20.*t10695*t11112*t11120*t12076*var3[29] - 20.*t10148*t10459*t11112*var3[37] + 20.*t10585*t10695*t11112*var3[37] - 5.*t10459*t10585*t12076*var3[37] + 5.*t10148*t10459*var3[45] - 5.*t11968*t11974*var3[45];
  p_output1[71]=-5.*t10458*t11307*t11424*var3[5] - 20.*t11120*t11216*t11399*var3[13] + 5.*t10458*t11307*t11424*var3[13] - 30.*t10585*t10695*t11256*var3[21] + 20.*t11120*t11216*t11399*var3[21] - 20.*t10148*t10459*t11112*var3[29] + 30.*t10585*t10695*t11256*var3[29] + 20.*t10148*t10459*t11112*var3[37] - 5.*t11968*t11974*var3[37] + 5.*t11968*t11974*var3[45];
  p_output1[72]=5.*t11077*t11424*t9616*var3[6] + 20.*t10458*t11307*t11399*t9616*var3[14] - 5.*t11077*t11424*t9616*var3[14] + 30.*t11120*t11216*t11256*t9616*var3[22] - 20.*t10458*t11307*t11399*t9616*var3[22] + 20.*t10585*t10695*t11112*t9616*var3[30] - 30.*t11120*t11216*t11256*t9616*var3[30] + 5.*t10148*t10459*t9616*var3[38] - 20.*t10585*t10695*t11112*t9616*var3[38] - 5.*t10148*t10459*t9616*var3[46];
  p_output1[73]=5.*t11077*t11424*t732*t8285*var3[6] + 20.*t10458*t11307*t11399*t732*t8285*var3[14] - 5.*t11077*t11424*t732*t8285*var3[14] + 30.*t11120*t11216*t11256*t732*t8285*var3[22] - 20.*t10458*t11307*t11399*t732*t8285*var3[22] + 20.*t10585*t10695*t11112*t732*t8285*var3[30] - 30.*t11120*t11216*t11256*t732*t8285*var3[30] + 5.*t10148*t10459*t732*t8285*var3[38] - 20.*t10585*t10695*t11112*t732*t8285*var3[38] - 5.*t10148*t10459*t732*t8285*var3[46];
  p_output1[74]=0.5;
  p_output1[75]=0.5;
  p_output1[76]=t11737;
  p_output1[77]=t11866;
  p_output1[78]=t11894;
  p_output1[79]=t11944;
  p_output1[80]=t11945;
  p_output1[81]=t11969;
  p_output1[82]=-5.*t11424*t12076*var3[6] + 5.*t11077*t11424*var3[14] - 5.*t10458*t11307*t11424*var3[14] - 20.*t10458*t11077*t11399*t12076*var3[14] - 20.*t11120*t11216*t11399*var3[22] + 20.*t10458*t11307*t11399*var3[22] - 30.*t11216*t11256*t11307*t12076*var3[22] - 30.*t10585*t10695*t11256*var3[30] + 30.*t11120*t11216*t11256*var3[30] - 20.*t10695*t11112*t11120*t12076*var3[30] - 20.*t10148*t10459*t11112*var3[38] + 20.*t10585*t10695*t11112*var3[38] - 5.*t10459*t10585*t12076*var3[38] + 5.*t10148*t10459*var3[46] - 5.*t11968*t11974*var3[46];
  p_output1[83]=-5.*t10458*t11307*t11424*var3[6] - 20.*t11120*t11216*t11399*var3[14] + 5.*t10458*t11307*t11424*var3[14] - 30.*t10585*t10695*t11256*var3[22] + 20.*t11120*t11216*t11399*var3[22] - 20.*t10148*t10459*t11112*var3[30] + 30.*t10585*t10695*t11256*var3[30] + 20.*t10148*t10459*t11112*var3[38] - 5.*t11968*t11974*var3[38] + 5.*t11968*t11974*var3[46];
  p_output1[84]=5.*t11077*t11424*t9616*var3[7] + 20.*t10458*t11307*t11399*t9616*var3[15] - 5.*t11077*t11424*t9616*var3[15] + 30.*t11120*t11216*t11256*t9616*var3[23] - 20.*t10458*t11307*t11399*t9616*var3[23] + 20.*t10585*t10695*t11112*t9616*var3[31] - 30.*t11120*t11216*t11256*t9616*var3[31] + 5.*t10148*t10459*t9616*var3[39] - 20.*t10585*t10695*t11112*t9616*var3[39] - 5.*t10148*t10459*t9616*var3[47];
  p_output1[85]=5.*t11077*t11424*t732*t8285*var3[7] + 20.*t10458*t11307*t11399*t732*t8285*var3[15] - 5.*t11077*t11424*t732*t8285*var3[15] + 30.*t11120*t11216*t11256*t732*t8285*var3[23] - 20.*t10458*t11307*t11399*t732*t8285*var3[23] + 20.*t10585*t10695*t11112*t732*t8285*var3[31] - 30.*t11120*t11216*t11256*t732*t8285*var3[31] + 5.*t10148*t10459*t732*t8285*var3[39] - 20.*t10585*t10695*t11112*t732*t8285*var3[39] - 5.*t10148*t10459*t732*t8285*var3[47];
  p_output1[86]=-1.;
  p_output1[87]=1.;
  p_output1[88]=t11737;
  p_output1[89]=t11866;
  p_output1[90]=t11894;
  p_output1[91]=t11944;
  p_output1[92]=t11945;
  p_output1[93]=t11969;
  p_output1[94]=-5.*t11424*t12076*var3[7] + 5.*t11077*t11424*var3[15] - 5.*t10458*t11307*t11424*var3[15] - 20.*t10458*t11077*t11399*t12076*var3[15] - 20.*t11120*t11216*t11399*var3[23] + 20.*t10458*t11307*t11399*var3[23] - 30.*t11216*t11256*t11307*t12076*var3[23] - 30.*t10585*t10695*t11256*var3[31] + 30.*t11120*t11216*t11256*var3[31] - 20.*t10695*t11112*t11120*t12076*var3[31] - 20.*t10148*t10459*t11112*var3[39] + 20.*t10585*t10695*t11112*var3[39] - 5.*t10459*t10585*t12076*var3[39] + 5.*t10148*t10459*var3[47] - 5.*t11968*t11974*var3[47];
  p_output1[95]=-5.*t10458*t11307*t11424*var3[7] - 20.*t11120*t11216*t11399*var3[15] + 5.*t10458*t11307*t11424*var3[15] - 30.*t10585*t10695*t11256*var3[23] + 20.*t11120*t11216*t11399*var3[23] - 20.*t10148*t10459*t11112*var3[31] + 30.*t10585*t10695*t11256*var3[31] + 20.*t10148*t10459*t11112*var3[39] - 5.*t11968*t11974*var3[39] + 5.*t11968*t11974*var3[47];
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
