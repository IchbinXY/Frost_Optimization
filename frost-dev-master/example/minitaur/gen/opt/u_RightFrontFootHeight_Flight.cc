/*
 * Automatically Generated from Mathematica.
 * Thu 30 May 2019 00:03:54 GMT-04:00
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
  double t30866;
  double t34659;
  double t34663;
  double t34669;
  double t36914;
  double t37020;
  double t36942;
  double t37037;
  double t38097;
  double t38149;
  double t38159;
  double t38274;
  double t38319;
  double t31353;
  double t32267;
  double t37001;
  double t37059;
  double t37733;
  double t37806;
  double t37905;
  double t37987;
  double t52999;
  double t61209;
  double t70579;
  double t38742;
  double t38830;
  double t70581;
  double t69829;
  double t69909;
  double t70015;
  double t70159;
  double t70550;
  double t70575;
  double t72040;
  double t72041;
  double t72152;
  double t73252;
  double t74545;
  double t74566;
  double t74592;
  double t74593;
  double t74602;
  double t74646;
  double t74674;
  double t74686;
  double t74687;
  double t74678;
  double t70586;
  double t74676;
  double t75883;
  t30866 = Cos(var1[3]);
  t34659 = Cos(var1[15]);
  t34663 = -1.*t34659;
  t34669 = 1. + t34663;
  t36914 = Cos(var1[5]);
  t37020 = Sin(var1[3]);
  t36942 = Sin(var1[4]);
  t37037 = Sin(var1[5]);
  t38097 = Cos(var1[17]);
  t38149 = -1.*t38097;
  t38159 = 1. + t38149;
  t38274 = -3.e-6*t38159;
  t38319 = Sin(var1[17]);
  t31353 = Cos(var1[4]);
  t32267 = Sin(var1[15]);
  t37001 = -1.*t30866*t36914*t36942;
  t37059 = t37020*t37037;
  t37733 = t37001 + t37059;
  t37806 = t36914*t37020;
  t37905 = t30866*t36942*t37037;
  t37987 = t37806 + t37905;
  t52999 = 3.e-6*t38319;
  t61209 = t38274 + t52999;
  t70579 = 9.e-13*var1[17];
  t38742 = -3.e-6*t38319;
  t38830 = t38274 + t38742;
  t70581 = -9.e-12*t38159;
  t69829 = -3.e-6*t30866*t31353*t32267;
  t69909 = 3.e-6*t34669*t37733;
  t70015 = -9.e-12*t34669;
  t70159 = 1. + t70015;
  t70550 = t70159*t37987;
  t70575 = t69829 + t69909 + t70550;
  t72040 = t30866*t31353*t32267;
  t72041 = t34659*t37733;
  t72152 = 3.e-6*t34669*t37987;
  t73252 = t72040 + t72041 + t72152;
  t74545 = -1.000000000009*t34669;
  t74566 = 1. + t74545;
  t74592 = t74566*t30866*t31353;
  t74593 = -1.*t32267*t37733;
  t74602 = 3.e-6*t32267*t37987;
  t74646 = t74592 + t74593 + t74602;
  t74674 = 3.e-6*t38159;
  t74686 = -1.000000000009*t38159;
  t74687 = 1. + t74686;
  t74678 = 9.e-12*t38159;
  t70586 = -1.*t38319;
  t74676 = t74674 + t38742;
  t75883 = t74674 + t52999;
  p_output1[0]=-0.2000000000018*t30866*t31353*t32267 + 0.2000000000018*t34669*t37733 - 6.000000000054e-7*t34669*t37987 + (0.2000000000018*t38159 - 9.e-7*t61209 + t70579 + 0.1*(t70581 + t70586))*t73252 + (0.1000000000009*t38159 - 9.e-7*t38830 + t70579 + 0.2*(t38319 + t70581))*t74646 - 0.3*(t70575*t74676 + t73252*(t38319 + t74678) + t74646*t74687) + 0.2*(t74646*(t70586 + t74678) + t73252*t74687 + t70575*t75883) - 0.099999*((1. - 1.8e-11*t38159)*t70575 + t73252*t74676 + t74646*t75883) + var1[2] + t70575*(-1.62e-17*t38159 + 0.2*t38830 + 0.1*t61209 + 3.e-7*var1[17]);
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
