/*
 * Automatically Generated from Mathematica.
 * Wed 29 May 2019 23:44:49 GMT-04:00
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
  double t17230;
  double t17690;
  double t17837;
  double t17890;
  double t17894;
  double t17914;
  double t18230;
  double t17707;
  double t17725;
  double t17729;
  double t17804;
  double t19544;
  double t19546;
  double t19631;
  double t18613;
  double t19509;
  double t19642;
  double t19575;
  double t19588;
  double t19589;
  double t19593;
  double t19594;
  double t19608;
  double t19678;
  double t19681;
  double t19683;
  double t19700;
  double t19799;
  double t19806;
  double t19812;
  double t19827;
  double t19828;
  double t19835;
  double t20053;
  double t20255;
  double t20281;
  double t20219;
  double t19648;
  double t20206;
  double t20369;
  double t20598;
  double t20605;
  double t17819;
  double t17906;
  double t19524;
  double t19567;
  double t19572;
  double t20601;
  double t20795;
  double t20839;
  double t20867;
  double t20874;
  double t20892;
  double t19639;
  double t19650;
  double t19664;
  double t19673;
  double t19676;
  double t19730;
  double t19752;
  double t19769;
  double t19789;
  double t19798;
  double t20915;
  double t20953;
  double t20958;
  double t21014;
  double t20233;
  double t21044;
  double t21045;
  double t21069;
  double t21098;
  double t21141;
  double t21155;
  double t21202;
  double t21206;
  double t20457;
  double t20503;
  double t20510;
  double t21821;
  double t21899;
  double t21905;
  double t21925;
  double t21980;
  double t22029;
  double t22094;
  double t22101;
  double t22122;
  double t22133;
  double t22155;
  double t22182;
  double t22185;
  double t22256;
  double t22423;
  double t22427;
  double t22430;
  double t22438;
  t16342 = Cos(var1[15]);
  t16354 = -1.*t16342;
  t17230 = 1. + t16354;
  t17690 = Cos(var1[4]);
  t17837 = Cos(var1[17]);
  t17890 = -1.*t17837;
  t17894 = 1. + t17890;
  t17914 = -3.e-6*t17894;
  t18230 = Sin(var1[17]);
  t17707 = Cos(var1[5]);
  t17725 = Sin(var1[15]);
  t17729 = Sin(var1[4]);
  t17804 = Sin(var1[5]);
  t19544 = 3.e-6*t18230;
  t19546 = t17914 + t19544;
  t19631 = 9.e-13*var1[17];
  t18613 = -3.e-6*t18230;
  t19509 = t17914 + t18613;
  t19642 = -9.e-12*t17894;
  t19575 = 3.e-6*t17230*t17690*t17707;
  t19588 = -3.e-6*t17725*t17729;
  t19589 = -9.e-12*t17230;
  t19593 = 1. + t19589;
  t19594 = -1.*t19593*t17690*t17804;
  t19608 = t19575 + t19588 + t19594;
  t19678 = t16342*t17690*t17707;
  t19681 = t17725*t17729;
  t19683 = -3.e-6*t17230*t17690*t17804;
  t19700 = t19678 + t19681 + t19683;
  t19799 = -1.*t17690*t17707*t17725;
  t19806 = -1.000000000009*t17230;
  t19812 = 1. + t19806;
  t19827 = t19812*t17729;
  t19828 = -3.e-6*t17690*t17725*t17804;
  t19835 = t19799 + t19827 + t19828;
  t20053 = 3.e-6*t17894;
  t20255 = -1.000000000009*t17894;
  t20281 = 1. + t20255;
  t20219 = 9.e-12*t17894;
  t19648 = -1.*t18230;
  t20206 = t20053 + t18613;
  t20369 = t20053 + t19544;
  t20598 = Sin(var1[3]);
  t20605 = Cos(var1[3]);
  t17819 = 3.e-7*var1[17];
  t17906 = -1.62e-17*t17894;
  t19524 = 0.2*t19509;
  t19567 = 0.1*t19546;
  t19572 = t17819 + t17906 + t19524 + t19567;
  t20601 = t17707*t20598*t17729;
  t20795 = t20605*t17804;
  t20839 = t20601 + t20795;
  t20867 = t20605*t17707;
  t20874 = -1.*t20598*t17729*t17804;
  t20892 = t20867 + t20874;
  t19639 = 0.2000000000018*t17894;
  t19650 = t19642 + t19648;
  t19664 = 0.1*t19650;
  t19673 = -9.e-7*t19546;
  t19676 = t19631 + t19639 + t19664 + t19673;
  t19730 = 0.1000000000009*t17894;
  t19752 = -9.e-7*t19509;
  t19769 = t19642 + t18230;
  t19789 = 0.2*t19769;
  t19798 = t19631 + t19730 + t19752 + t19789;
  t20915 = 3.e-6*t17690*t17725*t20598;
  t20953 = 3.e-6*t17230*t20839;
  t20958 = t19593*t20892;
  t21014 = t20915 + t20953 + t20958;
  t20233 = t20219 + t18230;
  t21044 = -1.*t17690*t17725*t20598;
  t21045 = t16342*t20839;
  t21069 = 3.e-6*t17230*t20892;
  t21098 = t21044 + t21045 + t21069;
  t21141 = -1.*t19812*t17690*t20598;
  t21155 = -1.*t17725*t20839;
  t21202 = 3.e-6*t17725*t20892;
  t21206 = t21141 + t21155 + t21202;
  t20457 = t20219 + t19648;
  t20503 = -1.8e-11*t17894;
  t20510 = 1. + t20503;
  t21821 = -1.*t20605*t17707*t17729;
  t21899 = t20598*t17804;
  t21905 = t21821 + t21899;
  t21925 = t17707*t20598;
  t21980 = t20605*t17729*t17804;
  t22029 = t21925 + t21980;
  t22094 = -3.e-6*t20605*t17690*t17725;
  t22101 = 3.e-6*t17230*t21905;
  t22122 = t19593*t22029;
  t22133 = t22094 + t22101 + t22122;
  t22155 = t20605*t17690*t17725;
  t22182 = t16342*t21905;
  t22185 = 3.e-6*t17230*t22029;
  t22256 = t22155 + t22182 + t22185;
  t22423 = t19812*t20605*t17690;
  t22427 = -1.*t17725*t21905;
  t22430 = 3.e-6*t17725*t22029;
  t22438 = t22423 + t22427 + t22430;
  p_output1[0]=0.2000000000018*t17230*t17690*t17707 - 0.2000000000018*t17725*t17729 + 6.000000000054e-7*t17230*t17690*t17804 + t19572*t19608 + t19676*t19700 + t19798*t19835 - 0.3*(t19608*t20206 + t19700*t20233 + t19835*t20281) + 0.2*(t19700*t20281 + t19608*t20369 + t19835*t20457) - 0.099999*(t19700*t20206 + t19835*t20369 + t19608*t20510) + var1[0] - 1.*var2[0];
  p_output1[1]=0.2000000000018*t17690*t17725*t20598 + 0.2000000000018*t17230*t20839 - 6.000000000054e-7*t17230*t20892 + t19572*t21014 + t19676*t21098 + t19798*t21206 - 0.3*(t20206*t21014 + t20233*t21098 + t20281*t21206) - 0.099999*(t20510*t21014 + t20206*t21098 + t20369*t21206) + 0.2*(t20369*t21014 + t20281*t21098 + t20457*t21206) + var1[1] - 1.*var2[1];
  p_output1[2]=-0.2000000000018*t17690*t17725*t20605 + 0.2000000000018*t17230*t21905 - 6.000000000054e-7*t17230*t22029 + t19572*t22133 + t19676*t22256 + t19798*t22438 - 0.3*(t20206*t22133 + t20233*t22256 + t20281*t22438) - 0.099999*(t20510*t22133 + t20206*t22256 + t20369*t22438) + 0.2*(t20369*t22133 + t20281*t22256 + t20457*t22438) + var1[2] - 1.*var2[2];
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
    ( !(mrows == 3 && ncols == 1) && 
      !(mrows == 1 && ncols == 3))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var2 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "h_RightFrontFoot_FrontStance.hh"

namespace FrontStance
{

void h_RightFrontFoot_FrontStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
