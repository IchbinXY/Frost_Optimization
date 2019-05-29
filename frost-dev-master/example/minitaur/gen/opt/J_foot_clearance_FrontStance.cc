/*
 * Automatically Generated from Mathematica.
 * Wed 29 May 2019 15:06:48 GMT-04:00
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
  double t11237;
  double t11415;
  double t12255;
  double t12272;
  double t12382;
  double t12281;
  double t12347;
  double t12417;
  double t12667;
  double t12706;
  double t12731;
  double t12805;
  double t12807;
  double t690;
  double t10597;
  double t12353;
  double t12479;
  double t12484;
  double t12581;
  double t12582;
  double t12587;
  double t12826;
  double t12828;
  double t12855;
  double t12808;
  double t12811;
  double t12861;
  double t12832;
  double t12833;
  double t12838;
  double t12842;
  double t12843;
  double t12846;
  double t12890;
  double t12891;
  double t12898;
  double t12912;
  double t12949;
  double t12950;
  double t12951;
  double t12955;
  double t12956;
  double t12957;
  double t12960;
  double t12993;
  double t12999;
  double t12981;
  double t12871;
  double t12969;
  double t13054;
  double t12625;
  double t12732;
  double t12825;
  double t12829;
  double t12830;
  double t12856;
  double t12875;
  double t12880;
  double t12885;
  double t12886;
  double t12915;
  double t12917;
  double t12918;
  double t12922;
  double t12924;
  double t13195;
  double t13200;
  double t13201;
  double t13228;
  double t12988;
  double t13238;
  double t13245;
  double t13247;
  double t13250;
  double t13260;
  double t13265;
  double t13266;
  double t13303;
  double t13063;
  double t13076;
  double t13078;
  double t13366;
  double t13369;
  double t13374;
  double t13381;
  double t13382;
  double t13383;
  double t13386;
  double t13387;
  double t13398;
  double t13403;
  double t13404;
  double t13409;
  double t13413;
  double t13423;
  double t13424;
  double t13506;
  double t13507;
  double t13528;
  double t13535;
  double t13537;
  double t13539;
  double t13541;
  double t13547;
  double t13548;
  double t13551;
  double t13556;
  double t13568;
  double t13569;
  double t13578;
  double t13579;
  double t13660;
  double t13661;
  double t13656;
  double t13657;
  double t13721;
  double t13711;
  double t13712;
  double t13714;
  double t13715;
  double t13879;
  double t13884;
  double t13891;
  double t13950;
  double t13953;
  double t13956;
  double t13995;
  double t13973;
  t11237 = Sin(var1[3]);
  t11415 = Cos(var1[15]);
  t12255 = -1.*t11415;
  t12272 = 1. + t12255;
  t12382 = Cos(var1[3]);
  t12281 = Cos(var1[5]);
  t12347 = Sin(var1[4]);
  t12417 = Sin(var1[5]);
  t12667 = Cos(var1[17]);
  t12706 = -1.*t12667;
  t12731 = 1. + t12706;
  t12805 = -3.e-6*t12731;
  t12807 = Sin(var1[17]);
  t690 = Cos(var1[4]);
  t10597 = Sin(var1[15]);
  t12353 = t12281*t11237*t12347;
  t12479 = t12382*t12417;
  t12484 = t12353 + t12479;
  t12581 = t12382*t12281;
  t12582 = -1.*t11237*t12347*t12417;
  t12587 = t12581 + t12582;
  t12826 = 3.e-6*t12807;
  t12828 = t12805 + t12826;
  t12855 = 9.e-13*var1[17];
  t12808 = -3.e-6*t12807;
  t12811 = t12805 + t12808;
  t12861 = -9.e-12*t12731;
  t12832 = 3.e-6*t690*t10597*t11237;
  t12833 = 3.e-6*t12272*t12484;
  t12838 = -9.e-12*t12272;
  t12842 = 1. + t12838;
  t12843 = t12842*t12587;
  t12846 = t12832 + t12833 + t12843;
  t12890 = -1.*t690*t10597*t11237;
  t12891 = t11415*t12484;
  t12898 = 3.e-6*t12272*t12587;
  t12912 = t12890 + t12891 + t12898;
  t12949 = -1.000000000009*t12272;
  t12950 = 1. + t12949;
  t12951 = -1.*t12950*t690*t11237;
  t12955 = -1.*t10597*t12484;
  t12956 = 3.e-6*t10597*t12587;
  t12957 = t12951 + t12955 + t12956;
  t12960 = 3.e-6*t12731;
  t12993 = -1.000000000009*t12731;
  t12999 = 1. + t12993;
  t12981 = 9.e-12*t12731;
  t12871 = -1.*t12807;
  t12969 = t12960 + t12808;
  t13054 = t12960 + t12826;
  t12625 = 3.e-7*var1[17];
  t12732 = -1.62e-17*t12731;
  t12825 = 0.2*t12811;
  t12829 = 0.1*t12828;
  t12830 = t12625 + t12732 + t12825 + t12829;
  t12856 = 0.2000000000018*t12731;
  t12875 = t12861 + t12871;
  t12880 = 0.1*t12875;
  t12885 = -9.e-7*t12828;
  t12886 = t12855 + t12856 + t12880 + t12885;
  t12915 = 0.1000000000009*t12731;
  t12917 = -9.e-7*t12811;
  t12918 = t12861 + t12807;
  t12922 = 0.2*t12918;
  t12924 = t12855 + t12915 + t12917 + t12922;
  t13195 = -3.e-6*t12272*t12382*t690*t12281;
  t13200 = 3.e-6*t12382*t10597*t12347;
  t13201 = t12842*t12382*t690*t12417;
  t13228 = t13195 + t13200 + t13201;
  t12988 = t12981 + t12807;
  t13238 = -1.*t11415*t12382*t690*t12281;
  t13245 = -1.*t12382*t10597*t12347;
  t13247 = 3.e-6*t12272*t12382*t690*t12417;
  t13250 = t13238 + t13245 + t13247;
  t13260 = t12382*t690*t12281*t10597;
  t13265 = -1.*t12950*t12382*t12347;
  t13266 = 3.e-6*t12382*t690*t10597*t12417;
  t13303 = t13260 + t13265 + t13266;
  t13063 = t12981 + t12871;
  t13076 = -1.8e-11*t12731;
  t13078 = 1. + t13076;
  t13366 = t12382*t12281*t12347;
  t13369 = -1.*t11237*t12417;
  t13374 = t13366 + t13369;
  t13381 = t12281*t11237;
  t13382 = t12382*t12347*t12417;
  t13383 = t13381 + t13382;
  t13386 = t12842*t13374;
  t13387 = 3.e-6*t12272*t13383;
  t13398 = t13386 + t13387;
  t13403 = 3.e-6*t12272*t13374;
  t13404 = t11415*t13383;
  t13409 = t13403 + t13404;
  t13413 = 3.e-6*t10597*t13374;
  t13423 = -1.*t10597*t13383;
  t13424 = t13413 + t13423;
  t13506 = -1.*t12382*t12281*t12347;
  t13507 = t11237*t12417;
  t13528 = t13506 + t13507;
  t13535 = -1.000000000009*t12382*t690*t10597;
  t13537 = -1.*t11415*t13528;
  t13539 = 3.e-6*t11415*t13383;
  t13541 = t13535 + t13537 + t13539;
  t13547 = -3.e-6*t11415*t12382*t690;
  t13548 = 3.e-6*t10597*t13528;
  t13551 = -9.e-12*t10597*t13383;
  t13556 = t13547 + t13548 + t13551;
  t13568 = t11415*t12382*t690;
  t13569 = -1.*t10597*t13528;
  t13578 = 3.e-6*t10597*t13383;
  t13579 = t13568 + t13569 + t13578;
  t13660 = 3.e-6*t12667;
  t13661 = t13660 + t12808;
  t13656 = -3.e-6*t12667;
  t13657 = t13656 + t12808;
  t13721 = -9.e-12*t12807;
  t13711 = -3.e-6*t12382*t690*t10597;
  t13712 = 3.e-6*t12272*t13528;
  t13714 = t12842*t13383;
  t13715 = t13711 + t13712 + t13714;
  t13879 = t12382*t690*t10597;
  t13884 = t11415*t13528;
  t13891 = t13879 + t13884 + t13387;
  t13950 = t12950*t12382*t690;
  t13953 = t13950 + t13569 + t13578;
  t13956 = t13660 + t12826;
  t13995 = t13656 + t12826;
  t13973 = 9.e-12*t12807;
  p_output1[0]=1.;
  p_output1[1]=0.2000000000018*t12272*t12484 - 6.000000000054e-7*t12272*t12587 + t12830*t12846 + t12886*t12912 + t12924*t12957 - 0.3*(t12846*t12969 + t12912*t12988 + t12957*t12999) + 0.2*(t12912*t12999 + t12846*t13054 + t12957*t13063) - 0.099999*(t12912*t12969 + t12957*t13054 + t12846*t13078) + 0.2000000000018*t10597*t11237*t690;
  p_output1[2]=0.2000000000018*t10597*t12347*t12382 + t12830*t13228 + t12886*t13250 + t12924*t13303 - 0.3*(t12969*t13228 + t12988*t13250 + t12999*t13303) - 0.099999*(t13078*t13228 + t12969*t13250 + t13054*t13303) + 0.2*(t13054*t13228 + t12999*t13250 + t13063*t13303) - 0.2000000000018*t12272*t12281*t12382*t690 - 6.000000000054e-7*t12272*t12382*t12417*t690;
  p_output1[3]=-6.000000000054e-7*t12272*t13374 + 0.2000000000018*t12272*t13383 + t12830*t13398 + t12886*t13409 + t12924*t13424 - 0.3*(t12969*t13398 + t12988*t13409 + t12999*t13424) - 0.099999*(t13078*t13398 + t12969*t13409 + t13054*t13424) + 0.2*(t13054*t13398 + t12999*t13409 + t13063*t13424);
  p_output1[4]=-6.000000000054e-7*t10597*t13383 + 0.2000000000018*t10597*t13528 + t12924*t13541 + t12830*t13556 + t12886*t13579 - 0.099999*(t13054*t13541 + t13078*t13556 + t12969*t13579) - 0.3*(t12999*t13541 + t12969*t13556 + t12988*t13579) + 0.2*(t13063*t13541 + t13054*t13556 + t12999*t13579) - 0.2000000000018*t11415*t12382*t690;
  p_output1[5]=(3.e-7 - 1.62e-17*t12807 + 0.2*t13657 + 0.1*t13661)*t13715 + (9.e-13 + 0.2000000000018*t12807 - 9.e-7*t13661 + 0.1*(t12706 + t13721))*t13891 + (9.e-13 + 0.1000000000009*t12807 - 9.e-7*t13657 + 0.2*(t12667 + t13721))*t13953 + 0.2*(-1.000000000009*t12807*t13891 + t13715*t13956 + t13953*(t12706 + t13973)) - 0.3*(-1.000000000009*t12807*t13953 + t13891*(t12667 + t13973) + t13715*t13995) - 0.099999*(-1.8e-11*t12807*t13715 + t13953*t13956 + t13891*t13995);
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

#include "J_foot_clearance_FrontStance.hh"

namespace FrontStance
{

void J_foot_clearance_FrontStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
