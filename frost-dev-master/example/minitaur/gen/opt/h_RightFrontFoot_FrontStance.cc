/*
 * Automatically Generated from Mathematica.
 * Tue 28 May 2019 22:29:58 GMT-04:00
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
  double t325;
  double t327;
  double t343;
  double t365;
  double t474;
  double t516;
  double t519;
  double t544;
  double t553;
  double t384;
  double t401;
  double t404;
  double t436;
  double t608;
  double t612;
  double t668;
  double t556;
  double t570;
  double t684;
  double t623;
  double t629;
  double t631;
  double t647;
  double t650;
  double t655;
  double t701;
  double t722;
  double t723;
  double t728;
  double t771;
  double t785;
  double t804;
  double t812;
  double t813;
  double t817;
  double t823;
  double t856;
  double t869;
  double t845;
  double t688;
  double t824;
  double t887;
  double t962;
  double t970;
  double t452;
  double t543;
  double t588;
  double t618;
  double t622;
  double t967;
  double t973;
  double t988;
  double t999;
  double t1000;
  double t1002;
  double t683;
  double t691;
  double t695;
  double t696;
  double t699;
  double t737;
  double t746;
  double t759;
  double t764;
  double t768;
  double t1004;
  double t1009;
  double t1016;
  double t1018;
  double t849;
  double t1029;
  double t1043;
  double t1049;
  double t1050;
  double t1059;
  double t1062;
  double t1063;
  double t1065;
  double t899;
  double t913;
  double t914;
  double t1349;
  double t1374;
  double t1376;
  double t1393;
  double t1396;
  double t1402;
  double t1404;
  double t1406;
  double t1408;
  double t1436;
  double t1443;
  double t1448;
  double t1468;
  double t1485;
  double t1517;
  double t1543;
  double t1550;
  double t1557;
  t325 = Cos(var1[15]);
  t327 = -1.*t325;
  t343 = 1. + t327;
  t365 = Cos(var1[4]);
  t474 = Cos(var1[17]);
  t516 = -1.*t474;
  t519 = 1. + t516;
  t544 = -3.e-6*t519;
  t553 = Sin(var1[17]);
  t384 = Cos(var1[5]);
  t401 = Sin(var1[15]);
  t404 = Sin(var1[4]);
  t436 = Sin(var1[5]);
  t608 = 3.e-6*t553;
  t612 = t544 + t608;
  t668 = 9.e-13*var1[17];
  t556 = -3.e-6*t553;
  t570 = t544 + t556;
  t684 = -9.e-12*t519;
  t623 = 3.e-6*t343*t365*t384;
  t629 = -3.e-6*t401*t404;
  t631 = -9.e-12*t343;
  t647 = 1. + t631;
  t650 = -1.*t647*t365*t436;
  t655 = t623 + t629 + t650;
  t701 = t325*t365*t384;
  t722 = t401*t404;
  t723 = -3.e-6*t343*t365*t436;
  t728 = t701 + t722 + t723;
  t771 = -1.*t365*t384*t401;
  t785 = -1.000000000009*t343;
  t804 = 1. + t785;
  t812 = t804*t404;
  t813 = -3.e-6*t365*t401*t436;
  t817 = t771 + t812 + t813;
  t823 = 3.e-6*t519;
  t856 = -1.000000000009*t519;
  t869 = 1. + t856;
  t845 = 9.e-12*t519;
  t688 = -1.*t553;
  t824 = t823 + t556;
  t887 = t823 + t608;
  t962 = Sin(var1[3]);
  t970 = Cos(var1[3]);
  t452 = 3.e-7*var1[17];
  t543 = -1.62e-17*t519;
  t588 = 0.2*t570;
  t618 = 0.1*t612;
  t622 = t452 + t543 + t588 + t618;
  t967 = t384*t962*t404;
  t973 = t970*t436;
  t988 = t967 + t973;
  t999 = t970*t384;
  t1000 = -1.*t962*t404*t436;
  t1002 = t999 + t1000;
  t683 = 0.2000000000018*t519;
  t691 = t684 + t688;
  t695 = 0.1*t691;
  t696 = -9.e-7*t612;
  t699 = t668 + t683 + t695 + t696;
  t737 = 0.1000000000009*t519;
  t746 = -9.e-7*t570;
  t759 = t684 + t553;
  t764 = 0.2*t759;
  t768 = t668 + t737 + t746 + t764;
  t1004 = 3.e-6*t365*t401*t962;
  t1009 = 3.e-6*t343*t988;
  t1016 = t647*t1002;
  t1018 = t1004 + t1009 + t1016;
  t849 = t845 + t553;
  t1029 = -1.*t365*t401*t962;
  t1043 = t325*t988;
  t1049 = 3.e-6*t343*t1002;
  t1050 = t1029 + t1043 + t1049;
  t1059 = -1.*t804*t365*t962;
  t1062 = -1.*t401*t988;
  t1063 = 3.e-6*t401*t1002;
  t1065 = t1059 + t1062 + t1063;
  t899 = t845 + t688;
  t913 = -1.8e-11*t519;
  t914 = 1. + t913;
  t1349 = -1.*t970*t384*t404;
  t1374 = t962*t436;
  t1376 = t1349 + t1374;
  t1393 = t384*t962;
  t1396 = t970*t404*t436;
  t1402 = t1393 + t1396;
  t1404 = -3.e-6*t970*t365*t401;
  t1406 = 3.e-6*t343*t1376;
  t1408 = t647*t1402;
  t1436 = t1404 + t1406 + t1408;
  t1443 = t970*t365*t401;
  t1448 = t325*t1376;
  t1468 = 3.e-6*t343*t1402;
  t1485 = t1443 + t1448 + t1468;
  t1517 = t804*t970*t365;
  t1543 = -1.*t401*t1376;
  t1550 = 3.e-6*t401*t1402;
  t1557 = t1517 + t1543 + t1550;
  p_output1[0]=0.2000000000018*t343*t365*t384 - 0.2000000000018*t401*t404 + 6.000000000054e-7*t343*t365*t436 + t622*t655 + t699*t728 + t768*t817 - 0.3*(t655*t824 + t728*t849 + t817*t869) + 0.2*(t728*t869 + t655*t887 + t817*t899) - 0.099999*(t728*t824 + t817*t887 + t655*t914) + var1[0] - 1.*var2[0];
  p_output1[1]=-6.000000000054e-7*t1002*t343 + t1018*t622 + t1050*t699 + t1065*t768 - 0.3*(t1018*t824 + t1050*t849 + t1065*t869) + 0.2*(t1050*t869 + t1018*t887 + t1065*t899) - 0.099999*(t1050*t824 + t1065*t887 + t1018*t914) + 0.2000000000018*t365*t401*t962 + 0.2000000000018*t343*t988 + var1[1] - 1.*var2[1];
  p_output1[2]=0.2000000000018*t1376*t343 - 6.000000000054e-7*t1402*t343 + t1436*t622 + t1485*t699 + t1557*t768 - 0.3*(t1436*t824 + t1485*t849 + t1557*t869) + 0.2*(t1485*t869 + t1436*t887 + t1557*t899) - 0.099999*(t1485*t824 + t1557*t887 + t1436*t914) - 0.2000000000018*t365*t401*t970 + var1[2] - 1.*var2[2];
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
