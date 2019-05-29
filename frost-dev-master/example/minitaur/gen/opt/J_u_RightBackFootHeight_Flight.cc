/*
 * Automatically Generated from Mathematica.
 * Tue 28 May 2019 22:38:53 GMT-04:00
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
  double t439;
  double t429;
  double t441;
  double t458;
  double t5468;
  double t505;
  double t549;
  double t8611;
  double t19599;
  double t20071;
  double t20172;
  double t20457;
  double t20523;
  double t354;
  double t418;
  double t3701;
  double t14720;
  double t14882;
  double t15550;
  double t15912;
  double t19486;
  double t20717;
  double t22007;
  double t22502;
  double t20538;
  double t20618;
  double t22518;
  double t22057;
  double t22071;
  double t22082;
  double t22410;
  double t22416;
  double t22452;
  double t23604;
  double t23697;
  double t24208;
  double t24209;
  double t24256;
  double t24258;
  double t24259;
  double t24261;
  double t24262;
  double t24263;
  double t24268;
  double t24276;
  double t24278;
  double t24271;
  double t22519;
  double t24269;
  double t24306;
  double t464;
  double t467;
  double t473;
  double t499;
  double t19573;
  double t20187;
  double t20641;
  double t22008;
  double t22042;
  double t22511;
  double t22521;
  double t22525;
  double t23190;
  double t23460;
  double t24220;
  double t24240;
  double t24252;
  double t24254;
  double t24255;
  double t24495;
  double t24497;
  double t24531;
  double t24539;
  double t24273;
  double t24552;
  double t24555;
  double t24557;
  double t24559;
  double t24566;
  double t24568;
  double t24570;
  double t24571;
  double t24350;
  double t24360;
  double t24367;
  double t24675;
  double t24692;
  double t24696;
  double t24720;
  double t24739;
  double t24746;
  double t24754;
  double t24755;
  double t24756;
  double t24763;
  double t24768;
  double t24769;
  double t24784;
  double t24797;
  double t24798;
  double t24908;
  double t24909;
  double t24910;
  double t24926;
  double t24941;
  double t24944;
  double t24947;
  double t24971;
  double t24976;
  double t24986;
  double t25004;
  double t25029;
  double t25030;
  double t25032;
  double t25045;
  double t26173;
  double t26176;
  double t26158;
  double t26162;
  double t26564;
  double t26199;
  double t26209;
  double t26210;
  double t26213;
  double t26621;
  double t26642;
  double t26671;
  double t26762;
  double t26771;
  double t26779;
  double t26930;
  double t26783;
  t439 = Cos(var1[19]);
  t429 = Sin(var1[3]);
  t441 = -1.*t439;
  t458 = 1. + t441;
  t5468 = Cos(var1[3]);
  t505 = Cos(var1[5]);
  t549 = Sin(var1[4]);
  t8611 = Sin(var1[5]);
  t19599 = Cos(var1[21]);
  t20071 = -1.*t19599;
  t20172 = 1. + t20071;
  t20457 = -3.e-6*t20172;
  t20523 = Sin(var1[21]);
  t354 = Cos(var1[4]);
  t418 = Sin(var1[19]);
  t3701 = t505*t429*t549;
  t14720 = t5468*t8611;
  t14882 = t3701 + t14720;
  t15550 = t5468*t505;
  t15912 = -1.*t429*t549*t8611;
  t19486 = t15550 + t15912;
  t20717 = 3.e-6*t20523;
  t22007 = t20457 + t20717;
  t22502 = 3.e-13*var1[21];
  t20538 = -3.e-6*t20523;
  t20618 = t20457 + t20538;
  t22518 = -9.e-12*t20172;
  t22057 = 3.e-6*t354*t418*t429;
  t22071 = 3.e-6*t458*t14882;
  t22082 = -9.e-12*t458;
  t22410 = 1. + t22082;
  t22416 = t22410*t19486;
  t22452 = t22057 + t22071 + t22416;
  t23604 = -1.*t354*t418*t429;
  t23697 = t439*t14882;
  t24208 = 3.e-6*t458*t19486;
  t24209 = t23604 + t23697 + t24208;
  t24256 = -1.000000000009*t458;
  t24258 = 1. + t24256;
  t24259 = -1.*t24258*t354*t429;
  t24261 = -1.*t418*t14882;
  t24262 = 3.e-6*t418*t19486;
  t24263 = t24259 + t24261 + t24262;
  t24268 = 3.e-6*t20172;
  t24276 = -1.000000000009*t20172;
  t24278 = 1. + t24276;
  t24271 = 9.e-12*t20172;
  t22519 = -1.*t20523;
  t24269 = t24268 + t20538;
  t24306 = t24268 + t20717;
  t464 = -1.8e-12*t458;
  t467 = -1. + t439;
  t473 = 0.2*t467;
  t499 = t464 + t473;
  t19573 = 1.e-7*var1[21];
  t20187 = 5.4e-18*t20172;
  t20641 = -0.200000000003*t20618;
  t22008 = 0.100000000003*t22007;
  t22042 = t19573 + t20187 + t20641 + t22008;
  t22511 = -0.2000000000048*t20172;
  t22521 = t22518 + t22519;
  t22525 = 0.100000000003*t22521;
  t23190 = 3.e-7*t22007;
  t23460 = t22502 + t22511 + t22525 + t23190;
  t24220 = 0.1000000000039*t20172;
  t24240 = 3.e-7*t20618;
  t24252 = t22518 + t20523;
  t24254 = -0.200000000003*t24252;
  t24255 = t22502 + t24220 + t24240 + t24254;
  t24495 = -3.e-6*t458*t5468*t354*t505;
  t24497 = 3.e-6*t5468*t418*t549;
  t24531 = t22410*t5468*t354*t8611;
  t24539 = t24495 + t24497 + t24531;
  t24273 = t24271 + t20523;
  t24552 = -1.*t439*t5468*t354*t505;
  t24555 = -1.*t5468*t418*t549;
  t24557 = 3.e-6*t458*t5468*t354*t8611;
  t24559 = t24552 + t24555 + t24557;
  t24566 = t5468*t354*t505*t418;
  t24568 = -1.*t24258*t5468*t549;
  t24570 = 3.e-6*t5468*t354*t418*t8611;
  t24571 = t24566 + t24568 + t24570;
  t24350 = t24271 + t22519;
  t24360 = -1.8e-11*t20172;
  t24367 = 1. + t24360;
  t24675 = t5468*t505*t549;
  t24692 = -1.*t429*t8611;
  t24696 = t24675 + t24692;
  t24720 = t505*t429;
  t24739 = t5468*t549*t8611;
  t24746 = t24720 + t24739;
  t24754 = t22410*t24696;
  t24755 = 3.e-6*t458*t24746;
  t24756 = t24754 + t24755;
  t24763 = 3.e-6*t458*t24696;
  t24768 = t439*t24746;
  t24769 = t24763 + t24768;
  t24784 = 3.e-6*t418*t24696;
  t24797 = -1.*t418*t24746;
  t24798 = t24784 + t24797;
  t24908 = -1.*t5468*t505*t549;
  t24909 = t429*t8611;
  t24910 = t24908 + t24909;
  t24926 = -1.000000000009*t5468*t354*t418;
  t24941 = -1.*t439*t24910;
  t24944 = 3.e-6*t439*t24746;
  t24947 = t24926 + t24941 + t24944;
  t24971 = -3.e-6*t439*t5468*t354;
  t24976 = 3.e-6*t418*t24910;
  t24986 = -9.e-12*t418*t24746;
  t25004 = t24971 + t24976 + t24986;
  t25029 = t439*t5468*t354;
  t25030 = -1.*t418*t24910;
  t25032 = 3.e-6*t418*t24746;
  t25045 = t25029 + t25030 + t25032;
  t26173 = 3.e-6*t19599;
  t26176 = t26173 + t20538;
  t26158 = -3.e-6*t19599;
  t26162 = t26158 + t20538;
  t26564 = -9.e-12*t20523;
  t26199 = -3.e-6*t5468*t354*t418;
  t26209 = 3.e-6*t458*t24910;
  t26210 = t22410*t24746;
  t26213 = t26199 + t26209 + t26210;
  t26621 = t5468*t354*t418;
  t26642 = t439*t24910;
  t26671 = t26621 + t26642 + t24755;
  t26762 = t24258*t5468*t354;
  t26771 = t26762 + t25030 + t25032;
  t26779 = t26173 + t20717;
  t26930 = t26158 + t20717;
  t26783 = 9.e-12*t20523;
  p_output1[0]=1.;
  p_output1[1]=t22042*t22452 + t23460*t24209 + t24255*t24263 - 0.3*(t22452*t24269 + t24209*t24273 + t24263*t24278) + 0.2*(-1.*t24209*t24278 - 1.*t22452*t24306 - 1.*t24263*t24350) - 0.099999*(t24209*t24269 + t24263*t24306 + t22452*t24367) - 0.2000000000018*t354*t418*t429 + 6.000000000054e-7*t19486*t458 + t14882*t499;
  p_output1[2]=t22042*t24539 + t23460*t24559 + t24255*t24571 - 0.3*(t24269*t24539 + t24273*t24559 + t24278*t24571) - 0.099999*(t24367*t24539 + t24269*t24559 + t24306*t24571) + 0.2*(-1.*t24306*t24539 - 1.*t24278*t24559 - 1.*t24350*t24571) - 1.*t354*t499*t505*t5468 - 0.2000000000018*t418*t5468*t549 + 6.000000000054e-7*t354*t458*t5468*t8611;
  p_output1[3]=t22042*t24756 + t23460*t24769 + t24255*t24798 - 0.3*(t24269*t24756 + t24273*t24769 + t24278*t24798) - 0.099999*(t24367*t24756 + t24269*t24769 + t24306*t24798) + 0.2*(-1.*t24306*t24756 - 1.*t24278*t24769 - 1.*t24350*t24798) + 6.000000000054e-7*t24696*t458 + t24746*t499;
  p_output1[4]=t24255*t24947 + t22042*t25004 + t23460*t25045 - 0.099999*(t24306*t24947 + t24367*t25004 + t24269*t25045) - 0.3*(t24278*t24947 + t24269*t25004 + t24273*t25045) + 0.2*(-1.*t24350*t24947 - 1.*t24306*t25004 - 1.*t24278*t25045) + 6.000000000054e-7*t24746*t418 - 0.2000000000018*t24910*t418 + 0.2000000000018*t354*t439*t5468;
  p_output1[5]=(1.e-7 + 5.4e-18*t20523 - 0.200000000003*t26162 + 0.100000000003*t26176)*t26213 + (3.e-13 - 0.2000000000048*t20523 + 3.e-7*t26176 + 0.100000000003*(t20071 + t26564))*t26671 + (3.e-13 + 0.1000000000039*t20523 + 3.e-7*t26162 - 0.200000000003*(t19599 + t26564))*t26771 + 0.2*(1.000000000009*t20523*t26671 - 1.*t26213*t26779 - 1.*t26771*(t20071 + t26783)) - 0.3*(-1.000000000009*t20523*t26771 + t26671*(t19599 + t26783) + t26213*t26930) - 0.099999*(-1.8e-11*t20523*t26213 + t26771*t26779 + t26671*t26930);
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

#include "J_u_RightBackFootHeight_Flight.hh"

namespace Flight1
{

void J_u_RightBackFootHeight_Flight_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
