/*
 * Automatically Generated from Mathematica.
 * Tue 28 May 2019 22:29:36 GMT-04:00
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
  double t325;
  double t327;
  double t401;
  double t404;
  double t504;
  double t568;
  double t622;
  double t623;
  double t660;
  double t662;
  double t696;
  double t737;
  double t785;
  double t804;
  double t844;
  double t845;
  double t887;
  double t913;
  double t957;
  double t962;
  double t990;
  double t991;
  double t1016;
  double t1049;
  t325 = var1[14] + var1[16];
  t327 = Cos(t325);
  t401 = var1[15] + var1[17];
  t404 = Cos(t401);
  t504 = Sin(t325);
  t568 = Sin(t401);
  t622 = var1[9] + var1[7];
  t623 = Cos(t622);
  t660 = var1[6] + var1[8];
  t662 = Cos(t660);
  t696 = Sin(t622);
  t737 = Sin(t660);
  t785 = var1[18] + var1[20];
  t804 = Cos(t785);
  t844 = var1[19] + var1[21];
  t845 = Cos(t844);
  t887 = Sin(t785);
  t913 = Sin(t844);
  t957 = var1[10] + var1[12];
  t962 = Cos(t957);
  t990 = var1[11] + var1[13];
  t991 = Cos(t990);
  t1016 = Sin(t957);
  t1049 = Sin(t990);
  p_output1[0]=(0.1*t327 + 0.05*Cos(var1[14]))*var2[14] + (-0.1*t404 - 0.05*Cos(var1[15]))*var2[15] + 0.1*t327*var2[16] - 0.1*t404*var2[17];
  p_output1[1]=-0.1*t504*var2[16] + 0.1*t568*var2[17] + var2[14]*(-0.1*t504 - 0.05*Sin(var1[14])) + var2[15]*(0.1*t568 + 0.05*Sin(var1[15]));
  p_output1[2]=(0.1*t662 + 0.05*Cos(var1[6]))*var2[6] + (-0.1*t623 - 0.05*Cos(var1[7]))*var2[7] + 0.1*t662*var2[8] - 0.1*t623*var2[9];
  p_output1[3]=-0.1*t737*var2[8] + 0.1*t696*var2[9] + var2[6]*(-0.1*t737 - 0.05*Sin(var1[6])) + var2[7]*(0.1*t696 + 0.05*Sin(var1[7]));
  p_output1[4]=(0.1*t804 + 0.05*Cos(var1[18]))*var2[18] + (-0.1*t845 - 0.05*Cos(var1[19]))*var2[19] + 0.1*t804*var2[20] - 0.1*t845*var2[21];
  p_output1[5]=-0.1*t887*var2[20] + 0.1*t913*var2[21] + var2[18]*(-0.1*t887 - 0.05*Sin(var1[18])) + var2[19]*(0.1*t913 + 0.05*Sin(var1[19]));
  p_output1[6]=(0.1*t962 + 0.05*Cos(var1[10]))*var2[10] + (-0.1*t991 - 0.05*Cos(var1[11]))*var2[11] + 0.1*t962*var2[12] - 0.1*t991*var2[13];
  p_output1[7]=-0.1*t1016*var2[12] + 0.1*t1049*var2[13] + var2[10]*(-0.1*t1016 - 0.05*Sin(var1[10])) + var2[11]*(0.1*t1049 + 0.05*Sin(var1[11]));
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
