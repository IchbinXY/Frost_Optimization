/*
 * Automatically Generated from Mathematica.
 * Wed 29 May 2019 23:53:09 GMT-04:00
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
static void output1(double *p_output1,const double *var1)
{
  double t14925;
  double t3760;
  double t15026;
  double t15104;
  double t15213;
  double t15268;
  double t15222;
  double t15274;
  double t15326;
  double t15327;
  double t15345;
  double t15363;
  double t15377;
  double t4218;
  double t14149;
  double t15227;
  double t15289;
  double t15292;
  double t15308;
  double t15309;
  double t15310;
  double t15899;
  double t15901;
  double t15937;
  double t15804;
  double t15861;
  double t15941;
  double t15907;
  double t15910;
  double t15915;
  double t15916;
  double t15917;
  double t15919;
  double t16275;
  double t16276;
  double t16282;
  double t16465;
  double t17233;
  double t17379;
  double t17380;
  double t17382;
  double t17383;
  double t17388;
  double t17441;
  double t19677;
  double t19683;
  double t18132;
  double t15950;
  double t17710;
  double t19831;
  t14925 = Cos(var1[10]);
  t3760 = Cos(var1[3]);
  t15026 = -1.*t14925;
  t15104 = 1. + t15026;
  t15213 = Cos(var1[5]);
  t15268 = Sin(var1[3]);
  t15222 = Sin(var1[4]);
  t15274 = Sin(var1[5]);
  t15326 = Cos(var1[12]);
  t15327 = -1.*t15326;
  t15345 = 1. + t15327;
  t15363 = -3.e-6*t15345;
  t15377 = Sin(var1[12]);
  t4218 = Cos(var1[4]);
  t14149 = Sin(var1[10]);
  t15227 = -1.*t3760*t15213*t15222;
  t15289 = t15268*t15274;
  t15292 = t15227 + t15289;
  t15308 = t15213*t15268;
  t15309 = t3760*t15222*t15274;
  t15310 = t15308 + t15309;
  t15899 = 3.e-6*t15377;
  t15901 = t15363 + t15899;
  t15937 = 3.e-13*var1[12];
  t15804 = -3.e-6*t15377;
  t15861 = t15363 + t15804;
  t15941 = -9.e-12*t15345;
  t15907 = -3.e-6*t3760*t4218*t14149;
  t15910 = 3.e-6*t15104*t15292;
  t15915 = -9.e-12*t15104;
  t15916 = 1. + t15915;
  t15917 = t15916*t15310;
  t15919 = t15907 + t15910 + t15917;
  t16275 = t3760*t4218*t14149;
  t16276 = t14925*t15292;
  t16282 = 3.e-6*t15104*t15310;
  t16465 = t16275 + t16276 + t16282;
  t17233 = -1.000000000009*t15104;
  t17379 = 1. + t17233;
  t17380 = t17379*t3760*t4218;
  t17382 = -1.*t14149*t15292;
  t17383 = 3.e-6*t14149*t15310;
  t17388 = t17380 + t17382 + t17383;
  t17441 = 3.e-6*t15345;
  t19677 = -1.000000000009*t15345;
  t19683 = 1. + t19677;
  t18132 = 9.e-12*t15345;
  t15950 = -1.*t15377;
  t17710 = t17441 + t15804;
  t19831 = t17441 + t15899;
  p_output1[0]=(0.2*(-1. + t14925) - 1.8e-12*t15104)*t15292 + 6.000000000054e-7*t15104*t15310 + (-0.2000000000048*t15345 + 3.e-7*t15901 + t15937 + 0.100000000003*(t15941 + t15950))*t16465 + (0.1000000000039*t15345 + 3.e-7*t15861 + t15937 - 0.200000000003*(t15377 + t15941))*t17388 - 0.3*(t15919*t17710 + t16465*(t15377 + t18132) + t17388*t19683) + 0.2*(-1.*t17388*(t15950 + t18132) - 1.*t16465*t19683 - 1.*t15919*t19831) + 0.100001*((1. - 1.8e-11*t15345)*t15919 + t16465*t17710 + t17388*t19831) + 0.2000000000018*t14149*t3760*t4218 + var1[2] + t15919*(5.4e-18*t15345 - 0.200000000003*t15861 + 0.100000000003*t15901 + 1.e-7*var1[12]);
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

  double *var1;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "One input(s) required (var1).");
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

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 1, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "u_LeftBackFootHeight_Flight.hh"

namespace Flight1
{

void u_LeftBackFootHeight_Flight_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
