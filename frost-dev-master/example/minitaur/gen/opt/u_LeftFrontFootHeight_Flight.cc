/*
 * Automatically Generated from Mathematica.
 * Tue 28 May 2019 23:03:52 GMT-04:00
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
  double t536;
  double t3462;
  double t3658;
  double t4078;
  double t4495;
  double t3940;
  double t4316;
  double t4752;
  double t4317;
  double t4873;
  double t4880;
  double t4934;
  double t4939;
  double t4957;
  double t5008;
  double t5065;
  double t5152;
  double t5157;
  double t5168;
  double t5175;
  double t6426;
  double t6645;
  double t6646;
  double t5090;
  double t5120;
  double t5130;
  double t5150;
  double t5196;
  double t6683;
  double t6684;
  double t6685;
  double t6686;
  double t6687;
  double t6688;
  double t7188;
  double t6717;
  double t6989;
  double t7039;
  double t7057;
  double t7102;
  double t7125;
  double t7155;
  double t7189;
  double t5151;
  double t6726;
  double t5174;
  double t6827;
  double t6870;
  double t7672;
  double t7184;
  t536 = Cos(var1[6]);
  t3462 = -1.*t536;
  t3658 = 1. + t3462;
  t4078 = Cos(var1[5]);
  t4495 = Sin(var1[3]);
  t3940 = Cos(var1[3]);
  t4316 = Sin(var1[4]);
  t4752 = Sin(var1[5]);
  t4317 = -1.*t3940*t4078*t4316;
  t4873 = t4495*t4752;
  t4880 = t4317 + t4873;
  t4934 = t4078*t4495;
  t4939 = t3940*t4316*t4752;
  t4957 = t4934 + t4939;
  t5008 = Cos(var1[4]);
  t5065 = Sin(var1[6]);
  t5152 = Cos(var1[8]);
  t5157 = -1.*t5152;
  t5168 = 1. + t5157;
  t5175 = Sin(var1[8]);
  t6426 = -3.e-6*t5168;
  t6645 = 3.e-6*t5175;
  t6646 = t6426 + t6645;
  t5090 = t536*t4880;
  t5120 = 3.e-6*t3658*t4957;
  t5130 = t3940*t5008*t5065;
  t5150 = t5090 + t5120 + t5130;
  t5196 = -1.*t5175;
  t6683 = 3.e-6*t3658*t4880;
  t6684 = -9.e-12*t3658;
  t6685 = 1. + t6684;
  t6686 = t6685*t4957;
  t6687 = -3.e-6*t3940*t5008*t5065;
  t6688 = t6683 + t6686 + t6687;
  t7188 = 3.e-6*t5168;
  t6717 = -3.e-6*t5175;
  t6989 = -1.000000000009*t3658;
  t7039 = 1. + t6989;
  t7057 = t3940*t5008*t7039;
  t7102 = -1.*t4880*t5065;
  t7125 = 3.e-6*t4957*t5065;
  t7155 = t7057 + t7102 + t7125;
  t7189 = t7188 + t6645;
  t5151 = 9.e-13*var1[8];
  t6726 = t6426 + t6717;
  t5174 = -9.e-12*t5168;
  t6827 = -1.000000000009*t5168;
  t6870 = 1. + t6827;
  t7672 = t7188 + t6717;
  t7184 = 9.e-12*t5168;
  p_output1[0]=0.2000000000018*t3658*t4880 - 6.000000000054e-7*t3658*t4957 - 0.2000000000018*t3940*t5008*t5065 + t5150*(t5151 + 0.2000000000018*t5168 + 0.1*(t5174 + t5196) - 9.e-7*t6646) + (t5151 + 0.1000000000009*t5168 + 0.2*(t5174 + t5175) - 9.e-7*t6726)*t7155 + 0.2*(t5150*t6870 + t7155*(t5196 + t7184) + t6688*t7189) + 0.100001*((1. - 1.8e-11*t5168)*t6688 + t7155*t7189 + t5150*t7672) - 0.3*(t6870*t7155 + t5150*(t5175 + t7184) + t6688*t7672) + var1[2] + t6688*(-1.62e-17*t5168 + 0.1*t6646 + 0.2*t6726 + 3.e-7*var1[8]);
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
