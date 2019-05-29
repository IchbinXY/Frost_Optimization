/*
 * Automatically Generated from Mathematica.
 * Wed 29 May 2019 15:05:30 GMT-04:00
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
  double t263;
  double t321;
  double t325;
  double t328;
  double t311;
  double t342;
  double t353;
  double t358;
  double t410;
  double t415;
  double t417;
  double t437;
  double t486;
  double t488;
  double t495;
  double t376;
  double t387;
  double t391;
  double t396;
  double t440;
  double t539;
  double t543;
  double t544;
  double t560;
  double t568;
  double t591;
  double t11089;
  double t636;
  double t849;
  double t852;
  double t853;
  double t858;
  double t949;
  double t10477;
  double t11090;
  double t407;
  double t640;
  double t433;
  double t816;
  double t826;
  double t11598;
  double t10478;
  double t11999;
  double t11997;
  double t11998;
  double t12000;
  double t12001;
  double t12276;
  double t12320;
  double t12321;
  double t431;
  double t444;
  double t461;
  double t505;
  double t524;
  double t606;
  double t612;
  double t646;
  double t659;
  double t680;
  double t12474;
  double t12475;
  double t12531;
  double t12532;
  double t10605;
  double t12534;
  double t12644;
  double t12645;
  double t12699;
  double t11517;
  double t11518;
  double t12702;
  double t12703;
  double t12803;
  double t12804;
  double t11977;
  double t11978;
  double t11979;
  double t11981;
  double t11982;
  double t11990;
  double t13015;
  double t13016;
  double t13017;
  double t13019;
  double t13020;
  double t13021;
  double t13028;
  double t13032;
  double t13037;
  double t13038;
  double t13041;
  double t13042;
  double t13043;
  double t13044;
  double t13047;
  double t13048;
  double t13049;
  double t13050;
  t263 = Cos(var1[4]);
  t321 = Cos(var1[6]);
  t325 = -1.*t321;
  t328 = 1. + t325;
  t311 = Cos(var1[5]);
  t342 = Sin(var1[5]);
  t353 = Sin(var1[4]);
  t358 = Sin(var1[6]);
  t410 = Cos(var1[8]);
  t415 = -1.*t410;
  t417 = 1. + t415;
  t437 = Sin(var1[8]);
  t486 = -3.e-6*t417;
  t488 = 3.e-6*t437;
  t495 = t486 + t488;
  t376 = t263*t311*t321;
  t387 = -3.e-6*t263*t328*t342;
  t391 = t353*t358;
  t396 = t376 + t387 + t391;
  t440 = -1.*t437;
  t539 = 3.e-6*t263*t311*t328;
  t543 = -9.e-12*t328;
  t544 = 1. + t543;
  t560 = -1.*t263*t544*t342;
  t568 = -3.e-6*t353*t358;
  t591 = t539 + t560 + t568;
  t11089 = 3.e-6*t417;
  t636 = -3.e-6*t437;
  t849 = -1.000000000009*t328;
  t852 = 1. + t849;
  t853 = t852*t353;
  t858 = -1.*t263*t311*t358;
  t949 = -3.e-6*t263*t342*t358;
  t10477 = t853 + t858 + t949;
  t11090 = t11089 + t488;
  t407 = 9.e-13*var1[8];
  t640 = t486 + t636;
  t433 = -9.e-12*t417;
  t816 = -1.000000000009*t417;
  t826 = 1. + t816;
  t11598 = t11089 + t636;
  t10478 = 9.e-12*t417;
  t11999 = Cos(var1[3]);
  t11997 = Sin(var1[3]);
  t11998 = t311*t11997*t353;
  t12000 = t11999*t342;
  t12001 = t11998 + t12000;
  t12276 = t11999*t311;
  t12320 = -1.*t11997*t353*t342;
  t12321 = t12276 + t12320;
  t431 = 0.2000000000018*t417;
  t444 = t433 + t440;
  t461 = 0.1*t444;
  t505 = -9.e-7*t495;
  t524 = t407 + t431 + t461 + t505;
  t606 = 3.e-7*var1[8];
  t612 = -1.62e-17*t417;
  t646 = 0.2*t640;
  t659 = 0.1*t495;
  t680 = t606 + t612 + t646 + t659;
  t12474 = t321*t12001;
  t12475 = 3.e-6*t328*t12321;
  t12531 = -1.*t263*t11997*t358;
  t12532 = t12474 + t12475 + t12531;
  t10605 = t10478 + t440;
  t12534 = 3.e-6*t328*t12001;
  t12644 = t544*t12321;
  t12645 = 3.e-6*t263*t11997*t358;
  t12699 = t12534 + t12644 + t12645;
  t11517 = -1.8e-11*t417;
  t11518 = 1. + t11517;
  t12702 = -1.*t263*t852*t11997;
  t12703 = -1.*t12001*t358;
  t12803 = 3.e-6*t12321*t358;
  t12804 = t12702 + t12703 + t12803;
  t11977 = 0.1000000000009*t417;
  t11978 = -9.e-7*t640;
  t11979 = t433 + t437;
  t11981 = 0.2*t11979;
  t11982 = t407 + t11977 + t11978 + t11981;
  t11990 = t10478 + t437;
  t13015 = -1.*t11999*t311*t353;
  t13016 = t11997*t342;
  t13017 = t13015 + t13016;
  t13019 = t311*t11997;
  t13020 = t11999*t353*t342;
  t13021 = t13019 + t13020;
  t13028 = t321*t13017;
  t13032 = 3.e-6*t328*t13021;
  t13037 = t11999*t263*t358;
  t13038 = t13028 + t13032 + t13037;
  t13041 = 3.e-6*t328*t13017;
  t13042 = t544*t13021;
  t13043 = -3.e-6*t11999*t263*t358;
  t13044 = t13041 + t13042 + t13043;
  t13047 = t11999*t263*t852;
  t13048 = -1.*t13017*t358;
  t13049 = 3.e-6*t13021*t358;
  t13050 = t13047 + t13048 + t13049;
  p_output1[0]=t10477*t11982 + 0.2000000000018*t263*t311*t328 + 6.000000000054e-7*t263*t328*t342 - 0.2000000000018*t353*t358 + t396*t524 + 0.100001*(t10477*t11090 + t11598*t396 + t11518*t591) + t591*t680 - 0.3*(t11990*t396 + t11598*t591 + t10477*t826) + 0.2*(t10477*t10605 + t11090*t591 + t396*t826) + var1[0] - 1.*var2[0];
  p_output1[1]=t11982*t12804 + 0.100001*(t11598*t12532 + t11518*t12699 + t11090*t12804) + 0.2000000000018*t12001*t328 - 6.000000000054e-7*t12321*t328 + 0.2000000000018*t11997*t263*t358 + t12532*t524 + t12699*t680 + 0.2*(t11090*t12699 + t10605*t12804 + t12532*t826) - 0.3*(t11990*t12532 + t11598*t12699 + t12804*t826) + var1[1] - 1.*var2[1];
  p_output1[2]=t11982*t13050 + 0.100001*(t11598*t13038 + t11518*t13044 + t11090*t13050) + 0.2000000000018*t13017*t328 - 6.000000000054e-7*t13021*t328 - 0.2000000000018*t11999*t263*t358 + t13038*t524 + t13044*t680 + 0.2*(t11090*t13044 + t10605*t13050 + t13038*t826) - 0.3*(t11990*t13038 + t11598*t13044 + t13050*t826) + var1[2] - 1.*var2[2];
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
