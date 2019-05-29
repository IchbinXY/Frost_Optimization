/*
 * Automatically Generated from Mathematica.
 * Tue 28 May 2019 22:29:40 GMT-04:00
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
  double t325;
  double t327;
  double t404;
  double t428;
  double t370;
  double t469;
  double t553;
  double t556;
  double t600;
  double t608;
  double t543;
  double t570;
  double t629;
  double t660;
  double t276;
  double t279;
  double t339;
  double t343;
  double t390;
  double t401;
  double t436;
  double t451;
  double t695;
  double t696;
  double t738;
  double t746;
  double t723;
  double t768;
  double t823;
  double t824;
  double t852;
  double t856;
  double t817;
  double t845;
  double t891;
  double t913;
  double t688;
  double t691;
  double t699;
  double t701;
  double t729;
  double t737;
  double t759;
  double t763;
  double t957;
  double t962;
  double t991;
  double t999;
  double t972;
  double t1004;
  double t1029;
  double t1043;
  double t1059;
  double t1062;
  double t1024;
  double t1050;
  double t1070;
  double t1086;
  double t921;
  double t932;
  double t963;
  double t967;
  double t988;
  double t990;
  double t1000;
  double t1002;
  double t1260;
  double t1264;
  double t1319;
  double t1333;
  double t1285;
  double t1392;
  double t1436;
  double t1439;
  double t1468;
  double t1470;
  double t1406;
  double t1444;
  double t1557;
  double t1580;
  double t1210;
  double t1246;
  double t1270;
  double t1271;
  double t1308;
  double t1317;
  double t1349;
  double t1374;
  t325 = var1[14] + var1[16];
  t327 = Sin(t325);
  t404 = var1[15] + var1[17];
  t428 = Sin(t404);
  t370 = -0.1*var2[16]*t327;
  t469 = 0.1*var2[17]*t428;
  t553 = Cos(t325);
  t556 = 0.1*t553;
  t600 = Cos(t404);
  t608 = -0.1*t600;
  t543 = Cos(var1[14]);
  t570 = Cos(var1[15]);
  t629 = -0.1*var2[16]*t553;
  t660 = 0.1*var2[17]*t600;
  t276 = Sin(var1[14]);
  t279 = -0.05*t276;
  t339 = -0.1*t327;
  t343 = t279 + t339;
  t390 = Sin(var1[15]);
  t401 = 0.05*t390;
  t436 = 0.1*t428;
  t451 = t401 + t436;
  t695 = var1[6] + var1[8];
  t696 = Sin(t695);
  t738 = var1[9] + var1[7];
  t746 = Sin(t738);
  t723 = -0.1*var2[8]*t696;
  t768 = 0.1*var2[9]*t746;
  t823 = Cos(t695);
  t824 = 0.1*t823;
  t852 = Cos(t738);
  t856 = -0.1*t852;
  t817 = Cos(var1[6]);
  t845 = Cos(var1[7]);
  t891 = -0.1*var2[8]*t823;
  t913 = 0.1*var2[9]*t852;
  t688 = Sin(var1[6]);
  t691 = -0.05*t688;
  t699 = -0.1*t696;
  t701 = t691 + t699;
  t729 = Sin(var1[7]);
  t737 = 0.05*t729;
  t759 = 0.1*t746;
  t763 = t737 + t759;
  t957 = var1[18] + var1[20];
  t962 = Sin(t957);
  t991 = var1[19] + var1[21];
  t999 = Sin(t991);
  t972 = -0.1*var2[20]*t962;
  t1004 = 0.1*var2[21]*t999;
  t1029 = Cos(t957);
  t1043 = 0.1*t1029;
  t1059 = Cos(t991);
  t1062 = -0.1*t1059;
  t1024 = Cos(var1[18]);
  t1050 = Cos(var1[19]);
  t1070 = -0.1*var2[20]*t1029;
  t1086 = 0.1*var2[21]*t1059;
  t921 = Sin(var1[18]);
  t932 = -0.05*t921;
  t963 = -0.1*t962;
  t967 = t932 + t963;
  t988 = Sin(var1[19]);
  t990 = 0.05*t988;
  t1000 = 0.1*t999;
  t1002 = t990 + t1000;
  t1260 = var1[10] + var1[12];
  t1264 = Sin(t1260);
  t1319 = var1[11] + var1[13];
  t1333 = Sin(t1319);
  t1285 = -0.1*var2[12]*t1264;
  t1392 = 0.1*var2[13]*t1333;
  t1436 = Cos(t1260);
  t1439 = 0.1*t1436;
  t1468 = Cos(t1319);
  t1470 = -0.1*t1468;
  t1406 = Cos(var1[10]);
  t1444 = Cos(var1[11]);
  t1557 = -0.1*var2[12]*t1436;
  t1580 = 0.1*var2[13]*t1468;
  t1210 = Sin(var1[10]);
  t1246 = -0.05*t1210;
  t1270 = -0.1*t1264;
  t1271 = t1246 + t1270;
  t1308 = Sin(var1[11]);
  t1317 = 0.05*t1308;
  t1349 = 0.1*t1333;
  t1374 = t1317 + t1349;
  p_output1[0]=t370 + t343*var2[14];
  p_output1[1]=t469 + t451*var2[15];
  p_output1[2]=t370 - 0.1*t327*var2[14];
  p_output1[3]=t469 + 0.1*t428*var2[15];
  p_output1[4]=0.05*t543 + t556;
  p_output1[5]=-0.05*t570 + t608;
  p_output1[6]=t556;
  p_output1[7]=t608;
  p_output1[8]=t629 + (-0.05*t543 - 0.1*t553)*var2[14];
  p_output1[9]=t660 + (0.05*t570 + 0.1*t600)*var2[15];
  p_output1[10]=t629 - 0.1*t553*var2[14];
  p_output1[11]=t660 + 0.1*t600*var2[15];
  p_output1[12]=t343;
  p_output1[13]=t451;
  p_output1[14]=t339;
  p_output1[15]=t436;
  p_output1[16]=t723 + t701*var2[6];
  p_output1[17]=t768 + t763*var2[7];
  p_output1[18]=t723 - 0.1*t696*var2[6];
  p_output1[19]=t768 + 0.1*t746*var2[7];
  p_output1[20]=0.05*t817 + t824;
  p_output1[21]=-0.05*t845 + t856;
  p_output1[22]=t824;
  p_output1[23]=t856;
  p_output1[24]=t891 + (-0.05*t817 - 0.1*t823)*var2[6];
  p_output1[25]=t913 + (0.05*t845 + 0.1*t852)*var2[7];
  p_output1[26]=t891 - 0.1*t823*var2[6];
  p_output1[27]=t913 + 0.1*t852*var2[7];
  p_output1[28]=t701;
  p_output1[29]=t763;
  p_output1[30]=t699;
  p_output1[31]=t759;
  p_output1[32]=t972 + t967*var2[18];
  p_output1[33]=t1004 + t1002*var2[19];
  p_output1[34]=t972 - 0.1*t962*var2[18];
  p_output1[35]=t1004 + 0.1*t999*var2[19];
  p_output1[36]=0.05*t1024 + t1043;
  p_output1[37]=-0.05*t1050 + t1062;
  p_output1[38]=t1043;
  p_output1[39]=t1062;
  p_output1[40]=t1070 + (-0.05*t1024 - 0.1*t1029)*var2[18];
  p_output1[41]=t1086 + (0.05*t1050 + 0.1*t1059)*var2[19];
  p_output1[42]=t1070 - 0.1*t1029*var2[18];
  p_output1[43]=t1086 + 0.1*t1059*var2[19];
  p_output1[44]=t967;
  p_output1[45]=t1002;
  p_output1[46]=t963;
  p_output1[47]=t1000;
  p_output1[48]=t1285 + t1271*var2[10];
  p_output1[49]=t1392 + t1374*var2[11];
  p_output1[50]=t1285 - 0.1*t1264*var2[10];
  p_output1[51]=t1392 + 0.1*t1333*var2[11];
  p_output1[52]=0.05*t1406 + t1439;
  p_output1[53]=-0.05*t1444 + t1470;
  p_output1[54]=t1439;
  p_output1[55]=t1470;
  p_output1[56]=t1557 + (-0.05*t1406 - 0.1*t1436)*var2[10];
  p_output1[57]=t1580 + (0.05*t1444 + 0.1*t1468)*var2[11];
  p_output1[58]=t1557 - 0.1*t1436*var2[10];
  p_output1[59]=t1580 + 0.1*t1468*var2[11];
  p_output1[60]=t1271;
  p_output1[61]=t1374;
  p_output1[62]=t1270;
  p_output1[63]=t1349;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 64, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_dh_fourBar_minitaur.hh"

namespace FrontStance
{

void J_dh_fourBar_minitaur_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
