/*
 * Automatically Generated from Mathematica.
 * Thu 30 May 2019 00:04:09 GMT-04:00
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
  double t76115;
  double t76125;
  double t76130;
  double t76223;
  double t76187;
  double t76205;
  double t76215;
  double t76227;
  double t76222;
  double t76236;
  double t76237;
  double t76249;
  double t76256;
  double t76269;
  double t76338;
  double t76339;
  double t76658;
  double t76663;
  double t76664;
  double t76667;
  double t76821;
  double t76954;
  double t76957;
  double t76344;
  double t76346;
  double t76349;
  double t76623;
  double t76668;
  double t77050;
  double t77051;
  double t77052;
  double t77063;
  double t77068;
  double t77070;
  double t77443;
  double t77095;
  double t77421;
  double t77426;
  double t77431;
  double t77436;
  double t77437;
  double t77439;
  double t77445;
  double t76640;
  double t77099;
  double t76666;
  double t77354;
  double t77389;
  double t77495;
  double t77440;
  double t76665;
  double t76669;
  double t76755;
  double t76990;
  double t77026;
  double t77071;
  double t77094;
  double t77100;
  double t77101;
  double t77181;
  double t77621;
  double t77623;
  double t77646;
  double t77667;
  double t77441;
  double t77673;
  double t77675;
  double t77676;
  double t77681;
  double t77459;
  double t77469;
  double t77684;
  double t77685;
  double t77687;
  double t77710;
  double t77508;
  double t77510;
  double t77515;
  double t77516;
  double t77518;
  double t77528;
  double t78367;
  double t78475;
  double t78476;
  double t78480;
  double t78485;
  double t78490;
  double t78497;
  double t78499;
  double t78500;
  double t78502;
  double t78503;
  double t78504;
  double t78507;
  double t78508;
  double t78509;
  double t78536;
  double t78537;
  double t78538;
  double t78589;
  double t78729;
  double t78735;
  double t78746;
  double t78542;
  double t78543;
  double t78544;
  double t78545;
  double t78863;
  double t78867;
  double t78873;
  double t78874;
  double t78953;
  double t78955;
  double t78963;
  double t78984;
  double t78996;
  double t79004;
  double t79005;
  double t79010;
  double t78993;
  double t78994;
  double t78902;
  double t78903;
  double t78947;
  double t78948;
  double t79021;
  double t79026;
  double t79019;
  t76115 = Cos(var1[6]);
  t76125 = -1.*t76115;
  t76130 = 1. + t76125;
  t76223 = Cos(var1[3]);
  t76187 = Cos(var1[5]);
  t76205 = Sin(var1[3]);
  t76215 = Sin(var1[4]);
  t76227 = Sin(var1[5]);
  t76222 = t76187*t76205*t76215;
  t76236 = t76223*t76227;
  t76237 = t76222 + t76236;
  t76249 = t76223*t76187;
  t76256 = -1.*t76205*t76215*t76227;
  t76269 = t76249 + t76256;
  t76338 = Cos(var1[4]);
  t76339 = Sin(var1[6]);
  t76658 = Cos(var1[8]);
  t76663 = -1.*t76658;
  t76664 = 1. + t76663;
  t76667 = Sin(var1[8]);
  t76821 = -3.e-6*t76664;
  t76954 = 3.e-6*t76667;
  t76957 = t76821 + t76954;
  t76344 = t76115*t76237;
  t76346 = 3.e-6*t76130*t76269;
  t76349 = -1.*t76338*t76205*t76339;
  t76623 = t76344 + t76346 + t76349;
  t76668 = -1.*t76667;
  t77050 = 3.e-6*t76130*t76237;
  t77051 = -9.e-12*t76130;
  t77052 = 1. + t77051;
  t77063 = t77052*t76269;
  t77068 = 3.e-6*t76338*t76205*t76339;
  t77070 = t77050 + t77063 + t77068;
  t77443 = 3.e-6*t76664;
  t77095 = -3.e-6*t76667;
  t77421 = -1.000000000009*t76130;
  t77426 = 1. + t77421;
  t77431 = -1.*t76338*t77426*t76205;
  t77436 = -1.*t76237*t76339;
  t77437 = 3.e-6*t76269*t76339;
  t77439 = t77431 + t77436 + t77437;
  t77445 = t77443 + t76954;
  t76640 = 9.e-13*var1[8];
  t77099 = t76821 + t77095;
  t76666 = -9.e-12*t76664;
  t77354 = -1.000000000009*t76664;
  t77389 = 1. + t77354;
  t77495 = t77443 + t77095;
  t77440 = 9.e-12*t76664;
  t76665 = 0.2000000000018*t76664;
  t76669 = t76666 + t76668;
  t76755 = 0.1*t76669;
  t76990 = -9.e-7*t76957;
  t77026 = t76640 + t76665 + t76755 + t76990;
  t77071 = 3.e-7*var1[8];
  t77094 = -1.62e-17*t76664;
  t77100 = 0.2*t77099;
  t77101 = 0.1*t76957;
  t77181 = t77071 + t77094 + t77100 + t77101;
  t77621 = -1.*t76223*t76338*t76187*t76115;
  t77623 = 3.e-6*t76223*t76338*t76130*t76227;
  t77646 = -1.*t76223*t76215*t76339;
  t77667 = t77621 + t77623 + t77646;
  t77441 = t77440 + t76668;
  t77673 = -3.e-6*t76223*t76338*t76187*t76130;
  t77675 = t76223*t76338*t77052*t76227;
  t77676 = 3.e-6*t76223*t76215*t76339;
  t77681 = t77673 + t77675 + t77676;
  t77459 = -1.8e-11*t76664;
  t77469 = 1. + t77459;
  t77684 = -1.*t76223*t77426*t76215;
  t77685 = t76223*t76338*t76187*t76339;
  t77687 = 3.e-6*t76223*t76338*t76227*t76339;
  t77710 = t77684 + t77685 + t77687;
  t77508 = 0.1000000000009*t76664;
  t77510 = -9.e-7*t77099;
  t77515 = t76666 + t76667;
  t77516 = 0.2*t77515;
  t77518 = t76640 + t77508 + t77510 + t77516;
  t77528 = t77440 + t76667;
  t78367 = t76223*t76187*t76215;
  t78475 = -1.*t76205*t76227;
  t78476 = t78367 + t78475;
  t78480 = t76187*t76205;
  t78485 = t76223*t76215*t76227;
  t78490 = t78480 + t78485;
  t78497 = 3.e-6*t76130*t78476;
  t78499 = t76115*t78490;
  t78500 = t78497 + t78499;
  t78502 = t77052*t78476;
  t78503 = 3.e-6*t76130*t78490;
  t78504 = t78502 + t78503;
  t78507 = 3.e-6*t78476*t76339;
  t78508 = -1.*t78490*t76339;
  t78509 = t78507 + t78508;
  t78536 = -1.*t76223*t76187*t76215;
  t78537 = t76205*t76227;
  t78538 = t78536 + t78537;
  t78589 = -3.e-6*t76223*t76338*t76115;
  t78729 = 3.e-6*t78538*t76339;
  t78735 = -9.e-12*t78490*t76339;
  t78746 = t78589 + t78729 + t78735;
  t78542 = t76223*t76338*t76115;
  t78543 = -1.*t78538*t76339;
  t78544 = 3.e-6*t78490*t76339;
  t78545 = t78542 + t78543 + t78544;
  t78863 = -1.*t76115*t78538;
  t78867 = 3.e-6*t76115*t78490;
  t78873 = -1.000000000009*t76223*t76338*t76339;
  t78874 = t78863 + t78867 + t78873;
  t78953 = -3.e-6*t76658;
  t78955 = t78953 + t77095;
  t78963 = 3.e-6*t76658;
  t78984 = t78963 + t77095;
  t78996 = -9.e-12*t76667;
  t79004 = t76115*t78538;
  t79005 = t76223*t76338*t76339;
  t79010 = t79004 + t78503 + t79005;
  t78993 = t76223*t76338*t77426;
  t78994 = t78993 + t78543 + t78544;
  t78902 = 3.e-6*t76130*t78538;
  t78903 = t77052*t78490;
  t78947 = -3.e-6*t76223*t76338*t76339;
  t78948 = t78902 + t78903 + t78947;
  t79021 = t78963 + t76954;
  t79026 = 9.e-12*t76667;
  t79019 = t78953 + t76954;
  p_output1[0]=1.;
  p_output1[1]=0.2000000000018*t76130*t76237 - 6.000000000054e-7*t76130*t76269 + 0.2000000000018*t76205*t76338*t76339 + t76623*t77026 + t77070*t77181 + 0.2*(t76623*t77389 + t77439*t77441 + t77070*t77445) + 0.100001*(t77439*t77445 + t77070*t77469 + t76623*t77495) + t77439*t77518 - 0.3*(t77389*t77439 + t77070*t77495 + t76623*t77528);
  p_output1[2]=-0.2000000000018*t76130*t76187*t76223*t76338 - 6.000000000054e-7*t76130*t76223*t76227*t76338 + 0.2000000000018*t76215*t76223*t76339 + t77026*t77667 + t77181*t77681 + t77518*t77710 - 0.3*(t77528*t77667 + t77495*t77681 + t77389*t77710) + 0.2*(t77389*t77667 + t77445*t77681 + t77441*t77710) + 0.100001*(t77495*t77667 + t77469*t77681 + t77445*t77710);
  p_output1[3]=-6.000000000054e-7*t76130*t78476 + 0.2000000000018*t76130*t78490 + t77026*t78500 + t77181*t78504 + t77518*t78509 - 0.3*(t77528*t78500 + t77495*t78504 + t77389*t78509) + 0.2*(t77389*t78500 + t77445*t78504 + t77441*t78509) + 0.100001*(t77495*t78500 + t77469*t78504 + t77445*t78509);
  p_output1[4]=-0.2000000000018*t76115*t76223*t76338 - 6.000000000054e-7*t76339*t78490 + 0.2000000000018*t76339*t78538 + t77026*t78545 + t77181*t78746 + t77518*t78874 - 0.3*(t77528*t78545 + t77495*t78746 + t77389*t78874) + 0.2*(t77389*t78545 + t77445*t78746 + t77441*t78874) + 0.100001*(t77495*t78545 + t77469*t78746 + t77445*t78874);
  p_output1[5]=t78948*(3.e-7 - 1.62e-17*t76667 + 0.2*t78955 + 0.1*t78984) + t78994*(9.e-13 + 0.1000000000009*t76667 - 9.e-7*t78955 + 0.2*(t76658 + t78996)) + (9.e-13 + 0.2000000000018*t76667 - 9.e-7*t78984 + 0.1*(t76663 + t78996))*t79010 + 0.100001*(-1.8e-11*t76667*t78948 + t79010*t79019 + t78994*t79021) - 0.3*(-1.000000000009*t76667*t78994 + t78948*t79019 + t79010*(t76658 + t79026)) + 0.2*(-1.000000000009*t76667*t79010 + t78948*t79021 + t78994*(t76663 + t79026));
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

#include "J_u_LeftFrontFootHeight_Flight.hh"

namespace Flight2
{

void J_u_LeftFrontFootHeight_Flight_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
