/*
 * Automatically Generated from Mathematica.
 * Wed 29 May 2019 15:10:31 GMT-04:00
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
  double t10463;
  double t8281;
  double t10935;
  double t11069;
  double t12253;
  double t28102;
  double t28094;
  double t30353;
  double t36773;
  double t36808;
  double t36810;
  double t36815;
  double t37082;
  double t9610;
  double t10350;
  double t28097;
  double t34191;
  double t36002;
  double t36553;
  double t36691;
  double t36694;
  double t37115;
  double t37117;
  double t37144;
  double t37083;
  double t37113;
  double t37162;
  double t37125;
  double t37130;
  double t37135;
  double t37140;
  double t37141;
  double t37142;
  double t37177;
  double t37178;
  double t37179;
  double t37180;
  double t37205;
  double t37206;
  double t37207;
  double t37208;
  double t37209;
  double t37210;
  double t37212;
  double t37218;
  double t37219;
  double t37215;
  double t37170;
  double t37213;
  double t37230;
  t10463 = Cos(var1[10]);
  t8281 = Cos(var1[3]);
  t10935 = -1.*t10463;
  t11069 = 1. + t10935;
  t12253 = Cos(var1[5]);
  t28102 = Sin(var1[3]);
  t28094 = Sin(var1[4]);
  t30353 = Sin(var1[5]);
  t36773 = Cos(var1[12]);
  t36808 = -1.*t36773;
  t36810 = 1. + t36808;
  t36815 = -3.e-6*t36810;
  t37082 = Sin(var1[12]);
  t9610 = Cos(var1[4]);
  t10350 = Sin(var1[10]);
  t28097 = -1.*t8281*t12253*t28094;
  t34191 = t28102*t30353;
  t36002 = t28097 + t34191;
  t36553 = t12253*t28102;
  t36691 = t8281*t28094*t30353;
  t36694 = t36553 + t36691;
  t37115 = 3.e-6*t37082;
  t37117 = t36815 + t37115;
  t37144 = 3.e-13*var1[12];
  t37083 = -3.e-6*t37082;
  t37113 = t36815 + t37083;
  t37162 = -9.e-12*t36810;
  t37125 = -3.e-6*t8281*t9610*t10350;
  t37130 = 3.e-6*t11069*t36002;
  t37135 = -9.e-12*t11069;
  t37140 = 1. + t37135;
  t37141 = t37140*t36694;
  t37142 = t37125 + t37130 + t37141;
  t37177 = t8281*t9610*t10350;
  t37178 = t10463*t36002;
  t37179 = 3.e-6*t11069*t36694;
  t37180 = t37177 + t37178 + t37179;
  t37205 = -1.000000000009*t11069;
  t37206 = 1. + t37205;
  t37207 = t37206*t8281*t9610;
  t37208 = -1.*t10350*t36002;
  t37209 = 3.e-6*t10350*t36694;
  t37210 = t37207 + t37208 + t37209;
  t37212 = 3.e-6*t36810;
  t37218 = -1.000000000009*t36810;
  t37219 = 1. + t37218;
  t37215 = 9.e-12*t36810;
  t37170 = -1.*t37082;
  t37213 = t37212 + t37083;
  t37230 = t37212 + t37115;
  p_output1[0]=(0.2*(-1. + t10463) - 1.8e-12*t11069)*t36002 + 6.000000000054e-7*t11069*t36694 + (-0.2000000000048*t36810 + 3.e-7*t37117 + t37144 + 0.100000000003*(t37162 + t37170))*t37180 + (0.1000000000039*t36810 + 3.e-7*t37113 + t37144 - 0.200000000003*(t37082 + t37162))*t37210 - 0.3*(t37142*t37213 + t37180*(t37082 + t37215) + t37210*t37219) + 0.2*(-1.*t37210*(t37170 + t37215) - 1.*t37180*t37219 - 1.*t37142*t37230) + 0.100001*((1. - 1.8e-11*t36810)*t37142 + t37180*t37213 + t37210*t37230) + 0.2000000000018*t10350*t8281*t9610 + var1[2] + t37142*(5.4e-18*t36810 - 0.200000000003*t37113 + 0.100000000003*t37117 + 1.e-7*var1[12]);
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 1, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "u_LeftBackFootHeight_Flight.hh"

namespace Flight1
{

void u_LeftBackFootHeight_Flight_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
