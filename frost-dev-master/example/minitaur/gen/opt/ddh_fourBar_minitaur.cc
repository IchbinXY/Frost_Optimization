/*
 * Automatically Generated from Mathematica.
 * Tue 28 May 2019 22:29:47 GMT-04:00
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
  double t279;
  double t325;
  double t327;
  double t339;
  double t343;
  double t365;
  double t404;
  double t428;
  double t436;
  double t451;
  double t452;
  double t469;
  double t519;
  double t556;
  double t612;
  double t544;
  double t631;
  double t662;
  double t723;
  double t771;
  double t570;
  double t588;
  double t600;
  double t608;
  double t650;
  double t655;
  double t657;
  double t660;
  double t852;
  double t856;
  double t869;
  double t876;
  double t877;
  double t886;
  double t902;
  double t911;
  double t912;
  double t913;
  double t914;
  double t916;
  double t962;
  double t967;
  double t991;
  double t932;
  double t1007;
  double t1028;
  double t1069;
  double t1110;
  double t972;
  double t973;
  double t988;
  double t990;
  double t1016;
  double t1017;
  double t1018;
  double t1024;
  double t1308;
  double t1317;
  double t1319;
  double t1333;
  double t1349;
  double t1374;
  double t1402;
  double t1403;
  double t1404;
  double t1406;
  double t1408;
  double t1436;
  double t1468;
  double t1517;
  double t1577;
  double t1485;
  double t1583;
  double t1621;
  double t1667;
  double t1720;
  double t1550;
  double t1557;
  double t1561;
  double t1574;
  double t1598;
  double t1599;
  double t1618;
  double t1619;
  double t1791;
  double t1806;
  double t1807;
  double t1810;
  double t1811;
  double t1813;
  double t1882;
  double t1897;
  double t1898;
  double t1899;
  double t1903;
  double t1919;
  double t1928;
  double t1934;
  double t1961;
  double t1932;
  double t1972;
  double t1979;
  double t2007;
  double t2038;
  double t1940;
  double t1952;
  double t1956;
  double t1960;
  double t1974;
  double t1975;
  double t1977;
  double t1978;
  t279 = Cos(var1[14]);
  t325 = 0.05*t279;
  t327 = var1[14] + var1[16];
  t339 = Cos(t327);
  t343 = 0.1*t339;
  t365 = t325 + t343;
  t404 = Cos(var1[15]);
  t428 = -0.05*t404;
  t436 = var1[15] + var1[17];
  t451 = Cos(t436);
  t452 = -0.1*t451;
  t469 = t428 + t452;
  t519 = Sin(var1[14]);
  t556 = Sin(t327);
  t612 = -0.1*var2[16]*t556;
  t544 = Sin(var1[15]);
  t631 = Sin(t436);
  t662 = 0.1*var2[17]*t631;
  t723 = -0.1*var2[16]*t339;
  t771 = 0.1*var2[17]*t451;
  t570 = -0.05*t519;
  t588 = -0.1*t556;
  t600 = t570 + t588;
  t608 = var2[14]*t600;
  t650 = 0.05*t544;
  t655 = 0.1*t631;
  t657 = t650 + t655;
  t660 = var2[15]*t657;
  t852 = Cos(var1[7]);
  t856 = -0.05*t852;
  t869 = var1[9] + var1[7];
  t876 = Cos(t869);
  t877 = -0.1*t876;
  t886 = t856 + t877;
  t902 = Cos(var1[6]);
  t911 = 0.05*t902;
  t912 = var1[6] + var1[8];
  t913 = Cos(t912);
  t914 = 0.1*t913;
  t916 = t911 + t914;
  t962 = Sin(var1[7]);
  t967 = Sin(t869);
  t991 = 0.1*var2[9]*t967;
  t932 = Sin(var1[6]);
  t1007 = Sin(t912);
  t1028 = -0.1*var2[8]*t1007;
  t1069 = 0.1*var2[9]*t876;
  t1110 = -0.1*var2[8]*t913;
  t972 = 0.05*t962;
  t973 = 0.1*t967;
  t988 = t972 + t973;
  t990 = var2[7]*t988;
  t1016 = -0.05*t932;
  t1017 = -0.1*t1007;
  t1018 = t1016 + t1017;
  t1024 = var2[6]*t1018;
  t1308 = Cos(var1[18]);
  t1317 = 0.05*t1308;
  t1319 = var1[18] + var1[20];
  t1333 = Cos(t1319);
  t1349 = 0.1*t1333;
  t1374 = t1317 + t1349;
  t1402 = Cos(var1[19]);
  t1403 = -0.05*t1402;
  t1404 = var1[19] + var1[21];
  t1406 = Cos(t1404);
  t1408 = -0.1*t1406;
  t1436 = t1403 + t1408;
  t1468 = Sin(var1[18]);
  t1517 = Sin(t1319);
  t1577 = -0.1*var2[20]*t1517;
  t1485 = Sin(var1[19]);
  t1583 = Sin(t1404);
  t1621 = 0.1*var2[21]*t1583;
  t1667 = -0.1*var2[20]*t1333;
  t1720 = 0.1*var2[21]*t1406;
  t1550 = -0.05*t1468;
  t1557 = -0.1*t1517;
  t1561 = t1550 + t1557;
  t1574 = var2[18]*t1561;
  t1598 = 0.05*t1485;
  t1599 = 0.1*t1583;
  t1618 = t1598 + t1599;
  t1619 = var2[19]*t1618;
  t1791 = Cos(var1[10]);
  t1806 = 0.05*t1791;
  t1807 = var1[10] + var1[12];
  t1810 = Cos(t1807);
  t1811 = 0.1*t1810;
  t1813 = t1806 + t1811;
  t1882 = Cos(var1[11]);
  t1897 = -0.05*t1882;
  t1898 = var1[11] + var1[13];
  t1899 = Cos(t1898);
  t1903 = -0.1*t1899;
  t1919 = t1897 + t1903;
  t1928 = Sin(var1[10]);
  t1934 = Sin(t1807);
  t1961 = -0.1*var2[12]*t1934;
  t1932 = Sin(var1[11]);
  t1972 = Sin(t1898);
  t1979 = 0.1*var2[13]*t1972;
  t2007 = -0.1*var2[12]*t1810;
  t2038 = 0.1*var2[13]*t1899;
  t1940 = -0.05*t1928;
  t1952 = -0.1*t1934;
  t1956 = t1940 + t1952;
  t1960 = var2[10]*t1956;
  t1974 = 0.05*t1932;
  t1975 = 0.1*t1972;
  t1977 = t1974 + t1975;
  t1978 = var2[11]*t1977;
  p_output1[0]=0.05*t519 - 0.05*t544 + 0.1*t556 - 0.1*t631 + t365*var2[14] + (t608 + t612)*var2[14] + t469*var2[15] + (t660 + t662)*var2[15] + 0.1*t339*var2[16] + (t612 - 0.1*t556*var2[14])*var2[16] - 0.1*t451*var2[17] + (t662 + 0.1*t631*var2[15])*var2[17] + t365*var3[14] + t469*var3[15] + 0.1*t339*var3[16] - 0.1*t451*var3[17] - 1.*var4[0];
  p_output1[1]=t325 + t343 + t428 + t452 + t608 + t612 + t660 + t662 + var2[14]*(t723 + (-0.05*t279 - 0.1*t339)*var2[14]) + var2[15]*(t771 + (0.05*t404 + 0.1*t451)*var2[15]) + (t723 - 0.1*t339*var2[14])*var2[16] + (t771 + 0.1*t451*var2[15])*var2[17] + t600*var3[14] + t657*var3[15] - 0.1*t556*var3[16] + 0.1*t631*var3[17] - 1.*var4[1];
  p_output1[2]=0.1*t1007 + 0.05*t932 - 0.05*t962 - 0.1*t967 + (t1024 + t1028)*var2[6] + t916*var2[6] + t886*var2[7] + (t990 + t991)*var2[7] + 0.1*t913*var2[8] + (t1028 - 0.1*t1007*var2[6])*var2[8] - 0.1*t876*var2[9] + (t991 + 0.1*t967*var2[7])*var2[9] + t916*var3[6] + t886*var3[7] + 0.1*t913*var3[8] - 0.1*t876*var3[9] - 1.*var4[2];
  p_output1[3]=t1024 + t1028 + t856 + t877 + t911 + t914 + t990 + t991 + var2[6]*(t1110 + (-0.05*t902 - 0.1*t913)*var2[6]) + var2[7]*(t1069 + (0.05*t852 + 0.1*t876)*var2[7]) + (t1110 - 0.1*t913*var2[6])*var2[8] + (t1069 + 0.1*t876*var2[7])*var2[9] + t1018*var3[6] + t988*var3[7] - 0.1*t1007*var3[8] + 0.1*t967*var3[9] - 1.*var4[3];
  p_output1[4]=0.05*t1468 - 0.05*t1485 + 0.1*t1517 - 0.1*t1583 + t1374*var2[18] + (t1574 + t1577)*var2[18] + t1436*var2[19] + (t1619 + t1621)*var2[19] + 0.1*t1333*var2[20] + (t1577 - 0.1*t1517*var2[18])*var2[20] - 0.1*t1406*var2[21] + (t1621 + 0.1*t1583*var2[19])*var2[21] + t1374*var3[18] + t1436*var3[19] + 0.1*t1333*var3[20] - 0.1*t1406*var3[21] - 1.*var4[4];
  p_output1[5]=t1317 + t1349 + t1403 + t1408 + t1574 + t1577 + t1619 + t1621 + var2[18]*(t1667 + (-0.05*t1308 - 0.1*t1333)*var2[18]) + var2[19]*(t1720 + (0.05*t1402 + 0.1*t1406)*var2[19]) + (t1667 - 0.1*t1333*var2[18])*var2[20] + (t1720 + 0.1*t1406*var2[19])*var2[21] + t1561*var3[18] + t1618*var3[19] - 0.1*t1517*var3[20] + 0.1*t1583*var3[21] - 1.*var4[5];
  p_output1[6]=0.05*t1928 - 0.05*t1932 + 0.1*t1934 - 0.1*t1972 + t1813*var2[10] + (t1960 + t1961)*var2[10] + t1919*var2[11] + (t1978 + t1979)*var2[11] + 0.1*t1810*var2[12] + (t1961 - 0.1*t1934*var2[10])*var2[12] - 0.1*t1899*var2[13] + (t1979 + 0.1*t1972*var2[11])*var2[13] + t1813*var3[10] + t1919*var3[11] + 0.1*t1810*var3[12] - 0.1*t1899*var3[13] - 1.*var4[6];
  p_output1[7]=t1806 + t1811 + t1897 + t1903 + t1960 + t1961 + t1978 + t1979 + var2[10]*(t2007 + (-0.05*t1791 - 0.1*t1810)*var2[10]) + var2[11]*(t2038 + (0.05*t1882 + 0.1*t1899)*var2[11]) + (t2007 - 0.1*t1810*var2[10])*var2[12] + (t2038 + 0.1*t1899*var2[11])*var2[13] + t1956*var3[10] + t1977*var3[11] - 0.1*t1934*var3[12] + 0.1*t1972*var3[13] - 1.*var4[7];
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
