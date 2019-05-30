/*
 * Automatically Generated from Mathematica.
 * Wed 29 May 2019 23:44:19 GMT-04:00
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
  double t16918;
  double t17707;
  double t17711;
  double t17725;
  double t17818;
  double t17819;
  double t17857;
  double t17890;
  double t18230;
  double t18613;
  double t19508;
  double t19544;
  double t19546;
  double t19566;
  double t19588;
  double t19589;
  double t19614;
  double t19623;
  double t19639;
  double t19642;
  double t19648;
  double t19676;
  double t19678;
  double t19681;
  double t19730;
  double t19732;
  double t19789;
  double t19798;
  double t19827;
  double t19828;
  double t19835;
  double t20216;
  double t20219;
  double t20233;
  double t20296;
  double t20302;
  double t20398;
  double t20457;
  t16342 = var1[14] + var1[16];
  t16354 = Cos(t16342);
  t16918 = 0.1*t16354;
  t17707 = var1[15] + var1[17];
  t17711 = Cos(t17707);
  t17725 = -0.1*t17711;
  t17818 = Sin(t16342);
  t17819 = -0.1*t17818;
  t17857 = Sin(t17707);
  t17890 = 0.1*t17857;
  t18230 = var1[6] + var1[8];
  t18613 = Cos(t18230);
  t19508 = 0.1*t18613;
  t19544 = var1[9] + var1[7];
  t19546 = Cos(t19544);
  t19566 = -0.1*t19546;
  t19588 = Sin(t18230);
  t19589 = -0.1*t19588;
  t19614 = Sin(t19544);
  t19623 = 0.1*t19614;
  t19639 = var1[18] + var1[20];
  t19642 = Cos(t19639);
  t19648 = 0.1*t19642;
  t19676 = var1[19] + var1[21];
  t19678 = Cos(t19676);
  t19681 = -0.1*t19678;
  t19730 = Sin(t19639);
  t19732 = -0.1*t19730;
  t19789 = Sin(t19676);
  t19798 = 0.1*t19789;
  t19827 = var1[10] + var1[12];
  t19828 = Cos(t19827);
  t19835 = 0.1*t19828;
  t20216 = var1[11] + var1[13];
  t20219 = Cos(t20216);
  t20233 = -0.1*t20219;
  t20296 = Sin(t19827);
  t20302 = -0.1*t20296;
  t20398 = Sin(t20216);
  t20457 = 0.1*t20398;
  p_output1[0]=t16918 + 0.05*Cos(var1[14]);
  p_output1[1]=t17725 - 0.05*Cos(var1[15]);
  p_output1[2]=t16918;
  p_output1[3]=t17725;
  p_output1[4]=-1.;
  p_output1[5]=t17819 - 0.05*Sin(var1[14]);
  p_output1[6]=t17890 + 0.05*Sin(var1[15]);
  p_output1[7]=t17819;
  p_output1[8]=t17890;
  p_output1[9]=-1.;
  p_output1[10]=t19508 + 0.05*Cos(var1[6]);
  p_output1[11]=t19566 - 0.05*Cos(var1[7]);
  p_output1[12]=t19508;
  p_output1[13]=t19566;
  p_output1[14]=-1.;
  p_output1[15]=t19589 - 0.05*Sin(var1[6]);
  p_output1[16]=t19623 + 0.05*Sin(var1[7]);
  p_output1[17]=t19589;
  p_output1[18]=t19623;
  p_output1[19]=-1.;
  p_output1[20]=t19648 + 0.05*Cos(var1[18]);
  p_output1[21]=t19681 - 0.05*Cos(var1[19]);
  p_output1[22]=t19648;
  p_output1[23]=t19681;
  p_output1[24]=-1.;
  p_output1[25]=t19732 - 0.05*Sin(var1[18]);
  p_output1[26]=t19798 + 0.05*Sin(var1[19]);
  p_output1[27]=t19732;
  p_output1[28]=t19798;
  p_output1[29]=-1.;
  p_output1[30]=t19835 + 0.05*Cos(var1[10]);
  p_output1[31]=t20233 - 0.05*Cos(var1[11]);
  p_output1[32]=t19835;
  p_output1[33]=t20233;
  p_output1[34]=-1.;
  p_output1[35]=t20302 - 0.05*Sin(var1[10]);
  p_output1[36]=t20457 + 0.05*Sin(var1[11]);
  p_output1[37]=t20302;
  p_output1[38]=t20457;
  p_output1[39]=-1.;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 40, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_h_fourBar_minitaur.hh"

namespace FrontStance
{

void J_h_fourBar_minitaur_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
