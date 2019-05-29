/*
 * Automatically Generated from Mathematica.
 * Tue 28 May 2019 23:06:56 GMT-04:00
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
  double t844;
  double t852;
  double t879;
  double t880;
  double t881;
  double t888;
  double t894;
  double t909;
  double t1007;
  double t1064;
  double t1255;
  double t1301;
  double t1316;
  double t1335;
  double t1398;
  double t1401;
  double t1508;
  double t1525;
  double t1564;
  double t1568;
  double t1619;
  double t1669;
  double t1734;
  double t1827;
  double t1857;
  double t2078;
  double t2282;
  t844 = Power(var3[6],2);
  t852 = Power(var2[0],2);
  t879 = t844*t852;
  t880 = Power(var3[7],2);
  t881 = Power(var2[1],2);
  t888 = t880*t881;
  t894 = Power(var3[10],2);
  t909 = Power(var2[2],2);
  t1007 = t894*t909;
  t1064 = Power(var3[11],2);
  t1255 = Power(var2[3],2);
  t1301 = t1064*t1255;
  t1316 = Power(var3[14],2);
  t1335 = Power(var2[4],2);
  t1398 = t1316*t1335;
  t1401 = Power(var3[15],2);
  t1508 = Power(var2[5],2);
  t1525 = t1401*t1508;
  t1564 = Power(var3[18],2);
  t1568 = Power(var2[6],2);
  t1619 = t1564*t1568;
  t1669 = Power(var3[19],2);
  t1734 = Power(var2[7],2);
  t1827 = t1669*t1734;
  t1857 = t879 + t888 + t1007 + t1301 + t1398 + t1525 + t1619 + t1827;
  t2078 = -1.*var1[0];
  t2282 = t2078 + var1[1];
  p_output1[0]=-1.*t1857*var4[0];
  p_output1[1]=t1857*var4[0];
  p_output1[2]=2.*t2282*t844*var2[0]*var4[0];
  p_output1[3]=2.*t2282*t880*var2[1]*var4[0];
  p_output1[4]=2.*t2282*t894*var2[2]*var4[0];
  p_output1[5]=2.*t1064*t2282*var2[3]*var4[0];
  p_output1[6]=2.*t1316*t2282*var2[4]*var4[0];
  p_output1[7]=2.*t1401*t2282*var2[5]*var4[0];
  p_output1[8]=2.*t1564*t2282*var2[6]*var4[0];
  p_output1[9]=2.*t1669*t2282*var2[7]*var4[0];
  p_output1[10]=2.*t2282*t852*var3[6]*var4[0];
  p_output1[11]=2.*t2282*t881*var3[7]*var4[0];
  p_output1[12]=2.*t2282*t909*var3[10]*var4[0];
  p_output1[13]=2.*t1255*t2282*var3[11]*var4[0];
  p_output1[14]=2.*t1335*t2282*var3[14]*var4[0];
  p_output1[15]=2.*t1508*t2282*var3[15]*var4[0];
  p_output1[16]=2.*t1568*t2282*var3[18]*var4[0];
  p_output1[17]=2.*t1734*t2282*var3[19]*var4[0];
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
    ( !(mrows == 2 && ncols == 1) && 
      !(mrows == 1 && ncols == 2))) 
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
    ( !(mrows == 1 && ncols == 1) && 
      !(mrows == 1 && ncols == 1))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var4 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
  var3 = mxGetPr(prhs[2]);
  var4 = mxGetPr(prhs[3]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 18, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3,var4);


}

#else // MATLAB_MEX_FILE

#include "J_power_Flight2_integral.hh"

namespace Flight2
{

void J_power_Flight2_integral_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4);

}

}

#endif // MATLAB_MEX_FILE
