/*
 * Automatically Generated from Mathematica.
 * Tue 28 May 2019 23:06:42 GMT-04:00
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
  double t555;
  double t560;
  double t625;
  double t652;
  double t656;
  double t657;
  double t662;
  double t685;
  double t687;
  double t702;
  double t714;
  double t715;
  double t729;
  double t743;
  double t752;
  double t753;
  double t757;
  double t769;
  double t773;
  double t774;
  double t782;
  double t783;
  double t807;
  double t820;
  double t829;
  double t859;
  double t863;
  t555 = Power(var3[6],2);
  t560 = Power(var2[0],2);
  t625 = t555*t560;
  t652 = Power(var3[7],2);
  t656 = Power(var2[1],2);
  t657 = t652*t656;
  t662 = Power(var3[10],2);
  t685 = Power(var2[2],2);
  t687 = t662*t685;
  t702 = Power(var3[11],2);
  t714 = Power(var2[3],2);
  t715 = t702*t714;
  t729 = Power(var3[14],2);
  t743 = Power(var2[4],2);
  t752 = t729*t743;
  t753 = Power(var3[15],2);
  t757 = Power(var2[5],2);
  t769 = t753*t757;
  t773 = Power(var3[18],2);
  t774 = Power(var2[6],2);
  t782 = t773*t774;
  t783 = Power(var3[19],2);
  t807 = Power(var2[7],2);
  t820 = t783*t807;
  t829 = t625 + t657 + t687 + t715 + t752 + t769 + t782 + t820;
  t859 = -1.*var1[0];
  t863 = t859 + var1[1];
  p_output1[0]=-1.*t829*var4[0];
  p_output1[1]=t829*var4[0];
  p_output1[2]=2.*t555*t863*var2[0]*var4[0];
  p_output1[3]=2.*t652*t863*var2[1]*var4[0];
  p_output1[4]=2.*t662*t863*var2[2]*var4[0];
  p_output1[5]=2.*t702*t863*var2[3]*var4[0];
  p_output1[6]=2.*t729*t863*var2[4]*var4[0];
  p_output1[7]=2.*t753*t863*var2[5]*var4[0];
  p_output1[8]=2.*t773*t863*var2[6]*var4[0];
  p_output1[9]=2.*t783*t863*var2[7]*var4[0];
  p_output1[10]=2.*t560*t863*var3[6]*var4[0];
  p_output1[11]=2.*t656*t863*var3[7]*var4[0];
  p_output1[12]=2.*t685*t863*var3[10]*var4[0];
  p_output1[13]=2.*t714*t863*var3[11]*var4[0];
  p_output1[14]=2.*t743*t863*var3[14]*var4[0];
  p_output1[15]=2.*t757*t863*var3[15]*var4[0];
  p_output1[16]=2.*t774*t863*var3[18]*var4[0];
  p_output1[17]=2.*t807*t863*var3[19]*var4[0];
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
