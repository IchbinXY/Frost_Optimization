/*
 * Automatically Generated from Mathematica.
 * Wed 29 May 2019 15:17:49 GMT-04:00
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
  double t15728;
  double t16905;
  double t16917;
  double t16923;
  double t16933;
  double t16971;
  double t16954;
  double t16974;
  double t17059;
  double t17065;
  double t17066;
  double t17176;
  double t17186;
  double t15741;
  double t15920;
  double t16967;
  double t16975;
  double t16979;
  double t16983;
  double t16988;
  double t16990;
  double t17283;
  double t17347;
  double t17740;
  double t17187;
  double t17189;
  double t17772;
  double t17630;
  double t17652;
  double t17657;
  double t17659;
  double t17661;
  double t17668;
  double t17820;
  double t17826;
  double t17827;
  double t17836;
  double t17876;
  double t17883;
  double t18255;
  double t18276;
  double t18277;
  double t18453;
  double t18571;
  double t18701;
  double t19204;
  double t18583;
  double t17782;
  double t18578;
  double t19658;
  t15728 = Cos(var1[3]);
  t16905 = Cos(var1[15]);
  t16917 = -1.*t16905;
  t16923 = 1. + t16917;
  t16933 = Cos(var1[5]);
  t16971 = Sin(var1[3]);
  t16954 = Sin(var1[4]);
  t16974 = Sin(var1[5]);
  t17059 = Cos(var1[17]);
  t17065 = -1.*t17059;
  t17066 = 1. + t17065;
  t17176 = -3.e-6*t17066;
  t17186 = Sin(var1[17]);
  t15741 = Cos(var1[4]);
  t15920 = Sin(var1[15]);
  t16967 = -1.*t15728*t16933*t16954;
  t16975 = t16971*t16974;
  t16979 = t16967 + t16975;
  t16983 = t16933*t16971;
  t16988 = t15728*t16954*t16974;
  t16990 = t16983 + t16988;
  t17283 = 3.e-6*t17186;
  t17347 = t17176 + t17283;
  t17740 = 9.e-13*var1[17];
  t17187 = -3.e-6*t17186;
  t17189 = t17176 + t17187;
  t17772 = -9.e-12*t17066;
  t17630 = -3.e-6*t15728*t15741*t15920;
  t17652 = 3.e-6*t16923*t16979;
  t17657 = -9.e-12*t16923;
  t17659 = 1. + t17657;
  t17661 = t17659*t16990;
  t17668 = t17630 + t17652 + t17661;
  t17820 = t15728*t15741*t15920;
  t17826 = t16905*t16979;
  t17827 = 3.e-6*t16923*t16990;
  t17836 = t17820 + t17826 + t17827;
  t17876 = -1.000000000009*t16923;
  t17883 = 1. + t17876;
  t18255 = t17883*t15728*t15741;
  t18276 = -1.*t15920*t16979;
  t18277 = 3.e-6*t15920*t16990;
  t18453 = t18255 + t18276 + t18277;
  t18571 = 3.e-6*t17066;
  t18701 = -1.000000000009*t17066;
  t19204 = 1. + t18701;
  t18583 = 9.e-12*t17066;
  t17782 = -1.*t17186;
  t18578 = t18571 + t17187;
  t19658 = t18571 + t17283;
  p_output1[0]=-0.2000000000018*t15728*t15741*t15920 + 0.2000000000018*t16923*t16979 - 6.000000000054e-7*t16923*t16990 + (0.2000000000018*t17066 - 9.e-7*t17347 + t17740 + 0.1*(t17772 + t17782))*t17836 + (0.1000000000009*t17066 - 9.e-7*t17189 + t17740 + 0.2*(t17186 + t17772))*t18453 - 0.3*(t17668*t18578 + t17836*(t17186 + t18583) + t18453*t19204) + 0.2*(t18453*(t17782 + t18583) + t17836*t19204 + t17668*t19658) - 0.099999*((1. - 1.8e-11*t17066)*t17668 + t17836*t18578 + t18453*t19658) + var1[2] + t17668*(-1.62e-17*t17066 + 0.2*t17189 + 0.1*t17347 + 3.e-7*var1[17]);
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

#include "u_RightFrontFootHeight_Flight.hh"

namespace Flight2
{

void u_RightFrontFootHeight_Flight_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
