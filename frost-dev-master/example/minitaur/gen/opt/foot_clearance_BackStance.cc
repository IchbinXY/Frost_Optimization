/*
 * Automatically Generated from Mathematica.
 * Tue 28 May 2019 22:44:32 GMT-04:00
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
  double t504;
  double t151;
  double t803;
  double t872;
  double t900;
  double t920;
  double t901;
  double t927;
  double t1187;
  double t1208;
  double t1215;
  double t1548;
  double t1577;
  double t204;
  double t370;
  double t902;
  double t972;
  double t994;
  double t1024;
  double t1069;
  double t1075;
  double t1692;
  double t1746;
  double t1919;
  double t1592;
  double t1658;
  double t1926;
  double t1790;
  double t1810;
  double t1811;
  double t1836;
  double t1847;
  double t1883;
  double t1972;
  double t1978;
  double t1983;
  double t2001;
  double t2081;
  double t2088;
  double t2094;
  double t2097;
  double t2103;
  double t2106;
  double t2109;
  double t2168;
  double t2170;
  double t2123;
  double t1929;
  double t2119;
  double t2222;
  t504 = Cos(var1[19]);
  t151 = Cos(var1[3]);
  t803 = -1.*t504;
  t872 = 1. + t803;
  t900 = Cos(var1[5]);
  t920 = Sin(var1[3]);
  t901 = Sin(var1[4]);
  t927 = Sin(var1[5]);
  t1187 = Cos(var1[21]);
  t1208 = -1.*t1187;
  t1215 = 1. + t1208;
  t1548 = -3.e-6*t1215;
  t1577 = Sin(var1[21]);
  t204 = Cos(var1[4]);
  t370 = Sin(var1[19]);
  t902 = -1.*t151*t900*t901;
  t972 = t920*t927;
  t994 = t902 + t972;
  t1024 = t900*t920;
  t1069 = t151*t901*t927;
  t1075 = t1024 + t1069;
  t1692 = 3.e-6*t1577;
  t1746 = t1548 + t1692;
  t1919 = 3.e-13*var1[21];
  t1592 = -3.e-6*t1577;
  t1658 = t1548 + t1592;
  t1926 = -9.e-12*t1215;
  t1790 = -3.e-6*t151*t204*t370;
  t1810 = 3.e-6*t872*t994;
  t1811 = -9.e-12*t872;
  t1836 = 1. + t1811;
  t1847 = t1836*t1075;
  t1883 = t1790 + t1810 + t1847;
  t1972 = t151*t204*t370;
  t1978 = t504*t994;
  t1983 = 3.e-6*t872*t1075;
  t2001 = t1972 + t1978 + t1983;
  t2081 = -1.000000000009*t872;
  t2088 = 1. + t2081;
  t2094 = t2088*t151*t204;
  t2097 = -1.*t370*t994;
  t2103 = 3.e-6*t370*t1075;
  t2106 = t2094 + t2097 + t2103;
  t2109 = 3.e-6*t1215;
  t2168 = -1.000000000009*t1215;
  t2170 = 1. + t2168;
  t2123 = 9.e-12*t1215;
  t1929 = -1.*t1577;
  t2119 = t2109 + t1592;
  t2222 = t2109 + t1692;
  p_output1[0]=(-0.2000000000048*t1215 + 3.e-7*t1746 + t1919 + 0.100000000003*(t1926 + t1929))*t2001 + (0.1000000000039*t1215 + 3.e-7*t1658 + t1919 - 0.200000000003*(t1577 + t1926))*t2106 - 0.3*(t1883*t2119 + t2001*(t1577 + t2123) + t2106*t2170) + 0.2*(-1.*t2106*(t1929 + t2123) - 1.*t2001*t2170 - 1.*t1883*t2222) - 0.099999*((1. - 1.8e-11*t1215)*t1883 + t2001*t2119 + t2106*t2222) + 0.2000000000018*t151*t204*t370 + 6.000000000054e-7*t1075*t872 + (0.2*(-1. + t504) - 1.8e-12*t872)*t994 + var1[2] + t1883*(5.4e-18*t1215 - 0.200000000003*t1658 + 0.100000000003*t1746 + 1.e-7*var1[21]);
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

#include "foot_clearance_BackStance.hh"

namespace BackStance
{

void foot_clearance_BackStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
