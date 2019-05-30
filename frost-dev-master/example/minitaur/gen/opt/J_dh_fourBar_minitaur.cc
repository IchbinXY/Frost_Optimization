/*
 * Automatically Generated from Mathematica.
 * Wed 29 May 2019 23:44:30 GMT-04:00
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
  double t16342;
  double t16354;
  double t17729;
  double t17797;
  double t17692;
  double t17833;
  double t18230;
  double t18613;
  double t19527;
  double t19544;
  double t17906;
  double t19509;
  double t19588;
  double t19623;
  double t15719;
  double t16071;
  double t16918;
  double t17230;
  double t17711;
  double t17725;
  double t17804;
  double t17818;
  double t19664;
  double t19673;
  double t19732;
  double t19752;
  double t19683;
  double t19798;
  double t20053;
  double t20206;
  double t20243;
  double t20255;
  double t19835;
  double t20219;
  double t20373;
  double t20503;
  double t19648;
  double t19650;
  double t19676;
  double t19678;
  double t19702;
  double t19730;
  double t19769;
  double t19788;
  double t20595;
  double t20598;
  double t20859;
  double t20867;
  double t20651;
  double t20915;
  double t21044;
  double t21045;
  double t21141;
  double t21155;
  double t21021;
  double t21098;
  double t21253;
  double t21329;
  double t20590;
  double t20594;
  double t20599;
  double t20601;
  double t20839;
  double t20845;
  double t20874;
  double t20892;
  double t21562;
  double t21620;
  double t21808;
  double t21811;
  double t21671;
  double t21915;
  double t22133;
  double t22141;
  double t22185;
  double t22242;
  double t22101;
  double t22161;
  double t22438;
  double t22525;
  double t21476;
  double t21507;
  double t21629;
  double t21632;
  double t21798;
  double t21807;
  double t21821;
  double t21899;
  t16342 = var1[14] + var1[16];
  t16354 = Sin(t16342);
  t17729 = var1[15] + var1[17];
  t17797 = Sin(t17729);
  t17692 = -0.1*var2[16]*t16354;
  t17833 = 0.1*var2[17]*t17797;
  t18230 = Cos(t16342);
  t18613 = 0.1*t18230;
  t19527 = Cos(t17729);
  t19544 = -0.1*t19527;
  t17906 = Cos(var1[14]);
  t19509 = Cos(var1[15]);
  t19588 = -0.1*var2[16]*t18230;
  t19623 = 0.1*var2[17]*t19527;
  t15719 = Sin(var1[14]);
  t16071 = -0.05*t15719;
  t16918 = -0.1*t16354;
  t17230 = t16071 + t16918;
  t17711 = Sin(var1[15]);
  t17725 = 0.05*t17711;
  t17804 = 0.1*t17797;
  t17818 = t17725 + t17804;
  t19664 = var1[6] + var1[8];
  t19673 = Sin(t19664);
  t19732 = var1[9] + var1[7];
  t19752 = Sin(t19732);
  t19683 = -0.1*var2[8]*t19673;
  t19798 = 0.1*var2[9]*t19752;
  t20053 = Cos(t19664);
  t20206 = 0.1*t20053;
  t20243 = Cos(t19732);
  t20255 = -0.1*t20243;
  t19835 = Cos(var1[6]);
  t20219 = Cos(var1[7]);
  t20373 = -0.1*var2[8]*t20053;
  t20503 = 0.1*var2[9]*t20243;
  t19648 = Sin(var1[6]);
  t19650 = -0.05*t19648;
  t19676 = -0.1*t19673;
  t19678 = t19650 + t19676;
  t19702 = Sin(var1[7]);
  t19730 = 0.05*t19702;
  t19769 = 0.1*t19752;
  t19788 = t19730 + t19769;
  t20595 = var1[18] + var1[20];
  t20598 = Sin(t20595);
  t20859 = var1[19] + var1[21];
  t20867 = Sin(t20859);
  t20651 = -0.1*var2[20]*t20598;
  t20915 = 0.1*var2[21]*t20867;
  t21044 = Cos(t20595);
  t21045 = 0.1*t21044;
  t21141 = Cos(t20859);
  t21155 = -0.1*t21141;
  t21021 = Cos(var1[18]);
  t21098 = Cos(var1[19]);
  t21253 = -0.1*var2[20]*t21044;
  t21329 = 0.1*var2[21]*t21141;
  t20590 = Sin(var1[18]);
  t20594 = -0.05*t20590;
  t20599 = -0.1*t20598;
  t20601 = t20594 + t20599;
  t20839 = Sin(var1[19]);
  t20845 = 0.05*t20839;
  t20874 = 0.1*t20867;
  t20892 = t20845 + t20874;
  t21562 = var1[10] + var1[12];
  t21620 = Sin(t21562);
  t21808 = var1[11] + var1[13];
  t21811 = Sin(t21808);
  t21671 = -0.1*var2[12]*t21620;
  t21915 = 0.1*var2[13]*t21811;
  t22133 = Cos(t21562);
  t22141 = 0.1*t22133;
  t22185 = Cos(t21808);
  t22242 = -0.1*t22185;
  t22101 = Cos(var1[10]);
  t22161 = Cos(var1[11]);
  t22438 = -0.1*var2[12]*t22133;
  t22525 = 0.1*var2[13]*t22185;
  t21476 = Sin(var1[10]);
  t21507 = -0.05*t21476;
  t21629 = -0.1*t21620;
  t21632 = t21507 + t21629;
  t21798 = Sin(var1[11]);
  t21807 = 0.05*t21798;
  t21821 = 0.1*t21811;
  t21899 = t21807 + t21821;
  p_output1[0]=t17692 + t17230*var2[14];
  p_output1[1]=t17833 + t17818*var2[15];
  p_output1[2]=t17692 - 0.1*t16354*var2[14];
  p_output1[3]=t17833 + 0.1*t17797*var2[15];
  p_output1[4]=0.05*t17906 + t18613;
  p_output1[5]=-0.05*t19509 + t19544;
  p_output1[6]=t18613;
  p_output1[7]=t19544;
  p_output1[8]=t19588 + (-0.05*t17906 - 0.1*t18230)*var2[14];
  p_output1[9]=t19623 + (0.05*t19509 + 0.1*t19527)*var2[15];
  p_output1[10]=t19588 - 0.1*t18230*var2[14];
  p_output1[11]=t19623 + 0.1*t19527*var2[15];
  p_output1[12]=t17230;
  p_output1[13]=t17818;
  p_output1[14]=t16918;
  p_output1[15]=t17804;
  p_output1[16]=t19683 + t19678*var2[6];
  p_output1[17]=t19798 + t19788*var2[7];
  p_output1[18]=t19683 - 0.1*t19673*var2[6];
  p_output1[19]=t19798 + 0.1*t19752*var2[7];
  p_output1[20]=0.05*t19835 + t20206;
  p_output1[21]=-0.05*t20219 + t20255;
  p_output1[22]=t20206;
  p_output1[23]=t20255;
  p_output1[24]=t20373 + (-0.05*t19835 - 0.1*t20053)*var2[6];
  p_output1[25]=t20503 + (0.05*t20219 + 0.1*t20243)*var2[7];
  p_output1[26]=t20373 - 0.1*t20053*var2[6];
  p_output1[27]=t20503 + 0.1*t20243*var2[7];
  p_output1[28]=t19678;
  p_output1[29]=t19788;
  p_output1[30]=t19676;
  p_output1[31]=t19769;
  p_output1[32]=t20651 + t20601*var2[18];
  p_output1[33]=t20915 + t20892*var2[19];
  p_output1[34]=t20651 - 0.1*t20598*var2[18];
  p_output1[35]=t20915 + 0.1*t20867*var2[19];
  p_output1[36]=0.05*t21021 + t21045;
  p_output1[37]=-0.05*t21098 + t21155;
  p_output1[38]=t21045;
  p_output1[39]=t21155;
  p_output1[40]=t21253 + (-0.05*t21021 - 0.1*t21044)*var2[18];
  p_output1[41]=t21329 + (0.05*t21098 + 0.1*t21141)*var2[19];
  p_output1[42]=t21253 - 0.1*t21044*var2[18];
  p_output1[43]=t21329 + 0.1*t21141*var2[19];
  p_output1[44]=t20601;
  p_output1[45]=t20892;
  p_output1[46]=t20599;
  p_output1[47]=t20874;
  p_output1[48]=t21671 + t21632*var2[10];
  p_output1[49]=t21915 + t21899*var2[11];
  p_output1[50]=t21671 - 0.1*t21620*var2[10];
  p_output1[51]=t21915 + 0.1*t21811*var2[11];
  p_output1[52]=0.05*t22101 + t22141;
  p_output1[53]=-0.05*t22161 + t22242;
  p_output1[54]=t22141;
  p_output1[55]=t22242;
  p_output1[56]=t22438 + (-0.05*t22101 - 0.1*t22133)*var2[10];
  p_output1[57]=t22525 + (0.05*t22161 + 0.1*t22185)*var2[11];
  p_output1[58]=t22438 - 0.1*t22133*var2[10];
  p_output1[59]=t22525 + 0.1*t22185*var2[11];
  p_output1[60]=t21632;
  p_output1[61]=t21899;
  p_output1[62]=t21629;
  p_output1[63]=t21821;
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
