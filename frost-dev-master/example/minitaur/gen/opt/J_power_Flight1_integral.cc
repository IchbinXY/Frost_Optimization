/*
 * Automatically Generated from Mathematica.
 * Wed 29 May 2019 23:43:12 GMT-04:00
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
  double t4223;
  double t4224;
  double t4231;
  double t4232;
  double t4235;
  double t4236;
  double t4279;
  double t4283;
  double t4288;
  double t4291;
  double t4292;
  double t4295;
  double t4298;
  double t4308;
  double t4311;
  double t4671;
  double t5024;
  double t5235;
  double t6036;
  double t6378;
  double t6882;
  double t7306;
  double t8292;
  double t8298;
  double t8601;
  double t12132;
  double t12133;
  t4223 = Power(var3[6],2);
  t4224 = Power(var2[0],2);
  t4231 = t4223*t4224;
  t4232 = Power(var3[7],2);
  t4235 = Power(var2[1],2);
  t4236 = t4232*t4235;
  t4279 = Power(var3[10],2);
  t4283 = Power(var2[2],2);
  t4288 = t4279*t4283;
  t4291 = Power(var3[11],2);
  t4292 = Power(var2[3],2);
  t4295 = t4291*t4292;
  t4298 = Power(var3[14],2);
  t4308 = Power(var2[4],2);
  t4311 = t4298*t4308;
  t4671 = Power(var3[15],2);
  t5024 = Power(var2[5],2);
  t5235 = t4671*t5024;
  t6036 = Power(var3[18],2);
  t6378 = Power(var2[6],2);
  t6882 = t6036*t6378;
  t7306 = Power(var3[19],2);
  t8292 = Power(var2[7],2);
  t8298 = t7306*t8292;
  t8601 = t4231 + t4236 + t4288 + t4295 + t4311 + t5235 + t6882 + t8298;
  t12132 = -1.*var1[0];
  t12133 = t12132 + var1[1];
  p_output1[0]=-1.*t8601*var4[0];
  p_output1[1]=t8601*var4[0];
  p_output1[2]=2.*t12133*t4223*var2[0]*var4[0];
  p_output1[3]=2.*t12133*t4232*var2[1]*var4[0];
  p_output1[4]=2.*t12133*t4279*var2[2]*var4[0];
  p_output1[5]=2.*t12133*t4291*var2[3]*var4[0];
  p_output1[6]=2.*t12133*t4298*var2[4]*var4[0];
  p_output1[7]=2.*t12133*t4671*var2[5]*var4[0];
  p_output1[8]=2.*t12133*t6036*var2[6]*var4[0];
  p_output1[9]=2.*t12133*t7306*var2[7]*var4[0];
  p_output1[10]=2.*t12133*t4224*var3[6]*var4[0];
  p_output1[11]=2.*t12133*t4235*var3[7]*var4[0];
  p_output1[12]=2.*t12133*t4283*var3[10]*var4[0];
  p_output1[13]=2.*t12133*t4292*var3[11]*var4[0];
  p_output1[14]=2.*t12133*t4308*var3[14]*var4[0];
  p_output1[15]=2.*t12133*t5024*var3[15]*var4[0];
  p_output1[16]=2.*t12133*t6378*var3[18]*var4[0];
  p_output1[17]=2.*t12133*t8292*var3[19]*var4[0];
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

#include "J_power_Flight1_integral.hh"

namespace Flight1
{

void J_power_Flight1_integral_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4);

}

}

#endif // MATLAB_MEX_FILE
