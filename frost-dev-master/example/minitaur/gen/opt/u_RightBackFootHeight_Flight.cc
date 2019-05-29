/*
 * Automatically Generated from Mathematica.
 * Tue 28 May 2019 22:38:51 GMT-04:00
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
  double t6242;
  double t3397;
  double t8397;
  double t14524;
  double t16105;
  double t16469;
  double t16361;
  double t19078;
  double t19579;
  double t19581;
  double t19587;
  double t19925;
  double t19974;
  double t3457;
  double t5046;
  double t16466;
  double t19320;
  double t19481;
  double t19489;
  double t19560;
  double t19564;
  double t20161;
  double t20171;
  double t20522;
  double t20013;
  double t20056;
  double t20525;
  double t20211;
  double t20272;
  double t20285;
  double t20289;
  double t20291;
  double t20293;
  double t21146;
  double t21184;
  double t21437;
  double t21850;
  double t22421;
  double t22433;
  double t22445;
  double t22446;
  double t22447;
  double t22450;
  double t22463;
  double t22513;
  double t22517;
  double t22494;
  double t20526;
  double t22478;
  double t22522;
  t6242 = Cos(var1[19]);
  t3397 = Cos(var1[3]);
  t8397 = -1.*t6242;
  t14524 = 1. + t8397;
  t16105 = Cos(var1[5]);
  t16469 = Sin(var1[3]);
  t16361 = Sin(var1[4]);
  t19078 = Sin(var1[5]);
  t19579 = Cos(var1[21]);
  t19581 = -1.*t19579;
  t19587 = 1. + t19581;
  t19925 = -3.e-6*t19587;
  t19974 = Sin(var1[21]);
  t3457 = Cos(var1[4]);
  t5046 = Sin(var1[19]);
  t16466 = -1.*t3397*t16105*t16361;
  t19320 = t16469*t19078;
  t19481 = t16466 + t19320;
  t19489 = t16105*t16469;
  t19560 = t3397*t16361*t19078;
  t19564 = t19489 + t19560;
  t20161 = 3.e-6*t19974;
  t20171 = t19925 + t20161;
  t20522 = 3.e-13*var1[21];
  t20013 = -3.e-6*t19974;
  t20056 = t19925 + t20013;
  t20525 = -9.e-12*t19587;
  t20211 = -3.e-6*t3397*t3457*t5046;
  t20272 = 3.e-6*t14524*t19481;
  t20285 = -9.e-12*t14524;
  t20289 = 1. + t20285;
  t20291 = t20289*t19564;
  t20293 = t20211 + t20272 + t20291;
  t21146 = t3397*t3457*t5046;
  t21184 = t6242*t19481;
  t21437 = 3.e-6*t14524*t19564;
  t21850 = t21146 + t21184 + t21437;
  t22421 = -1.000000000009*t14524;
  t22433 = 1. + t22421;
  t22445 = t22433*t3397*t3457;
  t22446 = -1.*t5046*t19481;
  t22447 = 3.e-6*t5046*t19564;
  t22450 = t22445 + t22446 + t22447;
  t22463 = 3.e-6*t19587;
  t22513 = -1.000000000009*t19587;
  t22517 = 1. + t22513;
  t22494 = 9.e-12*t19587;
  t20526 = -1.*t19974;
  t22478 = t22463 + t20013;
  t22522 = t22463 + t20161;
  p_output1[0]=6.000000000054e-7*t14524*t19564 + (-0.2000000000048*t19587 + 3.e-7*t20171 + t20522 + 0.100000000003*(t20525 + t20526))*t21850 + (0.1000000000039*t19587 + 3.e-7*t20056 + t20522 - 0.200000000003*(t19974 + t20525))*t22450 - 0.3*(t20293*t22478 + t21850*(t19974 + t22494) + t22450*t22517) + 0.2*(-1.*t22450*(t20526 + t22494) - 1.*t21850*t22517 - 1.*t20293*t22522) - 0.099999*((1. - 1.8e-11*t19587)*t20293 + t21850*t22478 + t22450*t22522) + 0.2000000000018*t3397*t3457*t5046 + t19481*(-1.8e-12*t14524 + 0.2*(-1. + t6242)) + var1[2] + t20293*(5.4e-18*t19587 - 0.200000000003*t20056 + 0.100000000003*t20171 + 1.e-7*var1[21]);
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

#include "u_RightBackFootHeight_Flight.hh"

namespace Flight1
{

void u_RightBackFootHeight_Flight_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
