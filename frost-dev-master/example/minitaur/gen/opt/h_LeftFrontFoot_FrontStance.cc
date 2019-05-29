/*
 * Automatically Generated from Mathematica.
 * Tue 28 May 2019 22:30:34 GMT-04:00
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
  double t135;
  double t163;
  double t196;
  double t237;
  double t144;
  double t272;
  double t280;
  double t291;
  double t328;
  double t330;
  double t333;
  double t358;
  double t395;
  double t409;
  double t418;
  double t304;
  double t315;
  double t317;
  double t321;
  double t379;
  double t434;
  double t439;
  double t446;
  double t447;
  double t456;
  double t458;
  double t678;
  double t473;
  double t549;
  double t550;
  double t551;
  double t554;
  double t555;
  double t566;
  double t933;
  double t324;
  double t480;
  double t345;
  double t517;
  double t531;
  double t1216;
  double t573;
  double t1737;
  double t1735;
  double t1736;
  double t1738;
  double t1739;
  double t1743;
  double t1744;
  double t1745;
  double t340;
  double t389;
  double t393;
  double t429;
  double t430;
  double t464;
  double t467;
  double t499;
  double t505;
  double t509;
  double t1748;
  double t1749;
  double t1750;
  double t1751;
  double t594;
  double t1848;
  double t1901;
  double t2082;
  double t2083;
  double t1211;
  double t1214;
  double t2103;
  double t2106;
  double t2107;
  double t2108;
  double t1254;
  double t1255;
  double t1256;
  double t1301;
  double t1335;
  double t1616;
  double t2274;
  double t2277;
  double t2278;
  double t2281;
  double t2282;
  double t2283;
  double t2287;
  double t2289;
  double t2290;
  double t2291;
  double t2295;
  double t2296;
  double t2312;
  double t2329;
  double t2333;
  double t2334;
  double t2336;
  double t2344;
  t135 = Cos(var1[4]);
  t163 = Cos(var1[6]);
  t196 = -1.*t163;
  t237 = 1. + t196;
  t144 = Cos(var1[5]);
  t272 = Sin(var1[5]);
  t280 = Sin(var1[4]);
  t291 = Sin(var1[6]);
  t328 = Cos(var1[8]);
  t330 = -1.*t328;
  t333 = 1. + t330;
  t358 = Sin(var1[8]);
  t395 = -3.e-6*t333;
  t409 = 3.e-6*t358;
  t418 = t395 + t409;
  t304 = t135*t144*t163;
  t315 = -3.e-6*t135*t237*t272;
  t317 = t280*t291;
  t321 = t304 + t315 + t317;
  t379 = -1.*t358;
  t434 = 3.e-6*t135*t144*t237;
  t439 = -9.e-12*t237;
  t446 = 1. + t439;
  t447 = -1.*t135*t446*t272;
  t456 = -3.e-6*t280*t291;
  t458 = t434 + t447 + t456;
  t678 = 3.e-6*t333;
  t473 = -3.e-6*t358;
  t549 = -1.000000000009*t237;
  t550 = 1. + t549;
  t551 = t550*t280;
  t554 = -1.*t135*t144*t291;
  t555 = -3.e-6*t135*t272*t291;
  t566 = t551 + t554 + t555;
  t933 = t678 + t409;
  t324 = 9.e-13*var1[8];
  t480 = t395 + t473;
  t345 = -9.e-12*t333;
  t517 = -1.000000000009*t333;
  t531 = 1. + t517;
  t1216 = t678 + t473;
  t573 = 9.e-12*t333;
  t1737 = Cos(var1[3]);
  t1735 = Sin(var1[3]);
  t1736 = t144*t1735*t280;
  t1738 = t1737*t272;
  t1739 = t1736 + t1738;
  t1743 = t1737*t144;
  t1744 = -1.*t1735*t280*t272;
  t1745 = t1743 + t1744;
  t340 = 0.2000000000018*t333;
  t389 = t345 + t379;
  t393 = 0.1*t389;
  t429 = -9.e-7*t418;
  t430 = t324 + t340 + t393 + t429;
  t464 = 3.e-7*var1[8];
  t467 = -1.62e-17*t333;
  t499 = 0.2*t480;
  t505 = 0.1*t418;
  t509 = t464 + t467 + t499 + t505;
  t1748 = t163*t1739;
  t1749 = 3.e-6*t237*t1745;
  t1750 = -1.*t135*t1735*t291;
  t1751 = t1748 + t1749 + t1750;
  t594 = t573 + t379;
  t1848 = 3.e-6*t237*t1739;
  t1901 = t446*t1745;
  t2082 = 3.e-6*t135*t1735*t291;
  t2083 = t1848 + t1901 + t2082;
  t1211 = -1.8e-11*t333;
  t1214 = 1. + t1211;
  t2103 = -1.*t135*t550*t1735;
  t2106 = -1.*t1739*t291;
  t2107 = 3.e-6*t1745*t291;
  t2108 = t2103 + t2106 + t2107;
  t1254 = 0.1000000000009*t333;
  t1255 = -9.e-7*t480;
  t1256 = t345 + t358;
  t1301 = 0.2*t1256;
  t1335 = t324 + t1254 + t1255 + t1301;
  t1616 = t573 + t358;
  t2274 = -1.*t1737*t144*t280;
  t2277 = t1735*t272;
  t2278 = t2274 + t2277;
  t2281 = t144*t1735;
  t2282 = t1737*t280*t272;
  t2283 = t2281 + t2282;
  t2287 = t163*t2278;
  t2289 = 3.e-6*t237*t2283;
  t2290 = t1737*t135*t291;
  t2291 = t2287 + t2289 + t2290;
  t2295 = 3.e-6*t237*t2278;
  t2296 = t446*t2283;
  t2312 = -3.e-6*t1737*t135*t291;
  t2329 = t2295 + t2296 + t2312;
  t2333 = t1737*t135*t550;
  t2334 = -1.*t2278*t291;
  t2336 = 3.e-6*t2283*t291;
  t2344 = t2333 + t2334 + t2336;
  p_output1[0]=0.2000000000018*t135*t144*t237 + 6.000000000054e-7*t135*t237*t272 - 0.2000000000018*t280*t291 + t321*t430 + t458*t509 + t1335*t566 - 0.3*(t1616*t321 + t1216*t458 + t531*t566) + 0.2*(t321*t531 + t566*t594 + t458*t933) + 0.100001*(t1216*t321 + t1214*t458 + t566*t933) + var1[0] - 1.*var2[0];
  p_output1[1]=t1335*t2108 + 0.2000000000018*t1739*t237 - 6.000000000054e-7*t1745*t237 + 0.2000000000018*t135*t1735*t291 + t1751*t430 + t2083*t509 - 0.3*(t1616*t1751 + t1216*t2083 + t2108*t531) + 0.2*(t1751*t531 + t2108*t594 + t2083*t933) + 0.100001*(t1216*t1751 + t1214*t2083 + t2108*t933) + var1[1] - 1.*var2[1];
  p_output1[2]=t1335*t2344 + 0.2000000000018*t2278*t237 - 6.000000000054e-7*t2283*t237 - 0.2000000000018*t135*t1737*t291 + t2291*t430 + t2329*t509 - 0.3*(t1616*t2291 + t1216*t2329 + t2344*t531) + 0.2*(t2291*t531 + t2344*t594 + t2329*t933) + 0.100001*(t1216*t2291 + t1214*t2329 + t2344*t933) + var1[2] - 1.*var2[2];
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

#include "h_LeftFrontFoot_FrontStance.hh"

namespace FrontStance
{

void h_LeftFrontFoot_FrontStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
