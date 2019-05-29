/*
 * Automatically Generated from Mathematica.
 * Wed 29 May 2019 15:12:33 GMT-04:00
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
  double t182;
  double t226;
  double t227;
  double t282;
  double t371;
  double t389;
  double t390;
  double t418;
  double t441;
  double t288;
  double t301;
  double t313;
  double t339;
  double t480;
  double t481;
  double t557;
  double t445;
  double t463;
  double t567;
  double t522;
  double t523;
  double t528;
  double t530;
  double t535;
  double t537;
  double t614;
  double t626;
  double t627;
  double t642;
  double t674;
  double t684;
  double t691;
  double t703;
  double t704;
  double t720;
  double t737;
  double t768;
  double t770;
  double t759;
  double t585;
  double t753;
  double t783;
  double t242;
  double t249;
  double t265;
  double t266;
  double t1271;
  double t1330;
  double t366;
  double t409;
  double t467;
  double t513;
  double t517;
  double t1305;
  double t1601;
  double t1605;
  double t1649;
  double t1683;
  double t3640;
  double t566;
  double t587;
  double t593;
  double t601;
  double t613;
  double t654;
  double t657;
  double t663;
  double t666;
  double t671;
  double t3713;
  double t3739;
  double t3937;
  double t7108;
  double t763;
  double t8236;
  double t8244;
  double t8273;
  double t8281;
  double t8531;
  double t9201;
  double t9343;
  double t9526;
  double t828;
  double t840;
  double t841;
  double t10232;
  double t10327;
  double t10345;
  double t10354;
  double t10355;
  double t10356;
  double t10411;
  double t10456;
  double t10463;
  double t10467;
  double t10471;
  double t10473;
  double t10474;
  double t10481;
  double t10486;
  double t10487;
  double t10489;
  double t10560;
  t182 = Cos(var1[19]);
  t226 = -1.*t182;
  t227 = 1. + t226;
  t282 = Cos(var1[4]);
  t371 = Cos(var1[21]);
  t389 = -1.*t371;
  t390 = 1. + t389;
  t418 = -3.e-6*t390;
  t441 = Sin(var1[21]);
  t288 = Cos(var1[5]);
  t301 = Sin(var1[19]);
  t313 = Sin(var1[4]);
  t339 = Sin(var1[5]);
  t480 = 3.e-6*t441;
  t481 = t418 + t480;
  t557 = 3.e-13*var1[21];
  t445 = -3.e-6*t441;
  t463 = t418 + t445;
  t567 = -9.e-12*t390;
  t522 = 3.e-6*t227*t282*t288;
  t523 = -3.e-6*t301*t313;
  t528 = -9.e-12*t227;
  t530 = 1. + t528;
  t535 = -1.*t530*t282*t339;
  t537 = t522 + t523 + t535;
  t614 = t182*t282*t288;
  t626 = t301*t313;
  t627 = -3.e-6*t227*t282*t339;
  t642 = t614 + t626 + t627;
  t674 = -1.*t282*t288*t301;
  t684 = -1.000000000009*t227;
  t691 = 1. + t684;
  t703 = t691*t313;
  t704 = -3.e-6*t282*t301*t339;
  t720 = t674 + t703 + t704;
  t737 = 3.e-6*t390;
  t768 = -1.000000000009*t390;
  t770 = 1. + t768;
  t759 = 9.e-12*t390;
  t585 = -1.*t441;
  t753 = t737 + t445;
  t783 = t737 + t480;
  t242 = -1.8e-12*t227;
  t249 = -1. + t182;
  t265 = 0.2*t249;
  t266 = t242 + t265;
  t1271 = Sin(var1[3]);
  t1330 = Cos(var1[3]);
  t366 = 1.e-7*var1[21];
  t409 = 5.4e-18*t390;
  t467 = -0.200000000003*t463;
  t513 = 0.100000000003*t481;
  t517 = t366 + t409 + t467 + t513;
  t1305 = t288*t1271*t313;
  t1601 = t1330*t339;
  t1605 = t1305 + t1601;
  t1649 = t1330*t288;
  t1683 = -1.*t1271*t313*t339;
  t3640 = t1649 + t1683;
  t566 = -0.2000000000048*t390;
  t587 = t567 + t585;
  t593 = 0.100000000003*t587;
  t601 = 3.e-7*t481;
  t613 = t557 + t566 + t593 + t601;
  t654 = 0.1000000000039*t390;
  t657 = 3.e-7*t463;
  t663 = t567 + t441;
  t666 = -0.200000000003*t663;
  t671 = t557 + t654 + t657 + t666;
  t3713 = 3.e-6*t282*t301*t1271;
  t3739 = 3.e-6*t227*t1605;
  t3937 = t530*t3640;
  t7108 = t3713 + t3739 + t3937;
  t763 = t759 + t441;
  t8236 = -1.*t282*t301*t1271;
  t8244 = t182*t1605;
  t8273 = 3.e-6*t227*t3640;
  t8281 = t8236 + t8244 + t8273;
  t8531 = -1.*t691*t282*t1271;
  t9201 = -1.*t301*t1605;
  t9343 = 3.e-6*t301*t3640;
  t9526 = t8531 + t9201 + t9343;
  t828 = t759 + t585;
  t840 = -1.8e-11*t390;
  t841 = 1. + t840;
  t10232 = -1.*t1330*t288*t313;
  t10327 = t1271*t339;
  t10345 = t10232 + t10327;
  t10354 = t288*t1271;
  t10355 = t1330*t313*t339;
  t10356 = t10354 + t10355;
  t10411 = -3.e-6*t1330*t282*t301;
  t10456 = 3.e-6*t227*t10345;
  t10463 = t530*t10356;
  t10467 = t10411 + t10456 + t10463;
  t10471 = t1330*t282*t301;
  t10473 = t182*t10345;
  t10474 = 3.e-6*t227*t10356;
  t10481 = t10471 + t10473 + t10474;
  t10486 = t691*t1330*t282;
  t10487 = -1.*t301*t10345;
  t10489 = 3.e-6*t301*t10356;
  t10560 = t10486 + t10487 + t10489;
  p_output1[0]=t266*t282*t288 + 0.2000000000018*t301*t313 - 6.000000000054e-7*t227*t282*t339 + t517*t537 + t613*t642 + t671*t720 - 0.3*(t537*t753 + t642*t763 + t720*t770) + 0.2*(-1.*t642*t770 - 1.*t537*t783 - 1.*t720*t828) - 0.099999*(t642*t753 + t720*t783 + t537*t841) + var1[0] - 1.*var2[0];
  p_output1[1]=t1605*t266 - 0.2000000000018*t1271*t282*t301 + 6.000000000054e-7*t227*t3640 + t517*t7108 + t613*t8281 + t671*t9526 - 0.3*(t7108*t753 + t763*t8281 + t770*t9526) - 0.099999*(t753*t8281 + t7108*t841 + t783*t9526) + 0.2*(-1.*t7108*t783 - 1.*t770*t8281 - 1.*t828*t9526) + var1[1] - 1.*var2[1];
  p_output1[2]=6.000000000054e-7*t10356*t227 + t10345*t266 + 0.2000000000018*t1330*t282*t301 + t10467*t517 + t10481*t613 + t10560*t671 - 0.3*(t10467*t753 + t10481*t763 + t10560*t770) + 0.2*(-1.*t10481*t770 - 1.*t10467*t783 - 1.*t10560*t828) - 0.099999*(t10481*t753 + t10560*t783 + t10467*t841) + var1[2] - 1.*var2[2];
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
