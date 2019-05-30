/*
 * Automatically Generated from Mathematica.
 * Wed 29 May 2019 23:47:22 GMT-04:00
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
  double t2472;
  double t3434;
  double t3793;
  double t4059;
  double t5349;
  double t4643;
  double t5286;
  double t5356;
  double t5603;
  double t5686;
  double t5750;
  double t5909;
  double t5995;
  double t414;
  double t2187;
  double t5336;
  double t5360;
  double t5363;
  double t5560;
  double t5568;
  double t5571;
  double t6020;
  double t6021;
  double t6099;
  double t5998;
  double t6016;
  double t6102;
  double t6027;
  double t6028;
  double t6029;
  double t6031;
  double t6035;
  double t6091;
  double t6113;
  double t6149;
  double t6154;
  double t6155;
  double t6266;
  double t6285;
  double t6291;
  double t6292;
  double t6299;
  double t6332;
  double t6441;
  double t7398;
  double t7494;
  double t6841;
  double t6105;
  double t6490;
  double t7703;
  double t5586;
  double t5787;
  double t6017;
  double t6023;
  double t6025;
  double t6101;
  double t6106;
  double t6108;
  double t6109;
  double t6111;
  double t6171;
  double t6173;
  double t6183;
  double t6203;
  double t6219;
  double t10647;
  double t11100;
  double t11340;
  double t11947;
  double t6958;
  double t12090;
  double t12139;
  double t12140;
  double t12143;
  double t12153;
  double t12172;
  double t12181;
  double t12211;
  double t7728;
  double t7781;
  double t7791;
  double t12540;
  double t12542;
  double t12543;
  double t12559;
  double t12579;
  double t12581;
  double t12591;
  double t12608;
  double t12626;
  double t12675;
  double t12685;
  double t12780;
  double t12784;
  double t12799;
  double t12805;
  double t13092;
  double t13095;
  double t13097;
  double t13103;
  double t13104;
  double t13111;
  double t13120;
  double t13161;
  double t13162;
  double t13169;
  double t13170;
  double t13214;
  double t13245;
  double t13277;
  double t13543;
  double t14208;
  double t14213;
  double t14135;
  double t14149;
  double t14296;
  double t14258;
  double t14259;
  double t14261;
  double t14262;
  double t14358;
  double t14361;
  double t14369;
  double t14423;
  double t14424;
  double t14426;
  double t14441;
  double t14430;
  t2472 = Sin(var1[3]);
  t3434 = Cos(var1[15]);
  t3793 = -1.*t3434;
  t4059 = 1. + t3793;
  t5349 = Cos(var1[3]);
  t4643 = Cos(var1[5]);
  t5286 = Sin(var1[4]);
  t5356 = Sin(var1[5]);
  t5603 = Cos(var1[17]);
  t5686 = -1.*t5603;
  t5750 = 1. + t5686;
  t5909 = -3.e-6*t5750;
  t5995 = Sin(var1[17]);
  t414 = Cos(var1[4]);
  t2187 = Sin(var1[15]);
  t5336 = t4643*t2472*t5286;
  t5360 = t5349*t5356;
  t5363 = t5336 + t5360;
  t5560 = t5349*t4643;
  t5568 = -1.*t2472*t5286*t5356;
  t5571 = t5560 + t5568;
  t6020 = 3.e-6*t5995;
  t6021 = t5909 + t6020;
  t6099 = 9.e-13*var1[17];
  t5998 = -3.e-6*t5995;
  t6016 = t5909 + t5998;
  t6102 = -9.e-12*t5750;
  t6027 = 3.e-6*t414*t2187*t2472;
  t6028 = 3.e-6*t4059*t5363;
  t6029 = -9.e-12*t4059;
  t6031 = 1. + t6029;
  t6035 = t6031*t5571;
  t6091 = t6027 + t6028 + t6035;
  t6113 = -1.*t414*t2187*t2472;
  t6149 = t3434*t5363;
  t6154 = 3.e-6*t4059*t5571;
  t6155 = t6113 + t6149 + t6154;
  t6266 = -1.000000000009*t4059;
  t6285 = 1. + t6266;
  t6291 = -1.*t6285*t414*t2472;
  t6292 = -1.*t2187*t5363;
  t6299 = 3.e-6*t2187*t5571;
  t6332 = t6291 + t6292 + t6299;
  t6441 = 3.e-6*t5750;
  t7398 = -1.000000000009*t5750;
  t7494 = 1. + t7398;
  t6841 = 9.e-12*t5750;
  t6105 = -1.*t5995;
  t6490 = t6441 + t5998;
  t7703 = t6441 + t6020;
  t5586 = 3.e-7*var1[17];
  t5787 = -1.62e-17*t5750;
  t6017 = 0.2*t6016;
  t6023 = 0.1*t6021;
  t6025 = t5586 + t5787 + t6017 + t6023;
  t6101 = 0.2000000000018*t5750;
  t6106 = t6102 + t6105;
  t6108 = 0.1*t6106;
  t6109 = -9.e-7*t6021;
  t6111 = t6099 + t6101 + t6108 + t6109;
  t6171 = 0.1000000000009*t5750;
  t6173 = -9.e-7*t6016;
  t6183 = t6102 + t5995;
  t6203 = 0.2*t6183;
  t6219 = t6099 + t6171 + t6173 + t6203;
  t10647 = -3.e-6*t4059*t5349*t414*t4643;
  t11100 = 3.e-6*t5349*t2187*t5286;
  t11340 = t6031*t5349*t414*t5356;
  t11947 = t10647 + t11100 + t11340;
  t6958 = t6841 + t5995;
  t12090 = -1.*t3434*t5349*t414*t4643;
  t12139 = -1.*t5349*t2187*t5286;
  t12140 = 3.e-6*t4059*t5349*t414*t5356;
  t12143 = t12090 + t12139 + t12140;
  t12153 = t5349*t414*t4643*t2187;
  t12172 = -1.*t6285*t5349*t5286;
  t12181 = 3.e-6*t5349*t414*t2187*t5356;
  t12211 = t12153 + t12172 + t12181;
  t7728 = t6841 + t6105;
  t7781 = -1.8e-11*t5750;
  t7791 = 1. + t7781;
  t12540 = t5349*t4643*t5286;
  t12542 = -1.*t2472*t5356;
  t12543 = t12540 + t12542;
  t12559 = t4643*t2472;
  t12579 = t5349*t5286*t5356;
  t12581 = t12559 + t12579;
  t12591 = t6031*t12543;
  t12608 = 3.e-6*t4059*t12581;
  t12626 = t12591 + t12608;
  t12675 = 3.e-6*t4059*t12543;
  t12685 = t3434*t12581;
  t12780 = t12675 + t12685;
  t12784 = 3.e-6*t2187*t12543;
  t12799 = -1.*t2187*t12581;
  t12805 = t12784 + t12799;
  t13092 = -1.*t5349*t4643*t5286;
  t13095 = t2472*t5356;
  t13097 = t13092 + t13095;
  t13103 = -1.000000000009*t5349*t414*t2187;
  t13104 = -1.*t3434*t13097;
  t13111 = 3.e-6*t3434*t12581;
  t13120 = t13103 + t13104 + t13111;
  t13161 = -3.e-6*t3434*t5349*t414;
  t13162 = 3.e-6*t2187*t13097;
  t13169 = -9.e-12*t2187*t12581;
  t13170 = t13161 + t13162 + t13169;
  t13214 = t3434*t5349*t414;
  t13245 = -1.*t2187*t13097;
  t13277 = 3.e-6*t2187*t12581;
  t13543 = t13214 + t13245 + t13277;
  t14208 = 3.e-6*t5603;
  t14213 = t14208 + t5998;
  t14135 = -3.e-6*t5603;
  t14149 = t14135 + t5998;
  t14296 = -9.e-12*t5995;
  t14258 = -3.e-6*t5349*t414*t2187;
  t14259 = 3.e-6*t4059*t13097;
  t14261 = t6031*t12581;
  t14262 = t14258 + t14259 + t14261;
  t14358 = t5349*t414*t2187;
  t14361 = t3434*t13097;
  t14369 = t14358 + t14361 + t12608;
  t14423 = t6285*t5349*t414;
  t14424 = t14423 + t13245 + t13277;
  t14426 = t14208 + t6020;
  t14441 = t14135 + t6020;
  t14430 = 9.e-12*t5995;
  p_output1[0]=1.;
  p_output1[1]=0.2000000000018*t2187*t2472*t414 + 0.2000000000018*t4059*t5363 - 6.000000000054e-7*t4059*t5571 + t6025*t6091 + t6111*t6155 + t6219*t6332 - 0.3*(t6091*t6490 + t6155*t6958 + t6332*t7494) + 0.2*(t6155*t7494 + t6091*t7703 + t6332*t7728) - 0.099999*(t6155*t6490 + t6332*t7703 + t6091*t7791);
  p_output1[2]=-0.2000000000018*t4059*t414*t4643*t5349 + 0.2000000000018*t2187*t5286*t5349 - 6.000000000054e-7*t4059*t414*t5349*t5356 + t11947*t6025 + t12143*t6111 + t12211*t6219 - 0.3*(t11947*t6490 + t12143*t6958 + t12211*t7494) + 0.2*(t12143*t7494 + t11947*t7703 + t12211*t7728) - 0.099999*(t12143*t6490 + t12211*t7703 + t11947*t7791);
  p_output1[3]=-6.000000000054e-7*t12543*t4059 + 0.2000000000018*t12581*t4059 + t12626*t6025 + t12780*t6111 + t12805*t6219 - 0.3*(t12626*t6490 + t12780*t6958 + t12805*t7494) + 0.2*(t12780*t7494 + t12626*t7703 + t12805*t7728) - 0.099999*(t12780*t6490 + t12805*t7703 + t12626*t7791);
  p_output1[4]=-6.000000000054e-7*t12581*t2187 + 0.2000000000018*t13097*t2187 - 0.2000000000018*t3434*t414*t5349 + t13170*t6025 + t13543*t6111 + t13120*t6219 - 0.3*(t13170*t6490 + t13543*t6958 + t13120*t7494) + 0.2*(t13543*t7494 + t13170*t7703 + t13120*t7728) - 0.099999*(t13543*t6490 + t13120*t7703 + t13170*t7791);
  p_output1[5]=t14262*(3.e-7 + 0.2*t14149 + 0.1*t14213 - 1.62e-17*t5995) + t14424*(9.e-13 - 9.e-7*t14149 + 0.2*(t14296 + t5603) + 0.1000000000009*t5995) + t14369*(9.e-13 - 9.e-7*t14213 + 0.1*(t14296 + t5686) + 0.2000000000018*t5995) - 0.099999*(t14424*t14426 + t14369*t14441 - 1.8e-11*t14262*t5995) + 0.2*(t14262*t14426 + t14424*(t14430 + t5686) - 1.000000000009*t14369*t5995) - 0.3*(t14262*t14441 + t14369*(t14430 + t5603) - 1.000000000009*t14424*t5995);
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

#include "J_foot_clearance_FrontStance.hh"

namespace FrontStance
{

void J_foot_clearance_FrontStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
