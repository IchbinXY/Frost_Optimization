/*
 * Automatically Generated from Mathematica.
 * Tue 28 May 2019 22:31:38 GMT-04:00
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
  double t288;
  double t108;
  double t163;
  double t223;
  double t259;
  double t287;
  double t300;
  double t304;
  double t307;
  double t309;
  double t315;
  double t317;
  double t319;
  double t331;
  double t332;
  double t340;
  double t344;
  double t345;
  double t378;
  double t379;
  double t389;
  double t395;
  double t396;
  double t416;
  double t548;
  double t560;
  double t566;
  double t555;
  double t508;
  double t509;
  double t524;
  double t532;
  double t539;
  double t547;
  double t551;
  t288 = -1.*var4[0];
  t108 = -1. + var5[0];
  t163 = -1. + var6[0];
  t223 = 1/t163;
  t259 = -1.*t108*t223;
  t287 = 1. + t259;
  t300 = t288 + var4[1];
  t304 = Power(t300,-5);
  t307 = -1.*var1[0];
  t309 = t307 + var1[1];
  t315 = t108*t223*t309;
  t317 = t288 + var1[0] + t315;
  t319 = Power(t317,4);
  t331 = Power(t300,-4);
  t332 = Power(t317,3);
  t340 = 1/t300;
  t344 = -1.*t340*t317;
  t345 = 1. + t344;
  t378 = Power(t300,-3);
  t379 = Power(t317,2);
  t389 = Power(t345,2);
  t395 = Power(t300,-2);
  t396 = Power(t345,3);
  t416 = Power(t345,4);
  t548 = Power(t317,5);
  t560 = -1.*t395*t317;
  t566 = t340 + t560;
  t555 = Power(t300,-6);
  t508 = Power(t345,5);
  t509 = -1.*t508;
  t524 = -5.*t340*t317*t416;
  t532 = -10.*t395*t379*t396;
  t539 = -10.*t378*t332*t389;
  t547 = -5.*t331*t319*t345;
  t551 = -1.*t304*t548;
  p_output1[0]=5.*t287*t340*t416*var3[0] + 20.*t287*t317*t395*t396*var3[8] - 5.*t287*t340*t416*var3[8] + 30.*t287*t378*t379*t389*var3[16] - 20.*t287*t317*t395*t396*var3[16] + 20.*t287*t331*t332*t345*var3[24] - 30.*t287*t378*t379*t389*var3[24] + 5.*t287*t304*t319*var3[32] - 20.*t287*t331*t332*t345*var3[32] - 5.*t287*t304*t319*var3[40];
  p_output1[1]=5.*t108*t223*t340*t416*var3[0] + 20.*t108*t223*t317*t395*t396*var3[8] - 5.*t108*t223*t340*t416*var3[8] + 30.*t108*t223*t378*t379*t389*var3[16] - 20.*t108*t223*t317*t395*t396*var3[16] + 20.*t108*t223*t331*t332*t345*var3[24] - 30.*t108*t223*t378*t379*t389*var3[24] + 5.*t108*t223*t304*t319*var3[32] - 20.*t108*t223*t331*t332*t345*var3[32] - 5.*t108*t223*t304*t319*var3[40];
  p_output1[2]=0.5;
  p_output1[3]=0.5;
  p_output1[4]=t509;
  p_output1[5]=t524;
  p_output1[6]=t532;
  p_output1[7]=t539;
  p_output1[8]=t547;
  p_output1[9]=t551;
  p_output1[10]=-5.*t416*t566*var3[0] + 5.*t340*t416*var3[8] - 5.*t317*t395*t416*var3[8] - 20.*t317*t340*t396*t566*var3[8] - 20.*t378*t379*t396*var3[16] + 20.*t317*t395*t396*var3[16] - 30.*t379*t389*t395*t566*var3[16] - 30.*t331*t332*t389*var3[24] + 30.*t378*t379*t389*var3[24] - 20.*t332*t345*t378*t566*var3[24] - 20.*t304*t319*t345*var3[32] + 20.*t331*t332*t345*var3[32] - 5.*t319*t331*t566*var3[32] + 5.*t304*t319*var3[40] - 5.*t548*t555*var3[40];
  p_output1[11]=-5.*t317*t395*t416*var3[0] - 20.*t378*t379*t396*var3[8] + 5.*t317*t395*t416*var3[8] - 30.*t331*t332*t389*var3[16] + 20.*t378*t379*t396*var3[16] - 20.*t304*t319*t345*var3[24] + 30.*t331*t332*t389*var3[24] + 20.*t304*t319*t345*var3[32] - 5.*t548*t555*var3[32] + 5.*t548*t555*var3[40];
  p_output1[12]=5.*t287*t340*t416*var3[1] + 20.*t287*t317*t395*t396*var3[9] - 5.*t287*t340*t416*var3[9] + 30.*t287*t378*t379*t389*var3[17] - 20.*t287*t317*t395*t396*var3[17] + 20.*t287*t331*t332*t345*var3[25] - 30.*t287*t378*t379*t389*var3[25] + 5.*t287*t304*t319*var3[33] - 20.*t287*t331*t332*t345*var3[33] - 5.*t287*t304*t319*var3[41];
  p_output1[13]=5.*t108*t223*t340*t416*var3[1] + 20.*t108*t223*t317*t395*t396*var3[9] - 5.*t108*t223*t340*t416*var3[9] + 30.*t108*t223*t378*t379*t389*var3[17] - 20.*t108*t223*t317*t395*t396*var3[17] + 20.*t108*t223*t331*t332*t345*var3[25] - 30.*t108*t223*t378*t379*t389*var3[25] + 5.*t108*t223*t304*t319*var3[33] - 20.*t108*t223*t331*t332*t345*var3[33] - 5.*t108*t223*t304*t319*var3[41];
  p_output1[14]=-1.;
  p_output1[15]=1.;
  p_output1[16]=t509;
  p_output1[17]=t524;
  p_output1[18]=t532;
  p_output1[19]=t539;
  p_output1[20]=t547;
  p_output1[21]=t551;
  p_output1[22]=-5.*t416*t566*var3[1] + 5.*t340*t416*var3[9] - 5.*t317*t395*t416*var3[9] - 20.*t317*t340*t396*t566*var3[9] - 20.*t378*t379*t396*var3[17] + 20.*t317*t395*t396*var3[17] - 30.*t379*t389*t395*t566*var3[17] - 30.*t331*t332*t389*var3[25] + 30.*t378*t379*t389*var3[25] - 20.*t332*t345*t378*t566*var3[25] - 20.*t304*t319*t345*var3[33] + 20.*t331*t332*t345*var3[33] - 5.*t319*t331*t566*var3[33] + 5.*t304*t319*var3[41] - 5.*t548*t555*var3[41];
  p_output1[23]=-5.*t317*t395*t416*var3[1] - 20.*t378*t379*t396*var3[9] + 5.*t317*t395*t416*var3[9] - 30.*t331*t332*t389*var3[17] + 20.*t378*t379*t396*var3[17] - 20.*t304*t319*t345*var3[25] + 30.*t331*t332*t389*var3[25] + 20.*t304*t319*t345*var3[33] - 5.*t548*t555*var3[33] + 5.*t548*t555*var3[41];
  p_output1[24]=5.*t287*t340*t416*var3[2] + 20.*t287*t317*t395*t396*var3[10] - 5.*t287*t340*t416*var3[10] + 30.*t287*t378*t379*t389*var3[18] - 20.*t287*t317*t395*t396*var3[18] + 20.*t287*t331*t332*t345*var3[26] - 30.*t287*t378*t379*t389*var3[26] + 5.*t287*t304*t319*var3[34] - 20.*t287*t331*t332*t345*var3[34] - 5.*t287*t304*t319*var3[42];
  p_output1[25]=5.*t108*t223*t340*t416*var3[2] + 20.*t108*t223*t317*t395*t396*var3[10] - 5.*t108*t223*t340*t416*var3[10] + 30.*t108*t223*t378*t379*t389*var3[18] - 20.*t108*t223*t317*t395*t396*var3[18] + 20.*t108*t223*t331*t332*t345*var3[26] - 30.*t108*t223*t378*t379*t389*var3[26] + 5.*t108*t223*t304*t319*var3[34] - 20.*t108*t223*t331*t332*t345*var3[34] - 5.*t108*t223*t304*t319*var3[42];
  p_output1[26]=0.5;
  p_output1[27]=0.5;
  p_output1[28]=t509;
  p_output1[29]=t524;
  p_output1[30]=t532;
  p_output1[31]=t539;
  p_output1[32]=t547;
  p_output1[33]=t551;
  p_output1[34]=-5.*t416*t566*var3[2] + 5.*t340*t416*var3[10] - 5.*t317*t395*t416*var3[10] - 20.*t317*t340*t396*t566*var3[10] - 20.*t378*t379*t396*var3[18] + 20.*t317*t395*t396*var3[18] - 30.*t379*t389*t395*t566*var3[18] - 30.*t331*t332*t389*var3[26] + 30.*t378*t379*t389*var3[26] - 20.*t332*t345*t378*t566*var3[26] - 20.*t304*t319*t345*var3[34] + 20.*t331*t332*t345*var3[34] - 5.*t319*t331*t566*var3[34] + 5.*t304*t319*var3[42] - 5.*t548*t555*var3[42];
  p_output1[35]=-5.*t317*t395*t416*var3[2] - 20.*t378*t379*t396*var3[10] + 5.*t317*t395*t416*var3[10] - 30.*t331*t332*t389*var3[18] + 20.*t378*t379*t396*var3[18] - 20.*t304*t319*t345*var3[26] + 30.*t331*t332*t389*var3[26] + 20.*t304*t319*t345*var3[34] - 5.*t548*t555*var3[34] + 5.*t548*t555*var3[42];
  p_output1[36]=5.*t287*t340*t416*var3[3] + 20.*t287*t317*t395*t396*var3[11] - 5.*t287*t340*t416*var3[11] + 30.*t287*t378*t379*t389*var3[19] - 20.*t287*t317*t395*t396*var3[19] + 20.*t287*t331*t332*t345*var3[27] - 30.*t287*t378*t379*t389*var3[27] + 5.*t287*t304*t319*var3[35] - 20.*t287*t331*t332*t345*var3[35] - 5.*t287*t304*t319*var3[43];
  p_output1[37]=5.*t108*t223*t340*t416*var3[3] + 20.*t108*t223*t317*t395*t396*var3[11] - 5.*t108*t223*t340*t416*var3[11] + 30.*t108*t223*t378*t379*t389*var3[19] - 20.*t108*t223*t317*t395*t396*var3[19] + 20.*t108*t223*t331*t332*t345*var3[27] - 30.*t108*t223*t378*t379*t389*var3[27] + 5.*t108*t223*t304*t319*var3[35] - 20.*t108*t223*t331*t332*t345*var3[35] - 5.*t108*t223*t304*t319*var3[43];
  p_output1[38]=-1.;
  p_output1[39]=1.;
  p_output1[40]=t509;
  p_output1[41]=t524;
  p_output1[42]=t532;
  p_output1[43]=t539;
  p_output1[44]=t547;
  p_output1[45]=t551;
  p_output1[46]=-5.*t416*t566*var3[3] + 5.*t340*t416*var3[11] - 5.*t317*t395*t416*var3[11] - 20.*t317*t340*t396*t566*var3[11] - 20.*t378*t379*t396*var3[19] + 20.*t317*t395*t396*var3[19] - 30.*t379*t389*t395*t566*var3[19] - 30.*t331*t332*t389*var3[27] + 30.*t378*t379*t389*var3[27] - 20.*t332*t345*t378*t566*var3[27] - 20.*t304*t319*t345*var3[35] + 20.*t331*t332*t345*var3[35] - 5.*t319*t331*t566*var3[35] + 5.*t304*t319*var3[43] - 5.*t548*t555*var3[43];
  p_output1[47]=-5.*t317*t395*t416*var3[3] - 20.*t378*t379*t396*var3[11] + 5.*t317*t395*t416*var3[11] - 30.*t331*t332*t389*var3[19] + 20.*t378*t379*t396*var3[19] - 20.*t304*t319*t345*var3[27] + 30.*t331*t332*t389*var3[27] + 20.*t304*t319*t345*var3[35] - 5.*t548*t555*var3[35] + 5.*t548*t555*var3[43];
  p_output1[48]=5.*t287*t340*t416*var3[4] + 20.*t287*t317*t395*t396*var3[12] - 5.*t287*t340*t416*var3[12] + 30.*t287*t378*t379*t389*var3[20] - 20.*t287*t317*t395*t396*var3[20] + 20.*t287*t331*t332*t345*var3[28] - 30.*t287*t378*t379*t389*var3[28] + 5.*t287*t304*t319*var3[36] - 20.*t287*t331*t332*t345*var3[36] - 5.*t287*t304*t319*var3[44];
  p_output1[49]=5.*t108*t223*t340*t416*var3[4] + 20.*t108*t223*t317*t395*t396*var3[12] - 5.*t108*t223*t340*t416*var3[12] + 30.*t108*t223*t378*t379*t389*var3[20] - 20.*t108*t223*t317*t395*t396*var3[20] + 20.*t108*t223*t331*t332*t345*var3[28] - 30.*t108*t223*t378*t379*t389*var3[28] + 5.*t108*t223*t304*t319*var3[36] - 20.*t108*t223*t331*t332*t345*var3[36] - 5.*t108*t223*t304*t319*var3[44];
  p_output1[50]=0.5;
  p_output1[51]=0.5;
  p_output1[52]=t509;
  p_output1[53]=t524;
  p_output1[54]=t532;
  p_output1[55]=t539;
  p_output1[56]=t547;
  p_output1[57]=t551;
  p_output1[58]=-5.*t416*t566*var3[4] + 5.*t340*t416*var3[12] - 5.*t317*t395*t416*var3[12] - 20.*t317*t340*t396*t566*var3[12] - 20.*t378*t379*t396*var3[20] + 20.*t317*t395*t396*var3[20] - 30.*t379*t389*t395*t566*var3[20] - 30.*t331*t332*t389*var3[28] + 30.*t378*t379*t389*var3[28] - 20.*t332*t345*t378*t566*var3[28] - 20.*t304*t319*t345*var3[36] + 20.*t331*t332*t345*var3[36] - 5.*t319*t331*t566*var3[36] + 5.*t304*t319*var3[44] - 5.*t548*t555*var3[44];
  p_output1[59]=-5.*t317*t395*t416*var3[4] - 20.*t378*t379*t396*var3[12] + 5.*t317*t395*t416*var3[12] - 30.*t331*t332*t389*var3[20] + 20.*t378*t379*t396*var3[20] - 20.*t304*t319*t345*var3[28] + 30.*t331*t332*t389*var3[28] + 20.*t304*t319*t345*var3[36] - 5.*t548*t555*var3[36] + 5.*t548*t555*var3[44];
  p_output1[60]=5.*t287*t340*t416*var3[5] + 20.*t287*t317*t395*t396*var3[13] - 5.*t287*t340*t416*var3[13] + 30.*t287*t378*t379*t389*var3[21] - 20.*t287*t317*t395*t396*var3[21] + 20.*t287*t331*t332*t345*var3[29] - 30.*t287*t378*t379*t389*var3[29] + 5.*t287*t304*t319*var3[37] - 20.*t287*t331*t332*t345*var3[37] - 5.*t287*t304*t319*var3[45];
  p_output1[61]=5.*t108*t223*t340*t416*var3[5] + 20.*t108*t223*t317*t395*t396*var3[13] - 5.*t108*t223*t340*t416*var3[13] + 30.*t108*t223*t378*t379*t389*var3[21] - 20.*t108*t223*t317*t395*t396*var3[21] + 20.*t108*t223*t331*t332*t345*var3[29] - 30.*t108*t223*t378*t379*t389*var3[29] + 5.*t108*t223*t304*t319*var3[37] - 20.*t108*t223*t331*t332*t345*var3[37] - 5.*t108*t223*t304*t319*var3[45];
  p_output1[62]=-1.;
  p_output1[63]=1.;
  p_output1[64]=t509;
  p_output1[65]=t524;
  p_output1[66]=t532;
  p_output1[67]=t539;
  p_output1[68]=t547;
  p_output1[69]=t551;
  p_output1[70]=-5.*t416*t566*var3[5] + 5.*t340*t416*var3[13] - 5.*t317*t395*t416*var3[13] - 20.*t317*t340*t396*t566*var3[13] - 20.*t378*t379*t396*var3[21] + 20.*t317*t395*t396*var3[21] - 30.*t379*t389*t395*t566*var3[21] - 30.*t331*t332*t389*var3[29] + 30.*t378*t379*t389*var3[29] - 20.*t332*t345*t378*t566*var3[29] - 20.*t304*t319*t345*var3[37] + 20.*t331*t332*t345*var3[37] - 5.*t319*t331*t566*var3[37] + 5.*t304*t319*var3[45] - 5.*t548*t555*var3[45];
  p_output1[71]=-5.*t317*t395*t416*var3[5] - 20.*t378*t379*t396*var3[13] + 5.*t317*t395*t416*var3[13] - 30.*t331*t332*t389*var3[21] + 20.*t378*t379*t396*var3[21] - 20.*t304*t319*t345*var3[29] + 30.*t331*t332*t389*var3[29] + 20.*t304*t319*t345*var3[37] - 5.*t548*t555*var3[37] + 5.*t548*t555*var3[45];
  p_output1[72]=5.*t287*t340*t416*var3[6] + 20.*t287*t317*t395*t396*var3[14] - 5.*t287*t340*t416*var3[14] + 30.*t287*t378*t379*t389*var3[22] - 20.*t287*t317*t395*t396*var3[22] + 20.*t287*t331*t332*t345*var3[30] - 30.*t287*t378*t379*t389*var3[30] + 5.*t287*t304*t319*var3[38] - 20.*t287*t331*t332*t345*var3[38] - 5.*t287*t304*t319*var3[46];
  p_output1[73]=5.*t108*t223*t340*t416*var3[6] + 20.*t108*t223*t317*t395*t396*var3[14] - 5.*t108*t223*t340*t416*var3[14] + 30.*t108*t223*t378*t379*t389*var3[22] - 20.*t108*t223*t317*t395*t396*var3[22] + 20.*t108*t223*t331*t332*t345*var3[30] - 30.*t108*t223*t378*t379*t389*var3[30] + 5.*t108*t223*t304*t319*var3[38] - 20.*t108*t223*t331*t332*t345*var3[38] - 5.*t108*t223*t304*t319*var3[46];
  p_output1[74]=0.5;
  p_output1[75]=0.5;
  p_output1[76]=t509;
  p_output1[77]=t524;
  p_output1[78]=t532;
  p_output1[79]=t539;
  p_output1[80]=t547;
  p_output1[81]=t551;
  p_output1[82]=-5.*t416*t566*var3[6] + 5.*t340*t416*var3[14] - 5.*t317*t395*t416*var3[14] - 20.*t317*t340*t396*t566*var3[14] - 20.*t378*t379*t396*var3[22] + 20.*t317*t395*t396*var3[22] - 30.*t379*t389*t395*t566*var3[22] - 30.*t331*t332*t389*var3[30] + 30.*t378*t379*t389*var3[30] - 20.*t332*t345*t378*t566*var3[30] - 20.*t304*t319*t345*var3[38] + 20.*t331*t332*t345*var3[38] - 5.*t319*t331*t566*var3[38] + 5.*t304*t319*var3[46] - 5.*t548*t555*var3[46];
  p_output1[83]=-5.*t317*t395*t416*var3[6] - 20.*t378*t379*t396*var3[14] + 5.*t317*t395*t416*var3[14] - 30.*t331*t332*t389*var3[22] + 20.*t378*t379*t396*var3[22] - 20.*t304*t319*t345*var3[30] + 30.*t331*t332*t389*var3[30] + 20.*t304*t319*t345*var3[38] - 5.*t548*t555*var3[38] + 5.*t548*t555*var3[46];
  p_output1[84]=5.*t287*t340*t416*var3[7] + 20.*t287*t317*t395*t396*var3[15] - 5.*t287*t340*t416*var3[15] + 30.*t287*t378*t379*t389*var3[23] - 20.*t287*t317*t395*t396*var3[23] + 20.*t287*t331*t332*t345*var3[31] - 30.*t287*t378*t379*t389*var3[31] + 5.*t287*t304*t319*var3[39] - 20.*t287*t331*t332*t345*var3[39] - 5.*t287*t304*t319*var3[47];
  p_output1[85]=5.*t108*t223*t340*t416*var3[7] + 20.*t108*t223*t317*t395*t396*var3[15] - 5.*t108*t223*t340*t416*var3[15] + 30.*t108*t223*t378*t379*t389*var3[23] - 20.*t108*t223*t317*t395*t396*var3[23] + 20.*t108*t223*t331*t332*t345*var3[31] - 30.*t108*t223*t378*t379*t389*var3[31] + 5.*t108*t223*t304*t319*var3[39] - 20.*t108*t223*t331*t332*t345*var3[39] - 5.*t108*t223*t304*t319*var3[47];
  p_output1[86]=-1.;
  p_output1[87]=1.;
  p_output1[88]=t509;
  p_output1[89]=t524;
  p_output1[90]=t532;
  p_output1[91]=t539;
  p_output1[92]=t547;
  p_output1[93]=t551;
  p_output1[94]=-5.*t416*t566*var3[7] + 5.*t340*t416*var3[15] - 5.*t317*t395*t416*var3[15] - 20.*t317*t340*t396*t566*var3[15] - 20.*t378*t379*t396*var3[23] + 20.*t317*t395*t396*var3[23] - 30.*t379*t389*t395*t566*var3[23] - 30.*t331*t332*t389*var3[31] + 30.*t378*t379*t389*var3[31] - 20.*t332*t345*t378*t566*var3[31] - 20.*t304*t319*t345*var3[39] + 20.*t331*t332*t345*var3[39] - 5.*t319*t331*t566*var3[39] + 5.*t304*t319*var3[47] - 5.*t548*t555*var3[47];
  p_output1[95]=-5.*t317*t395*t416*var3[7] - 20.*t378*t379*t396*var3[15] + 5.*t317*t395*t416*var3[15] - 30.*t331*t332*t389*var3[23] + 20.*t378*t379*t396*var3[23] - 20.*t304*t319*t345*var3[31] + 30.*t331*t332*t389*var3[31] + 20.*t304*t319*t345*var3[39] - 5.*t548*t555*var3[39] + 5.*t548*t555*var3[47];
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
