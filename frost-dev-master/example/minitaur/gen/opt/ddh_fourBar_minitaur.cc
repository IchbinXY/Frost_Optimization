/*
 * Automatically Generated from Mathematica.
 * Wed 29 May 2019 15:05:00 GMT-04:00
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
static void output1(double *p_output1,const double *var1,const double *var2,const double *var3,const double *var4)
{
  double t364;
  double t411;
  double t412;
  double t430;
  double t435;
  double t451;
  double t542;
  double t555;
  double t563;
  double t578;
  double t579;
  double t632;
  double t739;
  double t818;
  double t906;
  double t790;
  double t946;
  double t997;
  double t1055;
  double t1089;
  double t851;
  double t862;
  double t894;
  double t905;
  double t954;
  double t965;
  double t966;
  double t981;
  double t1124;
  double t1127;
  double t1128;
  double t1131;
  double t1132;
  double t1135;
  double t1189;
  double t1190;
  double t1191;
  double t1192;
  double t1193;
  double t1194;
  double t1201;
  double t1203;
  double t1223;
  double t1199;
  double t1230;
  double t1236;
  double t1258;
  double t1271;
  double t1205;
  double t1213;
  double t1217;
  double t1222;
  double t1232;
  double t1233;
  double t1234;
  double t1235;
  double t1283;
  double t1284;
  double t1285;
  double t1286;
  double t1287;
  double t1288;
  double t1293;
  double t1294;
  double t1295;
  double t1296;
  double t1297;
  double t1301;
  double t1308;
  double t1333;
  double t1340;
  double t1331;
  double t1346;
  double t1353;
  double t1468;
  double t1478;
  double t1335;
  double t1336;
  double t1337;
  double t1339;
  double t1349;
  double t1350;
  double t1351;
  double t1352;
  double t1490;
  double t1491;
  double t1492;
  double t1493;
  double t1494;
  double t1495;
  double t1501;
  double t1502;
  double t1503;
  double t1504;
  double t1505;
  double t1506;
  double t1511;
  double t1515;
  double t1521;
  double t1513;
  double t1527;
  double t1533;
  double t1546;
  double t1556;
  double t1517;
  double t1518;
  double t1519;
  double t1520;
  double t1529;
  double t1530;
  double t1531;
  double t1532;
  t364 = Cos(var1[14]);
  t411 = 0.05*t364;
  t412 = var1[14] + var1[16];
  t430 = Cos(t412);
  t435 = 0.1*t430;
  t451 = t411 + t435;
  t542 = Cos(var1[15]);
  t555 = -0.05*t542;
  t563 = var1[15] + var1[17];
  t578 = Cos(t563);
  t579 = -0.1*t578;
  t632 = t555 + t579;
  t739 = Sin(var1[14]);
  t818 = Sin(t412);
  t906 = -0.1*var2[16]*t818;
  t790 = Sin(var1[15]);
  t946 = Sin(t563);
  t997 = 0.1*var2[17]*t946;
  t1055 = -0.1*var2[16]*t430;
  t1089 = 0.1*var2[17]*t578;
  t851 = -0.05*t739;
  t862 = -0.1*t818;
  t894 = t851 + t862;
  t905 = var2[14]*t894;
  t954 = 0.05*t790;
  t965 = 0.1*t946;
  t966 = t954 + t965;
  t981 = var2[15]*t966;
  t1124 = Cos(var1[7]);
  t1127 = -0.05*t1124;
  t1128 = var1[9] + var1[7];
  t1131 = Cos(t1128);
  t1132 = -0.1*t1131;
  t1135 = t1127 + t1132;
  t1189 = Cos(var1[6]);
  t1190 = 0.05*t1189;
  t1191 = var1[6] + var1[8];
  t1192 = Cos(t1191);
  t1193 = 0.1*t1192;
  t1194 = t1190 + t1193;
  t1201 = Sin(var1[7]);
  t1203 = Sin(t1128);
  t1223 = 0.1*var2[9]*t1203;
  t1199 = Sin(var1[6]);
  t1230 = Sin(t1191);
  t1236 = -0.1*var2[8]*t1230;
  t1258 = 0.1*var2[9]*t1131;
  t1271 = -0.1*var2[8]*t1192;
  t1205 = 0.05*t1201;
  t1213 = 0.1*t1203;
  t1217 = t1205 + t1213;
  t1222 = var2[7]*t1217;
  t1232 = -0.05*t1199;
  t1233 = -0.1*t1230;
  t1234 = t1232 + t1233;
  t1235 = var2[6]*t1234;
  t1283 = Cos(var1[18]);
  t1284 = 0.05*t1283;
  t1285 = var1[18] + var1[20];
  t1286 = Cos(t1285);
  t1287 = 0.1*t1286;
  t1288 = t1284 + t1287;
  t1293 = Cos(var1[19]);
  t1294 = -0.05*t1293;
  t1295 = var1[19] + var1[21];
  t1296 = Cos(t1295);
  t1297 = -0.1*t1296;
  t1301 = t1294 + t1297;
  t1308 = Sin(var1[18]);
  t1333 = Sin(t1285);
  t1340 = -0.1*var2[20]*t1333;
  t1331 = Sin(var1[19]);
  t1346 = Sin(t1295);
  t1353 = 0.1*var2[21]*t1346;
  t1468 = -0.1*var2[20]*t1286;
  t1478 = 0.1*var2[21]*t1296;
  t1335 = -0.05*t1308;
  t1336 = -0.1*t1333;
  t1337 = t1335 + t1336;
  t1339 = var2[18]*t1337;
  t1349 = 0.05*t1331;
  t1350 = 0.1*t1346;
  t1351 = t1349 + t1350;
  t1352 = var2[19]*t1351;
  t1490 = Cos(var1[10]);
  t1491 = 0.05*t1490;
  t1492 = var1[10] + var1[12];
  t1493 = Cos(t1492);
  t1494 = 0.1*t1493;
  t1495 = t1491 + t1494;
  t1501 = Cos(var1[11]);
  t1502 = -0.05*t1501;
  t1503 = var1[11] + var1[13];
  t1504 = Cos(t1503);
  t1505 = -0.1*t1504;
  t1506 = t1502 + t1505;
  t1511 = Sin(var1[10]);
  t1515 = Sin(t1492);
  t1521 = -0.1*var2[12]*t1515;
  t1513 = Sin(var1[11]);
  t1527 = Sin(t1503);
  t1533 = 0.1*var2[13]*t1527;
  t1546 = -0.1*var2[12]*t1493;
  t1556 = 0.1*var2[13]*t1504;
  t1517 = -0.05*t1511;
  t1518 = -0.1*t1515;
  t1519 = t1517 + t1518;
  t1520 = var2[10]*t1519;
  t1529 = 0.05*t1513;
  t1530 = 0.1*t1527;
  t1531 = t1529 + t1530;
  t1532 = var2[11]*t1531;
  p_output1[0]=0.05*t739 - 0.05*t790 + 0.1*t818 - 0.1*t946 + t451*var2[14] + (t905 + t906)*var2[14] + t632*var2[15] + (t981 + t997)*var2[15] + 0.1*t430*var2[16] + (t906 - 0.1*t818*var2[14])*var2[16] - 0.1*t578*var2[17] + (t997 + 0.1*t946*var2[15])*var2[17] + t451*var3[14] + t632*var3[15] + 0.1*t430*var3[16] - 0.1*t578*var3[17] - 1.*var4[0];
  p_output1[1]=t411 + t435 + t555 + t579 + t905 + t906 + t981 + t997 + var2[14]*(t1055 + (-0.05*t364 - 0.1*t430)*var2[14]) + var2[15]*(t1089 + (0.05*t542 + 0.1*t578)*var2[15]) + (t1055 - 0.1*t430*var2[14])*var2[16] + (t1089 + 0.1*t578*var2[15])*var2[17] + t894*var3[14] + t966*var3[15] - 0.1*t818*var3[16] + 0.1*t946*var3[17] - 1.*var4[1];
  p_output1[2]=0.05*t1199 - 0.05*t1201 - 0.1*t1203 + 0.1*t1230 + t1194*var2[6] + (t1235 + t1236)*var2[6] + t1135*var2[7] + (t1222 + t1223)*var2[7] + 0.1*t1192*var2[8] + (t1236 - 0.1*t1230*var2[6])*var2[8] - 0.1*t1131*var2[9] + (t1223 + 0.1*t1203*var2[7])*var2[9] + t1194*var3[6] + t1135*var3[7] + 0.1*t1192*var3[8] - 0.1*t1131*var3[9] - 1.*var4[2];
  p_output1[3]=t1127 + t1132 + t1190 + t1193 + t1222 + t1223 + t1235 + t1236 + var2[6]*(t1271 + (-0.05*t1189 - 0.1*t1192)*var2[6]) + var2[7]*(t1258 + (0.05*t1124 + 0.1*t1131)*var2[7]) + (t1271 - 0.1*t1192*var2[6])*var2[8] + (t1258 + 0.1*t1131*var2[7])*var2[9] + t1234*var3[6] + t1217*var3[7] - 0.1*t1230*var3[8] + 0.1*t1203*var3[9] - 1.*var4[3];
  p_output1[4]=0.05*t1308 - 0.05*t1331 + 0.1*t1333 - 0.1*t1346 + t1288*var2[18] + (t1339 + t1340)*var2[18] + t1301*var2[19] + (t1352 + t1353)*var2[19] + 0.1*t1286*var2[20] + (t1340 - 0.1*t1333*var2[18])*var2[20] - 0.1*t1296*var2[21] + (t1353 + 0.1*t1346*var2[19])*var2[21] + t1288*var3[18] + t1301*var3[19] + 0.1*t1286*var3[20] - 0.1*t1296*var3[21] - 1.*var4[4];
  p_output1[5]=t1284 + t1287 + t1294 + t1297 + t1339 + t1340 + t1352 + t1353 + var2[18]*(t1468 + (-0.05*t1283 - 0.1*t1286)*var2[18]) + var2[19]*(t1478 + (0.05*t1293 + 0.1*t1296)*var2[19]) + (t1468 - 0.1*t1286*var2[18])*var2[20] + (t1478 + 0.1*t1296*var2[19])*var2[21] + t1337*var3[18] + t1351*var3[19] - 0.1*t1333*var3[20] + 0.1*t1346*var3[21] - 1.*var4[5];
  p_output1[6]=0.05*t1511 - 0.05*t1513 + 0.1*t1515 - 0.1*t1527 + t1495*var2[10] + (t1520 + t1521)*var2[10] + t1506*var2[11] + (t1532 + t1533)*var2[11] + 0.1*t1493*var2[12] + (t1521 - 0.1*t1515*var2[10])*var2[12] - 0.1*t1504*var2[13] + (t1533 + 0.1*t1527*var2[11])*var2[13] + t1495*var3[10] + t1506*var3[11] + 0.1*t1493*var3[12] - 0.1*t1504*var3[13] - 1.*var4[6];
  p_output1[7]=t1491 + t1494 + t1502 + t1505 + t1520 + t1521 + t1532 + t1533 + var2[10]*(t1546 + (-0.05*t1490 - 0.1*t1493)*var2[10]) + var2[11]*(t1556 + (0.05*t1501 + 0.1*t1504)*var2[11]) + (t1546 - 0.1*t1493*var2[10])*var2[12] + (t1556 + 0.1*t1504*var2[11])*var2[13] + t1519*var3[10] + t1531*var3[11] - 0.1*t1515*var3[12] + 0.1*t1527*var3[13] - 1.*var4[7];
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

  double *var1,*var2,*var3,*var4;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 4)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Four input(s) required (var1,var2,var3,var4).");
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
  mrows = mxGetM(prhs[2]);
  ncols = mxGetN(prhs[2]);
  if( !mxIsDouble(prhs[2]) || mxIsComplex(prhs[2]) ||
    ( !(mrows == 22 && ncols == 1) && 
      !(mrows == 1 && ncols == 22))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var3 is wrong.");
    }
  mrows = mxGetM(prhs[3]);
  ncols = mxGetN(prhs[3]);
  if( !mxIsDouble(prhs[3]) || mxIsComplex(prhs[3]) ||
    ( !(mrows == 8 && ncols == 1) && 
      !(mrows == 1 && ncols == 8))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var4 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
  var3 = mxGetPr(prhs[2]);
  var4 = mxGetPr(prhs[3]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 8, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3,var4);


}

#else // MATLAB_MEX_FILE

#include "ddh_fourBar_minitaur.hh"

namespace FrontStance
{

void ddh_fourBar_minitaur_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4);

}

}

#endif // MATLAB_MEX_FILE
