/*
 * Automatically Generated from Mathematica.
 * Tue 28 May 2019 22:42:23 GMT-04:00
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
  double t175;
  double t213;
  double t216;
  double t370;
  double t729;
  double t890;
  double t1017;
  double t1208;
  double t1398;
  double t437;
  double t558;
  double t586;
  double t672;
  double t1592;
  double t1911;
  double t2995;
  double t1438;
  double t1548;
  double t3062;
  double t2009;
  double t2015;
  double t2222;
  double t2231;
  double t2284;
  double t2455;
  double t3094;
  double t3097;
  double t3105;
  double t3126;
  double t3318;
  double t3337;
  double t3351;
  double t3353;
  double t3354;
  double t3360;
  double t3363;
  double t3444;
  double t3446;
  double t3408;
  double t3063;
  double t3364;
  double t3521;
  double t232;
  double t265;
  double t311;
  double t336;
  double t3721;
  double t3759;
  double t702;
  double t1064;
  double t1577;
  double t1929;
  double t1935;
  double t3754;
  double t3766;
  double t3769;
  double t3773;
  double t3821;
  double t3869;
  double t3007;
  double t3067;
  double t3068;
  double t3072;
  double t3089;
  double t3214;
  double t3215;
  double t3289;
  double t3304;
  double t3317;
  double t3933;
  double t3934;
  double t3948;
  double t3956;
  double t3422;
  double t3979;
  double t3990;
  double t3991;
  double t4003;
  double t4012;
  double t4018;
  double t4040;
  double t4041;
  double t3577;
  double t3649;
  double t3653;
  double t4370;
  double t4372;
  double t4376;
  double t4378;
  double t4381;
  double t4383;
  double t4388;
  double t4389;
  double t4410;
  double t4411;
  double t4416;
  double t4417;
  double t4421;
  double t4448;
  double t4492;
  double t4496;
  double t4497;
  double t4498;
  t175 = Cos(var1[10]);
  t213 = -1.*t175;
  t216 = 1. + t213;
  t370 = Cos(var1[4]);
  t729 = Cos(var1[12]);
  t890 = -1.*t729;
  t1017 = 1. + t890;
  t1208 = -3.e-6*t1017;
  t1398 = Sin(var1[12]);
  t437 = Cos(var1[5]);
  t558 = Sin(var1[10]);
  t586 = Sin(var1[4]);
  t672 = Sin(var1[5]);
  t1592 = 3.e-6*t1398;
  t1911 = t1208 + t1592;
  t2995 = 3.e-13*var1[12];
  t1438 = -3.e-6*t1398;
  t1548 = t1208 + t1438;
  t3062 = -9.e-12*t1017;
  t2009 = 3.e-6*t216*t370*t437;
  t2015 = -3.e-6*t558*t586;
  t2222 = -9.e-12*t216;
  t2231 = 1. + t2222;
  t2284 = -1.*t2231*t370*t672;
  t2455 = t2009 + t2015 + t2284;
  t3094 = t175*t370*t437;
  t3097 = t558*t586;
  t3105 = -3.e-6*t216*t370*t672;
  t3126 = t3094 + t3097 + t3105;
  t3318 = -1.*t370*t437*t558;
  t3337 = -1.000000000009*t216;
  t3351 = 1. + t3337;
  t3353 = t3351*t586;
  t3354 = -3.e-6*t370*t558*t672;
  t3360 = t3318 + t3353 + t3354;
  t3363 = 3.e-6*t1017;
  t3444 = -1.000000000009*t1017;
  t3446 = 1. + t3444;
  t3408 = 9.e-12*t1017;
  t3063 = -1.*t1398;
  t3364 = t3363 + t1438;
  t3521 = t3363 + t1592;
  t232 = -1.8e-12*t216;
  t265 = -1. + t175;
  t311 = 0.2*t265;
  t336 = t232 + t311;
  t3721 = Sin(var1[3]);
  t3759 = Cos(var1[3]);
  t702 = 1.e-7*var1[12];
  t1064 = 5.4e-18*t1017;
  t1577 = -0.200000000003*t1548;
  t1929 = 0.100000000003*t1911;
  t1935 = t702 + t1064 + t1577 + t1929;
  t3754 = t437*t3721*t586;
  t3766 = t3759*t672;
  t3769 = t3754 + t3766;
  t3773 = t3759*t437;
  t3821 = -1.*t3721*t586*t672;
  t3869 = t3773 + t3821;
  t3007 = -0.2000000000048*t1017;
  t3067 = t3062 + t3063;
  t3068 = 0.100000000003*t3067;
  t3072 = 3.e-7*t1911;
  t3089 = t2995 + t3007 + t3068 + t3072;
  t3214 = 0.1000000000039*t1017;
  t3215 = 3.e-7*t1548;
  t3289 = t3062 + t1398;
  t3304 = -0.200000000003*t3289;
  t3317 = t2995 + t3214 + t3215 + t3304;
  t3933 = 3.e-6*t370*t558*t3721;
  t3934 = 3.e-6*t216*t3769;
  t3948 = t2231*t3869;
  t3956 = t3933 + t3934 + t3948;
  t3422 = t3408 + t1398;
  t3979 = -1.*t370*t558*t3721;
  t3990 = t175*t3769;
  t3991 = 3.e-6*t216*t3869;
  t4003 = t3979 + t3990 + t3991;
  t4012 = -1.*t3351*t370*t3721;
  t4018 = -1.*t558*t3769;
  t4040 = 3.e-6*t558*t3869;
  t4041 = t4012 + t4018 + t4040;
  t3577 = t3408 + t3063;
  t3649 = -1.8e-11*t1017;
  t3653 = 1. + t3649;
  t4370 = -1.*t3759*t437*t586;
  t4372 = t3721*t672;
  t4376 = t4370 + t4372;
  t4378 = t437*t3721;
  t4381 = t3759*t586*t672;
  t4383 = t4378 + t4381;
  t4388 = -3.e-6*t3759*t370*t558;
  t4389 = 3.e-6*t216*t4376;
  t4410 = t2231*t4383;
  t4411 = t4388 + t4389 + t4410;
  t4416 = t3759*t370*t558;
  t4417 = t175*t4376;
  t4421 = 3.e-6*t216*t4383;
  t4448 = t4416 + t4417 + t4421;
  t4492 = t3351*t3759*t370;
  t4496 = -1.*t558*t4376;
  t4497 = 3.e-6*t558*t4383;
  t4498 = t4492 + t4496 + t4497;
  p_output1[0]=t1935*t2455 + t3089*t3126 + t3317*t3360 - 0.3*(t2455*t3364 + t3126*t3422 + t3360*t3446) + 0.2*(-1.*t3126*t3446 - 1.*t2455*t3521 - 1.*t3360*t3577) + 0.100001*(t3126*t3364 + t3360*t3521 + t2455*t3653) + t336*t370*t437 + 0.2000000000018*t558*t586 - 6.000000000054e-7*t216*t370*t672 + var1[0] - 1.*var2[0];
  p_output1[1]=t336*t3769 + 6.000000000054e-7*t216*t3869 + t1935*t3956 + t3089*t4003 + t3317*t4041 - 0.3*(t3364*t3956 + t3422*t4003 + t3446*t4041) + 0.100001*(t3653*t3956 + t3364*t4003 + t3521*t4041) + 0.2*(-1.*t3521*t3956 - 1.*t3446*t4003 - 1.*t3577*t4041) - 0.2000000000018*t370*t3721*t558 + var1[1] - 1.*var2[1];
  p_output1[2]=t336*t4376 + 6.000000000054e-7*t216*t4383 + t1935*t4411 + t3089*t4448 + t3317*t4498 - 0.3*(t3364*t4411 + t3422*t4448 + t3446*t4498) + 0.100001*(t3653*t4411 + t3364*t4448 + t3521*t4498) + 0.2*(-1.*t3521*t4411 - 1.*t3446*t4448 - 1.*t3577*t4498) + 0.2000000000018*t370*t3759*t558 + var1[2] - 1.*var2[2];
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
