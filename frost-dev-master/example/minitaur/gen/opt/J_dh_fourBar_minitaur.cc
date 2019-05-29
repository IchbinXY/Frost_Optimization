/*
 * Automatically Generated from Mathematica.
 * Wed 29 May 2019 15:04:54 GMT-04:00
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
  double t542;
  double t555;
  double t453;
  double t632;
  double t815;
  double t818;
  double t894;
  double t905;
  double t789;
  double t851;
  double t945;
  double t981;
  double t363;
  double t364;
  double t430;
  double t435;
  double t501;
  double t540;
  double t563;
  double t578;
  double t1031;
  double t1032;
  double t1063;
  double t1066;
  double t1055;
  double t1088;
  double t1105;
  double t1106;
  double t1124;
  double t1127;
  double t1101;
  double t1120;
  double t1145;
  double t1192;
  double t1018;
  double t1023;
  double t1044;
  double t1048;
  double t1059;
  double t1062;
  double t1067;
  double t1077;
  double t1200;
  double t1201;
  double t1223;
  double t1224;
  double t1205;
  double t1229;
  double t1237;
  double t1238;
  double t1242;
  double t1247;
  double t1235;
  double t1240;
  double t1259;
  double t1265;
  double t1198;
  double t1199;
  double t1202;
  double t1203;
  double t1217;
  double t1222;
  double t1225;
  double t1226;
  double t1276;
  double t1277;
  double t1285;
  double t1286;
  double t1281;
  double t1290;
  double t1301;
  double t1303;
  double t1308;
  double t1330;
  double t1296;
  double t1305;
  double t1336;
  double t1343;
  double t1274;
  double t1275;
  double t1278;
  double t1279;
  double t1283;
  double t1284;
  double t1287;
  double t1288;
  t411 = var1[14] + var1[16];
  t412 = Sin(t411);
  t542 = var1[15] + var1[17];
  t555 = Sin(t542);
  t453 = -0.1*var2[16]*t412;
  t632 = 0.1*var2[17]*t555;
  t815 = Cos(t411);
  t818 = 0.1*t815;
  t894 = Cos(t542);
  t905 = -0.1*t894;
  t789 = Cos(var1[14]);
  t851 = Cos(var1[15]);
  t945 = -0.1*var2[16]*t815;
  t981 = 0.1*var2[17]*t894;
  t363 = Sin(var1[14]);
  t364 = -0.05*t363;
  t430 = -0.1*t412;
  t435 = t364 + t430;
  t501 = Sin(var1[15]);
  t540 = 0.05*t501;
  t563 = 0.1*t555;
  t578 = t540 + t563;
  t1031 = var1[6] + var1[8];
  t1032 = Sin(t1031);
  t1063 = var1[9] + var1[7];
  t1066 = Sin(t1063);
  t1055 = -0.1*var2[8]*t1032;
  t1088 = 0.1*var2[9]*t1066;
  t1105 = Cos(t1031);
  t1106 = 0.1*t1105;
  t1124 = Cos(t1063);
  t1127 = -0.1*t1124;
  t1101 = Cos(var1[6]);
  t1120 = Cos(var1[7]);
  t1145 = -0.1*var2[8]*t1105;
  t1192 = 0.1*var2[9]*t1124;
  t1018 = Sin(var1[6]);
  t1023 = -0.05*t1018;
  t1044 = -0.1*t1032;
  t1048 = t1023 + t1044;
  t1059 = Sin(var1[7]);
  t1062 = 0.05*t1059;
  t1067 = 0.1*t1066;
  t1077 = t1062 + t1067;
  t1200 = var1[18] + var1[20];
  t1201 = Sin(t1200);
  t1223 = var1[19] + var1[21];
  t1224 = Sin(t1223);
  t1205 = -0.1*var2[20]*t1201;
  t1229 = 0.1*var2[21]*t1224;
  t1237 = Cos(t1200);
  t1238 = 0.1*t1237;
  t1242 = Cos(t1223);
  t1247 = -0.1*t1242;
  t1235 = Cos(var1[18]);
  t1240 = Cos(var1[19]);
  t1259 = -0.1*var2[20]*t1237;
  t1265 = 0.1*var2[21]*t1242;
  t1198 = Sin(var1[18]);
  t1199 = -0.05*t1198;
  t1202 = -0.1*t1201;
  t1203 = t1199 + t1202;
  t1217 = Sin(var1[19]);
  t1222 = 0.05*t1217;
  t1225 = 0.1*t1224;
  t1226 = t1222 + t1225;
  t1276 = var1[10] + var1[12];
  t1277 = Sin(t1276);
  t1285 = var1[11] + var1[13];
  t1286 = Sin(t1285);
  t1281 = -0.1*var2[12]*t1277;
  t1290 = 0.1*var2[13]*t1286;
  t1301 = Cos(t1276);
  t1303 = 0.1*t1301;
  t1308 = Cos(t1285);
  t1330 = -0.1*t1308;
  t1296 = Cos(var1[10]);
  t1305 = Cos(var1[11]);
  t1336 = -0.1*var2[12]*t1301;
  t1343 = 0.1*var2[13]*t1308;
  t1274 = Sin(var1[10]);
  t1275 = -0.05*t1274;
  t1278 = -0.1*t1277;
  t1279 = t1275 + t1278;
  t1283 = Sin(var1[11]);
  t1284 = 0.05*t1283;
  t1287 = 0.1*t1286;
  t1288 = t1284 + t1287;
  p_output1[0]=t453 + t435*var2[14];
  p_output1[1]=t632 + t578*var2[15];
  p_output1[2]=t453 - 0.1*t412*var2[14];
  p_output1[3]=t632 + 0.1*t555*var2[15];
  p_output1[4]=0.05*t789 + t818;
  p_output1[5]=-0.05*t851 + t905;
  p_output1[6]=t818;
  p_output1[7]=t905;
  p_output1[8]=t945 + (-0.05*t789 - 0.1*t815)*var2[14];
  p_output1[9]=t981 + (0.05*t851 + 0.1*t894)*var2[15];
  p_output1[10]=t945 - 0.1*t815*var2[14];
  p_output1[11]=t981 + 0.1*t894*var2[15];
  p_output1[12]=t435;
  p_output1[13]=t578;
  p_output1[14]=t430;
  p_output1[15]=t563;
  p_output1[16]=t1055 + t1048*var2[6];
  p_output1[17]=t1088 + t1077*var2[7];
  p_output1[18]=t1055 - 0.1*t1032*var2[6];
  p_output1[19]=t1088 + 0.1*t1066*var2[7];
  p_output1[20]=0.05*t1101 + t1106;
  p_output1[21]=-0.05*t1120 + t1127;
  p_output1[22]=t1106;
  p_output1[23]=t1127;
  p_output1[24]=t1145 + (-0.05*t1101 - 0.1*t1105)*var2[6];
  p_output1[25]=t1192 + (0.05*t1120 + 0.1*t1124)*var2[7];
  p_output1[26]=t1145 - 0.1*t1105*var2[6];
  p_output1[27]=t1192 + 0.1*t1124*var2[7];
  p_output1[28]=t1048;
  p_output1[29]=t1077;
  p_output1[30]=t1044;
  p_output1[31]=t1067;
  p_output1[32]=t1205 + t1203*var2[18];
  p_output1[33]=t1229 + t1226*var2[19];
  p_output1[34]=t1205 - 0.1*t1201*var2[18];
  p_output1[35]=t1229 + 0.1*t1224*var2[19];
  p_output1[36]=0.05*t1235 + t1238;
  p_output1[37]=-0.05*t1240 + t1247;
  p_output1[38]=t1238;
  p_output1[39]=t1247;
  p_output1[40]=t1259 + (-0.05*t1235 - 0.1*t1237)*var2[18];
  p_output1[41]=t1265 + (0.05*t1240 + 0.1*t1242)*var2[19];
  p_output1[42]=t1259 - 0.1*t1237*var2[18];
  p_output1[43]=t1265 + 0.1*t1242*var2[19];
  p_output1[44]=t1203;
  p_output1[45]=t1226;
  p_output1[46]=t1202;
  p_output1[47]=t1225;
  p_output1[48]=t1281 + t1279*var2[10];
  p_output1[49]=t1290 + t1288*var2[11];
  p_output1[50]=t1281 - 0.1*t1277*var2[10];
  p_output1[51]=t1290 + 0.1*t1286*var2[11];
  p_output1[52]=0.05*t1296 + t1303;
  p_output1[53]=-0.05*t1305 + t1330;
  p_output1[54]=t1303;
  p_output1[55]=t1330;
  p_output1[56]=t1336 + (-0.05*t1296 - 0.1*t1301)*var2[10];
  p_output1[57]=t1343 + (0.05*t1305 + 0.1*t1308)*var2[11];
  p_output1[58]=t1336 - 0.1*t1301*var2[10];
  p_output1[59]=t1343 + 0.1*t1308*var2[11];
  p_output1[60]=t1279;
  p_output1[61]=t1288;
  p_output1[62]=t1278;
  p_output1[63]=t1287;
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
    ( !(mrows == 22 && ncols == 1) && 
      !(mrows == 1 && ncols == 22))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var2 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 64, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_dh_fourBar_minitaur.hh"

namespace FrontStance
{

void J_dh_fourBar_minitaur_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
