/*
 * Automatically Generated from Mathematica.
 * Tue 28 May 2019 22:38:59 GMT-04:00
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
  double t3872;
  double t437;
  double t5094;
  double t8776;
  double t15464;
  double t19531;
  double t19523;
  double t19570;
  double t24270;
  double t24274;
  double t24281;
  double t24285;
  double t24330;
  double t781;
  double t2774;
  double t19528;
  double t20204;
  double t20386;
  double t20870;
  double t22483;
  double t24003;
  double t24358;
  double t24369;
  double t24560;
  double t24349;
  double t24354;
  double t24576;
  double t24420;
  double t24439;
  double t24458;
  double t24468;
  double t24482;
  double t24484;
  double t24627;
  double t24631;
  double t24632;
  double t24637;
  double t24710;
  double t24753;
  double t24762;
  double t24775;
  double t24811;
  double t24812;
  double t24817;
  double t24856;
  double t24861;
  double t24834;
  double t24580;
  double t24819;
  double t24881;
  t3872 = Cos(var1[10]);
  t437 = Cos(var1[3]);
  t5094 = -1.*t3872;
  t8776 = 1. + t5094;
  t15464 = Cos(var1[5]);
  t19531 = Sin(var1[3]);
  t19523 = Sin(var1[4]);
  t19570 = Sin(var1[5]);
  t24270 = Cos(var1[12]);
  t24274 = -1.*t24270;
  t24281 = 1. + t24274;
  t24285 = -3.e-6*t24281;
  t24330 = Sin(var1[12]);
  t781 = Cos(var1[4]);
  t2774 = Sin(var1[10]);
  t19528 = -1.*t437*t15464*t19523;
  t20204 = t19531*t19570;
  t20386 = t19528 + t20204;
  t20870 = t15464*t19531;
  t22483 = t437*t19523*t19570;
  t24003 = t20870 + t22483;
  t24358 = 3.e-6*t24330;
  t24369 = t24285 + t24358;
  t24560 = 3.e-13*var1[12];
  t24349 = -3.e-6*t24330;
  t24354 = t24285 + t24349;
  t24576 = -9.e-12*t24281;
  t24420 = -3.e-6*t437*t781*t2774;
  t24439 = 3.e-6*t8776*t20386;
  t24458 = -9.e-12*t8776;
  t24468 = 1. + t24458;
  t24482 = t24468*t24003;
  t24484 = t24420 + t24439 + t24482;
  t24627 = t437*t781*t2774;
  t24631 = t3872*t20386;
  t24632 = 3.e-6*t8776*t24003;
  t24637 = t24627 + t24631 + t24632;
  t24710 = -1.000000000009*t8776;
  t24753 = 1. + t24710;
  t24762 = t24753*t437*t781;
  t24775 = -1.*t2774*t20386;
  t24811 = 3.e-6*t2774*t24003;
  t24812 = t24762 + t24775 + t24811;
  t24817 = 3.e-6*t24281;
  t24856 = -1.000000000009*t24281;
  t24861 = 1. + t24856;
  t24834 = 9.e-12*t24281;
  t24580 = -1.*t24330;
  t24819 = t24817 + t24349;
  t24881 = t24817 + t24358;
  p_output1[0]=(-0.2000000000048*t24281 + 3.e-7*t24369 + t24560 + 0.100000000003*(t24576 + t24580))*t24637 + (0.1000000000039*t24281 + 3.e-7*t24354 + t24560 - 0.200000000003*(t24330 + t24576))*t24812 - 0.3*(t24484*t24819 + t24637*(t24330 + t24834) + t24812*t24861) + 0.2*(-1.*t24812*(t24580 + t24834) - 1.*t24637*t24861 - 1.*t24484*t24881) + 0.100001*((1. - 1.8e-11*t24281)*t24484 + t24637*t24819 + t24812*t24881) + 0.2000000000018*t2774*t437*t781 + t20386*(0.2*(-1. + t3872) - 1.8e-12*t8776) + 6.000000000054e-7*t24003*t8776 + var1[2] + t24484*(5.4e-18*t24281 - 0.200000000003*t24354 + 0.100000000003*t24369 + 1.e-7*var1[12]);
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

#include "u_LeftBackFootHeight_Flight.hh"

namespace Flight1
{

void u_LeftBackFootHeight_Flight_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
