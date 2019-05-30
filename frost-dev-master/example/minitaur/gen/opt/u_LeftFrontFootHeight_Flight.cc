/*
 * Automatically Generated from Mathematica.
 * Thu 30 May 2019 00:04:05 GMT-04:00
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
  double t32137;
  double t32147;
  double t32160;
  double t49156;
  double t74542;
  double t38037;
  double t64938;
  double t76045;
  double t74516;
  double t76062;
  double t76112;
  double t76119;
  double t76123;
  double t76124;
  double t76127;
  double t76128;
  double t76162;
  double t76183;
  double t76186;
  double t76191;
  double t76217;
  double t76220;
  double t76221;
  double t76131;
  double t76139;
  double t76149;
  double t76150;
  double t76198;
  double t76228;
  double t76230;
  double t76231;
  double t76233;
  double t76234;
  double t76235;
  double t76340;
  double t76239;
  double t76310;
  double t76311;
  double t76321;
  double t76333;
  double t76334;
  double t76335;
  double t76341;
  double t76152;
  double t76240;
  double t76189;
  double t76296;
  double t76298;
  double t76653;
  double t76337;
  t32137 = Cos(var1[6]);
  t32147 = -1.*t32137;
  t32160 = 1. + t32147;
  t49156 = Cos(var1[5]);
  t74542 = Sin(var1[3]);
  t38037 = Cos(var1[3]);
  t64938 = Sin(var1[4]);
  t76045 = Sin(var1[5]);
  t74516 = -1.*t38037*t49156*t64938;
  t76062 = t74542*t76045;
  t76112 = t74516 + t76062;
  t76119 = t49156*t74542;
  t76123 = t38037*t64938*t76045;
  t76124 = t76119 + t76123;
  t76127 = Cos(var1[4]);
  t76128 = Sin(var1[6]);
  t76162 = Cos(var1[8]);
  t76183 = -1.*t76162;
  t76186 = 1. + t76183;
  t76191 = Sin(var1[8]);
  t76217 = -3.e-6*t76186;
  t76220 = 3.e-6*t76191;
  t76221 = t76217 + t76220;
  t76131 = t32137*t76112;
  t76139 = 3.e-6*t32160*t76124;
  t76149 = t38037*t76127*t76128;
  t76150 = t76131 + t76139 + t76149;
  t76198 = -1.*t76191;
  t76228 = 3.e-6*t32160*t76112;
  t76230 = -9.e-12*t32160;
  t76231 = 1. + t76230;
  t76233 = t76231*t76124;
  t76234 = -3.e-6*t38037*t76127*t76128;
  t76235 = t76228 + t76233 + t76234;
  t76340 = 3.e-6*t76186;
  t76239 = -3.e-6*t76191;
  t76310 = -1.000000000009*t32160;
  t76311 = 1. + t76310;
  t76321 = t38037*t76127*t76311;
  t76333 = -1.*t76112*t76128;
  t76334 = 3.e-6*t76124*t76128;
  t76335 = t76321 + t76333 + t76334;
  t76341 = t76340 + t76220;
  t76152 = 9.e-13*var1[8];
  t76240 = t76217 + t76239;
  t76189 = -9.e-12*t76186;
  t76296 = -1.000000000009*t76186;
  t76298 = 1. + t76296;
  t76653 = t76340 + t76239;
  t76337 = 9.e-12*t76186;
  p_output1[0]=0.2000000000018*t32160*t76112 - 6.000000000054e-7*t32160*t76124 - 0.2000000000018*t38037*t76127*t76128 + t76150*(t76152 + 0.2000000000018*t76186 + 0.1*(t76189 + t76198) - 9.e-7*t76221) + (t76152 + 0.1000000000009*t76186 + 0.2*(t76189 + t76191) - 9.e-7*t76240)*t76335 + 0.2*(t76150*t76298 + t76335*(t76198 + t76337) + t76235*t76341) + 0.100001*((1. - 1.8e-11*t76186)*t76235 + t76335*t76341 + t76150*t76653) - 0.3*(t76298*t76335 + t76150*(t76191 + t76337) + t76235*t76653) + var1[2] + t76235*(-1.62e-17*t76186 + 0.1*t76221 + 0.2*t76240 + 3.e-7*var1[8]);
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

#include "u_LeftFrontFootHeight_Flight.hh"

namespace Flight2
{

void u_LeftFrontFootHeight_Flight_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
