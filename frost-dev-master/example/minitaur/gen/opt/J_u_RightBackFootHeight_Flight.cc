/*
 * Automatically Generated from Mathematica.
 * Wed 29 May 2019 23:53:01 GMT-04:00
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
  double t3870;
  double t3434;
  double t4365;
  double t4458;
  double t13206;
  double t12172;
  double t12870;
  double t13214;
  double t14390;
  double t14459;
  double t14662;
  double t14744;
  double t14900;
  double t2118;
  double t2816;
  double t12897;
  double t13640;
  double t13643;
  double t14150;
  double t14217;
  double t14232;
  double t14979;
  double t14994;
  double t15032;
  double t14908;
  double t14975;
  double t15054;
  double t15010;
  double t15011;
  double t15013;
  double t15017;
  double t15019;
  double t15023;
  double t15094;
  double t15096;
  double t15097;
  double t15100;
  double t15123;
  double t15125;
  double t15131;
  double t15133;
  double t15136;
  double t15141;
  double t15171;
  double t15193;
  double t15194;
  double t15177;
  double t15076;
  double t15174;
  double t15234;
  double t4459;
  double t5286;
  double t8754;
  double t12139;
  double t14261;
  double t14669;
  double t14978;
  double t15003;
  double t15008;
  double t15043;
  double t15088;
  double t15090;
  double t15092;
  double t15093;
  double t15110;
  double t15112;
  double t15120;
  double t15121;
  double t15122;
  double t15364;
  double t15366;
  double t15367;
  double t15373;
  double t15181;
  double t15382;
  double t15386;
  double t15587;
  double t15590;
  double t15805;
  double t15823;
  double t15828;
  double t15831;
  double t15284;
  double t15297;
  double t15300;
  double t15977;
  double t15999;
  double t16001;
  double t16006;
  double t16012;
  double t16029;
  double t16087;
  double t16093;
  double t16094;
  double t16149;
  double t16168;
  double t16171;
  double t16193;
  double t16194;
  double t16197;
  double t17688;
  double t17702;
  double t17707;
  double t17803;
  double t17804;
  double t17805;
  double t17936;
  double t18488;
  double t18539;
  double t18720;
  double t19505;
  double t19526;
  double t19531;
  double t19542;
  double t19563;
  double t20160;
  double t20169;
  double t19938;
  double t20049;
  double t20691;
  double t20397;
  double t20398;
  double t20399;
  double t20462;
  double t20782;
  double t20790;
  double t20803;
  double t20882;
  double t20905;
  double t20955;
  double t21098;
  double t20979;
  t3870 = Cos(var1[19]);
  t3434 = Sin(var1[3]);
  t4365 = -1.*t3870;
  t4458 = 1. + t4365;
  t13206 = Cos(var1[3]);
  t12172 = Cos(var1[5]);
  t12870 = Sin(var1[4]);
  t13214 = Sin(var1[5]);
  t14390 = Cos(var1[21]);
  t14459 = -1.*t14390;
  t14662 = 1. + t14459;
  t14744 = -3.e-6*t14662;
  t14900 = Sin(var1[21]);
  t2118 = Cos(var1[4]);
  t2816 = Sin(var1[19]);
  t12897 = t12172*t3434*t12870;
  t13640 = t13206*t13214;
  t13643 = t12897 + t13640;
  t14150 = t13206*t12172;
  t14217 = -1.*t3434*t12870*t13214;
  t14232 = t14150 + t14217;
  t14979 = 3.e-6*t14900;
  t14994 = t14744 + t14979;
  t15032 = 3.e-13*var1[21];
  t14908 = -3.e-6*t14900;
  t14975 = t14744 + t14908;
  t15054 = -9.e-12*t14662;
  t15010 = 3.e-6*t2118*t2816*t3434;
  t15011 = 3.e-6*t4458*t13643;
  t15013 = -9.e-12*t4458;
  t15017 = 1. + t15013;
  t15019 = t15017*t14232;
  t15023 = t15010 + t15011 + t15019;
  t15094 = -1.*t2118*t2816*t3434;
  t15096 = t3870*t13643;
  t15097 = 3.e-6*t4458*t14232;
  t15100 = t15094 + t15096 + t15097;
  t15123 = -1.000000000009*t4458;
  t15125 = 1. + t15123;
  t15131 = -1.*t15125*t2118*t3434;
  t15133 = -1.*t2816*t13643;
  t15136 = 3.e-6*t2816*t14232;
  t15141 = t15131 + t15133 + t15136;
  t15171 = 3.e-6*t14662;
  t15193 = -1.000000000009*t14662;
  t15194 = 1. + t15193;
  t15177 = 9.e-12*t14662;
  t15076 = -1.*t14900;
  t15174 = t15171 + t14908;
  t15234 = t15171 + t14979;
  t4459 = -1.8e-12*t4458;
  t5286 = -1. + t3870;
  t8754 = 0.2*t5286;
  t12139 = t4459 + t8754;
  t14261 = 1.e-7*var1[21];
  t14669 = 5.4e-18*t14662;
  t14978 = -0.200000000003*t14975;
  t15003 = 0.100000000003*t14994;
  t15008 = t14261 + t14669 + t14978 + t15003;
  t15043 = -0.2000000000048*t14662;
  t15088 = t15054 + t15076;
  t15090 = 0.100000000003*t15088;
  t15092 = 3.e-7*t14994;
  t15093 = t15032 + t15043 + t15090 + t15092;
  t15110 = 0.1000000000039*t14662;
  t15112 = 3.e-7*t14975;
  t15120 = t15054 + t14900;
  t15121 = -0.200000000003*t15120;
  t15122 = t15032 + t15110 + t15112 + t15121;
  t15364 = -3.e-6*t4458*t13206*t2118*t12172;
  t15366 = 3.e-6*t13206*t2816*t12870;
  t15367 = t15017*t13206*t2118*t13214;
  t15373 = t15364 + t15366 + t15367;
  t15181 = t15177 + t14900;
  t15382 = -1.*t3870*t13206*t2118*t12172;
  t15386 = -1.*t13206*t2816*t12870;
  t15587 = 3.e-6*t4458*t13206*t2118*t13214;
  t15590 = t15382 + t15386 + t15587;
  t15805 = t13206*t2118*t12172*t2816;
  t15823 = -1.*t15125*t13206*t12870;
  t15828 = 3.e-6*t13206*t2118*t2816*t13214;
  t15831 = t15805 + t15823 + t15828;
  t15284 = t15177 + t15076;
  t15297 = -1.8e-11*t14662;
  t15300 = 1. + t15297;
  t15977 = t13206*t12172*t12870;
  t15999 = -1.*t3434*t13214;
  t16001 = t15977 + t15999;
  t16006 = t12172*t3434;
  t16012 = t13206*t12870*t13214;
  t16029 = t16006 + t16012;
  t16087 = t15017*t16001;
  t16093 = 3.e-6*t4458*t16029;
  t16094 = t16087 + t16093;
  t16149 = 3.e-6*t4458*t16001;
  t16168 = t3870*t16029;
  t16171 = t16149 + t16168;
  t16193 = 3.e-6*t2816*t16001;
  t16194 = -1.*t2816*t16029;
  t16197 = t16193 + t16194;
  t17688 = -1.*t13206*t12172*t12870;
  t17702 = t3434*t13214;
  t17707 = t17688 + t17702;
  t17803 = -1.000000000009*t13206*t2118*t2816;
  t17804 = -1.*t3870*t17707;
  t17805 = 3.e-6*t3870*t16029;
  t17936 = t17803 + t17804 + t17805;
  t18488 = -3.e-6*t3870*t13206*t2118;
  t18539 = 3.e-6*t2816*t17707;
  t18720 = -9.e-12*t2816*t16029;
  t19505 = t18488 + t18539 + t18720;
  t19526 = t3870*t13206*t2118;
  t19531 = -1.*t2816*t17707;
  t19542 = 3.e-6*t2816*t16029;
  t19563 = t19526 + t19531 + t19542;
  t20160 = 3.e-6*t14390;
  t20169 = t20160 + t14908;
  t19938 = -3.e-6*t14390;
  t20049 = t19938 + t14908;
  t20691 = -9.e-12*t14900;
  t20397 = -3.e-6*t13206*t2118*t2816;
  t20398 = 3.e-6*t4458*t17707;
  t20399 = t15017*t16029;
  t20462 = t20397 + t20398 + t20399;
  t20782 = t13206*t2118*t2816;
  t20790 = t3870*t17707;
  t20803 = t20782 + t20790 + t16093;
  t20882 = t15125*t13206*t2118;
  t20905 = t20882 + t19531 + t19542;
  t20955 = t20160 + t14979;
  t21098 = t19938 + t14979;
  t20979 = 9.e-12*t14900;
  p_output1[0]=1.;
  p_output1[1]=t12139*t13643 + t15008*t15023 + t15093*t15100 + t15122*t15141 - 0.3*(t15023*t15174 + t15100*t15181 + t15141*t15194) + 0.2*(-1.*t15100*t15194 - 1.*t15023*t15234 - 1.*t15141*t15284) - 0.099999*(t15100*t15174 + t15141*t15234 + t15023*t15300) - 0.2000000000018*t2118*t2816*t3434 + 6.000000000054e-7*t14232*t4458;
  p_output1[2]=t15008*t15373 + t15093*t15590 + t15122*t15831 - 0.3*(t15174*t15373 + t15181*t15590 + t15194*t15831) - 0.099999*(t15300*t15373 + t15174*t15590 + t15234*t15831) + 0.2*(-1.*t15234*t15373 - 1.*t15194*t15590 - 1.*t15284*t15831) - 1.*t12139*t12172*t13206*t2118 - 0.2000000000018*t12870*t13206*t2816 + 6.000000000054e-7*t13206*t13214*t2118*t4458;
  p_output1[3]=t12139*t16029 + t15008*t16094 + t15093*t16171 + t15122*t16197 - 0.3*(t15174*t16094 + t15181*t16171 + t15194*t16197) - 0.099999*(t15300*t16094 + t15174*t16171 + t15234*t16197) + 0.2*(-1.*t15234*t16094 - 1.*t15194*t16171 - 1.*t15284*t16197) + 6.000000000054e-7*t16001*t4458;
  p_output1[4]=t15122*t17936 + t15008*t19505 + t15093*t19563 - 0.099999*(t15234*t17936 + t15300*t19505 + t15174*t19563) - 0.3*(t15194*t17936 + t15174*t19505 + t15181*t19563) + 0.2*(-1.*t15284*t17936 - 1.*t15234*t19505 - 1.*t15194*t19563) + 6.000000000054e-7*t16029*t2816 - 0.2000000000018*t17707*t2816 + 0.2000000000018*t13206*t2118*t3870;
  p_output1[5]=(1.e-7 + 5.4e-18*t14900 - 0.200000000003*t20049 + 0.100000000003*t20169)*t20462 + (3.e-13 - 0.2000000000048*t14900 + 3.e-7*t20169 + 0.100000000003*(t14459 + t20691))*t20803 + (3.e-13 + 0.1000000000039*t14900 + 3.e-7*t20049 - 0.200000000003*(t14390 + t20691))*t20905 + 0.2*(1.000000000009*t14900*t20803 - 1.*t20462*t20955 - 1.*t20905*(t14459 + t20979)) - 0.3*(-1.000000000009*t14900*t20905 + t20803*(t14390 + t20979) + t20462*t21098) - 0.099999*(-1.8e-11*t14900*t20462 + t20905*t20955 + t20803*t21098);
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
