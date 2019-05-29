/*
 * Automatically Generated from Mathematica.
 * Wed 29 May 2019 15:04:10 GMT-04:00
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
  double t128;
  double t130;
  double t138;
  double t140;
  double t141;
  double t143;
  double t145;
  double t146;
  double t148;
  double t153;
  double t155;
  double t156;
  double t158;
  double t160;
  double t161;
  double t163;
  double t165;
  double t166;
  double t168;
  double t170;
  double t173;
  double t178;
  double t180;
  double t181;
  double t183;
  double t193;
  double t195;
  t128 = Power(var3[6],2);
  t130 = Power(var2[0],2);
  t138 = t128*t130;
  t140 = Power(var3[7],2);
  t141 = Power(var2[1],2);
  t143 = t140*t141;
  t145 = Power(var3[10],2);
  t146 = Power(var2[2],2);
  t148 = t145*t146;
  t153 = Power(var3[11],2);
  t155 = Power(var2[3],2);
  t156 = t153*t155;
  t158 = Power(var3[14],2);
  t160 = Power(var2[4],2);
  t161 = t158*t160;
  t163 = Power(var3[15],2);
  t165 = Power(var2[5],2);
  t166 = t163*t165;
  t168 = Power(var3[18],2);
  t170 = Power(var2[6],2);
  t173 = t168*t170;
  t178 = Power(var3[19],2);
  t180 = Power(var2[7],2);
  t181 = t178*t180;
  t183 = t138 + t143 + t148 + t156 + t161 + t166 + t173 + t181;
  t193 = -1.*var1[0];
  t195 = t193 + var1[1];
  p_output1[0]=-1.*t183*var4[0];
  p_output1[1]=t183*var4[0];
  p_output1[2]=2.*t128*t195*var2[0]*var4[0];
  p_output1[3]=2.*t140*t195*var2[1]*var4[0];
  p_output1[4]=2.*t145*t195*var2[2]*var4[0];
  p_output1[5]=2.*t153*t195*var2[3]*var4[0];
  p_output1[6]=2.*t158*t195*var2[4]*var4[0];
  p_output1[7]=2.*t163*t195*var2[5]*var4[0];
  p_output1[8]=2.*t168*t195*var2[6]*var4[0];
  p_output1[9]=2.*t178*t195*var2[7]*var4[0];
  p_output1[10]=2.*t130*t195*var3[6]*var4[0];
  p_output1[11]=2.*t141*t195*var3[7]*var4[0];
  p_output1[12]=2.*t146*t195*var3[10]*var4[0];
  p_output1[13]=2.*t155*t195*var3[11]*var4[0];
  p_output1[14]=2.*t160*t195*var3[14]*var4[0];
  p_output1[15]=2.*t165*t195*var3[15]*var4[0];
  p_output1[16]=2.*t170*t195*var3[18]*var4[0];
  p_output1[17]=2.*t180*t195*var3[19]*var4[0];
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

#include "J_power_BackStance_integral.hh"

namespace BackStance
{

void J_power_BackStance_integral_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4);

}

}

#endif // MATLAB_MEX_FILE
