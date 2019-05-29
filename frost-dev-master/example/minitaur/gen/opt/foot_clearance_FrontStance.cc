/*
 * Automatically Generated from Mathematica.
 * Wed 29 May 2019 15:06:46 GMT-04:00
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
  double t295;
  double t783;
  double t904;
  double t9201;
  double t9526;
  double t9619;
  double t9609;
  double t10106;
  double t11304;
  double t11313;
  double t11348;
  double t11561;
  double t11562;
  double t559;
  double t633;
  double t9618;
  double t10467;
  double t10470;
  double t10613;
  double t11125;
  double t11172;
  double t12256;
  double t12261;
  double t12350;
  double t11643;
  double t12183;
  double t12363;
  double t12282;
  double t12286;
  double t12308;
  double t12309;
  double t12315;
  double t12323;
  double t12485;
  double t12493;
  double t12498;
  double t12528;
  double t12628;
  double t12632;
  double t12633;
  double t12657;
  double t12658;
  double t12666;
  double t12698;
  double t12736;
  double t12800;
  double t12719;
  double t12376;
  double t12705;
  double t12810;
  t295 = Cos(var1[3]);
  t783 = Cos(var1[15]);
  t904 = -1.*t783;
  t9201 = 1. + t904;
  t9526 = Cos(var1[5]);
  t9619 = Sin(var1[3]);
  t9609 = Sin(var1[4]);
  t10106 = Sin(var1[5]);
  t11304 = Cos(var1[17]);
  t11313 = -1.*t11304;
  t11348 = 1. + t11313;
  t11561 = -3.e-6*t11348;
  t11562 = Sin(var1[17]);
  t559 = Cos(var1[4]);
  t633 = Sin(var1[15]);
  t9618 = -1.*t295*t9526*t9609;
  t10467 = t9619*t10106;
  t10470 = t9618 + t10467;
  t10613 = t9526*t9619;
  t11125 = t295*t9609*t10106;
  t11172 = t10613 + t11125;
  t12256 = 3.e-6*t11562;
  t12261 = t11561 + t12256;
  t12350 = 9.e-13*var1[17];
  t11643 = -3.e-6*t11562;
  t12183 = t11561 + t11643;
  t12363 = -9.e-12*t11348;
  t12282 = -3.e-6*t295*t559*t633;
  t12286 = 3.e-6*t9201*t10470;
  t12308 = -9.e-12*t9201;
  t12309 = 1. + t12308;
  t12315 = t12309*t11172;
  t12323 = t12282 + t12286 + t12315;
  t12485 = t295*t559*t633;
  t12493 = t783*t10470;
  t12498 = 3.e-6*t9201*t11172;
  t12528 = t12485 + t12493 + t12498;
  t12628 = -1.000000000009*t9201;
  t12632 = 1. + t12628;
  t12633 = t12632*t295*t559;
  t12657 = -1.*t633*t10470;
  t12658 = 3.e-6*t633*t11172;
  t12666 = t12633 + t12657 + t12658;
  t12698 = 3.e-6*t11348;
  t12736 = -1.000000000009*t11348;
  t12800 = 1. + t12736;
  t12719 = 9.e-12*t11348;
  t12376 = -1.*t11562;
  t12705 = t12698 + t11643;
  t12810 = t12698 + t12256;
  p_output1[0]=(0.2000000000018*t11348 - 9.e-7*t12261 + t12350 + 0.1*(t12363 + t12376))*t12528 + (0.1000000000009*t11348 - 9.e-7*t12183 + t12350 + 0.2*(t11562 + t12363))*t12666 - 0.3*(t12323*t12705 + t12528*(t11562 + t12719) + t12666*t12800) + 0.2*(t12666*(t12376 + t12719) + t12528*t12800 + t12323*t12810) - 0.099999*((1. - 1.8e-11*t11348)*t12323 + t12528*t12705 + t12666*t12810) - 0.2000000000018*t295*t559*t633 + 0.2000000000018*t10470*t9201 - 6.000000000054e-7*t11172*t9201 + var1[2] + t12323*(-1.62e-17*t11348 + 0.2*t12183 + 0.1*t12261 + 3.e-7*var1[17]);
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
