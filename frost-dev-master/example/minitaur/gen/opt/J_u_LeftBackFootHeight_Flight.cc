/*
 * Automatically Generated from Mathematica.
 * Wed 29 May 2019 15:10:33 GMT-04:00
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
  double t11276;
  double t11072;
  double t12149;
  double t23993;
  double t37143;
  double t37114;
  double t37121;
  double t37153;
  double t37200;
  double t37204;
  double t37211;
  double t37216;
  double t37217;
  double t10352;
  double t11071;
  double t37124;
  double t37171;
  double t37174;
  double t37176;
  double t37181;
  double t37187;
  double t37236;
  double t37241;
  double t37256;
  double t37220;
  double t37223;
  double t37259;
  double t37248;
  double t37249;
  double t37250;
  double t37251;
  double t37252;
  double t37253;
  double t37271;
  double t37274;
  double t37275;
  double t37276;
  double t37297;
  double t37345;
  double t37398;
  double t37438;
  double t37475;
  double t37493;
  double t37508;
  double t37518;
  double t37521;
  double t37512;
  double t37261;
  double t37509;
  double t37527;
  double t36535;
  double t36695;
  double t36696;
  double t36811;
  double t37196;
  double t37214;
  double t37229;
  double t37246;
  double t37247;
  double t37258;
  double t37263;
  double t37264;
  double t37267;
  double t37268;
  double t37282;
  double t37284;
  double t37285;
  double t37288;
  double t37289;
  double t37669;
  double t37670;
  double t37671;
  double t37672;
  double t37513;
  double t37674;
  double t37675;
  double t37676;
  double t37677;
  double t37679;
  double t37680;
  double t37681;
  double t37682;
  double t37530;
  double t37649;
  double t37650;
  double t37761;
  double t37762;
  double t37763;
  double t37765;
  double t37766;
  double t37767;
  double t37772;
  double t37773;
  double t37777;
  double t37786;
  double t37787;
  double t37788;
  double t37790;
  double t37791;
  double t37792;
  double t37866;
  double t37870;
  double t37871;
  double t37875;
  double t37879;
  double t37880;
  double t37881;
  double t37883;
  double t37884;
  double t37885;
  double t37886;
  double t37888;
  double t37889;
  double t37890;
  double t37891;
  double t38140;
  double t38141;
  double t38137;
  double t38138;
  double t38151;
  double t38145;
  double t38146;
  double t38147;
  double t38148;
  double t38157;
  double t38159;
  double t38161;
  double t38168;
  double t38169;
  double t38171;
  double t38238;
  double t38174;
  t11276 = Cos(var1[10]);
  t11072 = Sin(var1[3]);
  t12149 = -1.*t11276;
  t23993 = 1. + t12149;
  t37143 = Cos(var1[3]);
  t37114 = Cos(var1[5]);
  t37121 = Sin(var1[4]);
  t37153 = Sin(var1[5]);
  t37200 = Cos(var1[12]);
  t37204 = -1.*t37200;
  t37211 = 1. + t37204;
  t37216 = -3.e-6*t37211;
  t37217 = Sin(var1[12]);
  t10352 = Cos(var1[4]);
  t11071 = Sin(var1[10]);
  t37124 = t37114*t11072*t37121;
  t37171 = t37143*t37153;
  t37174 = t37124 + t37171;
  t37176 = t37143*t37114;
  t37181 = -1.*t11072*t37121*t37153;
  t37187 = t37176 + t37181;
  t37236 = 3.e-6*t37217;
  t37241 = t37216 + t37236;
  t37256 = 3.e-13*var1[12];
  t37220 = -3.e-6*t37217;
  t37223 = t37216 + t37220;
  t37259 = -9.e-12*t37211;
  t37248 = 3.e-6*t10352*t11071*t11072;
  t37249 = 3.e-6*t23993*t37174;
  t37250 = -9.e-12*t23993;
  t37251 = 1. + t37250;
  t37252 = t37251*t37187;
  t37253 = t37248 + t37249 + t37252;
  t37271 = -1.*t10352*t11071*t11072;
  t37274 = t11276*t37174;
  t37275 = 3.e-6*t23993*t37187;
  t37276 = t37271 + t37274 + t37275;
  t37297 = -1.000000000009*t23993;
  t37345 = 1. + t37297;
  t37398 = -1.*t37345*t10352*t11072;
  t37438 = -1.*t11071*t37174;
  t37475 = 3.e-6*t11071*t37187;
  t37493 = t37398 + t37438 + t37475;
  t37508 = 3.e-6*t37211;
  t37518 = -1.000000000009*t37211;
  t37521 = 1. + t37518;
  t37512 = 9.e-12*t37211;
  t37261 = -1.*t37217;
  t37509 = t37508 + t37220;
  t37527 = t37508 + t37236;
  t36535 = -1.8e-12*t23993;
  t36695 = -1. + t11276;
  t36696 = 0.2*t36695;
  t36811 = t36535 + t36696;
  t37196 = 1.e-7*var1[12];
  t37214 = 5.4e-18*t37211;
  t37229 = -0.200000000003*t37223;
  t37246 = 0.100000000003*t37241;
  t37247 = t37196 + t37214 + t37229 + t37246;
  t37258 = -0.2000000000048*t37211;
  t37263 = t37259 + t37261;
  t37264 = 0.100000000003*t37263;
  t37267 = 3.e-7*t37241;
  t37268 = t37256 + t37258 + t37264 + t37267;
  t37282 = 0.1000000000039*t37211;
  t37284 = 3.e-7*t37223;
  t37285 = t37259 + t37217;
  t37288 = -0.200000000003*t37285;
  t37289 = t37256 + t37282 + t37284 + t37288;
  t37669 = -3.e-6*t23993*t37143*t10352*t37114;
  t37670 = 3.e-6*t37143*t11071*t37121;
  t37671 = t37251*t37143*t10352*t37153;
  t37672 = t37669 + t37670 + t37671;
  t37513 = t37512 + t37217;
  t37674 = -1.*t11276*t37143*t10352*t37114;
  t37675 = -1.*t37143*t11071*t37121;
  t37676 = 3.e-6*t23993*t37143*t10352*t37153;
  t37677 = t37674 + t37675 + t37676;
  t37679 = t37143*t10352*t37114*t11071;
  t37680 = -1.*t37345*t37143*t37121;
  t37681 = 3.e-6*t37143*t10352*t11071*t37153;
  t37682 = t37679 + t37680 + t37681;
  t37530 = t37512 + t37261;
  t37649 = -1.8e-11*t37211;
  t37650 = 1. + t37649;
  t37761 = t37143*t37114*t37121;
  t37762 = -1.*t11072*t37153;
  t37763 = t37761 + t37762;
  t37765 = t37114*t11072;
  t37766 = t37143*t37121*t37153;
  t37767 = t37765 + t37766;
  t37772 = t37251*t37763;
  t37773 = 3.e-6*t23993*t37767;
  t37777 = t37772 + t37773;
  t37786 = 3.e-6*t23993*t37763;
  t37787 = t11276*t37767;
  t37788 = t37786 + t37787;
  t37790 = 3.e-6*t11071*t37763;
  t37791 = -1.*t11071*t37767;
  t37792 = t37790 + t37791;
  t37866 = -1.*t37143*t37114*t37121;
  t37870 = t11072*t37153;
  t37871 = t37866 + t37870;
  t37875 = -1.000000000009*t37143*t10352*t11071;
  t37879 = -1.*t11276*t37871;
  t37880 = 3.e-6*t11276*t37767;
  t37881 = t37875 + t37879 + t37880;
  t37883 = -3.e-6*t11276*t37143*t10352;
  t37884 = 3.e-6*t11071*t37871;
  t37885 = -9.e-12*t11071*t37767;
  t37886 = t37883 + t37884 + t37885;
  t37888 = t11276*t37143*t10352;
  t37889 = -1.*t11071*t37871;
  t37890 = 3.e-6*t11071*t37767;
  t37891 = t37888 + t37889 + t37890;
  t38140 = 3.e-6*t37200;
  t38141 = t38140 + t37220;
  t38137 = -3.e-6*t37200;
  t38138 = t38137 + t37220;
  t38151 = -9.e-12*t37217;
  t38145 = -3.e-6*t37143*t10352*t11071;
  t38146 = 3.e-6*t23993*t37871;
  t38147 = t37251*t37767;
  t38148 = t38145 + t38146 + t38147;
  t38157 = t37143*t10352*t11071;
  t38159 = t11276*t37871;
  t38161 = t38157 + t38159 + t37773;
  t38168 = t37345*t37143*t10352;
  t38169 = t38168 + t37889 + t37890;
  t38171 = t38140 + t37236;
  t38238 = t38137 + t37236;
  t38174 = 9.e-12*t37217;
  p_output1[0]=1.;
  p_output1[1]=-0.2000000000018*t10352*t11071*t11072 + t36811*t37174 + 6.000000000054e-7*t23993*t37187 + t37247*t37253 + t37268*t37276 + t37289*t37493 - 0.3*(t37253*t37509 + t37276*t37513 + t37493*t37521) + 0.2*(-1.*t37276*t37521 - 1.*t37253*t37527 - 1.*t37493*t37530) + 0.100001*(t37276*t37509 + t37493*t37527 + t37253*t37650);
  p_output1[2]=-1.*t10352*t36811*t37114*t37143 - 0.2000000000018*t11071*t37121*t37143 + 6.000000000054e-7*t10352*t23993*t37143*t37153 + t37247*t37672 + t37268*t37677 + t37289*t37682 - 0.3*(t37509*t37672 + t37513*t37677 + t37521*t37682) + 0.100001*(t37650*t37672 + t37509*t37677 + t37527*t37682) + 0.2*(-1.*t37527*t37672 - 1.*t37521*t37677 - 1.*t37530*t37682);
  p_output1[3]=6.000000000054e-7*t23993*t37763 + t36811*t37767 + t37247*t37777 + t37268*t37788 + t37289*t37792 - 0.3*(t37509*t37777 + t37513*t37788 + t37521*t37792) + 0.100001*(t37650*t37777 + t37509*t37788 + t37527*t37792) + 0.2*(-1.*t37527*t37777 - 1.*t37521*t37788 - 1.*t37530*t37792);
  p_output1[4]=0.2000000000018*t10352*t11276*t37143 + 6.000000000054e-7*t11071*t37767 - 0.2000000000018*t11071*t37871 + t37289*t37881 + t37247*t37886 + t37268*t37891 + 0.100001*(t37527*t37881 + t37650*t37886 + t37509*t37891) - 0.3*(t37521*t37881 + t37509*t37886 + t37513*t37891) + 0.2*(-1.*t37530*t37881 - 1.*t37527*t37886 - 1.*t37521*t37891);
  p_output1[5]=(1.e-7 + 5.4e-18*t37217 - 0.200000000003*t38138 + 0.100000000003*t38141)*t38148 + (3.e-13 - 0.2000000000048*t37217 + 3.e-7*t38141 + 0.100000000003*(t37204 + t38151))*t38161 + (3.e-13 + 0.1000000000039*t37217 + 3.e-7*t38138 - 0.200000000003*(t37200 + t38151))*t38169 + 0.2*(1.000000000009*t37217*t38161 - 1.*t38148*t38171 - 1.*t38169*(t37204 + t38174)) - 0.3*(-1.000000000009*t37217*t38169 + t38161*(t37200 + t38174) + t38148*t38238) + 0.100001*(-1.8e-11*t37217*t38148 + t38169*t38171 + t38161*t38238);
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

#include "J_u_LeftBackFootHeight_Flight.hh"

namespace Flight1
{

void J_u_LeftBackFootHeight_Flight_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
