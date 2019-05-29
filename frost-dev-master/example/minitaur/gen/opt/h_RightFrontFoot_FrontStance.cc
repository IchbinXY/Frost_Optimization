/*
 * Automatically Generated from Mathematica.
 * Wed 29 May 2019 15:05:07 GMT-04:00
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
  double t411;
  double t412;
  double t435;
  double t451;
  double t637;
  double t723;
  double t739;
  double t790;
  double t815;
  double t491;
  double t540;
  double t542;
  double t563;
  double t905;
  double t906;
  double t1009;
  double t818;
  double t851;
  double t1015;
  double t941;
  double t945;
  double t946;
  double t950;
  double t954;
  double t965;
  double t1048;
  double t1054;
  double t1055;
  double t1058;
  double t1089;
  double t1092;
  double t1093;
  double t1097;
  double t1098;
  double t1101;
  double t1105;
  double t1127;
  double t1128;
  double t1120;
  double t1018;
  double t1106;
  double t1136;
  double t1201;
  double t1204;
  double t579;
  double t789;
  double t862;
  double t916;
  double t940;
  double t1203;
  double t1213;
  double t1217;
  double t1224;
  double t1225;
  double t1226;
  double t1014;
  double t1023;
  double t1031;
  double t1032;
  double t1044;
  double t1062;
  double t1066;
  double t1067;
  double t1081;
  double t1088;
  double t1229;
  double t1231;
  double t1232;
  double t1234;
  double t1123;
  double t1237;
  double t1238;
  double t1239;
  double t1240;
  double t1242;
  double t1247;
  double t1252;
  double t1256;
  double t1188;
  double t1192;
  double t1193;
  double t1287;
  double t1288;
  double t1289;
  double t1291;
  double t1292;
  double t1293;
  double t1295;
  double t1296;
  double t1297;
  double t1301;
  double t1304;
  double t1307;
  double t1308;
  double t1331;
  double t1333;
  double t1334;
  double t1335;
  double t1336;
  t411 = Cos(var1[15]);
  t412 = -1.*t411;
  t435 = 1. + t412;
  t451 = Cos(var1[4]);
  t637 = Cos(var1[17]);
  t723 = -1.*t637;
  t739 = 1. + t723;
  t790 = -3.e-6*t739;
  t815 = Sin(var1[17]);
  t491 = Cos(var1[5]);
  t540 = Sin(var1[15]);
  t542 = Sin(var1[4]);
  t563 = Sin(var1[5]);
  t905 = 3.e-6*t815;
  t906 = t790 + t905;
  t1009 = 9.e-13*var1[17];
  t818 = -3.e-6*t815;
  t851 = t790 + t818;
  t1015 = -9.e-12*t739;
  t941 = 3.e-6*t435*t451*t491;
  t945 = -3.e-6*t540*t542;
  t946 = -9.e-12*t435;
  t950 = 1. + t946;
  t954 = -1.*t950*t451*t563;
  t965 = t941 + t945 + t954;
  t1048 = t411*t451*t491;
  t1054 = t540*t542;
  t1055 = -3.e-6*t435*t451*t563;
  t1058 = t1048 + t1054 + t1055;
  t1089 = -1.*t451*t491*t540;
  t1092 = -1.000000000009*t435;
  t1093 = 1. + t1092;
  t1097 = t1093*t542;
  t1098 = -3.e-6*t451*t540*t563;
  t1101 = t1089 + t1097 + t1098;
  t1105 = 3.e-6*t739;
  t1127 = -1.000000000009*t739;
  t1128 = 1. + t1127;
  t1120 = 9.e-12*t739;
  t1018 = -1.*t815;
  t1106 = t1105 + t818;
  t1136 = t1105 + t905;
  t1201 = Sin(var1[3]);
  t1204 = Cos(var1[3]);
  t579 = 3.e-7*var1[17];
  t789 = -1.62e-17*t739;
  t862 = 0.2*t851;
  t916 = 0.1*t906;
  t940 = t579 + t789 + t862 + t916;
  t1203 = t491*t1201*t542;
  t1213 = t1204*t563;
  t1217 = t1203 + t1213;
  t1224 = t1204*t491;
  t1225 = -1.*t1201*t542*t563;
  t1226 = t1224 + t1225;
  t1014 = 0.2000000000018*t739;
  t1023 = t1015 + t1018;
  t1031 = 0.1*t1023;
  t1032 = -9.e-7*t906;
  t1044 = t1009 + t1014 + t1031 + t1032;
  t1062 = 0.1000000000009*t739;
  t1066 = -9.e-7*t851;
  t1067 = t1015 + t815;
  t1081 = 0.2*t1067;
  t1088 = t1009 + t1062 + t1066 + t1081;
  t1229 = 3.e-6*t451*t540*t1201;
  t1231 = 3.e-6*t435*t1217;
  t1232 = t950*t1226;
  t1234 = t1229 + t1231 + t1232;
  t1123 = t1120 + t815;
  t1237 = -1.*t451*t540*t1201;
  t1238 = t411*t1217;
  t1239 = 3.e-6*t435*t1226;
  t1240 = t1237 + t1238 + t1239;
  t1242 = -1.*t1093*t451*t1201;
  t1247 = -1.*t540*t1217;
  t1252 = 3.e-6*t540*t1226;
  t1256 = t1242 + t1247 + t1252;
  t1188 = t1120 + t1018;
  t1192 = -1.8e-11*t739;
  t1193 = 1. + t1192;
  t1287 = -1.*t1204*t491*t542;
  t1288 = t1201*t563;
  t1289 = t1287 + t1288;
  t1291 = t491*t1201;
  t1292 = t1204*t542*t563;
  t1293 = t1291 + t1292;
  t1295 = -3.e-6*t1204*t451*t540;
  t1296 = 3.e-6*t435*t1289;
  t1297 = t950*t1293;
  t1301 = t1295 + t1296 + t1297;
  t1304 = t1204*t451*t540;
  t1307 = t411*t1289;
  t1308 = 3.e-6*t435*t1293;
  t1331 = t1304 + t1307 + t1308;
  t1333 = t1093*t1204*t451;
  t1334 = -1.*t540*t1289;
  t1335 = 3.e-6*t540*t1293;
  t1336 = t1333 + t1334 + t1335;
  p_output1[0]=t1044*t1058 + t1088*t1101 + 0.2000000000018*t435*t451*t491 - 0.2000000000018*t540*t542 + 6.000000000054e-7*t435*t451*t563 + t940*t965 - 0.3*(t1058*t1123 + t1101*t1128 + t1106*t965) + 0.2*(t1058*t1128 + t1101*t1188 + t1136*t965) - 0.099999*(t1058*t1106 + t1101*t1136 + t1193*t965) + var1[0] - 1.*var2[0];
  p_output1[1]=t1044*t1240 + t1088*t1256 - 0.3*(t1106*t1234 + t1123*t1240 + t1128*t1256) - 0.099999*(t1193*t1234 + t1106*t1240 + t1136*t1256) + 0.2*(t1136*t1234 + t1128*t1240 + t1188*t1256) + 0.2000000000018*t1217*t435 - 6.000000000054e-7*t1226*t435 + 0.2000000000018*t1201*t451*t540 + t1234*t940 + var1[1] - 1.*var2[1];
  p_output1[2]=t1044*t1331 + t1088*t1336 - 0.3*(t1106*t1301 + t1123*t1331 + t1128*t1336) - 0.099999*(t1193*t1301 + t1106*t1331 + t1136*t1336) + 0.2*(t1136*t1301 + t1128*t1331 + t1188*t1336) + 0.2000000000018*t1289*t435 - 6.000000000054e-7*t1293*t435 - 0.2000000000018*t1204*t451*t540 + t1301*t940 + var1[2] - 1.*var2[2];
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
