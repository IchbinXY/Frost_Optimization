/*
 * Automatically Generated from Mathematica.
 * Thu 30 May 2019 00:03:58 GMT-04:00
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
  double t38012;
  double t38164;
  double t38839;
  double t61882;
  double t70587;
  double t66442;
  double t70576;
  double t70588;
  double t74663;
  double t74677;
  double t74679;
  double t74865;
  double t75604;
  double t33141;
  double t37781;
  double t70580;
  double t71916;
  double t72030;
  double t74518;
  double t74520;
  double t74536;
  double t76026;
  double t76027;
  double t76046;
  double t75869;
  double t75884;
  double t76048;
  double t76039;
  double t76040;
  double t76041;
  double t76042;
  double t76043;
  double t76044;
  double t76058;
  double t76059;
  double t76060;
  double t76061;
  double t76104;
  double t76106;
  double t76107;
  double t76108;
  double t76109;
  double t76111;
  double t76113;
  double t76120;
  double t76121;
  double t76116;
  double t76051;
  double t76114;
  double t76126;
  double t74544;
  double t74680;
  double t76025;
  double t76030;
  double t76036;
  double t76047;
  double t76052;
  double t76053;
  double t76054;
  double t76056;
  double t76063;
  double t76075;
  double t76088;
  double t76099;
  double t76101;
  double t76193;
  double t76194;
  double t76196;
  double t76197;
  double t76118;
  double t76200;
  double t76201;
  double t76202;
  double t76204;
  double t76206;
  double t76209;
  double t76210;
  double t76211;
  double t76129;
  double t76142;
  double t76146;
  double t76241;
  double t76243;
  double t76244;
  double t76246;
  double t76247;
  double t76248;
  double t76250;
  double t76252;
  double t76255;
  double t76257;
  double t76259;
  double t76267;
  double t76277;
  double t76281;
  double t76285;
  double t76393;
  double t76477;
  double t76536;
  double t76645;
  double t76650;
  double t76651;
  double t76652;
  double t76654;
  double t76655;
  double t76656;
  double t76657;
  double t76659;
  double t76660;
  double t76661;
  double t76662;
  double t77064;
  double t77065;
  double t77054;
  double t77062;
  double t77097;
  double t77073;
  double t77074;
  double t77075;
  double t77093;
  double t77240;
  double t77245;
  double t77275;
  double t77427;
  double t77428;
  double t77432;
  double t77444;
  double t77438;
  t38012 = Sin(var1[3]);
  t38164 = Cos(var1[15]);
  t38839 = -1.*t38164;
  t61882 = 1. + t38839;
  t70587 = Cos(var1[3]);
  t66442 = Cos(var1[5]);
  t70576 = Sin(var1[4]);
  t70588 = Sin(var1[5]);
  t74663 = Cos(var1[17]);
  t74677 = -1.*t74663;
  t74679 = 1. + t74677;
  t74865 = -3.e-6*t74679;
  t75604 = Sin(var1[17]);
  t33141 = Cos(var1[4]);
  t37781 = Sin(var1[15]);
  t70580 = t66442*t38012*t70576;
  t71916 = t70587*t70588;
  t72030 = t70580 + t71916;
  t74518 = t70587*t66442;
  t74520 = -1.*t38012*t70576*t70588;
  t74536 = t74518 + t74520;
  t76026 = 3.e-6*t75604;
  t76027 = t74865 + t76026;
  t76046 = 9.e-13*var1[17];
  t75869 = -3.e-6*t75604;
  t75884 = t74865 + t75869;
  t76048 = -9.e-12*t74679;
  t76039 = 3.e-6*t33141*t37781*t38012;
  t76040 = 3.e-6*t61882*t72030;
  t76041 = -9.e-12*t61882;
  t76042 = 1. + t76041;
  t76043 = t76042*t74536;
  t76044 = t76039 + t76040 + t76043;
  t76058 = -1.*t33141*t37781*t38012;
  t76059 = t38164*t72030;
  t76060 = 3.e-6*t61882*t74536;
  t76061 = t76058 + t76059 + t76060;
  t76104 = -1.000000000009*t61882;
  t76106 = 1. + t76104;
  t76107 = -1.*t76106*t33141*t38012;
  t76108 = -1.*t37781*t72030;
  t76109 = 3.e-6*t37781*t74536;
  t76111 = t76107 + t76108 + t76109;
  t76113 = 3.e-6*t74679;
  t76120 = -1.000000000009*t74679;
  t76121 = 1. + t76120;
  t76116 = 9.e-12*t74679;
  t76051 = -1.*t75604;
  t76114 = t76113 + t75869;
  t76126 = t76113 + t76026;
  t74544 = 3.e-7*var1[17];
  t74680 = -1.62e-17*t74679;
  t76025 = 0.2*t75884;
  t76030 = 0.1*t76027;
  t76036 = t74544 + t74680 + t76025 + t76030;
  t76047 = 0.2000000000018*t74679;
  t76052 = t76048 + t76051;
  t76053 = 0.1*t76052;
  t76054 = -9.e-7*t76027;
  t76056 = t76046 + t76047 + t76053 + t76054;
  t76063 = 0.1000000000009*t74679;
  t76075 = -9.e-7*t75884;
  t76088 = t76048 + t75604;
  t76099 = 0.2*t76088;
  t76101 = t76046 + t76063 + t76075 + t76099;
  t76193 = -3.e-6*t61882*t70587*t33141*t66442;
  t76194 = 3.e-6*t70587*t37781*t70576;
  t76196 = t76042*t70587*t33141*t70588;
  t76197 = t76193 + t76194 + t76196;
  t76118 = t76116 + t75604;
  t76200 = -1.*t38164*t70587*t33141*t66442;
  t76201 = -1.*t70587*t37781*t70576;
  t76202 = 3.e-6*t61882*t70587*t33141*t70588;
  t76204 = t76200 + t76201 + t76202;
  t76206 = t70587*t33141*t66442*t37781;
  t76209 = -1.*t76106*t70587*t70576;
  t76210 = 3.e-6*t70587*t33141*t37781*t70588;
  t76211 = t76206 + t76209 + t76210;
  t76129 = t76116 + t76051;
  t76142 = -1.8e-11*t74679;
  t76146 = 1. + t76142;
  t76241 = t70587*t66442*t70576;
  t76243 = -1.*t38012*t70588;
  t76244 = t76241 + t76243;
  t76246 = t66442*t38012;
  t76247 = t70587*t70576*t70588;
  t76248 = t76246 + t76247;
  t76250 = t76042*t76244;
  t76252 = 3.e-6*t61882*t76248;
  t76255 = t76250 + t76252;
  t76257 = 3.e-6*t61882*t76244;
  t76259 = t38164*t76248;
  t76267 = t76257 + t76259;
  t76277 = 3.e-6*t37781*t76244;
  t76281 = -1.*t37781*t76248;
  t76285 = t76277 + t76281;
  t76393 = -1.*t70587*t66442*t70576;
  t76477 = t38012*t70588;
  t76536 = t76393 + t76477;
  t76645 = -1.000000000009*t70587*t33141*t37781;
  t76650 = -1.*t38164*t76536;
  t76651 = 3.e-6*t38164*t76248;
  t76652 = t76645 + t76650 + t76651;
  t76654 = -3.e-6*t38164*t70587*t33141;
  t76655 = 3.e-6*t37781*t76536;
  t76656 = -9.e-12*t37781*t76248;
  t76657 = t76654 + t76655 + t76656;
  t76659 = t38164*t70587*t33141;
  t76660 = -1.*t37781*t76536;
  t76661 = 3.e-6*t37781*t76248;
  t76662 = t76659 + t76660 + t76661;
  t77064 = 3.e-6*t74663;
  t77065 = t77064 + t75869;
  t77054 = -3.e-6*t74663;
  t77062 = t77054 + t75869;
  t77097 = -9.e-12*t75604;
  t77073 = -3.e-6*t70587*t33141*t37781;
  t77074 = 3.e-6*t61882*t76536;
  t77075 = t76042*t76248;
  t77093 = t77073 + t77074 + t77075;
  t77240 = t70587*t33141*t37781;
  t77245 = t38164*t76536;
  t77275 = t77240 + t77245 + t76252;
  t77427 = t76106*t70587*t33141;
  t77428 = t77427 + t76660 + t76661;
  t77432 = t77064 + t76026;
  t77444 = t77054 + t76026;
  t77438 = 9.e-12*t75604;
  p_output1[0]=1.;
  p_output1[1]=0.2000000000018*t33141*t37781*t38012 + 0.2000000000018*t61882*t72030 - 6.000000000054e-7*t61882*t74536 + t76036*t76044 + t76056*t76061 + t76101*t76111 - 0.3*(t76044*t76114 + t76061*t76118 + t76111*t76121) + 0.2*(t76061*t76121 + t76044*t76126 + t76111*t76129) - 0.099999*(t76061*t76114 + t76111*t76126 + t76044*t76146);
  p_output1[2]=-0.2000000000018*t33141*t61882*t66442*t70587 + 0.2000000000018*t37781*t70576*t70587 - 6.000000000054e-7*t33141*t61882*t70587*t70588 + t76036*t76197 + t76056*t76204 + t76101*t76211 - 0.3*(t76114*t76197 + t76118*t76204 + t76121*t76211) - 0.099999*(t76146*t76197 + t76114*t76204 + t76126*t76211) + 0.2*(t76126*t76197 + t76121*t76204 + t76129*t76211);
  p_output1[3]=-6.000000000054e-7*t61882*t76244 + 0.2000000000018*t61882*t76248 + t76036*t76255 + t76056*t76267 + t76101*t76285 - 0.3*(t76114*t76255 + t76118*t76267 + t76121*t76285) - 0.099999*(t76146*t76255 + t76114*t76267 + t76126*t76285) + 0.2*(t76126*t76255 + t76121*t76267 + t76129*t76285);
  p_output1[4]=-0.2000000000018*t33141*t38164*t70587 - 6.000000000054e-7*t37781*t76248 + 0.2000000000018*t37781*t76536 + t76101*t76652 + t76036*t76657 + t76056*t76662 - 0.099999*(t76126*t76652 + t76146*t76657 + t76114*t76662) - 0.3*(t76121*t76652 + t76114*t76657 + t76118*t76662) + 0.2*(t76129*t76652 + t76126*t76657 + t76121*t76662);
  p_output1[5]=(3.e-7 - 1.62e-17*t75604 + 0.2*t77062 + 0.1*t77065)*t77093 + (9.e-13 + 0.2000000000018*t75604 - 9.e-7*t77065 + 0.1*(t74677 + t77097))*t77275 + (9.e-13 + 0.1000000000009*t75604 - 9.e-7*t77062 + 0.2*(t74663 + t77097))*t77428 + 0.2*(-1.000000000009*t75604*t77275 + t77093*t77432 + t77428*(t74677 + t77438)) - 0.3*(-1.000000000009*t75604*t77428 + t77275*(t74663 + t77438) + t77093*t77444) - 0.099999*(-1.8e-11*t75604*t77093 + t77428*t77432 + t77275*t77444);
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 6, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "J_u_RightFrontFootHeight_Flight.hh"

namespace Flight2
{

void J_u_RightFrontFootHeight_Flight_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
