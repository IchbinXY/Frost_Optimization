/*
 * Automatically Generated from Mathematica.
 * Wed 29 May 2019 23:52:58 GMT-04:00
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
  double t2187;
  double t1768;
  double t2472;
  double t2567;
  double t3883;
  double t3938;
  double t3896;
  double t3994;
  double t5136;
  double t5155;
  double t5278;
  double t5342;
  double t5586;
  double t1815;
  double t2033;
  double t3898;
  double t4033;
  double t4106;
  double t4368;
  double t4387;
  double t4445;
  double t9846;
  double t12091;
  double t12896;
  double t6321;
  double t6571;
  double t13102;
  double t12372;
  double t12585;
  double t12591;
  double t12799;
  double t12807;
  double t12844;
  double t13950;
  double t13978;
  double t14052;
  double t14131;
  double t14262;
  double t14286;
  double t14346;
  double t14358;
  double t14361;
  double t14369;
  double t14408;
  double t14671;
  double t14716;
  double t14653;
  double t13161;
  double t14447;
  double t14974;
  t2187 = Cos(var1[19]);
  t1768 = Cos(var1[3]);
  t2472 = -1.*t2187;
  t2567 = 1. + t2472;
  t3883 = Cos(var1[5]);
  t3938 = Sin(var1[3]);
  t3896 = Sin(var1[4]);
  t3994 = Sin(var1[5]);
  t5136 = Cos(var1[21]);
  t5155 = -1.*t5136;
  t5278 = 1. + t5155;
  t5342 = -3.e-6*t5278;
  t5586 = Sin(var1[21]);
  t1815 = Cos(var1[4]);
  t2033 = Sin(var1[19]);
  t3898 = -1.*t1768*t3883*t3896;
  t4033 = t3938*t3994;
  t4106 = t3898 + t4033;
  t4368 = t3883*t3938;
  t4387 = t1768*t3896*t3994;
  t4445 = t4368 + t4387;
  t9846 = 3.e-6*t5586;
  t12091 = t5342 + t9846;
  t12896 = 3.e-13*var1[21];
  t6321 = -3.e-6*t5586;
  t6571 = t5342 + t6321;
  t13102 = -9.e-12*t5278;
  t12372 = -3.e-6*t1768*t1815*t2033;
  t12585 = 3.e-6*t2567*t4106;
  t12591 = -9.e-12*t2567;
  t12799 = 1. + t12591;
  t12807 = t12799*t4445;
  t12844 = t12372 + t12585 + t12807;
  t13950 = t1768*t1815*t2033;
  t13978 = t2187*t4106;
  t14052 = 3.e-6*t2567*t4445;
  t14131 = t13950 + t13978 + t14052;
  t14262 = -1.000000000009*t2567;
  t14286 = 1. + t14262;
  t14346 = t14286*t1768*t1815;
  t14358 = -1.*t2033*t4106;
  t14361 = 3.e-6*t2033*t4445;
  t14369 = t14346 + t14358 + t14361;
  t14408 = 3.e-6*t5278;
  t14671 = -1.000000000009*t5278;
  t14716 = 1. + t14671;
  t14653 = 9.e-12*t5278;
  t13161 = -1.*t5586;
  t14447 = t14408 + t6321;
  t14974 = t14408 + t9846;
  p_output1[0]=0.2*(-1.*t14369*(t13161 + t14653) - 1.*t14131*t14716 - 1.*t12844*t14974) + 0.2000000000018*t1768*t1815*t2033 + (0.2*(-1. + t2187) - 1.8e-12*t2567)*t4106 + 6.000000000054e-7*t2567*t4445 - 0.099999*(t14131*t14447 + t14369*t14974 + t12844*(1. - 1.8e-11*t5278)) + t14131*(3.e-7*t12091 + t12896 + 0.100000000003*(t13102 + t13161) - 0.2000000000048*t5278) - 0.3*(t12844*t14447 + t14369*t14716 + t14131*(t14653 + t5586)) + t14369*(t12896 + 0.1000000000039*t5278 - 0.200000000003*(t13102 + t5586) + 3.e-7*t6571) + var1[2] + t12844*(0.100000000003*t12091 + 5.4e-18*t5278 - 0.200000000003*t6571 + 1.e-7*var1[21]);
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

#include "u_RightBackFootHeight_Flight.hh"

namespace Flight1
{

void u_RightBackFootHeight_Flight_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
