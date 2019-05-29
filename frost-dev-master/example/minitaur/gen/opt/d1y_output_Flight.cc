/*
 * Automatically Generated from Mathematica.
 * Tue 28 May 2019 22:48:19 GMT-04:00
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
static void output1(double *p_output1,const double *var1,const double *var2,const double *var3,const double *var4,const double *var5,const double *var6,const double *var7)
{
  double t3401;
  double t3404;
  double t3446;
  double t3506;
  double t3540;
  double t5060;
  double t5165;
  double t5183;
  double t5187;
  double t5351;
  double t7282;
  double t13890;
  double t14320;
  double t14682;
  double t14951;
  double t15059;
  double t15471;
  double t17608;
  double t17940;
  double t18131;
  double t18180;
  double t18229;
  t3401 = -1.*var5[0];
  t3404 = t3401 + var5[1];
  t3446 = Power(t3404,-5);
  t3506 = -1. + var6[0];
  t3540 = -1. + var7[0];
  t5060 = 1/t3540;
  t5165 = -1.*var1[0];
  t5183 = t5165 + var1[1];
  t5187 = t3506*t5060*t5183;
  t5351 = t3401 + var1[0] + t5187;
  t7282 = Power(t5351,4);
  t13890 = Power(t3404,-4);
  t14320 = Power(t5351,3);
  t14682 = 1/t3404;
  t14951 = -1.*t14682*t5351;
  t15059 = 1. + t14951;
  t15471 = Power(t3404,-3);
  t17608 = Power(t5351,2);
  t17940 = Power(t15059,2);
  t18131 = Power(t3404,-2);
  t18180 = Power(t15059,3);
  t18229 = Power(t15059,4);
  p_output1[0]=0.5*var3[6] + 0.5*var3[7] + 5.*t14682*t18229*var4[0] - 5.*t14682*t18229*var4[8] + 20.*t18131*t18180*t5351*var4[8] + 30.*t15471*t17608*t17940*var4[16] - 20.*t18131*t18180*t5351*var4[16] + 20.*t13890*t14320*t15059*var4[24] - 30.*t15471*t17608*t17940*var4[24] - 20.*t13890*t14320*t15059*var4[32] + 5.*t3446*t7282*var4[32] - 5.*t3446*t7282*var4[40];
  p_output1[1]=-1.*var3[6] + var3[7] + 5.*t14682*t18229*var4[1] - 5.*t14682*t18229*var4[9] + 20.*t18131*t18180*t5351*var4[9] + 30.*t15471*t17608*t17940*var4[17] - 20.*t18131*t18180*t5351*var4[17] + 20.*t13890*t14320*t15059*var4[25] - 30.*t15471*t17608*t17940*var4[25] - 20.*t13890*t14320*t15059*var4[33] + 5.*t3446*t7282*var4[33] - 5.*t3446*t7282*var4[41];
  p_output1[2]=0.5*var3[10] + 0.5*var3[11] + 5.*t14682*t18229*var4[2] - 5.*t14682*t18229*var4[10] + 20.*t18131*t18180*t5351*var4[10] + 30.*t15471*t17608*t17940*var4[18] - 20.*t18131*t18180*t5351*var4[18] + 20.*t13890*t14320*t15059*var4[26] - 30.*t15471*t17608*t17940*var4[26] - 20.*t13890*t14320*t15059*var4[34] + 5.*t3446*t7282*var4[34] - 5.*t3446*t7282*var4[42];
  p_output1[3]=-1.*var3[10] + var3[11] + 5.*t14682*t18229*var4[3] - 5.*t14682*t18229*var4[11] + 20.*t18131*t18180*t5351*var4[11] + 30.*t15471*t17608*t17940*var4[19] - 20.*t18131*t18180*t5351*var4[19] + 20.*t13890*t14320*t15059*var4[27] - 30.*t15471*t17608*t17940*var4[27] - 20.*t13890*t14320*t15059*var4[35] + 5.*t3446*t7282*var4[35] - 5.*t3446*t7282*var4[43];
  p_output1[4]=0.5*var3[14] + 0.5*var3[15] + 5.*t14682*t18229*var4[4] - 5.*t14682*t18229*var4[12] + 20.*t18131*t18180*t5351*var4[12] + 30.*t15471*t17608*t17940*var4[20] - 20.*t18131*t18180*t5351*var4[20] + 20.*t13890*t14320*t15059*var4[28] - 30.*t15471*t17608*t17940*var4[28] - 20.*t13890*t14320*t15059*var4[36] + 5.*t3446*t7282*var4[36] - 5.*t3446*t7282*var4[44];
  p_output1[5]=-1.*var3[14] + var3[15] + 5.*t14682*t18229*var4[5] - 5.*t14682*t18229*var4[13] + 20.*t18131*t18180*t5351*var4[13] + 30.*t15471*t17608*t17940*var4[21] - 20.*t18131*t18180*t5351*var4[21] + 20.*t13890*t14320*t15059*var4[29] - 30.*t15471*t17608*t17940*var4[29] - 20.*t13890*t14320*t15059*var4[37] + 5.*t3446*t7282*var4[37] - 5.*t3446*t7282*var4[45];
  p_output1[6]=0.5*var3[18] + 0.5*var3[19] + 5.*t14682*t18229*var4[6] - 5.*t14682*t18229*var4[14] + 20.*t18131*t18180*t5351*var4[14] + 30.*t15471*t17608*t17940*var4[22] - 20.*t18131*t18180*t5351*var4[22] + 20.*t13890*t14320*t15059*var4[30] - 30.*t15471*t17608*t17940*var4[30] - 20.*t13890*t14320*t15059*var4[38] + 5.*t3446*t7282*var4[38] - 5.*t3446*t7282*var4[46];
  p_output1[7]=-1.*var3[18] + var3[19] + 5.*t14682*t18229*var4[7] - 5.*t14682*t18229*var4[15] + 20.*t18131*t18180*t5351*var4[15] + 30.*t15471*t17608*t17940*var4[23] - 20.*t18131*t18180*t5351*var4[23] + 20.*t13890*t14320*t15059*var4[31] - 30.*t15471*t17608*t17940*var4[31] - 20.*t13890*t14320*t15059*var4[39] + 5.*t3446*t7282*var4[39] - 5.*t3446*t7282*var4[47];
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

  double *var1,*var2,*var3,*var4,*var5,*var6,*var7;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 7)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Seven input(s) required (var1,var2,var3,var4,var5,var6,var7).");
    }
  else if( nlhs > 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:maxlhs", "Too many output arguments.");
    }

  /*  The input must be a noncomplex double vector or scaler.  */
  mrows = mxGetM(prhs[0]);
  ncols = mxGetN(prhs[0]);
  if( !mxIsDouble(prhs[0]) || mxIsComplex(prhs[0]) ||
    ( !(mrows == 2 && ncols == 1) && 
      !(mrows == 1 && ncols == 2))) 
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
    ( !(mrows == 48 && ncols == 1) && 
      !(mrows == 1 && ncols == 48))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var4 is wrong.");
    }
  mrows = mxGetM(prhs[4]);
  ncols = mxGetN(prhs[4]);
  if( !mxIsDouble(prhs[4]) || mxIsComplex(prhs[4]) ||
    ( !(mrows == 2 && ncols == 1) && 
      !(mrows == 1 && ncols == 2))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var5 is wrong.");
    }
  mrows = mxGetM(prhs[5]);
  ncols = mxGetN(prhs[5]);
  if( !mxIsDouble(prhs[5]) || mxIsComplex(prhs[5]) ||
    ( !(mrows == 1 && ncols == 1) && 
      !(mrows == 1 && ncols == 1))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var6 is wrong.");
    }
  mrows = mxGetM(prhs[6]);
  ncols = mxGetN(prhs[6]);
  if( !mxIsDouble(prhs[6]) || mxIsComplex(prhs[6]) ||
    ( !(mrows == 1 && ncols == 1) && 
      !(mrows == 1 && ncols == 1))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var7 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
  var3 = mxGetPr(prhs[2]);
  var4 = mxGetPr(prhs[3]);
  var5 = mxGetPr(prhs[4]);
  var6 = mxGetPr(prhs[5]);
  var7 = mxGetPr(prhs[6]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 8, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3,var4,var5,var6,var7);


}

#else // MATLAB_MEX_FILE

#include "d1y_output_Flight.hh"

namespace Flight2
{

void d1y_output_Flight_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4,const double *var5,const double *var6,const double *var7)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4, var5, var6, var7);

}

}

#endif // MATLAB_MEX_FILE
