/*
 * Automatically Generated from Mathematica.
 * Wed 29 May 2019 23:58:17 GMT-04:00
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
  double t7791;
  double t1663;
  double t15132;
  double t15340;
  double t15861;
  double t15903;
  double t15899;
  double t15908;
  double t22206;
  double t22537;
  double t22591;
  double t22623;
  double t22639;
  double t2021;
  double t2331;
  double t15901;
  double t16162;
  double t21021;
  double t21401;
  double t21608;
  double t21667;
  double t23856;
  double t23890;
  double t24492;
  double t22653;
  double t23410;
  double t24566;
  double t24038;
  double t24245;
  double t24254;
  double t24265;
  double t24284;
  double t24316;
  double t24853;
  double t24855;
  double t24856;
  double t24858;
  double t24921;
  double t24927;
  double t24929;
  double t24952;
  double t24953;
  double t24955;
  double t24966;
  double t26138;
  double t26179;
  double t25100;
  double t24633;
  double t25001;
  double t26364;
  t7791 = Cos(var1[19]);
  t1663 = Cos(var1[3]);
  t15132 = -1.*t7791;
  t15340 = 1. + t15132;
  t15861 = Cos(var1[5]);
  t15903 = Sin(var1[3]);
  t15899 = Sin(var1[4]);
  t15908 = Sin(var1[5]);
  t22206 = Cos(var1[21]);
  t22537 = -1.*t22206;
  t22591 = 1. + t22537;
  t22623 = -3.e-6*t22591;
  t22639 = Sin(var1[21]);
  t2021 = Cos(var1[4]);
  t2331 = Sin(var1[19]);
  t15901 = -1.*t1663*t15861*t15899;
  t16162 = t15903*t15908;
  t21021 = t15901 + t16162;
  t21401 = t15861*t15903;
  t21608 = t1663*t15899*t15908;
  t21667 = t21401 + t21608;
  t23856 = 3.e-6*t22639;
  t23890 = t22623 + t23856;
  t24492 = 3.e-13*var1[21];
  t22653 = -3.e-6*t22639;
  t23410 = t22623 + t22653;
  t24566 = -9.e-12*t22591;
  t24038 = -3.e-6*t1663*t2021*t2331;
  t24245 = 3.e-6*t15340*t21021;
  t24254 = -9.e-12*t15340;
  t24265 = 1. + t24254;
  t24284 = t24265*t21667;
  t24316 = t24038 + t24245 + t24284;
  t24853 = t1663*t2021*t2331;
  t24855 = t7791*t21021;
  t24856 = 3.e-6*t15340*t21667;
  t24858 = t24853 + t24855 + t24856;
  t24921 = -1.000000000009*t15340;
  t24927 = 1. + t24921;
  t24929 = t24927*t1663*t2021;
  t24952 = -1.*t2331*t21021;
  t24953 = 3.e-6*t2331*t21667;
  t24955 = t24929 + t24952 + t24953;
  t24966 = 3.e-6*t22591;
  t26138 = -1.000000000009*t22591;
  t26179 = 1. + t26138;
  t25100 = 9.e-12*t22591;
  t24633 = -1.*t22639;
  t25001 = t24966 + t22653;
  t26364 = t24966 + t23856;
  p_output1[0]=6.000000000054e-7*t15340*t21667 + 0.2000000000018*t1663*t2021*t2331 + (-0.2000000000048*t22591 + 3.e-7*t23890 + t24492 + 0.100000000003*(t24566 + t24633))*t24858 + (0.1000000000039*t22591 + 3.e-7*t23410 + t24492 - 0.200000000003*(t22639 + t24566))*t24955 - 0.3*(t24316*t25001 + t24858*(t22639 + t25100) + t24955*t26179) + 0.2*(-1.*t24955*(t24633 + t25100) - 1.*t24858*t26179 - 1.*t24316*t26364) - 0.099999*((1. - 1.8e-11*t22591)*t24316 + t24858*t25001 + t24955*t26364) + t21021*(-1.8e-12*t15340 + 0.2*(-1. + t7791)) + var1[2] + t24316*(5.4e-18*t22591 - 0.200000000003*t23410 + 0.100000000003*t23890 + 1.e-7*var1[21]);
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
