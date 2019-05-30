/*
 * Automatically Generated from Mathematica.
 * Wed 29 May 2019 23:47:18 GMT-04:00
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
  double t88;
  double t929;
  double t1242;
  double t1306;
  double t1307;
  double t1771;
  double t1487;
  double t1908;
  double t2768;
  double t3251;
  double t3281;
  double t3482;
  double t3523;
  double t113;
  double t227;
  double t1494;
  double t1917;
  double t2132;
  double t2372;
  double t2417;
  double t2429;
  double t3864;
  double t3933;
  double t5288;
  double t3578;
  double t3687;
  double t5341;
  double t5078;
  double t5109;
  double t5129;
  double t5156;
  double t5279;
  double t5281;
  double t5373;
  double t5378;
  double t5382;
  double t5524;
  double t5590;
  double t5592;
  double t5593;
  double t5596;
  double t5598;
  double t5601;
  double t5604;
  double t5808;
  double t5844;
  double t5688;
  double t5348;
  double t5607;
  double t6009;
  t88 = Cos(var1[3]);
  t929 = Cos(var1[15]);
  t1242 = -1.*t929;
  t1306 = 1. + t1242;
  t1307 = Cos(var1[5]);
  t1771 = Sin(var1[3]);
  t1487 = Sin(var1[4]);
  t1908 = Sin(var1[5]);
  t2768 = Cos(var1[17]);
  t3251 = -1.*t2768;
  t3281 = 1. + t3251;
  t3482 = -3.e-6*t3281;
  t3523 = Sin(var1[17]);
  t113 = Cos(var1[4]);
  t227 = Sin(var1[15]);
  t1494 = -1.*t88*t1307*t1487;
  t1917 = t1771*t1908;
  t2132 = t1494 + t1917;
  t2372 = t1307*t1771;
  t2417 = t88*t1487*t1908;
  t2429 = t2372 + t2417;
  t3864 = 3.e-6*t3523;
  t3933 = t3482 + t3864;
  t5288 = 9.e-13*var1[17];
  t3578 = -3.e-6*t3523;
  t3687 = t3482 + t3578;
  t5341 = -9.e-12*t3281;
  t5078 = -3.e-6*t88*t113*t227;
  t5109 = 3.e-6*t1306*t2132;
  t5129 = -9.e-12*t1306;
  t5156 = 1. + t5129;
  t5279 = t5156*t2429;
  t5281 = t5078 + t5109 + t5279;
  t5373 = t88*t113*t227;
  t5378 = t929*t2132;
  t5382 = 3.e-6*t1306*t2429;
  t5524 = t5373 + t5378 + t5382;
  t5590 = -1.000000000009*t1306;
  t5592 = 1. + t5590;
  t5593 = t5592*t88*t113;
  t5596 = -1.*t227*t2132;
  t5598 = 3.e-6*t227*t2429;
  t5601 = t5593 + t5596 + t5598;
  t5604 = 3.e-6*t3281;
  t5808 = -1.000000000009*t3281;
  t5844 = 1. + t5808;
  t5688 = 9.e-12*t3281;
  t5348 = -1.*t3523;
  t5607 = t5604 + t3578;
  t6009 = t5604 + t3864;
  p_output1[0]=0.2000000000018*t1306*t2132 - 6.000000000054e-7*t1306*t2429 + (0.2000000000018*t3281 - 9.e-7*t3933 + t5288 + 0.1*(t5341 + t5348))*t5524 + (0.1000000000009*t3281 - 9.e-7*t3687 + t5288 + 0.2*(t3523 + t5341))*t5601 - 0.3*(t5281*t5607 + t5524*(t3523 + t5688) + t5601*t5844) + 0.2*(t5601*(t5348 + t5688) + t5524*t5844 + t5281*t6009) - 0.099999*((1. - 1.8e-11*t3281)*t5281 + t5524*t5607 + t5601*t6009) - 0.2000000000018*t113*t227*t88 + var1[2] + t5281*(-1.62e-17*t3281 + 0.2*t3687 + 0.1*t3933 + 3.e-7*var1[17]);
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

#include "foot_clearance_FrontStance.hh"

namespace FrontStance
{

void foot_clearance_FrontStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
