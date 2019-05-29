/*
 * Automatically Generated from Mathematica.
 * Tue 28 May 2019 22:49:10 GMT-04:00
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
static void output1(double *p_output1,const double *var1)
{
  double t634;
  double t47;
  double t671;
  double t675;
  double t890;
  double t1239;
  double t963;
  double t1254;
  double t1638;
  double t1647;
  double t1657;
  double t1738;
  double t3315;
  double t428;
  double t562;
  double t1230;
  double t1275;
  double t1414;
  double t1579;
  double t1580;
  double t1582;
  double t3551;
  double t3560;
  double t3703;
  double t3426;
  double t3469;
  double t3711;
  double t3645;
  double t3661;
  double t3664;
  double t3670;
  double t3680;
  double t3687;
  double t3830;
  double t3849;
  double t3875;
  double t3884;
  double t4004;
  double t4010;
  double t4040;
  double t4046;
  double t4052;
  double t4062;
  double t4097;
  double t4250;
  double t4254;
  double t4117;
  double t3719;
  double t4102;
  double t4297;
  t634 = Cos(var1[10]);
  t47 = Cos(var1[3]);
  t671 = -1.*t634;
  t675 = 1. + t671;
  t890 = Cos(var1[5]);
  t1239 = Sin(var1[3]);
  t963 = Sin(var1[4]);
  t1254 = Sin(var1[5]);
  t1638 = Cos(var1[12]);
  t1647 = -1.*t1638;
  t1657 = 1. + t1647;
  t1738 = -3.e-6*t1657;
  t3315 = Sin(var1[12]);
  t428 = Cos(var1[4]);
  t562 = Sin(var1[10]);
  t1230 = -1.*t47*t890*t963;
  t1275 = t1239*t1254;
  t1414 = t1230 + t1275;
  t1579 = t890*t1239;
  t1580 = t47*t963*t1254;
  t1582 = t1579 + t1580;
  t3551 = 3.e-6*t3315;
  t3560 = t1738 + t3551;
  t3703 = 3.e-13*var1[12];
  t3426 = -3.e-6*t3315;
  t3469 = t1738 + t3426;
  t3711 = -9.e-12*t1657;
  t3645 = -3.e-6*t47*t428*t562;
  t3661 = 3.e-6*t675*t1414;
  t3664 = -9.e-12*t675;
  t3670 = 1. + t3664;
  t3680 = t3670*t1582;
  t3687 = t3645 + t3661 + t3680;
  t3830 = t47*t428*t562;
  t3849 = t634*t1414;
  t3875 = 3.e-6*t675*t1582;
  t3884 = t3830 + t3849 + t3875;
  t4004 = -1.000000000009*t675;
  t4010 = 1. + t4004;
  t4040 = t4010*t47*t428;
  t4046 = -1.*t562*t1414;
  t4052 = 3.e-6*t562*t1582;
  t4062 = t4040 + t4046 + t4052;
  t4097 = 3.e-6*t1657;
  t4250 = -1.000000000009*t1657;
  t4254 = 1. + t4250;
  t4117 = 9.e-12*t1657;
  t3719 = -1.*t3315;
  t4102 = t4097 + t3426;
  t4297 = t4097 + t3551;
  p_output1[0]=(-0.2000000000048*t1657 + 3.e-7*t3560 + t3703 + 0.100000000003*(t3711 + t3719))*t3884 + (0.1000000000039*t1657 + 3.e-7*t3469 + t3703 - 0.200000000003*(t3315 + t3711))*t4062 - 0.3*(t3687*t4102 + t3884*(t3315 + t4117) + t4062*t4254) + 0.2*(-1.*t4062*(t3719 + t4117) - 1.*t3884*t4254 - 1.*t3687*t4297) + 0.100001*((1. - 1.8e-11*t1657)*t3687 + t3884*t4102 + t4062*t4297) + 0.2000000000018*t428*t47*t562 + t1414*(0.2*(-1. + t634) - 1.8e-12*t675) + 6.000000000054e-7*t1582*t675 + var1[2] + t3687*(5.4e-18*t1657 - 0.200000000003*t3469 + 0.100000000003*t3560 + 1.e-7*var1[12]);
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

  double *var1;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "One input(s) required (var1).");
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

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 1, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "foot_clearance_Flight.hh"

namespace Flight2
{

void foot_clearance_Flight_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
