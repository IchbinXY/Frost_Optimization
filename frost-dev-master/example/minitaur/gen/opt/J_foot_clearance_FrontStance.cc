/*
 * Automatically Generated from Mathematica.
 * Tue 28 May 2019 22:32:45 GMT-04:00
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
  double t448;
  double t480;
  double t502;
  double t536;
  double t677;
  double t537;
  double t640;
  double t679;
  double t782;
  double t793;
  double t803;
  double t820;
  double t828;
  double t136;
  double t408;
  double t661;
  double t687;
  double t689;
  double t720;
  double t724;
  double t743;
  double t857;
  double t859;
  double t879;
  double t829;
  double t836;
  double t881;
  double t867;
  double t868;
  double t871;
  double t872;
  double t874;
  double t876;
  double t901;
  double t902;
  double t908;
  double t909;
  double t1211;
  double t1230;
  double t1255;
  double t1256;
  double t1274;
  double t1301;
  double t1316;
  double t1584;
  double t1616;
  double t1525;
  double t888;
  double t1335;
  double t1657;
  double t752;
  double t806;
  double t841;
  double t863;
  double t864;
  double t880;
  double t894;
  double t895;
  double t896;
  double t900;
  double t927;
  double t972;
  double t994;
  double t1069;
  double t1159;
  double t2065;
  double t2078;
  double t2079;
  double t2081;
  double t1568;
  double t2083;
  double t2094;
  double t2103;
  double t2106;
  double t2108;
  double t2109;
  double t2119;
  double t2123;
  double t1738;
  double t1807;
  double t1847;
  double t2281;
  double t2282;
  double t2283;
  double t2289;
  double t2290;
  double t2295;
  double t2312;
  double t2319;
  double t2333;
  double t2336;
  double t2340;
  double t2354;
  double t2356;
  double t2357;
  double t2358;
  double t2758;
  double t2803;
  double t2814;
  double t3045;
  double t3080;
  double t3088;
  double t3150;
  double t3173;
  double t3222;
  double t3232;
  double t3274;
  double t3286;
  double t3292;
  double t3401;
  double t3409;
  double t3515;
  double t3517;
  double t3511;
  double t3513;
  double t3579;
  double t3535;
  double t3549;
  double t3563;
  double t3574;
  double t3589;
  double t3590;
  double t3591;
  double t3936;
  double t3938;
  double t3943;
  double t4033;
  double t3997;
  t448 = Sin(var1[3]);
  t480 = Cos(var1[15]);
  t502 = -1.*t480;
  t536 = 1. + t502;
  t677 = Cos(var1[3]);
  t537 = Cos(var1[5]);
  t640 = Sin(var1[4]);
  t679 = Sin(var1[5]);
  t782 = Cos(var1[17]);
  t793 = -1.*t782;
  t803 = 1. + t793;
  t820 = -3.e-6*t803;
  t828 = Sin(var1[17]);
  t136 = Cos(var1[4]);
  t408 = Sin(var1[15]);
  t661 = t537*t448*t640;
  t687 = t677*t679;
  t689 = t661 + t687;
  t720 = t677*t537;
  t724 = -1.*t448*t640*t679;
  t743 = t720 + t724;
  t857 = 3.e-6*t828;
  t859 = t820 + t857;
  t879 = 9.e-13*var1[17];
  t829 = -3.e-6*t828;
  t836 = t820 + t829;
  t881 = -9.e-12*t803;
  t867 = 3.e-6*t136*t408*t448;
  t868 = 3.e-6*t536*t689;
  t871 = -9.e-12*t536;
  t872 = 1. + t871;
  t874 = t872*t743;
  t876 = t867 + t868 + t874;
  t901 = -1.*t136*t408*t448;
  t902 = t480*t689;
  t908 = 3.e-6*t536*t743;
  t909 = t901 + t902 + t908;
  t1211 = -1.000000000009*t536;
  t1230 = 1. + t1211;
  t1255 = -1.*t1230*t136*t448;
  t1256 = -1.*t408*t689;
  t1274 = 3.e-6*t408*t743;
  t1301 = t1255 + t1256 + t1274;
  t1316 = 3.e-6*t803;
  t1584 = -1.000000000009*t803;
  t1616 = 1. + t1584;
  t1525 = 9.e-12*t803;
  t888 = -1.*t828;
  t1335 = t1316 + t829;
  t1657 = t1316 + t857;
  t752 = 3.e-7*var1[17];
  t806 = -1.62e-17*t803;
  t841 = 0.2*t836;
  t863 = 0.1*t859;
  t864 = t752 + t806 + t841 + t863;
  t880 = 0.2000000000018*t803;
  t894 = t881 + t888;
  t895 = 0.1*t894;
  t896 = -9.e-7*t859;
  t900 = t879 + t880 + t895 + t896;
  t927 = 0.1000000000009*t803;
  t972 = -9.e-7*t836;
  t994 = t881 + t828;
  t1069 = 0.2*t994;
  t1159 = t879 + t927 + t972 + t1069;
  t2065 = -3.e-6*t536*t677*t136*t537;
  t2078 = 3.e-6*t677*t408*t640;
  t2079 = t872*t677*t136*t679;
  t2081 = t2065 + t2078 + t2079;
  t1568 = t1525 + t828;
  t2083 = -1.*t480*t677*t136*t537;
  t2094 = -1.*t677*t408*t640;
  t2103 = 3.e-6*t536*t677*t136*t679;
  t2106 = t2083 + t2094 + t2103;
  t2108 = t677*t136*t537*t408;
  t2109 = -1.*t1230*t677*t640;
  t2119 = 3.e-6*t677*t136*t408*t679;
  t2123 = t2108 + t2109 + t2119;
  t1738 = t1525 + t888;
  t1807 = -1.8e-11*t803;
  t1847 = 1. + t1807;
  t2281 = t677*t537*t640;
  t2282 = -1.*t448*t679;
  t2283 = t2281 + t2282;
  t2289 = t537*t448;
  t2290 = t677*t640*t679;
  t2295 = t2289 + t2290;
  t2312 = t872*t2283;
  t2319 = 3.e-6*t536*t2295;
  t2333 = t2312 + t2319;
  t2336 = 3.e-6*t536*t2283;
  t2340 = t480*t2295;
  t2354 = t2336 + t2340;
  t2356 = 3.e-6*t408*t2283;
  t2357 = -1.*t408*t2295;
  t2358 = t2356 + t2357;
  t2758 = -1.*t677*t537*t640;
  t2803 = t448*t679;
  t2814 = t2758 + t2803;
  t3045 = -1.000000000009*t677*t136*t408;
  t3080 = -1.*t480*t2814;
  t3088 = 3.e-6*t480*t2295;
  t3150 = t3045 + t3080 + t3088;
  t3173 = -3.e-6*t480*t677*t136;
  t3222 = 3.e-6*t408*t2814;
  t3232 = -9.e-12*t408*t2295;
  t3274 = t3173 + t3222 + t3232;
  t3286 = t480*t677*t136;
  t3292 = -1.*t408*t2814;
  t3401 = 3.e-6*t408*t2295;
  t3409 = t3286 + t3292 + t3401;
  t3515 = 3.e-6*t782;
  t3517 = t3515 + t829;
  t3511 = -3.e-6*t782;
  t3513 = t3511 + t829;
  t3579 = -9.e-12*t828;
  t3535 = -3.e-6*t677*t136*t408;
  t3549 = 3.e-6*t536*t2814;
  t3563 = t872*t2295;
  t3574 = t3535 + t3549 + t3563;
  t3589 = t677*t136*t408;
  t3590 = t480*t2814;
  t3591 = t3589 + t3590 + t2319;
  t3936 = t1230*t677*t136;
  t3938 = t3936 + t3292 + t3401;
  t3943 = t3515 + t857;
  t4033 = t3511 + t857;
  t3997 = 9.e-12*t828;
  p_output1[0]=1.;
  p_output1[1]=t1159*t1301 + 0.2000000000018*t136*t408*t448 + 0.2000000000018*t536*t689 - 6.000000000054e-7*t536*t743 + t864*t876 + t900*t909 - 0.099999*(t1301*t1657 + t1847*t876 + t1335*t909) - 0.3*(t1301*t1616 + t1335*t876 + t1568*t909) + 0.2*(t1301*t1738 + t1657*t876 + t1616*t909);
  p_output1[2]=t1159*t2123 - 0.3*(t1335*t2081 + t1568*t2106 + t1616*t2123) - 0.099999*(t1847*t2081 + t1335*t2106 + t1657*t2123) + 0.2*(t1657*t2081 + t1616*t2106 + t1738*t2123) - 0.2000000000018*t136*t536*t537*t677 + 0.2000000000018*t408*t640*t677 - 6.000000000054e-7*t136*t536*t677*t679 + t2081*t864 + t2106*t900;
  p_output1[3]=t1159*t2358 - 0.3*(t1335*t2333 + t1568*t2354 + t1616*t2358) - 0.099999*(t1847*t2333 + t1335*t2354 + t1657*t2358) + 0.2*(t1657*t2333 + t1616*t2354 + t1738*t2358) - 6.000000000054e-7*t2283*t536 + 0.2000000000018*t2295*t536 + t2333*t864 + t2354*t900;
  p_output1[4]=t1159*t3150 - 0.099999*(t1657*t3150 + t1847*t3274 + t1335*t3409) - 0.3*(t1616*t3150 + t1335*t3274 + t1568*t3409) + 0.2*(t1738*t3150 + t1657*t3274 + t1616*t3409) - 6.000000000054e-7*t2295*t408 + 0.2000000000018*t2814*t408 - 0.2000000000018*t136*t480*t677 + t3274*t864 + t3409*t900;
  p_output1[5]=t3574*(3.e-7 + 0.2*t3513 + 0.1*t3517 - 1.62e-17*t828) + t3938*(9.e-13 - 9.e-7*t3513 + 0.2*(t3579 + t782) + 0.1000000000009*t828) + t3591*(9.e-13 - 9.e-7*t3517 + 0.1*(t3579 + t793) + 0.2000000000018*t828) - 0.099999*(t3938*t3943 + t3591*t4033 - 1.8e-11*t3574*t828) + 0.2*(t3574*t3943 + t3938*(t3997 + t793) - 1.000000000009*t3591*t828) - 0.3*(t3574*t4033 + t3591*(t3997 + t782) - 1.000000000009*t3938*t828);
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
