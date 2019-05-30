/*
 * Automatically Generated from Mathematica.
 * Wed 29 May 2019 23:55:49 GMT-04:00
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
  double t1486;
  double t1823;
  double t1830;
  double t2229;
  double t2752;
  double t2801;
  double t2809;
  double t2967;
  double t2989;
  double t2267;
  double t2331;
  double t2384;
  double t2694;
  double t3269;
  double t3271;
  double t3501;
  double t2994;
  double t3209;
  double t3545;
  double t3427;
  double t3429;
  double t3437;
  double t3438;
  double t3455;
  double t3460;
  double t3607;
  double t3647;
  double t3650;
  double t3666;
  double t3771;
  double t3784;
  double t3789;
  double t3800;
  double t3803;
  double t3812;
  double t3833;
  double t3957;
  double t3994;
  double t3877;
  double t3568;
  double t3838;
  double t4033;
  double t1943;
  double t2011;
  double t2085;
  double t2110;
  double t4332;
  double t4378;
  double t2730;
  double t2938;
  double t3241;
  double t3358;
  double t3402;
  double t4368;
  double t4387;
  double t4414;
  double t4422;
  double t4445;
  double t4450;
  double t3543;
  double t3573;
  double t3580;
  double t3595;
  double t3605;
  double t3682;
  double t3683;
  double t3709;
  double t3724;
  double t3770;
  double t4462;
  double t4473;
  double t4490;
  double t4508;
  double t3889;
  double t4539;
  double t4584;
  double t4596;
  double t4616;
  double t4642;
  double t4670;
  double t4696;
  double t4729;
  double t4213;
  double t4228;
  double t4233;
  double t5250;
  double t5255;
  double t5265;
  double t5300;
  double t5313;
  double t5315;
  double t5336;
  double t5342;
  double t5360;
  double t5375;
  double t5381;
  double t5422;
  double t5436;
  double t5439;
  double t5441;
  double t5448;
  double t5466;
  double t5467;
  t1486 = Cos(var1[19]);
  t1823 = -1.*t1486;
  t1830 = 1. + t1823;
  t2229 = Cos(var1[4]);
  t2752 = Cos(var1[21]);
  t2801 = -1.*t2752;
  t2809 = 1. + t2801;
  t2967 = -3.e-6*t2809;
  t2989 = Sin(var1[21]);
  t2267 = Cos(var1[5]);
  t2331 = Sin(var1[19]);
  t2384 = Sin(var1[4]);
  t2694 = Sin(var1[5]);
  t3269 = 3.e-6*t2989;
  t3271 = t2967 + t3269;
  t3501 = 3.e-13*var1[21];
  t2994 = -3.e-6*t2989;
  t3209 = t2967 + t2994;
  t3545 = -9.e-12*t2809;
  t3427 = 3.e-6*t1830*t2229*t2267;
  t3429 = -3.e-6*t2331*t2384;
  t3437 = -9.e-12*t1830;
  t3438 = 1. + t3437;
  t3455 = -1.*t3438*t2229*t2694;
  t3460 = t3427 + t3429 + t3455;
  t3607 = t1486*t2229*t2267;
  t3647 = t2331*t2384;
  t3650 = -3.e-6*t1830*t2229*t2694;
  t3666 = t3607 + t3647 + t3650;
  t3771 = -1.*t2229*t2267*t2331;
  t3784 = -1.000000000009*t1830;
  t3789 = 1. + t3784;
  t3800 = t3789*t2384;
  t3803 = -3.e-6*t2229*t2331*t2694;
  t3812 = t3771 + t3800 + t3803;
  t3833 = 3.e-6*t2809;
  t3957 = -1.000000000009*t2809;
  t3994 = 1. + t3957;
  t3877 = 9.e-12*t2809;
  t3568 = -1.*t2989;
  t3838 = t3833 + t2994;
  t4033 = t3833 + t3269;
  t1943 = -1.8e-12*t1830;
  t2011 = -1. + t1486;
  t2085 = 0.2*t2011;
  t2110 = t1943 + t2085;
  t4332 = Sin(var1[3]);
  t4378 = Cos(var1[3]);
  t2730 = 1.e-7*var1[21];
  t2938 = 5.4e-18*t2809;
  t3241 = -0.200000000003*t3209;
  t3358 = 0.100000000003*t3271;
  t3402 = t2730 + t2938 + t3241 + t3358;
  t4368 = t2267*t4332*t2384;
  t4387 = t4378*t2694;
  t4414 = t4368 + t4387;
  t4422 = t4378*t2267;
  t4445 = -1.*t4332*t2384*t2694;
  t4450 = t4422 + t4445;
  t3543 = -0.2000000000048*t2809;
  t3573 = t3545 + t3568;
  t3580 = 0.100000000003*t3573;
  t3595 = 3.e-7*t3271;
  t3605 = t3501 + t3543 + t3580 + t3595;
  t3682 = 0.1000000000039*t2809;
  t3683 = 3.e-7*t3209;
  t3709 = t3545 + t2989;
  t3724 = -0.200000000003*t3709;
  t3770 = t3501 + t3682 + t3683 + t3724;
  t4462 = 3.e-6*t2229*t2331*t4332;
  t4473 = 3.e-6*t1830*t4414;
  t4490 = t3438*t4450;
  t4508 = t4462 + t4473 + t4490;
  t3889 = t3877 + t2989;
  t4539 = -1.*t2229*t2331*t4332;
  t4584 = t1486*t4414;
  t4596 = 3.e-6*t1830*t4450;
  t4616 = t4539 + t4584 + t4596;
  t4642 = -1.*t3789*t2229*t4332;
  t4670 = -1.*t2331*t4414;
  t4696 = 3.e-6*t2331*t4450;
  t4729 = t4642 + t4670 + t4696;
  t4213 = t3877 + t3568;
  t4228 = -1.8e-11*t2809;
  t4233 = 1. + t4228;
  t5250 = -1.*t4378*t2267*t2384;
  t5255 = t4332*t2694;
  t5265 = t5250 + t5255;
  t5300 = t2267*t4332;
  t5313 = t4378*t2384*t2694;
  t5315 = t5300 + t5313;
  t5336 = -3.e-6*t4378*t2229*t2331;
  t5342 = 3.e-6*t1830*t5265;
  t5360 = t3438*t5315;
  t5375 = t5336 + t5342 + t5360;
  t5381 = t4378*t2229*t2331;
  t5422 = t1486*t5265;
  t5436 = 3.e-6*t1830*t5315;
  t5439 = t5381 + t5422 + t5436;
  t5441 = t3789*t4378*t2229;
  t5448 = -1.*t2331*t5265;
  t5466 = 3.e-6*t2331*t5315;
  t5467 = t5441 + t5448 + t5466;
  p_output1[0]=t2110*t2229*t2267 + 0.2000000000018*t2331*t2384 - 6.000000000054e-7*t1830*t2229*t2694 + t3402*t3460 + t3605*t3666 + t3770*t3812 - 0.3*(t3460*t3838 + t3666*t3889 + t3812*t3994) + 0.2*(-1.*t3666*t3994 - 1.*t3460*t4033 - 1.*t3812*t4213) - 0.099999*(t3666*t3838 + t3812*t4033 + t3460*t4233) + var1[0] - 1.*var2[0];
  p_output1[1]=-0.2000000000018*t2229*t2331*t4332 + t2110*t4414 + 6.000000000054e-7*t1830*t4450 + t3402*t4508 + t3605*t4616 + t3770*t4729 - 0.3*(t3838*t4508 + t3889*t4616 + t3994*t4729) - 0.099999*(t4233*t4508 + t3838*t4616 + t4033*t4729) + 0.2*(-1.*t4033*t4508 - 1.*t3994*t4616 - 1.*t4213*t4729) + var1[1] - 1.*var2[1];
  p_output1[2]=0.2000000000018*t2229*t2331*t4378 + t2110*t5265 + 6.000000000054e-7*t1830*t5315 + t3402*t5375 + t3605*t5439 + t3770*t5467 - 0.3*(t3838*t5375 + t3889*t5439 + t3994*t5467) - 0.099999*(t4233*t5375 + t3838*t5439 + t4033*t5467) + 0.2*(-1.*t4033*t5375 - 1.*t3994*t5439 - 1.*t4213*t5467) + var1[2] - 1.*var2[2];
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
