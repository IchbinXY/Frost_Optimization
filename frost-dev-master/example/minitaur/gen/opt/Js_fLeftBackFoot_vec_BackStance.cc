/*
 * Automatically Generated from Mathematica.
 * Wed 29 May 2019 01:37:19 GMT-04:00
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
  double _NotUsed;
  NULL;
  p_output1[0]=1;
  p_output1[1]=2;
  p_output1[2]=3;
  p_output1[3]=4;
  p_output1[4]=4;
  p_output1[5]=4;
  p_output1[6]=4;
  p_output1[7]=4;
  p_output1[8]=4;
  p_output1[9]=4;
  p_output1[10]=5;
  p_output1[11]=5;
  p_output1[12]=5;
  p_output1[13]=5;
  p_output1[14]=5;
  p_output1[15]=5;
  p_output1[16]=5;
  p_output1[17]=5;
  p_output1[18]=6;
  p_output1[19]=6;
  p_output1[20]=6;
  p_output1[21]=6;
  p_output1[22]=6;
  p_output1[23]=6;
  p_output1[24]=6;
  p_output1[25]=6;
  p_output1[26]=11;
  p_output1[27]=11;
  p_output1[28]=11;
  p_output1[29]=11;
  p_output1[30]=11;
  p_output1[31]=11;
  p_output1[32]=11;
  p_output1[33]=11;
  p_output1[34]=13;
  p_output1[35]=13;
  p_output1[36]=13;
  p_output1[37]=13;
  p_output1[38]=13;
  p_output1[39]=13;
  p_output1[40]=13;
  p_output1[41]=13;
  p_output1[42]=23;
  p_output1[43]=24;
  p_output1[44]=25;
  p_output1[45]=4;
  p_output1[46]=5;
  p_output1[47]=6;
  p_output1[48]=11;
  p_output1[49]=13;
  p_output1[50]=24;
  p_output1[51]=25;
  p_output1[52]=4;
  p_output1[53]=5;
  p_output1[54]=6;
  p_output1[55]=11;
  p_output1[56]=13;
  p_output1[57]=23;
  p_output1[58]=24;
  p_output1[59]=25;
  p_output1[60]=4;
  p_output1[61]=5;
  p_output1[62]=6;
  p_output1[63]=11;
  p_output1[64]=13;
  p_output1[65]=23;
  p_output1[66]=24;
  p_output1[67]=25;
  p_output1[68]=4;
  p_output1[69]=5;
  p_output1[70]=6;
  p_output1[71]=11;
  p_output1[72]=13;
  p_output1[73]=23;
  p_output1[74]=24;
  p_output1[75]=25;
  p_output1[76]=4;
  p_output1[77]=5;
  p_output1[78]=6;
  p_output1[79]=11;
  p_output1[80]=13;
  p_output1[81]=23;
  p_output1[82]=24;
  p_output1[83]=25;
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
    ( !(mrows == 1 && ncols == 1) && 
      !(mrows == 1 && ncols == 1))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var1 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 42, (mwSize) 2, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "Js_fLeftBackFoot_vec_BackStance.hh"

namespace BackStance
{

void Js_fLeftBackFoot_vec_BackStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
