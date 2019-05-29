/*
 * Automatically Generated from Mathematica.
 * Wed 29 May 2019 15:14:08 GMT-04:00
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
  double t842;
  double t12152;
  double t12174;
  double t12431;
  double t12436;
  double t12432;
  double t12437;
  double t12666;
  double t12672;
  double t12690;
  double t12694;
  double t12705;
  double t11463;
  double t11581;
  double t12435;
  double t12438;
  double t12440;
  double t12564;
  double t12575;
  double t12626;
  double t12738;
  double t12739;
  double t12817;
  double t12730;
  double t12736;
  double t12820;
  double t12748;
  double t12752;
  double t12765;
  double t12812;
  double t12814;
  double t12815;
  double t12858;
  double t12883;
  double t13031;
  double t13082;
  double t13184;
  double t13185;
  double t13186;
  double t13188;
  double t13189;
  double t13190;
  double t13194;
  double t13256;
  double t13283;
  double t13237;
  double t12822;
  double t13220;
  double t13295;
  t12146 = Cos(var1[19]);
  t842 = Cos(var1[3]);
  t12152 = -1.*t12146;
  t12174 = 1. + t12152;
  t12431 = Cos(var1[5]);
  t12436 = Sin(var1[3]);
  t12432 = Sin(var1[4]);
  t12437 = Sin(var1[5]);
  t12666 = Cos(var1[21]);
  t12672 = -1.*t12666;
  t12690 = 1. + t12672;
  t12694 = -3.e-6*t12690;
  t12705 = Sin(var1[21]);
  t11463 = Cos(var1[4]);
  t11581 = Sin(var1[19]);
  t12435 = -1.*t842*t12431*t12432;
  t12438 = t12436*t12437;
  t12440 = t12435 + t12438;
  t12564 = t12431*t12436;
  t12575 = t842*t12432*t12437;
  t12626 = t12564 + t12575;
  t12738 = 3.e-6*t12705;
  t12739 = t12694 + t12738;
  t12817 = 3.e-13*var1[21];
  t12730 = -3.e-6*t12705;
  t12736 = t12694 + t12730;
  t12820 = -9.e-12*t12690;
  t12748 = -3.e-6*t842*t11463*t11581;
  t12752 = 3.e-6*t12174*t12440;
  t12765 = -9.e-12*t12174;
  t12812 = 1. + t12765;
  t12814 = t12812*t12626;
  t12815 = t12748 + t12752 + t12814;
  t12858 = t842*t11463*t11581;
  t12883 = t12146*t12440;
  t13031 = 3.e-6*t12174*t12626;
  t13082 = t12858 + t12883 + t13031;
  t13184 = -1.000000000009*t12174;
  t13185 = 1. + t13184;
  t13186 = t13185*t842*t11463;
  t13188 = -1.*t11581*t12440;
  t13189 = 3.e-6*t11581*t12626;
  t13190 = t13186 + t13188 + t13189;
  t13194 = 3.e-6*t12690;
  t13256 = -1.000000000009*t12690;
  t13283 = 1. + t13256;
  t13237 = 9.e-12*t12690;
  t12822 = -1.*t12705;
  t13220 = t13194 + t12730;
  t13295 = t13194 + t12738;
  p_output1[0]=(0.2*(-1. + t12146) - 1.8e-12*t12174)*t12440 + 6.000000000054e-7*t12174*t12626 + (-0.2000000000048*t12690 + 3.e-7*t12739 + t12817 + 0.100000000003*(t12820 + t12822))*t13082 + (0.1000000000039*t12690 + 3.e-7*t12736 + t12817 - 0.200000000003*(t12705 + t12820))*t13190 - 0.3*(t12815*t13220 + t13082*(t12705 + t13237) + t13190*t13283) + 0.2*(-1.*t13190*(t12822 + t13237) - 1.*t13082*t13283 - 1.*t12815*t13295) - 0.099999*((1. - 1.8e-11*t12690)*t12815 + t13082*t13220 + t13190*t13295) + 0.2000000000018*t11463*t11581*t842 + var1[2] + t12815*(5.4e-18*t12690 - 0.200000000003*t12736 + 0.100000000003*t12739 + 1.e-7*var1[21]);
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

#include "foot_clearance_BackStance.hh"

namespace BackStance
{

void foot_clearance_BackStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
