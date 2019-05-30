/*
 * Automatically Generated from Mathematica.
 * Thu 30 May 2019 00:02:24 GMT-04:00
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
  double t2007;
  double t1563;
  double t3070;
  double t3957;
  double t21643;
  double t22594;
  double t21658;
  double t22618;
  double t29303;
  double t29305;
  double t29308;
  double t29321;
  double t29511;
  double t1674;
  double t1903;
  double t22002;
  double t22666;
  double t24870;
  double t28023;
  double t28531;
  double t28866;
  double t29544;
  double t29548;
  double t29771;
  double t29518;
  double t29532;
  double t30186;
  double t29563;
  double t29569;
  double t29571;
  double t29573;
  double t29575;
  double t29577;
  double t30209;
  double t30237;
  double t30299;
  double t30325;
  double t30481;
  double t30486;
  double t30495;
  double t30499;
  double t30500;
  double t30545;
  double t30611;
  double t30757;
  double t30765;
  double t30715;
  double t30191;
  double t30625;
  double t30778;
  t2007 = Cos(var1[10]);
  t1563 = Cos(var1[3]);
  t3070 = -1.*t2007;
  t3957 = 1. + t3070;
  t21643 = Cos(var1[5]);
  t22594 = Sin(var1[3]);
  t21658 = Sin(var1[4]);
  t22618 = Sin(var1[5]);
  t29303 = Cos(var1[12]);
  t29305 = -1.*t29303;
  t29308 = 1. + t29305;
  t29321 = -3.e-6*t29308;
  t29511 = Sin(var1[12]);
  t1674 = Cos(var1[4]);
  t1903 = Sin(var1[10]);
  t22002 = -1.*t1563*t21643*t21658;
  t22666 = t22594*t22618;
  t24870 = t22002 + t22666;
  t28023 = t21643*t22594;
  t28531 = t1563*t21658*t22618;
  t28866 = t28023 + t28531;
  t29544 = 3.e-6*t29511;
  t29548 = t29321 + t29544;
  t29771 = 3.e-13*var1[12];
  t29518 = -3.e-6*t29511;
  t29532 = t29321 + t29518;
  t30186 = -9.e-12*t29308;
  t29563 = -3.e-6*t1563*t1674*t1903;
  t29569 = 3.e-6*t3957*t24870;
  t29571 = -9.e-12*t3957;
  t29573 = 1. + t29571;
  t29575 = t29573*t28866;
  t29577 = t29563 + t29569 + t29575;
  t30209 = t1563*t1674*t1903;
  t30237 = t2007*t24870;
  t30299 = 3.e-6*t3957*t28866;
  t30325 = t30209 + t30237 + t30299;
  t30481 = -1.000000000009*t3957;
  t30486 = 1. + t30481;
  t30495 = t30486*t1563*t1674;
  t30499 = -1.*t1903*t24870;
  t30500 = 3.e-6*t1903*t28866;
  t30545 = t30495 + t30499 + t30500;
  t30611 = 3.e-6*t29308;
  t30757 = -1.000000000009*t29308;
  t30765 = 1. + t30757;
  t30715 = 9.e-12*t29308;
  t30191 = -1.*t29511;
  t30625 = t30611 + t29518;
  t30778 = t30611 + t29544;
  p_output1[0]=0.2000000000018*t1563*t1674*t1903 + (-0.2000000000048*t29308 + 3.e-7*t29548 + t29771 + 0.100000000003*(t30186 + t30191))*t30325 + (0.1000000000039*t29308 + 3.e-7*t29532 + t29771 - 0.200000000003*(t29511 + t30186))*t30545 - 0.3*(t29577*t30625 + t30325*(t29511 + t30715) + t30545*t30765) + 0.2*(-1.*t30545*(t30191 + t30715) - 1.*t30325*t30765 - 1.*t29577*t30778) + 0.100001*((1. - 1.8e-11*t29308)*t29577 + t30325*t30625 + t30545*t30778) + t24870*(0.2*(-1. + t2007) - 1.8e-12*t3957) + 6.000000000054e-7*t28866*t3957 + var1[2] + t29577*(5.4e-18*t29308 - 0.200000000003*t29532 + 0.100000000003*t29548 + 1.e-7*var1[12]);
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

#include "foot_clearance_Flight.hh"

namespace Flight2
{

void foot_clearance_Flight_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
