/*
 * Automatically Generated from Mathematica.
 * Wed 29 May 2019 15:16:51 GMT-04:00
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
  double t12146;
  double t406;
  double t12384;
  double t12388;
  double t12435;
  double t12438;
  double t12436;
  double t12440;
  double t12739;
  double t12748;
  double t12752;
  double t12813;
  double t12814;
  double t842;
  double t11463;
  double t12437;
  double t12547;
  double t12564;
  double t12626;
  double t12694;
  double t12705;
  double t12822;
  double t12831;
  double t13014;
  double t12815;
  double t12817;
  double t13031;
  double t12881;
  double t12883;
  double t12987;
  double t12998;
  double t13000;
  double t13002;
  double t13082;
  double t13184;
  double t13185;
  double t13186;
  double t13239;
  double t13256;
  double t13283;
  double t13295;
  double t13426;
  double t13747;
  double t14448;
  double t14490;
  double t14495;
  double t14486;
  double t13069;
  double t14454;
  double t14516;
  t12146 = Cos(var1[10]);
  t406 = Cos(var1[3]);
  t12384 = -1.*t12146;
  t12388 = 1. + t12384;
  t12435 = Cos(var1[5]);
  t12438 = Sin(var1[3]);
  t12436 = Sin(var1[4]);
  t12440 = Sin(var1[5]);
  t12739 = Cos(var1[12]);
  t12748 = -1.*t12739;
  t12752 = 1. + t12748;
  t12813 = -3.e-6*t12752;
  t12814 = Sin(var1[12]);
  t842 = Cos(var1[4]);
  t11463 = Sin(var1[10]);
  t12437 = -1.*t406*t12435*t12436;
  t12547 = t12438*t12440;
  t12564 = t12437 + t12547;
  t12626 = t12435*t12438;
  t12694 = t406*t12436*t12440;
  t12705 = t12626 + t12694;
  t12822 = 3.e-6*t12814;
  t12831 = t12813 + t12822;
  t13014 = 3.e-13*var1[12];
  t12815 = -3.e-6*t12814;
  t12817 = t12813 + t12815;
  t13031 = -9.e-12*t12752;
  t12881 = -3.e-6*t406*t842*t11463;
  t12883 = 3.e-6*t12388*t12564;
  t12987 = -9.e-12*t12388;
  t12998 = 1. + t12987;
  t13000 = t12998*t12705;
  t13002 = t12881 + t12883 + t13000;
  t13082 = t406*t842*t11463;
  t13184 = t12146*t12564;
  t13185 = 3.e-6*t12388*t12705;
  t13186 = t13082 + t13184 + t13185;
  t13239 = -1.000000000009*t12388;
  t13256 = 1. + t13239;
  t13283 = t13256*t406*t842;
  t13295 = -1.*t11463*t12564;
  t13426 = 3.e-6*t11463*t12705;
  t13747 = t13283 + t13295 + t13426;
  t14448 = 3.e-6*t12752;
  t14490 = -1.000000000009*t12752;
  t14495 = 1. + t14490;
  t14486 = 9.e-12*t12752;
  t13069 = -1.*t12814;
  t14454 = t14448 + t12815;
  t14516 = t14448 + t12822;
  p_output1[0]=(0.2*(-1. + t12146) - 1.8e-12*t12388)*t12564 + 6.000000000054e-7*t12388*t12705 + (-0.2000000000048*t12752 + 3.e-7*t12831 + t13014 + 0.100000000003*(t13031 + t13069))*t13186 + (0.1000000000039*t12752 + 3.e-7*t12817 + t13014 - 0.200000000003*(t12814 + t13031))*t13747 - 0.3*(t13002*t14454 + t13186*(t12814 + t14486) + t13747*t14495) + 0.2*(-1.*t13747*(t13069 + t14486) - 1.*t13186*t14495 - 1.*t13002*t14516) + 0.100001*((1. - 1.8e-11*t12752)*t13002 + t13186*t14454 + t13747*t14516) + 0.2000000000018*t11463*t406*t842 + var1[2] + t13002*(5.4e-18*t12752 - 0.200000000003*t12817 + 0.100000000003*t12831 + 1.e-7*var1[12]);
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
