/*
 * Automatically Generated from Mathematica.
 * Tue 28 May 2019 22:44:36 GMT-04:00
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
  double t896;
  double t875;
  double t1017;
  double t1110;
  double t1933;
  double t1782;
  double t1911;
  double t1935;
  double t2108;
  double t2120;
  double t2152;
  double t2171;
  double t2212;
  double t437;
  double t874;
  double t1925;
  double t1937;
  double t1963;
  double t2011;
  double t2015;
  double t2065;
  double t2281;
  double t2780;
  double t3140;
  double t2215;
  double t2231;
  double t3173;
  double t3072;
  double t3080;
  double t3089;
  double t3094;
  double t3097;
  double t3126;
  double t3274;
  double t3286;
  double t3288;
  double t3289;
  double t3318;
  double t3323;
  double t3336;
  double t3337;
  double t3350;
  double t3351;
  double t3354;
  double t3369;
  double t3393;
  double t3363;
  double t3176;
  double t3360;
  double t3409;
  double t1159;
  double t1438;
  double t1691;
  double t1748;
  double t2079;
  double t2153;
  double t2271;
  double t2948;
  double t3068;
  double t3150;
  double t3214;
  double t3215;
  double t3222;
  double t3232;
  double t3299;
  double t3304;
  double t3309;
  double t3311;
  double t3317;
  double t3472;
  double t3475;
  double t3477;
  double t3480;
  double t3364;
  double t3484;
  double t3492;
  double t3497;
  double t3499;
  double t3511;
  double t3512;
  double t3513;
  double t3515;
  double t3432;
  double t3448;
  double t3449;
  double t3593;
  double t3594;
  double t3596;
  double t3608;
  double t3609;
  double t3611;
  double t3613;
  double t3614;
  double t3615;
  double t3633;
  double t3636;
  double t3637;
  double t3640;
  double t3641;
  double t3642;
  double t3688;
  double t3689;
  double t3695;
  double t3714;
  double t3715;
  double t3721;
  double t3722;
  double t3743;
  double t3750;
  double t3754;
  double t3759;
  double t3766;
  double t3769;
  double t3772;
  double t3773;
  double t3909;
  double t3910;
  double t3904;
  double t3905;
  double t3934;
  double t3919;
  double t3920;
  double t3921;
  double t3922;
  double t3948;
  double t3972;
  double t3979;
  double t4012;
  double t4013;
  double t4018;
  double t4056;
  double t4042;
  t896 = Cos(var1[19]);
  t875 = Sin(var1[3]);
  t1017 = -1.*t896;
  t1110 = 1. + t1017;
  t1933 = Cos(var1[3]);
  t1782 = Cos(var1[5]);
  t1911 = Sin(var1[4]);
  t1935 = Sin(var1[5]);
  t2108 = Cos(var1[21]);
  t2120 = -1.*t2108;
  t2152 = 1. + t2120;
  t2171 = -3.e-6*t2152;
  t2212 = Sin(var1[21]);
  t437 = Cos(var1[4]);
  t874 = Sin(var1[19]);
  t1925 = t1782*t875*t1911;
  t1937 = t1933*t1935;
  t1963 = t1925 + t1937;
  t2011 = t1933*t1782;
  t2015 = -1.*t875*t1911*t1935;
  t2065 = t2011 + t2015;
  t2281 = 3.e-6*t2212;
  t2780 = t2171 + t2281;
  t3140 = 3.e-13*var1[21];
  t2215 = -3.e-6*t2212;
  t2231 = t2171 + t2215;
  t3173 = -9.e-12*t2152;
  t3072 = 3.e-6*t437*t874*t875;
  t3080 = 3.e-6*t1110*t1963;
  t3089 = -9.e-12*t1110;
  t3094 = 1. + t3089;
  t3097 = t3094*t2065;
  t3126 = t3072 + t3080 + t3097;
  t3274 = -1.*t437*t874*t875;
  t3286 = t896*t1963;
  t3288 = 3.e-6*t1110*t2065;
  t3289 = t3274 + t3286 + t3288;
  t3318 = -1.000000000009*t1110;
  t3323 = 1. + t3318;
  t3336 = -1.*t3323*t437*t875;
  t3337 = -1.*t874*t1963;
  t3350 = 3.e-6*t874*t2065;
  t3351 = t3336 + t3337 + t3350;
  t3354 = 3.e-6*t2152;
  t3369 = -1.000000000009*t2152;
  t3393 = 1. + t3369;
  t3363 = 9.e-12*t2152;
  t3176 = -1.*t2212;
  t3360 = t3354 + t2215;
  t3409 = t3354 + t2281;
  t1159 = -1.8e-12*t1110;
  t1438 = -1. + t896;
  t1691 = 0.2*t1438;
  t1748 = t1159 + t1691;
  t2079 = 1.e-7*var1[21];
  t2153 = 5.4e-18*t2152;
  t2271 = -0.200000000003*t2231;
  t2948 = 0.100000000003*t2780;
  t3068 = t2079 + t2153 + t2271 + t2948;
  t3150 = -0.2000000000048*t2152;
  t3214 = t3173 + t3176;
  t3215 = 0.100000000003*t3214;
  t3222 = 3.e-7*t2780;
  t3232 = t3140 + t3150 + t3215 + t3222;
  t3299 = 0.1000000000039*t2152;
  t3304 = 3.e-7*t2231;
  t3309 = t3173 + t2212;
  t3311 = -0.200000000003*t3309;
  t3317 = t3140 + t3299 + t3304 + t3311;
  t3472 = -3.e-6*t1110*t1933*t437*t1782;
  t3475 = 3.e-6*t1933*t874*t1911;
  t3477 = t3094*t1933*t437*t1935;
  t3480 = t3472 + t3475 + t3477;
  t3364 = t3363 + t2212;
  t3484 = -1.*t896*t1933*t437*t1782;
  t3492 = -1.*t1933*t874*t1911;
  t3497 = 3.e-6*t1110*t1933*t437*t1935;
  t3499 = t3484 + t3492 + t3497;
  t3511 = t1933*t437*t1782*t874;
  t3512 = -1.*t3323*t1933*t1911;
  t3513 = 3.e-6*t1933*t437*t874*t1935;
  t3515 = t3511 + t3512 + t3513;
  t3432 = t3363 + t3176;
  t3448 = -1.8e-11*t2152;
  t3449 = 1. + t3448;
  t3593 = t1933*t1782*t1911;
  t3594 = -1.*t875*t1935;
  t3596 = t3593 + t3594;
  t3608 = t1782*t875;
  t3609 = t1933*t1911*t1935;
  t3611 = t3608 + t3609;
  t3613 = t3094*t3596;
  t3614 = 3.e-6*t1110*t3611;
  t3615 = t3613 + t3614;
  t3633 = 3.e-6*t1110*t3596;
  t3636 = t896*t3611;
  t3637 = t3633 + t3636;
  t3640 = 3.e-6*t874*t3596;
  t3641 = -1.*t874*t3611;
  t3642 = t3640 + t3641;
  t3688 = -1.*t1933*t1782*t1911;
  t3689 = t875*t1935;
  t3695 = t3688 + t3689;
  t3714 = -1.000000000009*t1933*t437*t874;
  t3715 = -1.*t896*t3695;
  t3721 = 3.e-6*t896*t3611;
  t3722 = t3714 + t3715 + t3721;
  t3743 = -3.e-6*t896*t1933*t437;
  t3750 = 3.e-6*t874*t3695;
  t3754 = -9.e-12*t874*t3611;
  t3759 = t3743 + t3750 + t3754;
  t3766 = t896*t1933*t437;
  t3769 = -1.*t874*t3695;
  t3772 = 3.e-6*t874*t3611;
  t3773 = t3766 + t3769 + t3772;
  t3909 = 3.e-6*t2108;
  t3910 = t3909 + t2215;
  t3904 = -3.e-6*t2108;
  t3905 = t3904 + t2215;
  t3934 = -9.e-12*t2212;
  t3919 = -3.e-6*t1933*t437*t874;
  t3920 = 3.e-6*t1110*t3695;
  t3921 = t3094*t3611;
  t3922 = t3919 + t3920 + t3921;
  t3948 = t1933*t437*t874;
  t3972 = t896*t3695;
  t3979 = t3948 + t3972 + t3614;
  t4012 = t3323*t1933*t437;
  t4013 = t4012 + t3769 + t3772;
  t4018 = t3909 + t2281;
  t4056 = t3904 + t2281;
  t4042 = 9.e-12*t2212;
  p_output1[0]=1.;
  p_output1[1]=t1748*t1963 + 6.000000000054e-7*t1110*t2065 + t3068*t3126 + t3232*t3289 + t3317*t3351 - 0.3*(t3126*t3360 + t3289*t3364 + t3351*t3393) + 0.2*(-1.*t3289*t3393 - 1.*t3126*t3409 - 1.*t3351*t3432) - 0.099999*(t3289*t3360 + t3351*t3409 + t3126*t3449) - 0.2000000000018*t437*t874*t875;
  p_output1[2]=t3068*t3480 + t3232*t3499 + t3317*t3515 - 0.3*(t3360*t3480 + t3364*t3499 + t3393*t3515) - 0.099999*(t3449*t3480 + t3360*t3499 + t3409*t3515) + 0.2*(-1.*t3409*t3480 - 1.*t3393*t3499 - 1.*t3432*t3515) - 1.*t1748*t1782*t1933*t437 + 6.000000000054e-7*t1110*t1933*t1935*t437 - 0.2000000000018*t1911*t1933*t874;
  p_output1[3]=6.000000000054e-7*t1110*t3596 + t1748*t3611 + t3068*t3615 + t3232*t3637 + t3317*t3642 - 0.3*(t3360*t3615 + t3364*t3637 + t3393*t3642) - 0.099999*(t3449*t3615 + t3360*t3637 + t3409*t3642) + 0.2*(-1.*t3409*t3615 - 1.*t3393*t3637 - 1.*t3432*t3642);
  p_output1[4]=t3317*t3722 + t3068*t3759 + t3232*t3773 - 0.099999*(t3409*t3722 + t3449*t3759 + t3360*t3773) - 0.3*(t3393*t3722 + t3360*t3759 + t3364*t3773) + 0.2*(-1.*t3432*t3722 - 1.*t3409*t3759 - 1.*t3393*t3773) + 6.000000000054e-7*t3611*t874 - 0.2000000000018*t3695*t874 + 0.2000000000018*t1933*t437*t896;
  p_output1[5]=(1.e-7 + 5.4e-18*t2212 - 0.200000000003*t3905 + 0.100000000003*t3910)*t3922 + (3.e-13 - 0.2000000000048*t2212 + 3.e-7*t3910 + 0.100000000003*(t2120 + t3934))*t3979 + (3.e-13 + 0.1000000000039*t2212 + 3.e-7*t3905 - 0.200000000003*(t2108 + t3934))*t4013 + 0.2*(1.000000000009*t2212*t3979 - 1.*t3922*t4018 - 1.*t4013*(t2120 + t4042)) - 0.3*(-1.000000000009*t2212*t4013 + t3979*(t2108 + t4042) + t3922*t4056) - 0.099999*(-1.8e-11*t2212*t3922 + t4013*t4018 + t3979*t4056);
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 6, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "J_foot_clearance_BackStance.hh"

namespace BackStance
{

void J_foot_clearance_BackStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
