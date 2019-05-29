/*
 * Automatically Generated from Mathematica.
 * Tue 28 May 2019 22:29:28 GMT-04:00
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
  double t339;
  double t384;
  double t390;
  double t401;
  double t451;
  double t452;
  double t504;
  double t516;
  double t553;
  double t556;
  double t568;
  double t608;
  double t612;
  double t616;
  double t629;
  double t631;
  double t657;
  double t660;
  double t683;
  double t684;
  double t688;
  double t699;
  double t701;
  double t722;
  double t737;
  double t738;
  double t764;
  double t768;
  double t812;
  double t813;
  double t817;
  double t844;
  double t845;
  double t849;
  double t876;
  double t877;
  double t892;
  double t899;
  t325 = var1[14] + var1[16];
  t327 = Cos(t325);
  t339 = 0.1*t327;
  t384 = var1[15] + var1[17];
  t390 = Cos(t384);
  t401 = -0.1*t390;
  t451 = Sin(t325);
  t452 = -0.1*t451;
  t504 = Sin(t384);
  t516 = 0.1*t504;
  t553 = var1[6] + var1[8];
  t556 = Cos(t553);
  t568 = 0.1*t556;
  t608 = var1[9] + var1[7];
  t612 = Cos(t608);
  t616 = -0.1*t612;
  t629 = Sin(t553);
  t631 = -0.1*t629;
  t657 = Sin(t608);
  t660 = 0.1*t657;
  t683 = var1[18] + var1[20];
  t684 = Cos(t683);
  t688 = 0.1*t684;
  t699 = var1[19] + var1[21];
  t701 = Cos(t699);
  t722 = -0.1*t701;
  t737 = Sin(t683);
  t738 = -0.1*t737;
  t764 = Sin(t699);
  t768 = 0.1*t764;
  t812 = var1[10] + var1[12];
  t813 = Cos(t812);
  t817 = 0.1*t813;
  t844 = var1[11] + var1[13];
  t845 = Cos(t844);
  t849 = -0.1*t845;
  t876 = Sin(t812);
  t877 = -0.1*t876;
  t892 = Sin(t844);
  t899 = 0.1*t892;
  p_output1[0]=t339 + 0.05*Cos(var1[14]);
  p_output1[1]=t401 - 0.05*Cos(var1[15]);
  p_output1[2]=t339;
  p_output1[3]=t401;
  p_output1[4]=-1.;
  p_output1[5]=t452 - 0.05*Sin(var1[14]);
  p_output1[6]=t516 + 0.05*Sin(var1[15]);
  p_output1[7]=t452;
  p_output1[8]=t516;
  p_output1[9]=-1.;
  p_output1[10]=t568 + 0.05*Cos(var1[6]);
  p_output1[11]=t616 - 0.05*Cos(var1[7]);
  p_output1[12]=t568;
  p_output1[13]=t616;
  p_output1[14]=-1.;
  p_output1[15]=t631 - 0.05*Sin(var1[6]);
  p_output1[16]=t660 + 0.05*Sin(var1[7]);
  p_output1[17]=t631;
  p_output1[18]=t660;
  p_output1[19]=-1.;
  p_output1[20]=t688 + 0.05*Cos(var1[18]);
  p_output1[21]=t722 - 0.05*Cos(var1[19]);
  p_output1[22]=t688;
  p_output1[23]=t722;
  p_output1[24]=-1.;
  p_output1[25]=t738 - 0.05*Sin(var1[18]);
  p_output1[26]=t768 + 0.05*Sin(var1[19]);
  p_output1[27]=t738;
  p_output1[28]=t768;
  p_output1[29]=-1.;
  p_output1[30]=t817 + 0.05*Cos(var1[10]);
  p_output1[31]=t849 - 0.05*Cos(var1[11]);
  p_output1[32]=t817;
  p_output1[33]=t849;
  p_output1[34]=-1.;
  p_output1[35]=t877 - 0.05*Sin(var1[10]);
  p_output1[36]=t899 + 0.05*Sin(var1[11]);
  p_output1[37]=t877;
  p_output1[38]=t899;
  p_output1[39]=-1.;
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
    ( !(mrows == 8 && ncols == 1) && 
      !(mrows == 1 && ncols == 8))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var2 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 40, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_h_fourBar_minitaur.hh"

namespace FrontStance
{

void J_h_fourBar_minitaur_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
