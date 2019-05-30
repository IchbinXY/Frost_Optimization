/*
 * Automatically Generated from Mathematica.
 * Wed 29 May 2019 23:44:26 GMT-04:00
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
  double t16342;
  double t16354;
  double t17725;
  double t17729;
  double t17857;
  double t19508;
  double t19572;
  double t19575;
  double t19623;
  double t19624;
  double t19673;
  double t19730;
  double t19806;
  double t19812;
  double t20216;
  double t20219;
  double t20369;
  double t20503;
  double t20595;
  double t20598;
  double t20845;
  double t20859;
  double t20958;
  double t21069;
  t16342 = var1[14] + var1[16];
  t16354 = Cos(t16342);
  t17725 = var1[15] + var1[17];
  t17729 = Cos(t17725);
  t17857 = Sin(t16342);
  t19508 = Sin(t17725);
  t19572 = var1[9] + var1[7];
  t19575 = Cos(t19572);
  t19623 = var1[6] + var1[8];
  t19624 = Cos(t19623);
  t19673 = Sin(t19572);
  t19730 = Sin(t19623);
  t19806 = var1[18] + var1[20];
  t19812 = Cos(t19806);
  t20216 = var1[19] + var1[21];
  t20219 = Cos(t20216);
  t20369 = Sin(t19806);
  t20503 = Sin(t20216);
  t20595 = var1[10] + var1[12];
  t20598 = Cos(t20595);
  t20845 = var1[11] + var1[13];
  t20859 = Cos(t20845);
  t20958 = Sin(t20595);
  t21069 = Sin(t20845);
  p_output1[0]=(0.1*t16354 + 0.05*Cos(var1[14]))*var2[14] + (-0.1*t17729 - 0.05*Cos(var1[15]))*var2[15] + 0.1*t16354*var2[16] - 0.1*t17729*var2[17];
  p_output1[1]=-0.1*t17857*var2[16] + 0.1*t19508*var2[17] + var2[14]*(-0.1*t17857 - 0.05*Sin(var1[14])) + var2[15]*(0.1*t19508 + 0.05*Sin(var1[15]));
  p_output1[2]=(0.1*t19624 + 0.05*Cos(var1[6]))*var2[6] + (-0.1*t19575 - 0.05*Cos(var1[7]))*var2[7] + 0.1*t19624*var2[8] - 0.1*t19575*var2[9];
  p_output1[3]=-0.1*t19730*var2[8] + 0.1*t19673*var2[9] + var2[6]*(-0.1*t19730 - 0.05*Sin(var1[6])) + var2[7]*(0.1*t19673 + 0.05*Sin(var1[7]));
  p_output1[4]=(0.1*t19812 + 0.05*Cos(var1[18]))*var2[18] + (-0.1*t20219 - 0.05*Cos(var1[19]))*var2[19] + 0.1*t19812*var2[20] - 0.1*t20219*var2[21];
  p_output1[5]=-0.1*t20369*var2[20] + 0.1*t20503*var2[21] + var2[18]*(-0.1*t20369 - 0.05*Sin(var1[18])) + var2[19]*(0.1*t20503 + 0.05*Sin(var1[19]));
  p_output1[6]=(0.1*t20598 + 0.05*Cos(var1[10]))*var2[10] + (-0.1*t20859 - 0.05*Cos(var1[11]))*var2[11] + 0.1*t20598*var2[12] - 0.1*t20859*var2[13];
  p_output1[7]=-0.1*t20958*var2[12] + 0.1*t21069*var2[13] + var2[10]*(-0.1*t20958 - 0.05*Sin(var1[10])) + var2[11]*(0.1*t21069 + 0.05*Sin(var1[11]));
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
    ( !(mrows == 22 && ncols == 1) && 
      !(mrows == 1 && ncols == 22))) 
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

#include "dh_fourBar_minitaur.hh"

namespace FrontStance
{

void dh_fourBar_minitaur_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
