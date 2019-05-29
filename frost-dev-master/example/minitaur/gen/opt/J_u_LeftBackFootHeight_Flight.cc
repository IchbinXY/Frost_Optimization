/*
 * Automatically Generated from Mathematica.
 * Tue 28 May 2019 22:39:04 GMT-04:00
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
  double t14913;
  double t3771;
  double t15035;
  double t15044;
  double t19485;
  double t19445;
  double t19449;
  double t20856;
  double t24582;
  double t24583;
  double t24586;
  double t24638;
  double t24639;
  double t3353;
  double t3459;
  double t19454;
  double t24215;
  double t24265;
  double t24357;
  double t24371;
  double t24380;
  double t24648;
  double t24814;
  double t24911;
  double t24642;
  double t24646;
  double t24966;
  double t24855;
  double t24863;
  double t24871;
  double t24872;
  double t24888;
  double t24890;
  double t25652;
  double t25890;
  double t26024;
  double t26078;
  double t26148;
  double t26151;
  double t26157;
  double t26166;
  double t26179;
  double t26180;
  double t26414;
  double t26720;
  double t26724;
  double t26577;
  double t25027;
  double t26481;
  double t26748;
  double t15068;
  double t16400;
  double t16444;
  double t19333;
  double t24575;
  double t24597;
  double t24647;
  double t24824;
  double t24849;
  double t24924;
  double t25053;
  double t25054;
  double t25056;
  double t25360;
  double t26133;
  double t26134;
  double t26138;
  double t26142;
  double t26145;
  double t27061;
  double t27062;
  double t27063;
  double t27064;
  double t26597;
  double t27066;
  double t27067;
  double t27068;
  double t27070;
  double t27073;
  double t27075;
  double t27077;
  double t27080;
  double t26782;
  double t26795;
  double t26797;
  double t27355;
  double t27400;
  double t27403;
  double t27431;
  double t27434;
  double t27436;
  double t27578;
  double t27581;
  double t27582;
  double t27590;
  double t27612;
  double t27621;
  double t27630;
  double t27633;
  double t27636;
  double t28024;
  double t28040;
  double t28051;
  double t28465;
  double t28468;
  double t28471;
  double t28472;
  double t28487;
  double t28493;
  double t28495;
  double t28501;
  double t28511;
  double t28516;
  double t28525;
  double t28555;
  double t28652;
  double t28657;
  double t28642;
  double t28646;
  double t28728;
  double t28686;
  double t28688;
  double t28708;
  double t28709;
  double t29087;
  double t29091;
  double t29092;
  double t29142;
  double t29146;
  double t29149;
  double t29179;
  double t29164;
  t14913 = Cos(var1[10]);
  t3771 = Sin(var1[3]);
  t15035 = -1.*t14913;
  t15044 = 1. + t15035;
  t19485 = Cos(var1[3]);
  t19445 = Cos(var1[5]);
  t19449 = Sin(var1[4]);
  t20856 = Sin(var1[5]);
  t24582 = Cos(var1[12]);
  t24583 = -1.*t24582;
  t24586 = 1. + t24583;
  t24638 = -3.e-6*t24586;
  t24639 = Sin(var1[12]);
  t3353 = Cos(var1[4]);
  t3459 = Sin(var1[10]);
  t19454 = t19445*t3771*t19449;
  t24215 = t19485*t20856;
  t24265 = t19454 + t24215;
  t24357 = t19485*t19445;
  t24371 = -1.*t3771*t19449*t20856;
  t24380 = t24357 + t24371;
  t24648 = 3.e-6*t24639;
  t24814 = t24638 + t24648;
  t24911 = 3.e-13*var1[12];
  t24642 = -3.e-6*t24639;
  t24646 = t24638 + t24642;
  t24966 = -9.e-12*t24586;
  t24855 = 3.e-6*t3353*t3459*t3771;
  t24863 = 3.e-6*t15044*t24265;
  t24871 = -9.e-12*t15044;
  t24872 = 1. + t24871;
  t24888 = t24872*t24380;
  t24890 = t24855 + t24863 + t24888;
  t25652 = -1.*t3353*t3459*t3771;
  t25890 = t14913*t24265;
  t26024 = 3.e-6*t15044*t24380;
  t26078 = t25652 + t25890 + t26024;
  t26148 = -1.000000000009*t15044;
  t26151 = 1. + t26148;
  t26157 = -1.*t26151*t3353*t3771;
  t26166 = -1.*t3459*t24265;
  t26179 = 3.e-6*t3459*t24380;
  t26180 = t26157 + t26166 + t26179;
  t26414 = 3.e-6*t24586;
  t26720 = -1.000000000009*t24586;
  t26724 = 1. + t26720;
  t26577 = 9.e-12*t24586;
  t25027 = -1.*t24639;
  t26481 = t26414 + t24642;
  t26748 = t26414 + t24648;
  t15068 = -1.8e-12*t15044;
  t16400 = -1. + t14913;
  t16444 = 0.2*t16400;
  t19333 = t15068 + t16444;
  t24575 = 1.e-7*var1[12];
  t24597 = 5.4e-18*t24586;
  t24647 = -0.200000000003*t24646;
  t24824 = 0.100000000003*t24814;
  t24849 = t24575 + t24597 + t24647 + t24824;
  t24924 = -0.2000000000048*t24586;
  t25053 = t24966 + t25027;
  t25054 = 0.100000000003*t25053;
  t25056 = 3.e-7*t24814;
  t25360 = t24911 + t24924 + t25054 + t25056;
  t26133 = 0.1000000000039*t24586;
  t26134 = 3.e-7*t24646;
  t26138 = t24966 + t24639;
  t26142 = -0.200000000003*t26138;
  t26145 = t24911 + t26133 + t26134 + t26142;
  t27061 = -3.e-6*t15044*t19485*t3353*t19445;
  t27062 = 3.e-6*t19485*t3459*t19449;
  t27063 = t24872*t19485*t3353*t20856;
  t27064 = t27061 + t27062 + t27063;
  t26597 = t26577 + t24639;
  t27066 = -1.*t14913*t19485*t3353*t19445;
  t27067 = -1.*t19485*t3459*t19449;
  t27068 = 3.e-6*t15044*t19485*t3353*t20856;
  t27070 = t27066 + t27067 + t27068;
  t27073 = t19485*t3353*t19445*t3459;
  t27075 = -1.*t26151*t19485*t19449;
  t27077 = 3.e-6*t19485*t3353*t3459*t20856;
  t27080 = t27073 + t27075 + t27077;
  t26782 = t26577 + t25027;
  t26795 = -1.8e-11*t24586;
  t26797 = 1. + t26795;
  t27355 = t19485*t19445*t19449;
  t27400 = -1.*t3771*t20856;
  t27403 = t27355 + t27400;
  t27431 = t19445*t3771;
  t27434 = t19485*t19449*t20856;
  t27436 = t27431 + t27434;
  t27578 = t24872*t27403;
  t27581 = 3.e-6*t15044*t27436;
  t27582 = t27578 + t27581;
  t27590 = 3.e-6*t15044*t27403;
  t27612 = t14913*t27436;
  t27621 = t27590 + t27612;
  t27630 = 3.e-6*t3459*t27403;
  t27633 = -1.*t3459*t27436;
  t27636 = t27630 + t27633;
  t28024 = -1.*t19485*t19445*t19449;
  t28040 = t3771*t20856;
  t28051 = t28024 + t28040;
  t28465 = -1.000000000009*t19485*t3353*t3459;
  t28468 = -1.*t14913*t28051;
  t28471 = 3.e-6*t14913*t27436;
  t28472 = t28465 + t28468 + t28471;
  t28487 = -3.e-6*t14913*t19485*t3353;
  t28493 = 3.e-6*t3459*t28051;
  t28495 = -9.e-12*t3459*t27436;
  t28501 = t28487 + t28493 + t28495;
  t28511 = t14913*t19485*t3353;
  t28516 = -1.*t3459*t28051;
  t28525 = 3.e-6*t3459*t27436;
  t28555 = t28511 + t28516 + t28525;
  t28652 = 3.e-6*t24582;
  t28657 = t28652 + t24642;
  t28642 = -3.e-6*t24582;
  t28646 = t28642 + t24642;
  t28728 = -9.e-12*t24639;
  t28686 = -3.e-6*t19485*t3353*t3459;
  t28688 = 3.e-6*t15044*t28051;
  t28708 = t24872*t27436;
  t28709 = t28686 + t28688 + t28708;
  t29087 = t19485*t3353*t3459;
  t29091 = t14913*t28051;
  t29092 = t29087 + t29091 + t27581;
  t29142 = t26151*t19485*t3353;
  t29146 = t29142 + t28516 + t28525;
  t29149 = t28652 + t24648;
  t29179 = t28642 + t24648;
  t29164 = 9.e-12*t24639;
  p_output1[0]=1.;
  p_output1[1]=t19333*t24265 + 6.000000000054e-7*t15044*t24380 + t24849*t24890 + t25360*t26078 + t26145*t26180 - 0.3*(t24890*t26481 + t26078*t26597 + t26180*t26724) + 0.2*(-1.*t26078*t26724 - 1.*t24890*t26748 - 1.*t26180*t26782) + 0.100001*(t26078*t26481 + t26180*t26748 + t24890*t26797) - 0.2000000000018*t3353*t3459*t3771;
  p_output1[2]=t24849*t27064 + t25360*t27070 + t26145*t27080 - 0.3*(t26481*t27064 + t26597*t27070 + t26724*t27080) + 0.100001*(t26797*t27064 + t26481*t27070 + t26748*t27080) + 0.2*(-1.*t26748*t27064 - 1.*t26724*t27070 - 1.*t26782*t27080) - 1.*t19333*t19445*t19485*t3353 + 6.000000000054e-7*t15044*t19485*t20856*t3353 - 0.2000000000018*t19449*t19485*t3459;
  p_output1[3]=6.000000000054e-7*t15044*t27403 + t19333*t27436 + t24849*t27582 + t25360*t27621 + t26145*t27636 - 0.3*(t26481*t27582 + t26597*t27621 + t26724*t27636) + 0.100001*(t26797*t27582 + t26481*t27621 + t26748*t27636) + 0.2*(-1.*t26748*t27582 - 1.*t26724*t27621 - 1.*t26782*t27636);
  p_output1[4]=t26145*t28472 + t24849*t28501 + t25360*t28555 + 0.100001*(t26748*t28472 + t26797*t28501 + t26481*t28555) - 0.3*(t26724*t28472 + t26481*t28501 + t26597*t28555) + 0.2*(-1.*t26782*t28472 - 1.*t26748*t28501 - 1.*t26724*t28555) + 0.2000000000018*t14913*t19485*t3353 + 6.000000000054e-7*t27436*t3459 - 0.2000000000018*t28051*t3459;
  p_output1[5]=(1.e-7 + 5.4e-18*t24639 - 0.200000000003*t28646 + 0.100000000003*t28657)*t28709 + (3.e-13 - 0.2000000000048*t24639 + 3.e-7*t28657 + 0.100000000003*(t24583 + t28728))*t29092 + (3.e-13 + 0.1000000000039*t24639 + 3.e-7*t28646 - 0.200000000003*(t24582 + t28728))*t29146 + 0.2*(1.000000000009*t24639*t29092 - 1.*t28709*t29149 - 1.*t29146*(t24583 + t29164)) - 0.3*(-1.000000000009*t24639*t29146 + t29092*(t24582 + t29164) + t28709*t29179) + 0.100001*(-1.8e-11*t24639*t28709 + t29146*t29149 + t29092*t29179);
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 6, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "J_u_LeftBackFootHeight_Flight.hh"

namespace Flight1
{

void J_u_LeftBackFootHeight_Flight_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
