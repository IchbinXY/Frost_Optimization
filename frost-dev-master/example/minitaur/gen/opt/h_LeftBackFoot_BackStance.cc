/*
 * Automatically Generated from Mathematica.
 * Wed 29 May 2019 15:12:57 GMT-04:00
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
  double t110;
  double t126;
  double t132;
  double t154;
  double t222;
  double t228;
  double t235;
  double t237;
  double t241;
  double t164;
  double t174;
  double t175;
  double t202;
  double t261;
  double t269;
  double t323;
  double t253;
  double t258;
  double t333;
  double t285;
  double t289;
  double t290;
  double t297;
  double t305;
  double t306;
  double t374;
  double t378;
  double t382;
  double t394;
  double t426;
  double t434;
  double t446;
  double t457;
  double t459;
  double t464;
  double t475;
  double t514;
  double t526;
  double t482;
  double t334;
  double t476;
  double t562;
  double t139;
  double t142;
  double t144;
  double t152;
  double t785;
  double t831;
  double t219;
  double t236;
  double t259;
  double t274;
  double t277;
  double t827;
  double t832;
  double t845;
  double t859;
  double t944;
  double t12082;
  double t329;
  double t343;
  double t356;
  double t361;
  double t369;
  double t401;
  double t402;
  double t413;
  double t421;
  double t423;
  double t12835;
  double t12868;
  double t12895;
  double t13498;
  double t489;
  double t21376;
  double t21507;
  double t24605;
  double t24653;
  double t25628;
  double t25908;
  double t26034;
  double t27075;
  double t617;
  double t662;
  double t683;
  double t28681;
  double t28695;
  double t28738;
  double t28784;
  double t28841;
  double t28863;
  double t28897;
  double t28928;
  double t28949;
  double t28969;
  double t29196;
  double t29197;
  double t29198;
  double t29208;
  double t29216;
  double t29217;
  double t29218;
  double t29219;
  t110 = Cos(var1[10]);
  t126 = -1.*t110;
  t132 = 1. + t126;
  t154 = Cos(var1[4]);
  t222 = Cos(var1[12]);
  t228 = -1.*t222;
  t235 = 1. + t228;
  t237 = -3.e-6*t235;
  t241 = Sin(var1[12]);
  t164 = Cos(var1[5]);
  t174 = Sin(var1[10]);
  t175 = Sin(var1[4]);
  t202 = Sin(var1[5]);
  t261 = 3.e-6*t241;
  t269 = t237 + t261;
  t323 = 3.e-13*var1[12];
  t253 = -3.e-6*t241;
  t258 = t237 + t253;
  t333 = -9.e-12*t235;
  t285 = 3.e-6*t132*t154*t164;
  t289 = -3.e-6*t174*t175;
  t290 = -9.e-12*t132;
  t297 = 1. + t290;
  t305 = -1.*t297*t154*t202;
  t306 = t285 + t289 + t305;
  t374 = t110*t154*t164;
  t378 = t174*t175;
  t382 = -3.e-6*t132*t154*t202;
  t394 = t374 + t378 + t382;
  t426 = -1.*t154*t164*t174;
  t434 = -1.000000000009*t132;
  t446 = 1. + t434;
  t457 = t446*t175;
  t459 = -3.e-6*t154*t174*t202;
  t464 = t426 + t457 + t459;
  t475 = 3.e-6*t235;
  t514 = -1.000000000009*t235;
  t526 = 1. + t514;
  t482 = 9.e-12*t235;
  t334 = -1.*t241;
  t476 = t475 + t253;
  t562 = t475 + t261;
  t139 = -1.8e-12*t132;
  t142 = -1. + t110;
  t144 = 0.2*t142;
  t152 = t139 + t144;
  t785 = Sin(var1[3]);
  t831 = Cos(var1[3]);
  t219 = 1.e-7*var1[12];
  t236 = 5.4e-18*t235;
  t259 = -0.200000000003*t258;
  t274 = 0.100000000003*t269;
  t277 = t219 + t236 + t259 + t274;
  t827 = t164*t785*t175;
  t832 = t831*t202;
  t845 = t827 + t832;
  t859 = t831*t164;
  t944 = -1.*t785*t175*t202;
  t12082 = t859 + t944;
  t329 = -0.2000000000048*t235;
  t343 = t333 + t334;
  t356 = 0.100000000003*t343;
  t361 = 3.e-7*t269;
  t369 = t323 + t329 + t356 + t361;
  t401 = 0.1000000000039*t235;
  t402 = 3.e-7*t258;
  t413 = t333 + t241;
  t421 = -0.200000000003*t413;
  t423 = t323 + t401 + t402 + t421;
  t12835 = 3.e-6*t154*t174*t785;
  t12868 = 3.e-6*t132*t845;
  t12895 = t297*t12082;
  t13498 = t12835 + t12868 + t12895;
  t489 = t482 + t241;
  t21376 = -1.*t154*t174*t785;
  t21507 = t110*t845;
  t24605 = 3.e-6*t132*t12082;
  t24653 = t21376 + t21507 + t24605;
  t25628 = -1.*t446*t154*t785;
  t25908 = -1.*t174*t845;
  t26034 = 3.e-6*t174*t12082;
  t27075 = t25628 + t25908 + t26034;
  t617 = t482 + t334;
  t662 = -1.8e-11*t235;
  t683 = 1. + t662;
  t28681 = -1.*t831*t164*t175;
  t28695 = t785*t202;
  t28738 = t28681 + t28695;
  t28784 = t164*t785;
  t28841 = t831*t175*t202;
  t28863 = t28784 + t28841;
  t28897 = -3.e-6*t831*t154*t174;
  t28928 = 3.e-6*t132*t28738;
  t28949 = t297*t28863;
  t28969 = t28897 + t28928 + t28949;
  t29196 = t831*t154*t174;
  t29197 = t110*t28738;
  t29198 = 3.e-6*t132*t28863;
  t29208 = t29196 + t29197 + t29198;
  t29216 = t446*t831*t154;
  t29217 = -1.*t174*t28738;
  t29218 = 3.e-6*t174*t28863;
  t29219 = t29216 + t29217 + t29218;
  p_output1[0]=t152*t154*t164 + 0.2000000000018*t174*t175 - 6.000000000054e-7*t132*t154*t202 + t277*t306 + t369*t394 + t423*t464 - 0.3*(t306*t476 + t394*t489 + t464*t526) + 0.2*(-1.*t394*t526 - 1.*t306*t562 - 1.*t464*t617) + 0.100001*(t394*t476 + t464*t562 + t306*t683) + var1[0] - 1.*var2[0];
  p_output1[1]=6.000000000054e-7*t12082*t132 + t13498*t277 + t24653*t369 + t27075*t423 - 0.3*(t13498*t476 + t24653*t489 + t27075*t526) + 0.2*(-1.*t24653*t526 - 1.*t13498*t562 - 1.*t27075*t617) + 0.100001*(t24653*t476 + t27075*t562 + t13498*t683) - 0.2000000000018*t154*t174*t785 + t152*t845 + var1[1] - 1.*var2[1];
  p_output1[2]=t152*t28738 + 6.000000000054e-7*t132*t28863 + t277*t28969 + t29208*t369 + t29219*t423 - 0.3*(t28969*t476 + t29208*t489 + t29219*t526) + 0.2*(-1.*t29208*t526 - 1.*t28969*t562 - 1.*t29219*t617) + 0.100001*(t29208*t476 + t29219*t562 + t28969*t683) + 0.2000000000018*t154*t174*t831 + var1[2] - 1.*var2[2];
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
    ( !(mrows == 3 && ncols == 1) && 
      !(mrows == 1 && ncols == 3))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var2 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "h_LeftBackFoot_BackStance.hh"

namespace BackStance
{

void h_LeftBackFoot_BackStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
