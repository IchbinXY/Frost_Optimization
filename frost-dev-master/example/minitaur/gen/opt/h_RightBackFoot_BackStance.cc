/*
 * Automatically Generated from Mathematica.
 * Tue 28 May 2019 22:41:44 GMT-04:00
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
  double t483;
  double t664;
  double t665;
  double t1003;
  double t1707;
  double t1767;
  double t1769;
  double t1872;
  double t1928;
  double t1025;
  double t1221;
  double t1336;
  double t1641;
  double t2128;
  double t2150;
  double t2359;
  double t1932;
  double t1974;
  double t2420;
  double t2230;
  double t2238;
  double t2266;
  double t2278;
  double t2306;
  double t2313;
  double t2478;
  double t2512;
  double t2573;
  double t2623;
  double t2721;
  double t2764;
  double t2773;
  double t2790;
  double t2792;
  double t2811;
  double t2868;
  double t2955;
  double t2956;
  double t2904;
  double t2443;
  double t2875;
  double t2968;
  double t698;
  double t763;
  double t853;
  double t857;
  double t3069;
  double t3074;
  double t1688;
  double t1822;
  double t1988;
  double t2196;
  double t2216;
  double t3073;
  double t3075;
  double t3096;
  double t3106;
  double t3110;
  double t3124;
  double t2418;
  double t2450;
  double t2459;
  double t2469;
  double t2475;
  double t2637;
  double t2642;
  double t2672;
  double t2676;
  double t2720;
  double t3139;
  double t3151;
  double t3170;
  double t3211;
  double t2939;
  double t3221;
  double t3224;
  double t3225;
  double t3227;
  double t3261;
  double t3262;
  double t3270;
  double t3275;
  double t2987;
  double t3005;
  double t3008;
  double t3365;
  double t3366;
  double t3368;
  double t3370;
  double t3371;
  double t3372;
  double t3385;
  double t3391;
  double t3392;
  double t3394;
  double t3396;
  double t3400;
  double t3402;
  double t3407;
  double t3410;
  double t3413;
  double t3418;
  double t3419;
  t483 = Cos(var1[19]);
  t664 = -1.*t483;
  t665 = 1. + t664;
  t1003 = Cos(var1[4]);
  t1707 = Cos(var1[21]);
  t1767 = -1.*t1707;
  t1769 = 1. + t1767;
  t1872 = -3.e-6*t1769;
  t1928 = Sin(var1[21]);
  t1025 = Cos(var1[5]);
  t1221 = Sin(var1[19]);
  t1336 = Sin(var1[4]);
  t1641 = Sin(var1[5]);
  t2128 = 3.e-6*t1928;
  t2150 = t1872 + t2128;
  t2359 = 3.e-13*var1[21];
  t1932 = -3.e-6*t1928;
  t1974 = t1872 + t1932;
  t2420 = -9.e-12*t1769;
  t2230 = 3.e-6*t665*t1003*t1025;
  t2238 = -3.e-6*t1221*t1336;
  t2266 = -9.e-12*t665;
  t2278 = 1. + t2266;
  t2306 = -1.*t2278*t1003*t1641;
  t2313 = t2230 + t2238 + t2306;
  t2478 = t483*t1003*t1025;
  t2512 = t1221*t1336;
  t2573 = -3.e-6*t665*t1003*t1641;
  t2623 = t2478 + t2512 + t2573;
  t2721 = -1.*t1003*t1025*t1221;
  t2764 = -1.000000000009*t665;
  t2773 = 1. + t2764;
  t2790 = t2773*t1336;
  t2792 = -3.e-6*t1003*t1221*t1641;
  t2811 = t2721 + t2790 + t2792;
  t2868 = 3.e-6*t1769;
  t2955 = -1.000000000009*t1769;
  t2956 = 1. + t2955;
  t2904 = 9.e-12*t1769;
  t2443 = -1.*t1928;
  t2875 = t2868 + t1932;
  t2968 = t2868 + t2128;
  t698 = -1.8e-12*t665;
  t763 = -1. + t483;
  t853 = 0.2*t763;
  t857 = t698 + t853;
  t3069 = Sin(var1[3]);
  t3074 = Cos(var1[3]);
  t1688 = 1.e-7*var1[21];
  t1822 = 5.4e-18*t1769;
  t1988 = -0.200000000003*t1974;
  t2196 = 0.100000000003*t2150;
  t2216 = t1688 + t1822 + t1988 + t2196;
  t3073 = t1025*t3069*t1336;
  t3075 = t3074*t1641;
  t3096 = t3073 + t3075;
  t3106 = t3074*t1025;
  t3110 = -1.*t3069*t1336*t1641;
  t3124 = t3106 + t3110;
  t2418 = -0.2000000000048*t1769;
  t2450 = t2420 + t2443;
  t2459 = 0.100000000003*t2450;
  t2469 = 3.e-7*t2150;
  t2475 = t2359 + t2418 + t2459 + t2469;
  t2637 = 0.1000000000039*t1769;
  t2642 = 3.e-7*t1974;
  t2672 = t2420 + t1928;
  t2676 = -0.200000000003*t2672;
  t2720 = t2359 + t2637 + t2642 + t2676;
  t3139 = 3.e-6*t1003*t1221*t3069;
  t3151 = 3.e-6*t665*t3096;
  t3170 = t2278*t3124;
  t3211 = t3139 + t3151 + t3170;
  t2939 = t2904 + t1928;
  t3221 = -1.*t1003*t1221*t3069;
  t3224 = t483*t3096;
  t3225 = 3.e-6*t665*t3124;
  t3227 = t3221 + t3224 + t3225;
  t3261 = -1.*t2773*t1003*t3069;
  t3262 = -1.*t1221*t3096;
  t3270 = 3.e-6*t1221*t3124;
  t3275 = t3261 + t3262 + t3270;
  t2987 = t2904 + t2443;
  t3005 = -1.8e-11*t1769;
  t3008 = 1. + t3005;
  t3365 = -1.*t3074*t1025*t1336;
  t3366 = t3069*t1641;
  t3368 = t3365 + t3366;
  t3370 = t1025*t3069;
  t3371 = t3074*t1336*t1641;
  t3372 = t3370 + t3371;
  t3385 = -3.e-6*t3074*t1003*t1221;
  t3391 = 3.e-6*t665*t3368;
  t3392 = t2278*t3372;
  t3394 = t3385 + t3391 + t3392;
  t3396 = t3074*t1003*t1221;
  t3400 = t483*t3368;
  t3402 = 3.e-6*t665*t3372;
  t3407 = t3396 + t3400 + t3402;
  t3410 = t2773*t3074*t1003;
  t3413 = -1.*t1221*t3368;
  t3418 = 3.e-6*t1221*t3372;
  t3419 = t3410 + t3413 + t3418;
  p_output1[0]=0.2000000000018*t1221*t1336 + t2216*t2313 + t2475*t2623 + t2720*t2811 - 0.3*(t2313*t2875 + t2623*t2939 + t2811*t2956) + 0.2*(-1.*t2623*t2956 - 1.*t2313*t2968 - 1.*t2811*t2987) - 0.099999*(t2623*t2875 + t2811*t2968 + t2313*t3008) - 6.000000000054e-7*t1003*t1641*t665 + t1003*t1025*t857 + var1[0] - 1.*var2[0];
  p_output1[1]=-0.2000000000018*t1003*t1221*t3069 + t2216*t3211 + t2475*t3227 + t2720*t3275 - 0.3*(t2875*t3211 + t2939*t3227 + t2956*t3275) - 0.099999*(t3008*t3211 + t2875*t3227 + t2968*t3275) + 0.2*(-1.*t2968*t3211 - 1.*t2956*t3227 - 1.*t2987*t3275) + 6.000000000054e-7*t3124*t665 + t3096*t857 + var1[1] - 1.*var2[1];
  p_output1[2]=0.2000000000018*t1003*t1221*t3074 + t2216*t3394 + t2475*t3407 + t2720*t3419 - 0.3*(t2875*t3394 + t2939*t3407 + t2956*t3419) - 0.099999*(t3008*t3394 + t2875*t3407 + t2968*t3419) + 0.2*(-1.*t2968*t3394 - 1.*t2956*t3407 - 1.*t2987*t3419) + 6.000000000054e-7*t3372*t665 + t3368*t857 + var1[2] - 1.*var2[2];
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

#include "h_RightBackFoot_BackStance.hh"

namespace BackStance
{

void h_RightBackFoot_BackStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
