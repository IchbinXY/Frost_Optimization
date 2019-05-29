/*
 * Automatically Generated from Mathematica.
 * Wed 29 May 2019 15:10:23 GMT-04:00
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
  double t11093;
  double t10344;
  double t11094;
  double t11113;
  double t11269;
  double t11349;
  double t11303;
  double t11350;
  double t11428;
  double t11457;
  double t11460;
  double t11511;
  double t11519;
  double t10351;
  double t10483;
  double t11308;
  double t11403;
  double t11413;
  double t11416;
  double t11422;
  double t11423;
  double t11572;
  double t11575;
  double t12077;
  double t11565;
  double t11566;
  double t12140;
  double t11951;
  double t11972;
  double t12002;
  double t12005;
  double t12006;
  double t12068;
  double t12209;
  double t12227;
  double t12228;
  double t12252;
  double t15497;
  double t21089;
  double t21101;
  double t21117;
  double t22922;
  double t22944;
  double t24294;
  double t34056;
  double t34127;
  double t29081;
  double t12147;
  double t25091;
  double t34143;
  t11093 = Cos(var1[19]);
  t10344 = Cos(var1[3]);
  t11094 = -1.*t11093;
  t11113 = 1. + t11094;
  t11269 = Cos(var1[5]);
  t11349 = Sin(var1[3]);
  t11303 = Sin(var1[4]);
  t11350 = Sin(var1[5]);
  t11428 = Cos(var1[21]);
  t11457 = -1.*t11428;
  t11460 = 1. + t11457;
  t11511 = -3.e-6*t11460;
  t11519 = Sin(var1[21]);
  t10351 = Cos(var1[4]);
  t10483 = Sin(var1[19]);
  t11308 = -1.*t10344*t11269*t11303;
  t11403 = t11349*t11350;
  t11413 = t11308 + t11403;
  t11416 = t11269*t11349;
  t11422 = t10344*t11303*t11350;
  t11423 = t11416 + t11422;
  t11572 = 3.e-6*t11519;
  t11575 = t11511 + t11572;
  t12077 = 3.e-13*var1[21];
  t11565 = -3.e-6*t11519;
  t11566 = t11511 + t11565;
  t12140 = -9.e-12*t11460;
  t11951 = -3.e-6*t10344*t10351*t10483;
  t11972 = 3.e-6*t11113*t11413;
  t12002 = -9.e-12*t11113;
  t12005 = 1. + t12002;
  t12006 = t12005*t11423;
  t12068 = t11951 + t11972 + t12006;
  t12209 = t10344*t10351*t10483;
  t12227 = t11093*t11413;
  t12228 = 3.e-6*t11113*t11423;
  t12252 = t12209 + t12227 + t12228;
  t15497 = -1.000000000009*t11113;
  t21089 = 1. + t15497;
  t21101 = t21089*t10344*t10351;
  t21117 = -1.*t10483*t11413;
  t22922 = 3.e-6*t10483*t11423;
  t22944 = t21101 + t21117 + t22922;
  t24294 = 3.e-6*t11460;
  t34056 = -1.000000000009*t11460;
  t34127 = 1. + t34056;
  t29081 = 9.e-12*t11460;
  t12147 = -1.*t11519;
  t25091 = t24294 + t11565;
  t34143 = t24294 + t11572;
  p_output1[0]=0.2000000000018*t10344*t10351*t10483 + (0.2*(-1. + t11093) - 1.8e-12*t11113)*t11413 + 6.000000000054e-7*t11113*t11423 + (-0.2000000000048*t11460 + 3.e-7*t11575 + t12077 + 0.100000000003*(t12140 + t12147))*t12252 + (0.1000000000039*t11460 + 3.e-7*t11566 + t12077 - 0.200000000003*(t11519 + t12140))*t22944 - 0.3*(t12068*t25091 + t12252*(t11519 + t29081) + t22944*t34127) + 0.2*(-1.*t22944*(t12147 + t29081) - 1.*t12252*t34127 - 1.*t12068*t34143) - 0.099999*((1. - 1.8e-11*t11460)*t12068 + t12252*t25091 + t22944*t34143) + var1[2] + t12068*(5.4e-18*t11460 - 0.200000000003*t11566 + 0.100000000003*t11575 + 1.e-7*var1[21]);
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
