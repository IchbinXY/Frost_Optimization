/*
 * Automatically Generated from Mathematica.
 * Wed 29 May 2019 23:43:00 GMT-04:00
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
static void output1(double *p_output1,const double *var1,const double *var2,const double *var3,const double *var4)
{
  double t545;
  double t663;
  double t1516;
  double t2405;
  double t2449;
  double t3025;
  double t3051;
  double t3272;
  double t3357;
  double t3533;
  double t3538;
  double t3541;
  double t3543;
  double t3545;
  double t3681;
  double t3682;
  double t3694;
  double t3863;
  double t3877;
  double t3957;
  double t3998;
  double t4020;
  double t4021;
  double t4219;
  double t4220;
  double t4227;
  double t4228;
  t545 = Power(var3[6],2);
  t663 = Power(var2[0],2);
  t1516 = t545*t663;
  t2405 = Power(var3[7],2);
  t2449 = Power(var2[1],2);
  t3025 = t2405*t2449;
  t3051 = Power(var3[10],2);
  t3272 = Power(var2[2],2);
  t3357 = t3051*t3272;
  t3533 = Power(var3[11],2);
  t3538 = Power(var2[3],2);
  t3541 = t3533*t3538;
  t3543 = Power(var3[14],2);
  t3545 = Power(var2[4],2);
  t3681 = t3543*t3545;
  t3682 = Power(var3[15],2);
  t3694 = Power(var2[5],2);
  t3863 = t3682*t3694;
  t3877 = Power(var3[18],2);
  t3957 = Power(var2[6],2);
  t3998 = t3877*t3957;
  t4020 = Power(var3[19],2);
  t4021 = Power(var2[7],2);
  t4219 = t4020*t4021;
  t4220 = t1516 + t3025 + t3357 + t3541 + t3681 + t3863 + t3998 + t4219;
  t4227 = -1.*var1[0];
  t4228 = t4227 + var1[1];
  p_output1[0]=-1.*t4220*var4[0];
  p_output1[1]=t4220*var4[0];
  p_output1[2]=2.*t4228*t545*var2[0]*var4[0];
  p_output1[3]=2.*t2405*t4228*var2[1]*var4[0];
  p_output1[4]=2.*t3051*t4228*var2[2]*var4[0];
  p_output1[5]=2.*t3533*t4228*var2[3]*var4[0];
  p_output1[6]=2.*t3543*t4228*var2[4]*var4[0];
  p_output1[7]=2.*t3682*t4228*var2[5]*var4[0];
  p_output1[8]=2.*t3877*t4228*var2[6]*var4[0];
  p_output1[9]=2.*t4020*t4228*var2[7]*var4[0];
  p_output1[10]=2.*t4228*t663*var3[6]*var4[0];
  p_output1[11]=2.*t2449*t4228*var3[7]*var4[0];
  p_output1[12]=2.*t3272*t4228*var3[10]*var4[0];
  p_output1[13]=2.*t3538*t4228*var3[11]*var4[0];
  p_output1[14]=2.*t3545*t4228*var3[14]*var4[0];
  p_output1[15]=2.*t3694*t4228*var3[15]*var4[0];
  p_output1[16]=2.*t3957*t4228*var3[18]*var4[0];
  p_output1[17]=2.*t4021*t4228*var3[19]*var4[0];
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

  double *var1,*var2,*var3,*var4;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 4)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Four input(s) required (var1,var2,var3,var4).");
    }
  else if( nlhs > 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:maxlhs", "Too many output arguments.");
    }

  /*  The input must be a noncomplex double vector or scaler.  */
  mrows = mxGetM(prhs[0]);
  ncols = mxGetN(prhs[0]);
  if( !mxIsDouble(prhs[0]) || mxIsComplex(prhs[0]) ||
    ( !(mrows == 2 && ncols == 1) && 
      !(mrows == 1 && ncols == 2))) 
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
  mrows = mxGetM(prhs[2]);
  ncols = mxGetN(prhs[2]);
  if( !mxIsDouble(prhs[2]) || mxIsComplex(prhs[2]) ||
    ( !(mrows == 22 && ncols == 1) && 
      !(mrows == 1 && ncols == 22))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var3 is wrong.");
    }
  mrows = mxGetM(prhs[3]);
  ncols = mxGetN(prhs[3]);
  if( !mxIsDouble(prhs[3]) || mxIsComplex(prhs[3]) ||
    ( !(mrows == 1 && ncols == 1) && 
      !(mrows == 1 && ncols == 1))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var4 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
  var3 = mxGetPr(prhs[2]);
  var4 = mxGetPr(prhs[3]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 18, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3,var4);


}

#else // MATLAB_MEX_FILE

#include "J_power_FrontStance_integral.hh"

namespace FrontStance
{

void J_power_FrontStance_integral_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4);

}

}

#endif // MATLAB_MEX_FILE
