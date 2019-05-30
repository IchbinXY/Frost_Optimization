/*
 * Automatically Generated from Mathematica.
 * Wed 29 May 2019 23:43:23 GMT-04:00
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
  double t11074;
  double t12006;
  double t12144;
  double t12225;
  double t12226;
  double t12227;
  double t12228;
  double t12229;
  double t12231;
  double t12234;
  double t12236;
  double t12237;
  double t12239;
  double t12241;
  double t12242;
  double t12243;
  double t12248;
  double t13001;
  double t13556;
  double t14603;
  double t14645;
  double t15058;
  double t15440;
  double t15451;
  double t15454;
  double t15466;
  double t15472;
  t11074 = Power(var3[6],2);
  t12006 = Power(var2[0],2);
  t12144 = t11074*t12006;
  t12225 = Power(var3[7],2);
  t12226 = Power(var2[1],2);
  t12227 = t12225*t12226;
  t12228 = Power(var3[10],2);
  t12229 = Power(var2[2],2);
  t12231 = t12228*t12229;
  t12234 = Power(var3[11],2);
  t12236 = Power(var2[3],2);
  t12237 = t12234*t12236;
  t12239 = Power(var3[14],2);
  t12241 = Power(var2[4],2);
  t12242 = t12239*t12241;
  t12243 = Power(var3[15],2);
  t12248 = Power(var2[5],2);
  t13001 = t12243*t12248;
  t13556 = Power(var3[18],2);
  t14603 = Power(var2[6],2);
  t14645 = t13556*t14603;
  t15058 = Power(var3[19],2);
  t15440 = Power(var2[7],2);
  t15451 = t15058*t15440;
  t15454 = t12144 + t12227 + t12231 + t12237 + t12242 + t13001 + t14645 + t15451;
  t15466 = -1.*var1[0];
  t15472 = t15466 + var1[1];
  p_output1[0]=-1.*t15454*var4[0];
  p_output1[1]=t15454*var4[0];
  p_output1[2]=2.*t11074*t15472*var2[0]*var4[0];
  p_output1[3]=2.*t12225*t15472*var2[1]*var4[0];
  p_output1[4]=2.*t12228*t15472*var2[2]*var4[0];
  p_output1[5]=2.*t12234*t15472*var2[3]*var4[0];
  p_output1[6]=2.*t12239*t15472*var2[4]*var4[0];
  p_output1[7]=2.*t12243*t15472*var2[5]*var4[0];
  p_output1[8]=2.*t13556*t15472*var2[6]*var4[0];
  p_output1[9]=2.*t15058*t15472*var2[7]*var4[0];
  p_output1[10]=2.*t12006*t15472*var3[6]*var4[0];
  p_output1[11]=2.*t12226*t15472*var3[7]*var4[0];
  p_output1[12]=2.*t12229*t15472*var3[10]*var4[0];
  p_output1[13]=2.*t12236*t15472*var3[11]*var4[0];
  p_output1[14]=2.*t12241*t15472*var3[14]*var4[0];
  p_output1[15]=2.*t12248*t15472*var3[15]*var4[0];
  p_output1[16]=2.*t14603*t15472*var3[18]*var4[0];
  p_output1[17]=2.*t15440*t15472*var3[19]*var4[0];
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
