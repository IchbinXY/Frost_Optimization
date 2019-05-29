/*
 * Automatically Generated from Mathematica.
 * Tue 28 May 2019 22:43:28 GMT-04:00
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
static void output1(double *p_output1,const double *var1,const double *var2,const double *var3,const double *var4,const double *var5,const double *var6)
{
  double t132;
  double t135;
  double t143;
  double t144;
  double t172;
  double t214;
  double t217;
  double t224;
  double t240;
  double t356;
  double t369;
  double t373;
  double t136;
  double t298;
  double t308;
  double t333;
  double t446;
  double t447;
  double t456;
  double t481;
  double t493;
  double t502;
  double t528;
  double t599;
  t132 = -1.*var4[0];
  t135 = t132 + var4[1];
  t143 = -1. + var5[0];
  t144 = -1. + var6[0];
  t172 = 1/t144;
  t214 = -1.*var1[0];
  t217 = t214 + var1[1];
  t224 = t143*t172*t217;
  t240 = t132 + var1[0] + t224;
  t356 = 1/t135;
  t369 = -1.*t356*t240;
  t373 = 1. + t369;
  t136 = Power(t135,-5);
  t298 = Power(t240,5);
  t308 = Power(t135,-4);
  t333 = Power(t240,4);
  t446 = Power(t135,-3);
  t447 = Power(t240,3);
  t456 = Power(t373,2);
  t481 = Power(t135,-2);
  t493 = Power(t240,2);
  t502 = Power(t373,3);
  t528 = Power(t373,4);
  t599 = Power(t373,5);
  p_output1[0]=0.5*(var2[6] + var2[7]) - 1.*t599*var3[0] - 5.*t240*t356*t528*var3[8] - 10.*t481*t493*t502*var3[16] - 10.*t446*t447*t456*var3[24] - 5.*t308*t333*t373*var3[32] - 1.*t136*t298*var3[40];
  p_output1[1]=-1.*var2[6] + var2[7] - 1.*t599*var3[1] - 5.*t240*t356*t528*var3[9] - 10.*t481*t493*t502*var3[17] - 10.*t446*t447*t456*var3[25] - 5.*t308*t333*t373*var3[33] - 1.*t136*t298*var3[41];
  p_output1[2]=0.5*(var2[10] + var2[11]) - 1.*t599*var3[2] - 5.*t240*t356*t528*var3[10] - 10.*t481*t493*t502*var3[18] - 10.*t446*t447*t456*var3[26] - 5.*t308*t333*t373*var3[34] - 1.*t136*t298*var3[42];
  p_output1[3]=-1.*var2[10] + var2[11] - 1.*t599*var3[3] - 5.*t240*t356*t528*var3[11] - 10.*t481*t493*t502*var3[19] - 10.*t446*t447*t456*var3[27] - 5.*t308*t333*t373*var3[35] - 1.*t136*t298*var3[43];
  p_output1[4]=0.5*(var2[14] + var2[15]) - 1.*t599*var3[4] - 5.*t240*t356*t528*var3[12] - 10.*t481*t493*t502*var3[20] - 10.*t446*t447*t456*var3[28] - 5.*t308*t333*t373*var3[36] - 1.*t136*t298*var3[44];
  p_output1[5]=-1.*var2[14] + var2[15] - 1.*t599*var3[5] - 5.*t240*t356*t528*var3[13] - 10.*t481*t493*t502*var3[21] - 10.*t446*t447*t456*var3[29] - 5.*t308*t333*t373*var3[37] - 1.*t136*t298*var3[45];
  p_output1[6]=0.5*(var2[18] + var2[19]) - 1.*t599*var3[6] - 5.*t240*t356*t528*var3[14] - 10.*t481*t493*t502*var3[22] - 10.*t446*t447*t456*var3[30] - 5.*t308*t333*t373*var3[38] - 1.*t136*t298*var3[46];
  p_output1[7]=-1.*var2[18] + var2[19] - 1.*t599*var3[7] - 5.*t240*t356*t528*var3[15] - 10.*t481*t493*t502*var3[23] - 10.*t446*t447*t456*var3[31] - 5.*t308*t333*t373*var3[39] - 1.*t136*t298*var3[47];
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

  double *var1,*var2,*var3,*var4,*var5,*var6;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 6)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Six input(s) required (var1,var2,var3,var4,var5,var6).");
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
    ( !(mrows == 22 && ncols == 1) && 
      !(mrows == 1 && ncols == 22))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var2 is wrong.");
    }
  mrows = mxGetM(prhs[2]);
  ncols = mxGetN(prhs[2]);
  if( !mxIsDouble(prhs[2]) || mxIsComplex(prhs[2]) ||
    ( !(mrows == 48 && ncols == 1) && 
      !(mrows == 1 && ncols == 48))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var3 is wrong.");
    }
  mrows = mxGetM(prhs[3]);
  ncols = mxGetN(prhs[3]);
  if( !mxIsDouble(prhs[3]) || mxIsComplex(prhs[3]) ||
    ( !(mrows == 2 && ncols == 1) && 
      !(mrows == 1 && ncols == 2))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var4 is wrong.");
    }
  mrows = mxGetM(prhs[4]);
  ncols = mxGetN(prhs[4]);
  if( !mxIsDouble(prhs[4]) || mxIsComplex(prhs[4]) ||
    ( !(mrows == 1 && ncols == 1) && 
      !(mrows == 1 && ncols == 1))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var5 is wrong.");
    }
  mrows = mxGetM(prhs[5]);
  ncols = mxGetN(prhs[5]);
  if( !mxIsDouble(prhs[5]) || mxIsComplex(prhs[5]) ||
    ( !(mrows == 1 && ncols == 1) && 
      !(mrows == 1 && ncols == 1))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var6 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
  var3 = mxGetPr(prhs[2]);
  var4 = mxGetPr(prhs[3]);
  var5 = mxGetPr(prhs[4]);
  var6 = mxGetPr(prhs[5]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 8, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3,var4,var5,var6);


}

#else // MATLAB_MEX_FILE

#include "y_output_BackStance.hh"

namespace BackStance
{

void y_output_BackStance_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4,const double *var5,const double *var6)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4, var5, var6);

}

}

#endif // MATLAB_MEX_FILE
