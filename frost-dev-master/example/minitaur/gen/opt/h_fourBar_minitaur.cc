/*
 * Automatically Generated from Mathematica.
 * Wed 29 May 2019 23:44:15 GMT-04:00
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
  double t17230;
  double t17707;
  double t19509;
  double t19544;
  double t19650;
  double t19676;
  double t19838;
  double t20216;
  t17230 = var1[14] + var1[16];
  t17707 = var1[15] + var1[17];
  t19509 = var1[9] + var1[7];
  t19544 = var1[6] + var1[8];
  t19650 = var1[18] + var1[20];
  t19676 = var1[19] + var1[21];
  t19838 = var1[10] + var1[12];
  t20216 = var1[11] + var1[13];
  p_output1[0]=-1.*var2[0] + 0.1*Sin(t17230) - 0.1*Sin(t17707) + 0.05*Sin(var1[14]) - 0.05*Sin(var1[15]);
  p_output1[1]=0.1*Cos(t17230) - 0.1*Cos(t17707) + 0.05*Cos(var1[14]) - 0.05*Cos(var1[15]) - 1.*var2[1];
  p_output1[2]=-1.*var2[2] - 0.1*Sin(t19509) + 0.1*Sin(t19544) + 0.05*Sin(var1[6]) - 0.05*Sin(var1[7]);
  p_output1[3]=-0.1*Cos(t19509) + 0.1*Cos(t19544) + 0.05*Cos(var1[6]) - 0.05*Cos(var1[7]) - 1.*var2[3];
  p_output1[4]=-1.*var2[4] + 0.1*Sin(t19650) - 0.1*Sin(t19676) + 0.05*Sin(var1[18]) - 0.05*Sin(var1[19]);
  p_output1[5]=0.1*Cos(t19650) - 0.1*Cos(t19676) + 0.05*Cos(var1[18]) - 0.05*Cos(var1[19]) - 1.*var2[5];
  p_output1[6]=-1.*var2[6] + 0.1*Sin(t19838) - 0.1*Sin(t20216) + 0.05*Sin(var1[10]) - 0.05*Sin(var1[11]);
  p_output1[7]=0.1*Cos(t19838) - 0.1*Cos(t20216) + 0.05*Cos(var1[10]) - 0.05*Cos(var1[11]) - 1.*var2[7];
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
    ( !(mrows == 8 && ncols == 1) && 
      !(mrows == 1 && ncols == 8))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var2 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 8, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "h_fourBar_minitaur.hh"

namespace FrontStance
{

void h_fourBar_minitaur_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
