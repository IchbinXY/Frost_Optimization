/*
 * Automatically Generated from Mathematica.
 * Wed 29 May 2019 15:10:26 GMT-04:00
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
  double t11261;
  double t11253;
  double t11265;
  double t11414;
  double t11580;
  double t11461;
  double t11497;
  double t11947;
  double t12848;
  double t13658;
  double t14202;
  double t23137;
  double t26768;
  double t10492;
  double t11122;
  double t11567;
  double t12074;
  double t12130;
  double t12153;
  double t12155;
  double t12156;
  double t34136;
  double t34142;
  double t34193;
  double t33701;
  double t33966;
  double t34197;
  double t34175;
  double t34177;
  double t34179;
  double t34180;
  double t34185;
  double t34190;
  double t35967;
  double t35979;
  double t35987;
  double t35994;
  double t36309;
  double t36310;
  double t36410;
  double t36514;
  double t36515;
  double t36526;
  double t36551;
  double t36692;
  double t36693;
  double t36554;
  double t34199;
  double t36552;
  double t36738;
  double t11419;
  double t11425;
  double t11426;
  double t11459;
  double t12303;
  double t15163;
  double t34131;
  double t34145;
  double t34159;
  double t34196;
  double t35151;
  double t35295;
  double t35308;
  double t35964;
  double t36003;
  double t36037;
  double t36050;
  double t36053;
  double t36057;
  double t37126;
  double t37127;
  double t37128;
  double t37129;
  double t36555;
  double t37131;
  double t37132;
  double t37133;
  double t37134;
  double t37136;
  double t37137;
  double t37138;
  double t37139;
  double t36809;
  double t36996;
  double t37081;
  double t37182;
  double t37183;
  double t37184;
  double t37188;
  double t37189;
  double t37190;
  double t37192;
  double t37193;
  double t37194;
  double t37197;
  double t37198;
  double t37199;
  double t37201;
  double t37202;
  double t37203;
  double t37224;
  double t37225;
  double t37228;
  double t37231;
  double t37233;
  double t37234;
  double t37235;
  double t37237;
  double t37238;
  double t37239;
  double t37240;
  double t37242;
  double t37243;
  double t37244;
  double t37245;
  double t37272;
  double t37273;
  double t37269;
  double t37270;
  double t37283;
  double t37277;
  double t37278;
  double t37279;
  double t37280;
  double t37290;
  double t37293;
  double t37295;
  double t37498;
  double t37505;
  double t37507;
  double t37519;
  double t37510;
  t11261 = Cos(var1[19]);
  t11253 = Sin(var1[3]);
  t11265 = -1.*t11261;
  t11414 = 1. + t11265;
  t11580 = Cos(var1[3]);
  t11461 = Cos(var1[5]);
  t11497 = Sin(var1[4]);
  t11947 = Sin(var1[5]);
  t12848 = Cos(var1[21]);
  t13658 = -1.*t12848;
  t14202 = 1. + t13658;
  t23137 = -3.e-6*t14202;
  t26768 = Sin(var1[21]);
  t10492 = Cos(var1[4]);
  t11122 = Sin(var1[19]);
  t11567 = t11461*t11253*t11497;
  t12074 = t11580*t11947;
  t12130 = t11567 + t12074;
  t12153 = t11580*t11461;
  t12155 = -1.*t11253*t11497*t11947;
  t12156 = t12153 + t12155;
  t34136 = 3.e-6*t26768;
  t34142 = t23137 + t34136;
  t34193 = 3.e-13*var1[21];
  t33701 = -3.e-6*t26768;
  t33966 = t23137 + t33701;
  t34197 = -9.e-12*t14202;
  t34175 = 3.e-6*t10492*t11122*t11253;
  t34177 = 3.e-6*t11414*t12130;
  t34179 = -9.e-12*t11414;
  t34180 = 1. + t34179;
  t34185 = t34180*t12156;
  t34190 = t34175 + t34177 + t34185;
  t35967 = -1.*t10492*t11122*t11253;
  t35979 = t11261*t12130;
  t35987 = 3.e-6*t11414*t12156;
  t35994 = t35967 + t35979 + t35987;
  t36309 = -1.000000000009*t11414;
  t36310 = 1. + t36309;
  t36410 = -1.*t36310*t10492*t11253;
  t36514 = -1.*t11122*t12130;
  t36515 = 3.e-6*t11122*t12156;
  t36526 = t36410 + t36514 + t36515;
  t36551 = 3.e-6*t14202;
  t36692 = -1.000000000009*t14202;
  t36693 = 1. + t36692;
  t36554 = 9.e-12*t14202;
  t34199 = -1.*t26768;
  t36552 = t36551 + t33701;
  t36738 = t36551 + t34136;
  t11419 = -1.8e-12*t11414;
  t11425 = -1. + t11261;
  t11426 = 0.2*t11425;
  t11459 = t11419 + t11426;
  t12303 = 1.e-7*var1[21];
  t15163 = 5.4e-18*t14202;
  t34131 = -0.200000000003*t33966;
  t34145 = 0.100000000003*t34142;
  t34159 = t12303 + t15163 + t34131 + t34145;
  t34196 = -0.2000000000048*t14202;
  t35151 = t34197 + t34199;
  t35295 = 0.100000000003*t35151;
  t35308 = 3.e-7*t34142;
  t35964 = t34193 + t34196 + t35295 + t35308;
  t36003 = 0.1000000000039*t14202;
  t36037 = 3.e-7*t33966;
  t36050 = t34197 + t26768;
  t36053 = -0.200000000003*t36050;
  t36057 = t34193 + t36003 + t36037 + t36053;
  t37126 = -3.e-6*t11414*t11580*t10492*t11461;
  t37127 = 3.e-6*t11580*t11122*t11497;
  t37128 = t34180*t11580*t10492*t11947;
  t37129 = t37126 + t37127 + t37128;
  t36555 = t36554 + t26768;
  t37131 = -1.*t11261*t11580*t10492*t11461;
  t37132 = -1.*t11580*t11122*t11497;
  t37133 = 3.e-6*t11414*t11580*t10492*t11947;
  t37134 = t37131 + t37132 + t37133;
  t37136 = t11580*t10492*t11461*t11122;
  t37137 = -1.*t36310*t11580*t11497;
  t37138 = 3.e-6*t11580*t10492*t11122*t11947;
  t37139 = t37136 + t37137 + t37138;
  t36809 = t36554 + t34199;
  t36996 = -1.8e-11*t14202;
  t37081 = 1. + t36996;
  t37182 = t11580*t11461*t11497;
  t37183 = -1.*t11253*t11947;
  t37184 = t37182 + t37183;
  t37188 = t11461*t11253;
  t37189 = t11580*t11497*t11947;
  t37190 = t37188 + t37189;
  t37192 = t34180*t37184;
  t37193 = 3.e-6*t11414*t37190;
  t37194 = t37192 + t37193;
  t37197 = 3.e-6*t11414*t37184;
  t37198 = t11261*t37190;
  t37199 = t37197 + t37198;
  t37201 = 3.e-6*t11122*t37184;
  t37202 = -1.*t11122*t37190;
  t37203 = t37201 + t37202;
  t37224 = -1.*t11580*t11461*t11497;
  t37225 = t11253*t11947;
  t37228 = t37224 + t37225;
  t37231 = -1.000000000009*t11580*t10492*t11122;
  t37233 = -1.*t11261*t37228;
  t37234 = 3.e-6*t11261*t37190;
  t37235 = t37231 + t37233 + t37234;
  t37237 = -3.e-6*t11261*t11580*t10492;
  t37238 = 3.e-6*t11122*t37228;
  t37239 = -9.e-12*t11122*t37190;
  t37240 = t37237 + t37238 + t37239;
  t37242 = t11261*t11580*t10492;
  t37243 = -1.*t11122*t37228;
  t37244 = 3.e-6*t11122*t37190;
  t37245 = t37242 + t37243 + t37244;
  t37272 = 3.e-6*t12848;
  t37273 = t37272 + t33701;
  t37269 = -3.e-6*t12848;
  t37270 = t37269 + t33701;
  t37283 = -9.e-12*t26768;
  t37277 = -3.e-6*t11580*t10492*t11122;
  t37278 = 3.e-6*t11414*t37228;
  t37279 = t34180*t37190;
  t37280 = t37277 + t37278 + t37279;
  t37290 = t11580*t10492*t11122;
  t37293 = t11261*t37228;
  t37295 = t37290 + t37293 + t37193;
  t37498 = t36310*t11580*t10492;
  t37505 = t37498 + t37243 + t37244;
  t37507 = t37272 + t34136;
  t37519 = t37269 + t34136;
  t37510 = 9.e-12*t26768;
  p_output1[0]=1.;
  p_output1[1]=-0.2000000000018*t10492*t11122*t11253 + t11459*t12130 + 6.000000000054e-7*t11414*t12156 + t34159*t34190 + t35964*t35994 + t36057*t36526 - 0.3*(t34190*t36552 + t35994*t36555 + t36526*t36693) + 0.2*(-1.*t35994*t36693 - 1.*t34190*t36738 - 1.*t36526*t36809) - 0.099999*(t35994*t36552 + t36526*t36738 + t34190*t37081);
  p_output1[2]=-1.*t10492*t11459*t11461*t11580 - 0.2000000000018*t11122*t11497*t11580 + 6.000000000054e-7*t10492*t11414*t11580*t11947 + t34159*t37129 + t35964*t37134 + t36057*t37139 - 0.3*(t36552*t37129 + t36555*t37134 + t36693*t37139) - 0.099999*(t37081*t37129 + t36552*t37134 + t36738*t37139) + 0.2*(-1.*t36738*t37129 - 1.*t36693*t37134 - 1.*t36809*t37139);
  p_output1[3]=6.000000000054e-7*t11414*t37184 + t11459*t37190 + t34159*t37194 + t35964*t37199 + t36057*t37203 - 0.3*(t36552*t37194 + t36555*t37199 + t36693*t37203) - 0.099999*(t37081*t37194 + t36552*t37199 + t36738*t37203) + 0.2*(-1.*t36738*t37194 - 1.*t36693*t37199 - 1.*t36809*t37203);
  p_output1[4]=0.2000000000018*t10492*t11261*t11580 + 6.000000000054e-7*t11122*t37190 - 0.2000000000018*t11122*t37228 + t36057*t37235 + t34159*t37240 + t35964*t37245 - 0.099999*(t36738*t37235 + t37081*t37240 + t36552*t37245) - 0.3*(t36693*t37235 + t36552*t37240 + t36555*t37245) + 0.2*(-1.*t36809*t37235 - 1.*t36738*t37240 - 1.*t36693*t37245);
  p_output1[5]=(1.e-7 + 5.4e-18*t26768 - 0.200000000003*t37270 + 0.100000000003*t37273)*t37280 + (3.e-13 - 0.2000000000048*t26768 + 3.e-7*t37273 + 0.100000000003*(t13658 + t37283))*t37295 + (3.e-13 + 0.1000000000039*t26768 + 3.e-7*t37270 - 0.200000000003*(t12848 + t37283))*t37505 + 0.2*(1.000000000009*t26768*t37295 - 1.*t37280*t37507 - 1.*t37505*(t13658 + t37510)) - 0.3*(-1.000000000009*t26768*t37505 + t37295*(t12848 + t37510) + t37280*t37519) - 0.099999*(-1.8e-11*t26768*t37280 + t37505*t37507 + t37295*t37519);
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

#include "J_u_RightBackFootHeight_Flight.hh"

namespace Flight1
{

void J_u_RightBackFootHeight_Flight_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
