/*
 * Automatically Generated from Mathematica.
 * Tue 28 May 2019 22:32:41 GMT-04:00
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
  double t97;
  double t172;
  double t214;
  double t217;
  double t240;
  double t333;
  double t298;
  double t356;
  double t456;
  double t460;
  double t469;
  double t481;
  double t483;
  double t107;
  double t132;
  double t301;
  double t369;
  double t373;
  double t413;
  double t446;
  double t447;
  double t523;
  double t528;
  double t656;
  double t493;
  double t494;
  double t669;
  double t580;
  double t597;
  double t599;
  double t617;
  double t626;
  double t632;
  double t703;
  double t708;
  double t714;
  double t715;
  double t753;
  double t757;
  double t769;
  double t773;
  double t774;
  double t778;
  double t783;
  double t807;
  double t818;
  double t802;
  double t671;
  double t790;
  double t832;
  t97 = Cos(var1[3]);
  t172 = Cos(var1[15]);
  t214 = -1.*t172;
  t217 = 1. + t214;
  t240 = Cos(var1[5]);
  t333 = Sin(var1[3]);
  t298 = Sin(var1[4]);
  t356 = Sin(var1[5]);
  t456 = Cos(var1[17]);
  t460 = -1.*t456;
  t469 = 1. + t460;
  t481 = -3.e-6*t469;
  t483 = Sin(var1[17]);
  t107 = Cos(var1[4]);
  t132 = Sin(var1[15]);
  t301 = -1.*t97*t240*t298;
  t369 = t333*t356;
  t373 = t301 + t369;
  t413 = t240*t333;
  t446 = t97*t298*t356;
  t447 = t413 + t446;
  t523 = 3.e-6*t483;
  t528 = t481 + t523;
  t656 = 9.e-13*var1[17];
  t493 = -3.e-6*t483;
  t494 = t481 + t493;
  t669 = -9.e-12*t469;
  t580 = -3.e-6*t97*t107*t132;
  t597 = 3.e-6*t217*t373;
  t599 = -9.e-12*t217;
  t617 = 1. + t599;
  t626 = t617*t447;
  t632 = t580 + t597 + t626;
  t703 = t97*t107*t132;
  t708 = t172*t373;
  t714 = 3.e-6*t217*t447;
  t715 = t703 + t708 + t714;
  t753 = -1.000000000009*t217;
  t757 = 1. + t753;
  t769 = t757*t97*t107;
  t773 = -1.*t132*t373;
  t774 = 3.e-6*t132*t447;
  t778 = t769 + t773 + t774;
  t783 = 3.e-6*t469;
  t807 = -1.000000000009*t469;
  t818 = 1. + t807;
  t802 = 9.e-12*t469;
  t671 = -1.*t483;
  t790 = t783 + t493;
  t832 = t783 + t523;
  p_output1[0]=0.2000000000018*t217*t373 - 6.000000000054e-7*t217*t447 + (0.2000000000018*t469 - 9.e-7*t528 + t656 + 0.1*(t669 + t671))*t715 + (0.1000000000009*t469 - 9.e-7*t494 + t656 + 0.2*(t483 + t669))*t778 - 0.3*(t632*t790 + t715*(t483 + t802) + t778*t818) + 0.2*(t778*(t671 + t802) + t715*t818 + t632*t832) - 0.099999*((1. - 1.8e-11*t469)*t632 + t715*t790 + t778*t832) - 0.2000000000018*t107*t132*t97 + var1[2] + t632*(-1.62e-17*t469 + 0.2*t494 + 0.1*t528 + 3.e-7*var1[17]);
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
