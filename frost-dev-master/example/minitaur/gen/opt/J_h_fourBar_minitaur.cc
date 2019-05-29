/*
 * Automatically Generated from Mathematica.
 * Wed 29 May 2019 15:04:47 GMT-04:00
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
  double t430;
  double t491;
  double t501;
  double t540;
  double t578;
  double t579;
  double t679;
  double t723;
  double t815;
  double t818;
  double t850;
  double t905;
  double t906;
  double t911;
  double t945;
  double t946;
  double t966;
  double t981;
  double t1014;
  double t1015;
  double t1018;
  double t1044;
  double t1048;
  double t1054;
  double t1062;
  double t1063;
  double t1081;
  double t1088;
  double t1097;
  double t1098;
  double t1101;
  double t1119;
  double t1120;
  double t1123;
  double t1131;
  double t1132;
  double t1155;
  double t1188;
  t411 = var1[14] + var1[16];
  t412 = Cos(t411);
  t430 = 0.1*t412;
  t491 = var1[15] + var1[17];
  t501 = Cos(t491);
  t540 = -0.1*t501;
  t578 = Sin(t411);
  t579 = -0.1*t578;
  t679 = Sin(t491);
  t723 = 0.1*t679;
  t815 = var1[6] + var1[8];
  t818 = Cos(t815);
  t850 = 0.1*t818;
  t905 = var1[9] + var1[7];
  t906 = Cos(t905);
  t911 = -0.1*t906;
  t945 = Sin(t815);
  t946 = -0.1*t945;
  t966 = Sin(t905);
  t981 = 0.1*t966;
  t1014 = var1[18] + var1[20];
  t1015 = Cos(t1014);
  t1018 = 0.1*t1015;
  t1044 = var1[19] + var1[21];
  t1048 = Cos(t1044);
  t1054 = -0.1*t1048;
  t1062 = Sin(t1014);
  t1063 = -0.1*t1062;
  t1081 = Sin(t1044);
  t1088 = 0.1*t1081;
  t1097 = var1[10] + var1[12];
  t1098 = Cos(t1097);
  t1101 = 0.1*t1098;
  t1119 = var1[11] + var1[13];
  t1120 = Cos(t1119);
  t1123 = -0.1*t1120;
  t1131 = Sin(t1097);
  t1132 = -0.1*t1131;
  t1155 = Sin(t1119);
  t1188 = 0.1*t1155;
  p_output1[0]=t430 + 0.05*Cos(var1[14]);
  p_output1[1]=t540 - 0.05*Cos(var1[15]);
  p_output1[2]=t430;
  p_output1[3]=t540;
  p_output1[4]=-1.;
  p_output1[5]=t579 - 0.05*Sin(var1[14]);
  p_output1[6]=t723 + 0.05*Sin(var1[15]);
  p_output1[7]=t579;
  p_output1[8]=t723;
  p_output1[9]=-1.;
  p_output1[10]=t850 + 0.05*Cos(var1[6]);
  p_output1[11]=t911 - 0.05*Cos(var1[7]);
  p_output1[12]=t850;
  p_output1[13]=t911;
  p_output1[14]=-1.;
  p_output1[15]=t946 - 0.05*Sin(var1[6]);
  p_output1[16]=t981 + 0.05*Sin(var1[7]);
  p_output1[17]=t946;
  p_output1[18]=t981;
  p_output1[19]=-1.;
  p_output1[20]=t1018 + 0.05*Cos(var1[18]);
  p_output1[21]=t1054 - 0.05*Cos(var1[19]);
  p_output1[22]=t1018;
  p_output1[23]=t1054;
  p_output1[24]=-1.;
  p_output1[25]=t1063 - 0.05*Sin(var1[18]);
  p_output1[26]=t1088 + 0.05*Sin(var1[19]);
  p_output1[27]=t1063;
  p_output1[28]=t1088;
  p_output1[29]=-1.;
  p_output1[30]=t1101 + 0.05*Cos(var1[10]);
  p_output1[31]=t1123 - 0.05*Cos(var1[11]);
  p_output1[32]=t1101;
  p_output1[33]=t1123;
  p_output1[34]=-1.;
  p_output1[35]=t1132 - 0.05*Sin(var1[10]);
  p_output1[36]=t1188 + 0.05*Sin(var1[11]);
  p_output1[37]=t1132;
  p_output1[38]=t1188;
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
