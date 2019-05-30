/*
 * Automatically Generated from Mathematica.
 * Wed 29 May 2019 23:56:24 GMT-04:00
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
  double t1732;
  double t1769;
  double t1812;
  double t3731;
  double t5349;
  double t5995;
  double t6266;
  double t7716;
  double t7723;
  double t3798;
  double t4229;
  double t4234;
  double t4268;
  double t12805;
  double t13630;
  double t15582;
  double t7885;
  double t11060;
  double t15992;
  double t14858;
  double t14935;
  double t14952;
  double t15231;
  double t15294;
  double t15299;
  double t16541;
  double t17226;
  double t17797;
  double t19753;
  double t21531;
  double t22510;
  double t22521;
  double t23836;
  double t24719;
  double t24974;
  double t26008;
  double t26466;
  double t26724;
  double t26290;
  double t15995;
  double t26064;
  double t27953;
  double t1922;
  double t2073;
  double t3433;
  double t3520;
  double t29179;
  double t29243;
  double t4374;
  double t6746;
  double t12626;
  double t14023;
  double t14542;
  double t29210;
  double t29247;
  double t29259;
  double t29271;
  double t29287;
  double t29290;
  double t15649;
  double t16134;
  double t16177;
  double t16261;
  double t16364;
  double t19923;
  double t20146;
  double t20380;
  double t20419;
  double t21152;
  double t29351;
  double t29354;
  double t29377;
  double t29404;
  double t26388;
  double t29420;
  double t29452;
  double t29494;
  double t29519;
  double t29581;
  double t29590;
  double t29601;
  double t29616;
  double t28609;
  double t28870;
  double t28901;
  double t30057;
  double t30085;
  double t30100;
  double t30257;
  double t30270;
  double t30428;
  double t30464;
  double t30489;
  double t30518;
  double t30531;
  double t30552;
  double t30586;
  double t30605;
  double t30631;
  double t30708;
  double t30751;
  double t30804;
  double t30845;
  t1732 = Cos(var1[10]);
  t1769 = -1.*t1732;
  t1812 = 1. + t1769;
  t3731 = Cos(var1[4]);
  t5349 = Cos(var1[12]);
  t5995 = -1.*t5349;
  t6266 = 1. + t5995;
  t7716 = -3.e-6*t6266;
  t7723 = Sin(var1[12]);
  t3798 = Cos(var1[5]);
  t4229 = Sin(var1[10]);
  t4234 = Sin(var1[4]);
  t4268 = Sin(var1[5]);
  t12805 = 3.e-6*t7723;
  t13630 = t7716 + t12805;
  t15582 = 3.e-13*var1[12];
  t7885 = -3.e-6*t7723;
  t11060 = t7716 + t7885;
  t15992 = -9.e-12*t6266;
  t14858 = 3.e-6*t1812*t3731*t3798;
  t14935 = -3.e-6*t4229*t4234;
  t14952 = -9.e-12*t1812;
  t15231 = 1. + t14952;
  t15294 = -1.*t15231*t3731*t4268;
  t15299 = t14858 + t14935 + t15294;
  t16541 = t1732*t3731*t3798;
  t17226 = t4229*t4234;
  t17797 = -3.e-6*t1812*t3731*t4268;
  t19753 = t16541 + t17226 + t17797;
  t21531 = -1.*t3731*t3798*t4229;
  t22510 = -1.000000000009*t1812;
  t22521 = 1. + t22510;
  t23836 = t22521*t4234;
  t24719 = -3.e-6*t3731*t4229*t4268;
  t24974 = t21531 + t23836 + t24719;
  t26008 = 3.e-6*t6266;
  t26466 = -1.000000000009*t6266;
  t26724 = 1. + t26466;
  t26290 = 9.e-12*t6266;
  t15995 = -1.*t7723;
  t26064 = t26008 + t7885;
  t27953 = t26008 + t12805;
  t1922 = -1.8e-12*t1812;
  t2073 = -1. + t1732;
  t3433 = 0.2*t2073;
  t3520 = t1922 + t3433;
  t29179 = Sin(var1[3]);
  t29243 = Cos(var1[3]);
  t4374 = 1.e-7*var1[12];
  t6746 = 5.4e-18*t6266;
  t12626 = -0.200000000003*t11060;
  t14023 = 0.100000000003*t13630;
  t14542 = t4374 + t6746 + t12626 + t14023;
  t29210 = t3798*t29179*t4234;
  t29247 = t29243*t4268;
  t29259 = t29210 + t29247;
  t29271 = t29243*t3798;
  t29287 = -1.*t29179*t4234*t4268;
  t29290 = t29271 + t29287;
  t15649 = -0.2000000000048*t6266;
  t16134 = t15992 + t15995;
  t16177 = 0.100000000003*t16134;
  t16261 = 3.e-7*t13630;
  t16364 = t15582 + t15649 + t16177 + t16261;
  t19923 = 0.1000000000039*t6266;
  t20146 = 3.e-7*t11060;
  t20380 = t15992 + t7723;
  t20419 = -0.200000000003*t20380;
  t21152 = t15582 + t19923 + t20146 + t20419;
  t29351 = 3.e-6*t3731*t4229*t29179;
  t29354 = 3.e-6*t1812*t29259;
  t29377 = t15231*t29290;
  t29404 = t29351 + t29354 + t29377;
  t26388 = t26290 + t7723;
  t29420 = -1.*t3731*t4229*t29179;
  t29452 = t1732*t29259;
  t29494 = 3.e-6*t1812*t29290;
  t29519 = t29420 + t29452 + t29494;
  t29581 = -1.*t22521*t3731*t29179;
  t29590 = -1.*t4229*t29259;
  t29601 = 3.e-6*t4229*t29290;
  t29616 = t29581 + t29590 + t29601;
  t28609 = t26290 + t15995;
  t28870 = -1.8e-11*t6266;
  t28901 = 1. + t28870;
  t30057 = -1.*t29243*t3798*t4234;
  t30085 = t29179*t4268;
  t30100 = t30057 + t30085;
  t30257 = t3798*t29179;
  t30270 = t29243*t4234*t4268;
  t30428 = t30257 + t30270;
  t30464 = -3.e-6*t29243*t3731*t4229;
  t30489 = 3.e-6*t1812*t30100;
  t30518 = t15231*t30428;
  t30531 = t30464 + t30489 + t30518;
  t30552 = t29243*t3731*t4229;
  t30586 = t1732*t30100;
  t30605 = 3.e-6*t1812*t30428;
  t30631 = t30552 + t30586 + t30605;
  t30708 = t22521*t29243*t3731;
  t30751 = -1.*t4229*t30100;
  t30804 = 3.e-6*t4229*t30428;
  t30845 = t30708 + t30751 + t30804;
  p_output1[0]=t14542*t15299 + t16364*t19753 + t21152*t24974 - 0.3*(t15299*t26064 + t19753*t26388 + t24974*t26724) + 0.2*(-1.*t19753*t26724 - 1.*t15299*t27953 - 1.*t24974*t28609) + 0.100001*(t19753*t26064 + t24974*t27953 + t15299*t28901) + t3520*t3731*t3798 + 0.2000000000018*t4229*t4234 - 6.000000000054e-7*t1812*t3731*t4268 + var1[0] - 1.*var2[0];
  p_output1[1]=6.000000000054e-7*t1812*t29290 + t14542*t29404 + t16364*t29519 + t21152*t29616 - 0.3*(t26064*t29404 + t26388*t29519 + t26724*t29616) + 0.100001*(t28901*t29404 + t26064*t29519 + t27953*t29616) + 0.2*(-1.*t27953*t29404 - 1.*t26724*t29519 - 1.*t28609*t29616) + t29259*t3520 - 0.2000000000018*t29179*t3731*t4229 + var1[1] - 1.*var2[1];
  p_output1[2]=6.000000000054e-7*t1812*t30428 + t14542*t30531 + t16364*t30631 + t21152*t30845 - 0.3*(t26064*t30531 + t26388*t30631 + t26724*t30845) + 0.100001*(t28901*t30531 + t26064*t30631 + t27953*t30845) + 0.2*(-1.*t27953*t30531 - 1.*t26724*t30631 - 1.*t28609*t30845) + t30100*t3520 + 0.2000000000018*t29243*t3731*t4229 + var1[2] - 1.*var2[2];
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

#include "h_LeftBackFoot_BackStance.hh"

namespace BackStance
{

void h_LeftBackFoot_BackStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
