/*
 * Automatically Generated from Mathematica.
 * Wed 29 May 2019 01:36:36 GMT-04:00
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
  double t23927;
  double t23935;
  double t24748;
  double t16678;
  double t24576;
  double t24662;
  double t24749;
  double t24753;
  double t91778;
  double t91788;
  double t92094;
  double t91752;
  double t91945;
  double t92022;
  double t92110;
  double t92130;
  double t24811;
  double t58662;
  double t65468;
  double t77066;
  double t92182;
  double t92190;
  double t92280;
  double t92454;
  double t96438;
  double t96592;
  double t98771;
  double t93588;
  double t98721;
  double t98765;
  double t98830;
  double t98896;
  double t99836;
  double t99971;
  double t100191;
  double t99045;
  double t100163;
  double t100170;
  double t100193;
  double t100194;
  double t98958;
  double t98967;
  double t98974;
  double t99023;
  double t100200;
  double t100204;
  double t100205;
  double t100226;
  double t100374;
  double t100375;
  double t100464;
  double t100359;
  double t100383;
  double t100395;
  double t100481;
  double t100489;
  double t100631;
  double t100632;
  double t100657;
  double t100521;
  double t100644;
  double t100651;
  double t100742;
  double t100744;
  double t100493;
  double t100496;
  double t100497;
  double t100517;
  double t100747;
  double t100748;
  double t100750;
  double t100753;
  double t103857;
  double t104072;
  double t104292;
  double t100756;
  double t104289;
  double t104290;
  double t104300;
  double t104301;
  double t104935;
  double t104936;
  double t104986;
  double t104927;
  double t104969;
  double t104985;
  double t104988;
  double t104989;
  double t104882;
  double t104910;
  double t104916;
  double t104918;
  double t105110;
  double t105284;
  double t105296;
  double t105301;
  t23927 = var1[6] + var1[8];
  t23935 = Cos(t23927);
  t24748 = Sin(t23927);
  t16678 = Cos(var1[6]);
  t24576 = Sin(var1[6]);
  t24662 = -0.05*t24576;
  t24749 = -0.1*t24748;
  t24753 = t24662 + t24749;
  t91778 = var1[9] + var1[7];
  t91788 = Cos(t91778);
  t92094 = Sin(t91778);
  t91752 = Cos(var1[7]);
  t91945 = Sin(var1[7]);
  t92022 = 0.05*t91945;
  t92110 = 0.1*t92094;
  t92130 = t92022 + t92110;
  t24811 = -0.1*var2[3]*t23935;
  t58662 = -0.1*var2[2]*t24748;
  t65468 = t24811 + t58662;
  t77066 = 0.1*t23935;
  t92182 = 0.1*var2[3]*t91788;
  t92190 = 0.1*var2[2]*t92094;
  t92280 = t92182 + t92190;
  t92454 = -0.1*t91788;
  t96438 = var1[10] + var1[12];
  t96592 = Cos(t96438);
  t98771 = Sin(t96438);
  t93588 = Cos(var1[10]);
  t98721 = Sin(var1[10]);
  t98765 = -0.05*t98721;
  t98830 = -0.1*t98771;
  t98896 = t98765 + t98830;
  t99836 = var1[11] + var1[13];
  t99971 = Cos(t99836);
  t100191 = Sin(t99836);
  t99045 = Cos(var1[11]);
  t100163 = Sin(var1[11]);
  t100170 = 0.05*t100163;
  t100193 = 0.1*t100191;
  t100194 = t100170 + t100193;
  t98958 = -0.1*var2[7]*t96592;
  t98967 = -0.1*var2[6]*t98771;
  t98974 = t98958 + t98967;
  t99023 = 0.1*t96592;
  t100200 = 0.1*var2[7]*t99971;
  t100204 = 0.1*var2[6]*t100191;
  t100205 = t100200 + t100204;
  t100226 = -0.1*t99971;
  t100374 = var1[14] + var1[16];
  t100375 = Cos(t100374);
  t100464 = Sin(t100374);
  t100359 = Cos(var1[14]);
  t100383 = Sin(var1[14]);
  t100395 = -0.05*t100383;
  t100481 = -0.1*t100464;
  t100489 = t100395 + t100481;
  t100631 = var1[15] + var1[17];
  t100632 = Cos(t100631);
  t100657 = Sin(t100631);
  t100521 = Cos(var1[15]);
  t100644 = Sin(var1[15]);
  t100651 = 0.05*t100644;
  t100742 = 0.1*t100657;
  t100744 = t100651 + t100742;
  t100493 = -0.1*var2[1]*t100375;
  t100496 = -0.1*var2[0]*t100464;
  t100497 = t100493 + t100496;
  t100517 = 0.1*t100375;
  t100747 = 0.1*var2[1]*t100632;
  t100748 = 0.1*var2[0]*t100657;
  t100750 = t100747 + t100748;
  t100753 = -0.1*t100632;
  t103857 = var1[18] + var1[20];
  t104072 = Cos(t103857);
  t104292 = Sin(t103857);
  t100756 = Cos(var1[18]);
  t104289 = Sin(var1[18]);
  t104290 = -0.05*t104289;
  t104300 = -0.1*t104292;
  t104301 = t104290 + t104300;
  t104935 = var1[19] + var1[21];
  t104936 = Cos(t104935);
  t104986 = Sin(t104935);
  t104927 = Cos(var1[19]);
  t104969 = Sin(var1[19]);
  t104985 = 0.05*t104969;
  t104988 = 0.1*t104986;
  t104989 = t104985 + t104988;
  t104882 = -0.1*var2[5]*t104072;
  t104910 = -0.1*var2[4]*t104292;
  t104916 = t104882 + t104910;
  t104918 = 0.1*t104072;
  t105110 = 0.1*var2[5]*t104936;
  t105284 = 0.1*var2[4]*t104986;
  t105296 = t105110 + t105284;
  t105301 = -0.1*t104936;
  p_output1[0]=t24753*var2[2] + (-0.05*t16678 - 0.1*t23935)*var2[3];
  p_output1[1]=t65468;
  p_output1[2]=0.05*t16678 + t77066;
  p_output1[3]=t24753;
  p_output1[4]=t92130*var2[2] + (0.05*t91752 + 0.1*t91788)*var2[3];
  p_output1[5]=t92280;
  p_output1[6]=-0.05*t91752 + t92454;
  p_output1[7]=t92130;
  p_output1[8]=t65468;
  p_output1[9]=t65468;
  p_output1[10]=t77066;
  p_output1[11]=t24749;
  p_output1[12]=t92280;
  p_output1[13]=t92280;
  p_output1[14]=t92454;
  p_output1[15]=t92110;
  p_output1[16]=t98896*var2[6] + (-0.05*t93588 - 0.1*t96592)*var2[7];
  p_output1[17]=t98974;
  p_output1[18]=0.05*t93588 + t99023;
  p_output1[19]=t98896;
  p_output1[20]=t100194*var2[6] + (0.05*t99045 + 0.1*t99971)*var2[7];
  p_output1[21]=t100205;
  p_output1[22]=t100226 - 0.05*t99045;
  p_output1[23]=t100194;
  p_output1[24]=t98974;
  p_output1[25]=t98974;
  p_output1[26]=t99023;
  p_output1[27]=t98830;
  p_output1[28]=t100205;
  p_output1[29]=t100205;
  p_output1[30]=t100226;
  p_output1[31]=t100193;
  p_output1[32]=t100489*var2[0] + (-0.05*t100359 - 0.1*t100375)*var2[1];
  p_output1[33]=t100497;
  p_output1[34]=0.05*t100359 + t100517;
  p_output1[35]=t100489;
  p_output1[36]=t100744*var2[0] + (0.05*t100521 + 0.1*t100632)*var2[1];
  p_output1[37]=t100750;
  p_output1[38]=-0.05*t100521 + t100753;
  p_output1[39]=t100744;
  p_output1[40]=t100497;
  p_output1[41]=t100497;
  p_output1[42]=t100517;
  p_output1[43]=t100481;
  p_output1[44]=t100750;
  p_output1[45]=t100750;
  p_output1[46]=t100753;
  p_output1[47]=t100742;
  p_output1[48]=t104301*var2[4] + (-0.05*t100756 - 0.1*t104072)*var2[5];
  p_output1[49]=t104916;
  p_output1[50]=0.05*t100756 + t104918;
  p_output1[51]=t104301;
  p_output1[52]=t104989*var2[4] + (0.05*t104927 + 0.1*t104936)*var2[5];
  p_output1[53]=t105296;
  p_output1[54]=-0.05*t104927 + t105301;
  p_output1[55]=t104989;
  p_output1[56]=t104916;
  p_output1[57]=t104916;
  p_output1[58]=t104918;
  p_output1[59]=t104300;
  p_output1[60]=t105296;
  p_output1[61]=t105296;
  p_output1[62]=t105301;
  p_output1[63]=t104988;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 64, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_ffourBar_vec_minitaur.hh"

namespace FrontStance
{

void J_ffourBar_vec_minitaur_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
