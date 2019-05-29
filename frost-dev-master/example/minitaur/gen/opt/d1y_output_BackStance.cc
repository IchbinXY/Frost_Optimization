/*
 * Automatically Generated from Mathematica.
 * Tue 28 May 2019 22:43:41 GMT-04:00
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
static void output1(double *p_output1,const double *var1,const double *var2,const double *var3,const double *var4,const double *var5,const double *var6,const double *var7)
{
  double t212;
  double t226;
  double t254;
  double t271;
  double t279;
  double t284;
  double t296;
  double t312;
  double t335;
  double t339;
  double t359;
  double t442;
  double t457;
  double t469;
  double t494;
  double t511;
  double t581;
  double t598;
  double t620;
  double t659;
  double t669;
  double t679;
  t212 = -1.*var5[0];
  t226 = t212 + var5[1];
  t254 = Power(t226,-5);
  t271 = -1. + var6[0];
  t279 = -1. + var7[0];
  t284 = 1/t279;
  t296 = -1.*var1[0];
  t312 = t296 + var1[1];
  t335 = t271*t284*t312;
  t339 = t212 + var1[0] + t335;
  t359 = Power(t339,4);
  t442 = Power(t226,-4);
  t457 = Power(t339,3);
  t469 = 1/t226;
  t494 = -1.*t469*t339;
  t511 = 1. + t494;
  t581 = Power(t226,-3);
  t598 = Power(t339,2);
  t620 = Power(t511,2);
  t659 = Power(t226,-2);
  t669 = Power(t511,3);
  t679 = Power(t511,4);
  p_output1[0]=0.5*var3[6] + 0.5*var3[7] + 5.*t469*t679*var4[0] + 20.*t339*t659*t669*var4[8] - 5.*t469*t679*var4[8] + 30.*t581*t598*t620*var4[16] - 20.*t339*t659*t669*var4[16] + 20.*t442*t457*t511*var4[24] - 30.*t581*t598*t620*var4[24] + 5.*t254*t359*var4[32] - 20.*t442*t457*t511*var4[32] - 5.*t254*t359*var4[40];
  p_output1[1]=-1.*var3[6] + var3[7] + 5.*t469*t679*var4[1] + 20.*t339*t659*t669*var4[9] - 5.*t469*t679*var4[9] + 30.*t581*t598*t620*var4[17] - 20.*t339*t659*t669*var4[17] + 20.*t442*t457*t511*var4[25] - 30.*t581*t598*t620*var4[25] + 5.*t254*t359*var4[33] - 20.*t442*t457*t511*var4[33] - 5.*t254*t359*var4[41];
  p_output1[2]=0.5*var3[10] + 0.5*var3[11] + 5.*t469*t679*var4[2] + 20.*t339*t659*t669*var4[10] - 5.*t469*t679*var4[10] + 30.*t581*t598*t620*var4[18] - 20.*t339*t659*t669*var4[18] + 20.*t442*t457*t511*var4[26] - 30.*t581*t598*t620*var4[26] + 5.*t254*t359*var4[34] - 20.*t442*t457*t511*var4[34] - 5.*t254*t359*var4[42];
  p_output1[3]=-1.*var3[10] + var3[11] + 5.*t469*t679*var4[3] + 20.*t339*t659*t669*var4[11] - 5.*t469*t679*var4[11] + 30.*t581*t598*t620*var4[19] - 20.*t339*t659*t669*var4[19] + 20.*t442*t457*t511*var4[27] - 30.*t581*t598*t620*var4[27] + 5.*t254*t359*var4[35] - 20.*t442*t457*t511*var4[35] - 5.*t254*t359*var4[43];
  p_output1[4]=0.5*var3[14] + 0.5*var3[15] + 5.*t469*t679*var4[4] + 20.*t339*t659*t669*var4[12] - 5.*t469*t679*var4[12] + 30.*t581*t598*t620*var4[20] - 20.*t339*t659*t669*var4[20] + 20.*t442*t457*t511*var4[28] - 30.*t581*t598*t620*var4[28] + 5.*t254*t359*var4[36] - 20.*t442*t457*t511*var4[36] - 5.*t254*t359*var4[44];
  p_output1[5]=-1.*var3[14] + var3[15] + 5.*t469*t679*var4[5] + 20.*t339*t659*t669*var4[13] - 5.*t469*t679*var4[13] + 30.*t581*t598*t620*var4[21] - 20.*t339*t659*t669*var4[21] + 20.*t442*t457*t511*var4[29] - 30.*t581*t598*t620*var4[29] + 5.*t254*t359*var4[37] - 20.*t442*t457*t511*var4[37] - 5.*t254*t359*var4[45];
  p_output1[6]=0.5*var3[18] + 0.5*var3[19] + 5.*t469*t679*var4[6] + 20.*t339*t659*t669*var4[14] - 5.*t469*t679*var4[14] + 30.*t581*t598*t620*var4[22] - 20.*t339*t659*t669*var4[22] + 20.*t442*t457*t511*var4[30] - 30.*t581*t598*t620*var4[30] + 5.*t254*t359*var4[38] - 20.*t442*t457*t511*var4[38] - 5.*t254*t359*var4[46];
  p_output1[7]=-1.*var3[18] + var3[19] + 5.*t469*t679*var4[7] + 20.*t339*t659*t669*var4[15] - 5.*t469*t679*var4[15] + 30.*t581*t598*t620*var4[23] - 20.*t339*t659*t669*var4[23] + 20.*t442*t457*t511*var4[31] - 30.*t581*t598*t620*var4[31] + 5.*t254*t359*var4[39] - 20.*t442*t457*t511*var4[39] - 5.*t254*t359*var4[47];
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

  double *var1,*var2,*var3,*var4,*var5,*var6,*var7;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 7)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Seven input(s) required (var1,var2,var3,var4,var5,var6,var7).");
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
    ( !(mrows == 22 && ncols == 1) && 
      !(mrows == 1 && ncols == 22))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var3 is wrong.");
    }
  mrows = mxGetM(prhs[3]);
  ncols = mxGetN(prhs[3]);
  if( !mxIsDouble(prhs[3]) || mxIsComplex(prhs[3]) ||
    ( !(mrows == 48 && ncols == 1) && 
      !(mrows == 1 && ncols == 48))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var4 is wrong.");
    }
  mrows = mxGetM(prhs[4]);
  ncols = mxGetN(prhs[4]);
  if( !mxIsDouble(prhs[4]) || mxIsComplex(prhs[4]) ||
    ( !(mrows == 2 && ncols == 1) && 
      !(mrows == 1 && ncols == 2))) 
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
  mrows = mxGetM(prhs[6]);
  ncols = mxGetN(prhs[6]);
  if( !mxIsDouble(prhs[6]) || mxIsComplex(prhs[6]) ||
    ( !(mrows == 1 && ncols == 1) && 
      !(mrows == 1 && ncols == 1))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var7 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
  var3 = mxGetPr(prhs[2]);
  var4 = mxGetPr(prhs[3]);
  var5 = mxGetPr(prhs[4]);
  var6 = mxGetPr(prhs[5]);
  var7 = mxGetPr(prhs[6]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 8, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3,var4,var5,var6,var7);


}

#else // MATLAB_MEX_FILE

#include "d1y_output_BackStance.hh"

namespace BackStance
{

void d1y_output_BackStance_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4,const double *var5,const double *var6,const double *var7)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4, var5, var6, var7);

}

}

#endif // MATLAB_MEX_FILE
