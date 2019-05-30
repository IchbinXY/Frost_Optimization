/*
 * Automatically Generated from Mathematica.
 * Thu 30 May 2019 00:02:28 GMT-04:00
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
  double t21605;
  double t4230;
  double t24907;
  double t28997;
  double t30193;
  double t29559;
  double t29586;
  double t30195;
  double t30559;
  double t30641;
  double t30717;
  double t30766;
  double t30773;
  double t1950;
  double t3965;
  double t29838;
  double t30197;
  double t30205;
  double t30456;
  double t30459;
  double t30468;
  double t30864;
  double t30870;
  double t30977;
  double t30777;
  double t30783;
  double t31071;
  double t30882;
  double t30883;
  double t30884;
  double t30946;
  double t30950;
  double t30954;
  double t31091;
  double t31097;
  double t31098;
  double t31103;
  double t31187;
  double t31188;
  double t31190;
  double t31193;
  double t31196;
  double t31200;
  double t31202;
  double t31280;
  double t31291;
  double t31261;
  double t31073;
  double t31256;
  double t31350;
  double t29133;
  double t29314;
  double t29540;
  double t29550;
  double t30478;
  double t30745;
  double t30861;
  double t30871;
  double t30872;
  double t30978;
  double t31079;
  double t31083;
  double t31087;
  double t31089;
  double t31107;
  double t31156;
  double t31159;
  double t31171;
  double t31173;
  double t31659;
  double t31676;
  double t31687;
  double t31694;
  double t31274;
  double t31775;
  double t31781;
  double t31783;
  double t31785;
  double t31800;
  double t31808;
  double t31812;
  double t31815;
  double t31363;
  double t31530;
  double t31532;
  double t42966;
  double t42971;
  double t42974;
  double t42980;
  double t42984;
  double t42985;
  double t42987;
  double t42990;
  double t43002;
  double t43076;
  double t43084;
  double t43086;
  double t43118;
  double t43134;
  double t43137;
  double t43192;
  double t43193;
  double t43194;
  double t43202;
  double t43203;
  double t43204;
  double t43206;
  double t43209;
  double t43215;
  double t43217;
  double t43226;
  double t43233;
  double t43235;
  double t43236;
  double t43237;
  double t43393;
  double t43398;
  double t43383;
  double t43389;
  double t43421;
  double t43406;
  double t43408;
  double t43412;
  double t43414;
  double t43428;
  double t43430;
  double t43434;
  double t43495;
  double t43499;
  double t43511;
  double t43541;
  double t43514;
  t21605 = Cos(var1[10]);
  t4230 = Sin(var1[3]);
  t24907 = -1.*t21605;
  t28997 = 1. + t24907;
  t30193 = Cos(var1[3]);
  t29559 = Cos(var1[5]);
  t29586 = Sin(var1[4]);
  t30195 = Sin(var1[5]);
  t30559 = Cos(var1[12]);
  t30641 = -1.*t30559;
  t30717 = 1. + t30641;
  t30766 = -3.e-6*t30717;
  t30773 = Sin(var1[12]);
  t1950 = Cos(var1[4]);
  t3965 = Sin(var1[10]);
  t29838 = t29559*t4230*t29586;
  t30197 = t30193*t30195;
  t30205 = t29838 + t30197;
  t30456 = t30193*t29559;
  t30459 = -1.*t4230*t29586*t30195;
  t30468 = t30456 + t30459;
  t30864 = 3.e-6*t30773;
  t30870 = t30766 + t30864;
  t30977 = 3.e-13*var1[12];
  t30777 = -3.e-6*t30773;
  t30783 = t30766 + t30777;
  t31071 = -9.e-12*t30717;
  t30882 = 3.e-6*t1950*t3965*t4230;
  t30883 = 3.e-6*t28997*t30205;
  t30884 = -9.e-12*t28997;
  t30946 = 1. + t30884;
  t30950 = t30946*t30468;
  t30954 = t30882 + t30883 + t30950;
  t31091 = -1.*t1950*t3965*t4230;
  t31097 = t21605*t30205;
  t31098 = 3.e-6*t28997*t30468;
  t31103 = t31091 + t31097 + t31098;
  t31187 = -1.000000000009*t28997;
  t31188 = 1. + t31187;
  t31190 = -1.*t31188*t1950*t4230;
  t31193 = -1.*t3965*t30205;
  t31196 = 3.e-6*t3965*t30468;
  t31200 = t31190 + t31193 + t31196;
  t31202 = 3.e-6*t30717;
  t31280 = -1.000000000009*t30717;
  t31291 = 1. + t31280;
  t31261 = 9.e-12*t30717;
  t31073 = -1.*t30773;
  t31256 = t31202 + t30777;
  t31350 = t31202 + t30864;
  t29133 = -1.8e-12*t28997;
  t29314 = -1. + t21605;
  t29540 = 0.2*t29314;
  t29550 = t29133 + t29540;
  t30478 = 1.e-7*var1[12];
  t30745 = 5.4e-18*t30717;
  t30861 = -0.200000000003*t30783;
  t30871 = 0.100000000003*t30870;
  t30872 = t30478 + t30745 + t30861 + t30871;
  t30978 = -0.2000000000048*t30717;
  t31079 = t31071 + t31073;
  t31083 = 0.100000000003*t31079;
  t31087 = 3.e-7*t30870;
  t31089 = t30977 + t30978 + t31083 + t31087;
  t31107 = 0.1000000000039*t30717;
  t31156 = 3.e-7*t30783;
  t31159 = t31071 + t30773;
  t31171 = -0.200000000003*t31159;
  t31173 = t30977 + t31107 + t31156 + t31171;
  t31659 = -3.e-6*t28997*t30193*t1950*t29559;
  t31676 = 3.e-6*t30193*t3965*t29586;
  t31687 = t30946*t30193*t1950*t30195;
  t31694 = t31659 + t31676 + t31687;
  t31274 = t31261 + t30773;
  t31775 = -1.*t21605*t30193*t1950*t29559;
  t31781 = -1.*t30193*t3965*t29586;
  t31783 = 3.e-6*t28997*t30193*t1950*t30195;
  t31785 = t31775 + t31781 + t31783;
  t31800 = t30193*t1950*t29559*t3965;
  t31808 = -1.*t31188*t30193*t29586;
  t31812 = 3.e-6*t30193*t1950*t3965*t30195;
  t31815 = t31800 + t31808 + t31812;
  t31363 = t31261 + t31073;
  t31530 = -1.8e-11*t30717;
  t31532 = 1. + t31530;
  t42966 = t30193*t29559*t29586;
  t42971 = -1.*t4230*t30195;
  t42974 = t42966 + t42971;
  t42980 = t29559*t4230;
  t42984 = t30193*t29586*t30195;
  t42985 = t42980 + t42984;
  t42987 = t30946*t42974;
  t42990 = 3.e-6*t28997*t42985;
  t43002 = t42987 + t42990;
  t43076 = 3.e-6*t28997*t42974;
  t43084 = t21605*t42985;
  t43086 = t43076 + t43084;
  t43118 = 3.e-6*t3965*t42974;
  t43134 = -1.*t3965*t42985;
  t43137 = t43118 + t43134;
  t43192 = -1.*t30193*t29559*t29586;
  t43193 = t4230*t30195;
  t43194 = t43192 + t43193;
  t43202 = -1.000000000009*t30193*t1950*t3965;
  t43203 = -1.*t21605*t43194;
  t43204 = 3.e-6*t21605*t42985;
  t43206 = t43202 + t43203 + t43204;
  t43209 = -3.e-6*t21605*t30193*t1950;
  t43215 = 3.e-6*t3965*t43194;
  t43217 = -9.e-12*t3965*t42985;
  t43226 = t43209 + t43215 + t43217;
  t43233 = t21605*t30193*t1950;
  t43235 = -1.*t3965*t43194;
  t43236 = 3.e-6*t3965*t42985;
  t43237 = t43233 + t43235 + t43236;
  t43393 = 3.e-6*t30559;
  t43398 = t43393 + t30777;
  t43383 = -3.e-6*t30559;
  t43389 = t43383 + t30777;
  t43421 = -9.e-12*t30773;
  t43406 = -3.e-6*t30193*t1950*t3965;
  t43408 = 3.e-6*t28997*t43194;
  t43412 = t30946*t42985;
  t43414 = t43406 + t43408 + t43412;
  t43428 = t30193*t1950*t3965;
  t43430 = t21605*t43194;
  t43434 = t43428 + t43430 + t42990;
  t43495 = t31188*t30193*t1950;
  t43499 = t43495 + t43235 + t43236;
  t43511 = t43393 + t30864;
  t43541 = t43383 + t30864;
  t43514 = 9.e-12*t30773;
  p_output1[0]=1.;
  p_output1[1]=t29550*t30205 + 6.000000000054e-7*t28997*t30468 + t30872*t30954 + t31089*t31103 + t31173*t31200 - 0.3*(t30954*t31256 + t31103*t31274 + t31200*t31291) + 0.2*(-1.*t31103*t31291 - 1.*t30954*t31350 - 1.*t31200*t31363) + 0.100001*(t31103*t31256 + t31200*t31350 + t30954*t31532) - 0.2000000000018*t1950*t3965*t4230;
  p_output1[2]=-1.*t1950*t29550*t29559*t30193 + 6.000000000054e-7*t1950*t28997*t30193*t30195 + t30872*t31694 + t31089*t31785 + t31173*t31815 - 0.3*(t31256*t31694 + t31274*t31785 + t31291*t31815) + 0.100001*(t31532*t31694 + t31256*t31785 + t31350*t31815) + 0.2*(-1.*t31350*t31694 - 1.*t31291*t31785 - 1.*t31363*t31815) - 0.2000000000018*t29586*t30193*t3965;
  p_output1[3]=6.000000000054e-7*t28997*t42974 + t29550*t42985 + t30872*t43002 + t31089*t43086 + t31173*t43137 - 0.3*(t31256*t43002 + t31274*t43086 + t31291*t43137) + 0.100001*(t31532*t43002 + t31256*t43086 + t31350*t43137) + 0.2*(-1.*t31350*t43002 - 1.*t31291*t43086 - 1.*t31363*t43137);
  p_output1[4]=0.2000000000018*t1950*t21605*t30193 + 6.000000000054e-7*t3965*t42985 - 0.2000000000018*t3965*t43194 + t31173*t43206 + t30872*t43226 + t31089*t43237 + 0.100001*(t31350*t43206 + t31532*t43226 + t31256*t43237) - 0.3*(t31291*t43206 + t31256*t43226 + t31274*t43237) + 0.2*(-1.*t31363*t43206 - 1.*t31350*t43226 - 1.*t31291*t43237);
  p_output1[5]=(1.e-7 + 5.4e-18*t30773 - 0.200000000003*t43389 + 0.100000000003*t43398)*t43414 + (3.e-13 - 0.2000000000048*t30773 + 3.e-7*t43398 + 0.100000000003*(t30641 + t43421))*t43434 + (3.e-13 + 0.1000000000039*t30773 + 3.e-7*t43389 - 0.200000000003*(t30559 + t43421))*t43499 + 0.2*(1.000000000009*t30773*t43434 - 1.*t43414*t43511 - 1.*t43499*(t30641 + t43514)) - 0.3*(-1.000000000009*t30773*t43499 + t43434*(t30559 + t43514) + t43414*t43541) + 0.100001*(-1.8e-11*t30773*t43414 + t43499*t43511 + t43434*t43541);
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

#include "J_foot_clearance_Flight.hh"

namespace Flight2
{

void J_foot_clearance_Flight_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
