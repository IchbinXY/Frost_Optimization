/*
 * Automatically Generated from Mathematica.
 * Wed 29 May 2019 15:17:52 GMT-04:00
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
  double t17005;
  double t17104;
  double t17209;
  double t17558;
  double t17784;
  double t17617;
  double t17711;
  double t17786;
  double t17869;
  double t18464;
  double t18580;
  double t18666;
  double t19205;
  double t16844;
  double t16980;
  double t17771;
  double t17793;
  double t17808;
  double t17840;
  double t17843;
  double t17844;
  double t20246;
  double t20249;
  double t20572;
  double t19337;
  double t19484;
  double t20701;
  double t20351;
  double t20396;
  double t20406;
  double t20431;
  double t20457;
  double t20523;
  double t20989;
  double t21002;
  double t21022;
  double t21041;
  double t21092;
  double t21103;
  double t21105;
  double t21119;
  double t21280;
  double t21296;
  double t21307;
  double t21364;
  double t21371;
  double t21335;
  double t20795;
  double t21319;
  double t21428;
  double t17848;
  double t18664;
  double t20244;
  double t20256;
  double t20339;
  double t20573;
  double t20838;
  double t20906;
  double t20954;
  double t20975;
  double t21055;
  double t21064;
  double t21067;
  double t21070;
  double t21074;
  double t23754;
  double t23761;
  double t23814;
  double t23908;
  double t21339;
  double t24092;
  double t24200;
  double t24368;
  double t24372;
  double t24374;
  double t24375;
  double t24389;
  double t24393;
  double t21452;
  double t21496;
  double t23605;
  double t24433;
  double t24437;
  double t24439;
  double t24444;
  double t24446;
  double t24448;
  double t24453;
  double t24455;
  double t24457;
  double t24482;
  double t24483;
  double t24531;
  double t24547;
  double t24556;
  double t24560;
  double t25262;
  double t25270;
  double t25272;
  double t25292;
  double t25299;
  double t25301;
  double t25309;
  double t25317;
  double t25318;
  double t25328;
  double t25330;
  double t25337;
  double t25341;
  double t25352;
  double t25379;
  double t26559;
  double t26560;
  double t26556;
  double t26557;
  double t26622;
  double t26585;
  double t26605;
  double t26606;
  double t26608;
  double t27070;
  double t27080;
  double t27118;
  double t27252;
  double t27292;
  double t27309;
  double t27429;
  double t27312;
  t17005 = Sin(var1[3]);
  t17104 = Cos(var1[15]);
  t17209 = -1.*t17104;
  t17558 = 1. + t17209;
  t17784 = Cos(var1[3]);
  t17617 = Cos(var1[5]);
  t17711 = Sin(var1[4]);
  t17786 = Sin(var1[5]);
  t17869 = Cos(var1[17]);
  t18464 = -1.*t17869;
  t18580 = 1. + t18464;
  t18666 = -3.e-6*t18580;
  t19205 = Sin(var1[17]);
  t16844 = Cos(var1[4]);
  t16980 = Sin(var1[15]);
  t17771 = t17617*t17005*t17711;
  t17793 = t17784*t17786;
  t17808 = t17771 + t17793;
  t17840 = t17784*t17617;
  t17843 = -1.*t17005*t17711*t17786;
  t17844 = t17840 + t17843;
  t20246 = 3.e-6*t19205;
  t20249 = t18666 + t20246;
  t20572 = 9.e-13*var1[17];
  t19337 = -3.e-6*t19205;
  t19484 = t18666 + t19337;
  t20701 = -9.e-12*t18580;
  t20351 = 3.e-6*t16844*t16980*t17005;
  t20396 = 3.e-6*t17558*t17808;
  t20406 = -9.e-12*t17558;
  t20431 = 1. + t20406;
  t20457 = t20431*t17844;
  t20523 = t20351 + t20396 + t20457;
  t20989 = -1.*t16844*t16980*t17005;
  t21002 = t17104*t17808;
  t21022 = 3.e-6*t17558*t17844;
  t21041 = t20989 + t21002 + t21022;
  t21092 = -1.000000000009*t17558;
  t21103 = 1. + t21092;
  t21105 = -1.*t21103*t16844*t17005;
  t21119 = -1.*t16980*t17808;
  t21280 = 3.e-6*t16980*t17844;
  t21296 = t21105 + t21119 + t21280;
  t21307 = 3.e-6*t18580;
  t21364 = -1.000000000009*t18580;
  t21371 = 1. + t21364;
  t21335 = 9.e-12*t18580;
  t20795 = -1.*t19205;
  t21319 = t21307 + t19337;
  t21428 = t21307 + t20246;
  t17848 = 3.e-7*var1[17];
  t18664 = -1.62e-17*t18580;
  t20244 = 0.2*t19484;
  t20256 = 0.1*t20249;
  t20339 = t17848 + t18664 + t20244 + t20256;
  t20573 = 0.2000000000018*t18580;
  t20838 = t20701 + t20795;
  t20906 = 0.1*t20838;
  t20954 = -9.e-7*t20249;
  t20975 = t20572 + t20573 + t20906 + t20954;
  t21055 = 0.1000000000009*t18580;
  t21064 = -9.e-7*t19484;
  t21067 = t20701 + t19205;
  t21070 = 0.2*t21067;
  t21074 = t20572 + t21055 + t21064 + t21070;
  t23754 = -3.e-6*t17558*t17784*t16844*t17617;
  t23761 = 3.e-6*t17784*t16980*t17711;
  t23814 = t20431*t17784*t16844*t17786;
  t23908 = t23754 + t23761 + t23814;
  t21339 = t21335 + t19205;
  t24092 = -1.*t17104*t17784*t16844*t17617;
  t24200 = -1.*t17784*t16980*t17711;
  t24368 = 3.e-6*t17558*t17784*t16844*t17786;
  t24372 = t24092 + t24200 + t24368;
  t24374 = t17784*t16844*t17617*t16980;
  t24375 = -1.*t21103*t17784*t17711;
  t24389 = 3.e-6*t17784*t16844*t16980*t17786;
  t24393 = t24374 + t24375 + t24389;
  t21452 = t21335 + t20795;
  t21496 = -1.8e-11*t18580;
  t23605 = 1. + t21496;
  t24433 = t17784*t17617*t17711;
  t24437 = -1.*t17005*t17786;
  t24439 = t24433 + t24437;
  t24444 = t17617*t17005;
  t24446 = t17784*t17711*t17786;
  t24448 = t24444 + t24446;
  t24453 = t20431*t24439;
  t24455 = 3.e-6*t17558*t24448;
  t24457 = t24453 + t24455;
  t24482 = 3.e-6*t17558*t24439;
  t24483 = t17104*t24448;
  t24531 = t24482 + t24483;
  t24547 = 3.e-6*t16980*t24439;
  t24556 = -1.*t16980*t24448;
  t24560 = t24547 + t24556;
  t25262 = -1.*t17784*t17617*t17711;
  t25270 = t17005*t17786;
  t25272 = t25262 + t25270;
  t25292 = -1.000000000009*t17784*t16844*t16980;
  t25299 = -1.*t17104*t25272;
  t25301 = 3.e-6*t17104*t24448;
  t25309 = t25292 + t25299 + t25301;
  t25317 = -3.e-6*t17104*t17784*t16844;
  t25318 = 3.e-6*t16980*t25272;
  t25328 = -9.e-12*t16980*t24448;
  t25330 = t25317 + t25318 + t25328;
  t25337 = t17104*t17784*t16844;
  t25341 = -1.*t16980*t25272;
  t25352 = 3.e-6*t16980*t24448;
  t25379 = t25337 + t25341 + t25352;
  t26559 = 3.e-6*t17869;
  t26560 = t26559 + t19337;
  t26556 = -3.e-6*t17869;
  t26557 = t26556 + t19337;
  t26622 = -9.e-12*t19205;
  t26585 = -3.e-6*t17784*t16844*t16980;
  t26605 = 3.e-6*t17558*t25272;
  t26606 = t20431*t24448;
  t26608 = t26585 + t26605 + t26606;
  t27070 = t17784*t16844*t16980;
  t27080 = t17104*t25272;
  t27118 = t27070 + t27080 + t24455;
  t27252 = t21103*t17784*t16844;
  t27292 = t27252 + t25341 + t25352;
  t27309 = t26559 + t20246;
  t27429 = t26556 + t20246;
  t27312 = 9.e-12*t19205;
  p_output1[0]=1.;
  p_output1[1]=0.2000000000018*t16844*t16980*t17005 + 0.2000000000018*t17558*t17808 - 6.000000000054e-7*t17558*t17844 + t20339*t20523 + t20975*t21041 + t21074*t21296 - 0.3*(t20523*t21319 + t21041*t21339 + t21296*t21371) + 0.2*(t21041*t21371 + t20523*t21428 + t21296*t21452) - 0.099999*(t21041*t21319 + t21296*t21428 + t20523*t23605);
  p_output1[2]=-0.2000000000018*t16844*t17558*t17617*t17784 + 0.2000000000018*t16980*t17711*t17784 - 6.000000000054e-7*t16844*t17558*t17784*t17786 + t20339*t23908 + t20975*t24372 + t21074*t24393 - 0.3*(t21319*t23908 + t21339*t24372 + t21371*t24393) - 0.099999*(t23605*t23908 + t21319*t24372 + t21428*t24393) + 0.2*(t21428*t23908 + t21371*t24372 + t21452*t24393);
  p_output1[3]=-6.000000000054e-7*t17558*t24439 + 0.2000000000018*t17558*t24448 + t20339*t24457 + t20975*t24531 + t21074*t24560 - 0.3*(t21319*t24457 + t21339*t24531 + t21371*t24560) - 0.099999*(t23605*t24457 + t21319*t24531 + t21428*t24560) + 0.2*(t21428*t24457 + t21371*t24531 + t21452*t24560);
  p_output1[4]=-0.2000000000018*t16844*t17104*t17784 - 6.000000000054e-7*t16980*t24448 + 0.2000000000018*t16980*t25272 + t21074*t25309 + t20339*t25330 + t20975*t25379 - 0.099999*(t21428*t25309 + t23605*t25330 + t21319*t25379) - 0.3*(t21371*t25309 + t21319*t25330 + t21339*t25379) + 0.2*(t21452*t25309 + t21428*t25330 + t21371*t25379);
  p_output1[5]=(3.e-7 - 1.62e-17*t19205 + 0.2*t26557 + 0.1*t26560)*t26608 + (9.e-13 + 0.2000000000018*t19205 - 9.e-7*t26560 + 0.1*(t18464 + t26622))*t27118 + (9.e-13 + 0.1000000000009*t19205 - 9.e-7*t26557 + 0.2*(t17869 + t26622))*t27292 + 0.2*(-1.000000000009*t19205*t27118 + t26608*t27309 + t27292*(t18464 + t27312)) - 0.3*(-1.000000000009*t19205*t27292 + t27118*(t17869 + t27312) + t26608*t27429) - 0.099999*(-1.8e-11*t19205*t26608 + t27292*t27309 + t27118*t27429);
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

#include "J_u_RightFrontFootHeight_Flight.hh"

namespace Flight2
{

void J_u_RightFrontFootHeight_Flight_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
