/*
 * Automatically Generated from Mathematica.
 * Wed 29 May 2019 15:17:57 GMT-04:00
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
  double t17037;
  double t17823;
  double t17847;
  double t21045;
  double t21353;
  double t20526;
  double t21302;
  double t21398;
  double t21330;
  double t21399;
  double t21400;
  double t21448;
  double t21481;
  double t21493;
  double t23606;
  double t23624;
  double t23747;
  double t24004;
  double t24373;
  double t24400;
  double t24406;
  double t24407;
  double t24413;
  double t23687;
  double t23691;
  double t23692;
  double t23724;
  double t24401;
  double t24426;
  double t24429;
  double t24430;
  double t24431;
  double t24432;
  double t24441;
  double t24725;
  double t24544;
  double t24615;
  double t24616;
  double t24617;
  double t24623;
  double t24625;
  double t24630;
  double t25287;
  double t23743;
  double t24571;
  double t24398;
  double t24599;
  double t24601;
  double t26535;
  double t24631;
  t17037 = Cos(var1[6]);
  t17823 = -1.*t17037;
  t17847 = 1. + t17823;
  t21045 = Cos(var1[5]);
  t21353 = Sin(var1[3]);
  t20526 = Cos(var1[3]);
  t21302 = Sin(var1[4]);
  t21398 = Sin(var1[5]);
  t21330 = -1.*t20526*t21045*t21302;
  t21399 = t21353*t21398;
  t21400 = t21330 + t21399;
  t21448 = t21045*t21353;
  t21481 = t20526*t21302*t21398;
  t21493 = t21448 + t21481;
  t23606 = Cos(var1[4]);
  t23624 = Sin(var1[6]);
  t23747 = Cos(var1[8]);
  t24004 = -1.*t23747;
  t24373 = 1. + t24004;
  t24400 = Sin(var1[8]);
  t24406 = -3.e-6*t24373;
  t24407 = 3.e-6*t24400;
  t24413 = t24406 + t24407;
  t23687 = t17037*t21400;
  t23691 = 3.e-6*t17847*t21493;
  t23692 = t20526*t23606*t23624;
  t23724 = t23687 + t23691 + t23692;
  t24401 = -1.*t24400;
  t24426 = 3.e-6*t17847*t21400;
  t24429 = -9.e-12*t17847;
  t24430 = 1. + t24429;
  t24431 = t24430*t21493;
  t24432 = -3.e-6*t20526*t23606*t23624;
  t24441 = t24426 + t24431 + t24432;
  t24725 = 3.e-6*t24373;
  t24544 = -3.e-6*t24400;
  t24615 = -1.000000000009*t17847;
  t24616 = 1. + t24615;
  t24617 = t20526*t23606*t24616;
  t24623 = -1.*t21400*t23624;
  t24625 = 3.e-6*t21493*t23624;
  t24630 = t24617 + t24623 + t24625;
  t25287 = t24725 + t24407;
  t23743 = 9.e-13*var1[8];
  t24571 = t24406 + t24544;
  t24398 = -9.e-12*t24373;
  t24599 = -1.000000000009*t24373;
  t24601 = 1. + t24599;
  t26535 = t24725 + t24544;
  t24631 = 9.e-12*t24373;
  p_output1[0]=0.2000000000018*t17847*t21400 - 6.000000000054e-7*t17847*t21493 - 0.2000000000018*t20526*t23606*t23624 + t23724*(t23743 + 0.2000000000018*t24373 + 0.1*(t24398 + t24401) - 9.e-7*t24413) + (t23743 + 0.1000000000009*t24373 + 0.2*(t24398 + t24400) - 9.e-7*t24571)*t24630 + 0.2*(t23724*t24601 + t24630*(t24401 + t24631) + t24441*t25287) + 0.100001*((1. - 1.8e-11*t24373)*t24441 + t24630*t25287 + t23724*t26535) - 0.3*(t24601*t24630 + t23724*(t24400 + t24631) + t24441*t26535) + var1[2] + t24441*(-1.62e-17*t24373 + 0.1*t24413 + 0.2*t24571 + 3.e-7*var1[8]);
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

#include "u_LeftFrontFootHeight_Flight.hh"

namespace Flight2
{

void u_LeftFrontFootHeight_Flight_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
