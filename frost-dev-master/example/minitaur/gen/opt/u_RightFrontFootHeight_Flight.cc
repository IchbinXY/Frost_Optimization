/*
 * Automatically Generated from Mathematica.
 * Tue 28 May 2019 23:03:39 GMT-04:00
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
  double t1508;
  double t2619;
  double t3518;
  double t3654;
  double t3707;
  double t3906;
  double t3718;
  double t3916;
  double t4296;
  double t4299;
  double t4301;
  double t4307;
  double t4313;
  double t1564;
  double t1734;
  double t3780;
  double t3925;
  double t3933;
  double t4088;
  double t4096;
  double t4131;
  double t4328;
  double t4331;
  double t4356;
  double t4314;
  double t4319;
  double t4366;
  double t4341;
  double t4345;
  double t4346;
  double t4347;
  double t4353;
  double t4354;
  double t4417;
  double t4467;
  double t4468;
  double t4485;
  double t4584;
  double t4588;
  double t4682;
  double t4684;
  double t4731;
  double t4732;
  double t4736;
  double t4755;
  double t4757;
  double t4741;
  double t4368;
  double t4738;
  double t4770;
  t1508 = Cos(var1[3]);
  t2619 = Cos(var1[15]);
  t3518 = -1.*t2619;
  t3654 = 1. + t3518;
  t3707 = Cos(var1[5]);
  t3906 = Sin(var1[3]);
  t3718 = Sin(var1[4]);
  t3916 = Sin(var1[5]);
  t4296 = Cos(var1[17]);
  t4299 = -1.*t4296;
  t4301 = 1. + t4299;
  t4307 = -3.e-6*t4301;
  t4313 = Sin(var1[17]);
  t1564 = Cos(var1[4]);
  t1734 = Sin(var1[15]);
  t3780 = -1.*t1508*t3707*t3718;
  t3925 = t3906*t3916;
  t3933 = t3780 + t3925;
  t4088 = t3707*t3906;
  t4096 = t1508*t3718*t3916;
  t4131 = t4088 + t4096;
  t4328 = 3.e-6*t4313;
  t4331 = t4307 + t4328;
  t4356 = 9.e-13*var1[17];
  t4314 = -3.e-6*t4313;
  t4319 = t4307 + t4314;
  t4366 = -9.e-12*t4301;
  t4341 = -3.e-6*t1508*t1564*t1734;
  t4345 = 3.e-6*t3654*t3933;
  t4346 = -9.e-12*t3654;
  t4347 = 1. + t4346;
  t4353 = t4347*t4131;
  t4354 = t4341 + t4345 + t4353;
  t4417 = t1508*t1564*t1734;
  t4467 = t2619*t3933;
  t4468 = 3.e-6*t3654*t4131;
  t4485 = t4417 + t4467 + t4468;
  t4584 = -1.000000000009*t3654;
  t4588 = 1. + t4584;
  t4682 = t4588*t1508*t1564;
  t4684 = -1.*t1734*t3933;
  t4731 = 3.e-6*t1734*t4131;
  t4732 = t4682 + t4684 + t4731;
  t4736 = 3.e-6*t4301;
  t4755 = -1.000000000009*t4301;
  t4757 = 1. + t4755;
  t4741 = 9.e-12*t4301;
  t4368 = -1.*t4313;
  t4738 = t4736 + t4314;
  t4770 = t4736 + t4328;
  p_output1[0]=-0.2000000000018*t1508*t1564*t1734 + 0.2000000000018*t3654*t3933 - 6.000000000054e-7*t3654*t4131 + (0.2000000000018*t4301 - 9.e-7*t4331 + t4356 + 0.1*(t4366 + t4368))*t4485 + (0.1000000000009*t4301 - 9.e-7*t4319 + t4356 + 0.2*(t4313 + t4366))*t4732 - 0.3*(t4354*t4738 + t4485*(t4313 + t4741) + t4732*t4757) + 0.2*(t4732*(t4368 + t4741) + t4485*t4757 + t4354*t4770) - 0.099999*((1. - 1.8e-11*t4301)*t4354 + t4485*t4738 + t4732*t4770) + var1[2] + t4354*(-1.62e-17*t4301 + 0.2*t4319 + 0.1*t4331 + 3.e-7*var1[17]);
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

#include "u_RightFrontFootHeight_Flight.hh"

namespace Flight2
{

void u_RightFrontFootHeight_Flight_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
