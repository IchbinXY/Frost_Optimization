/*
 * Automatically Generated from Mathematica.
 * Tue 28 May 2019 23:03:57 GMT-04:00
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
  double t3894;
  double t4889;
  double t5005;
  double t6648;
  double t5079;
  double t5169;
  double t5340;
  double t6655;
  double t6203;
  double t6682;
  double t6698;
  double t6727;
  double t6739;
  double t6763;
  double t6885;
  double t7185;
  double t7493;
  double t8746;
  double t8893;
  double t9558;
  double t9616;
  double t9627;
  double t9629;
  double t7208;
  double t7294;
  double t7328;
  double t7331;
  double t9559;
  double t11040;
  double t11043;
  double t11049;
  double t11050;
  double t11051;
  double t11055;
  double t12183;
  double t11130;
  double t12142;
  double t12158;
  double t12159;
  double t12160;
  double t12161;
  double t12173;
  double t12185;
  double t7335;
  double t11132;
  double t9532;
  double t12098;
  double t12103;
  double t12198;
  double t12176;
  double t8931;
  double t9585;
  double t9587;
  double t10697;
  double t11018;
  double t11060;
  double t11128;
  double t11161;
  double t11166;
  double t12096;
  double t12231;
  double t12232;
  double t12233;
  double t12234;
  double t12177;
  double t12236;
  double t12237;
  double t12238;
  double t12239;
  double t12194;
  double t12195;
  double t12242;
  double t12243;
  double t12248;
  double t12249;
  double t12203;
  double t12204;
  double t12205;
  double t12210;
  double t12215;
  double t12223;
  double t12298;
  double t12299;
  double t12300;
  double t12303;
  double t12304;
  double t12305;
  double t12308;
  double t12309;
  double t12310;
  double t12313;
  double t12316;
  double t12323;
  double t12331;
  double t12332;
  double t12333;
  double t12367;
  double t12369;
  double t12371;
  double t12416;
  double t12418;
  double t12420;
  double t12422;
  double t12378;
  double t12382;
  double t12384;
  double t12394;
  double t12440;
  double t12442;
  double t12444;
  double t12446;
  double t12493;
  double t12494;
  double t12505;
  double t12506;
  double t12542;
  double t12558;
  double t12563;
  double t12564;
  double t12536;
  double t12538;
  double t12488;
  double t12490;
  double t12491;
  double t12492;
  double t12573;
  double t12580;
  double t12571;
  t3894 = Cos(var1[6]);
  t4889 = -1.*t3894;
  t5005 = 1. + t4889;
  t6648 = Cos(var1[3]);
  t5079 = Cos(var1[5]);
  t5169 = Sin(var1[3]);
  t5340 = Sin(var1[4]);
  t6655 = Sin(var1[5]);
  t6203 = t5079*t5169*t5340;
  t6682 = t6648*t6655;
  t6698 = t6203 + t6682;
  t6727 = t6648*t5079;
  t6739 = -1.*t5169*t5340*t6655;
  t6763 = t6727 + t6739;
  t6885 = Cos(var1[4]);
  t7185 = Sin(var1[6]);
  t7493 = Cos(var1[8]);
  t8746 = -1.*t7493;
  t8893 = 1. + t8746;
  t9558 = Sin(var1[8]);
  t9616 = -3.e-6*t8893;
  t9627 = 3.e-6*t9558;
  t9629 = t9616 + t9627;
  t7208 = t3894*t6698;
  t7294 = 3.e-6*t5005*t6763;
  t7328 = -1.*t6885*t5169*t7185;
  t7331 = t7208 + t7294 + t7328;
  t9559 = -1.*t9558;
  t11040 = 3.e-6*t5005*t6698;
  t11043 = -9.e-12*t5005;
  t11049 = 1. + t11043;
  t11050 = t11049*t6763;
  t11051 = 3.e-6*t6885*t5169*t7185;
  t11055 = t11040 + t11050 + t11051;
  t12183 = 3.e-6*t8893;
  t11130 = -3.e-6*t9558;
  t12142 = -1.000000000009*t5005;
  t12158 = 1. + t12142;
  t12159 = -1.*t6885*t12158*t5169;
  t12160 = -1.*t6698*t7185;
  t12161 = 3.e-6*t6763*t7185;
  t12173 = t12159 + t12160 + t12161;
  t12185 = t12183 + t9627;
  t7335 = 9.e-13*var1[8];
  t11132 = t9616 + t11130;
  t9532 = -9.e-12*t8893;
  t12098 = -1.000000000009*t8893;
  t12103 = 1. + t12098;
  t12198 = t12183 + t11130;
  t12176 = 9.e-12*t8893;
  t8931 = 0.2000000000018*t8893;
  t9585 = t9532 + t9559;
  t9587 = 0.1*t9585;
  t10697 = -9.e-7*t9629;
  t11018 = t7335 + t8931 + t9587 + t10697;
  t11060 = 3.e-7*var1[8];
  t11128 = -1.62e-17*t8893;
  t11161 = 0.2*t11132;
  t11166 = 0.1*t9629;
  t12096 = t11060 + t11128 + t11161 + t11166;
  t12231 = -1.*t6648*t6885*t5079*t3894;
  t12232 = 3.e-6*t6648*t6885*t5005*t6655;
  t12233 = -1.*t6648*t5340*t7185;
  t12234 = t12231 + t12232 + t12233;
  t12177 = t12176 + t9559;
  t12236 = -3.e-6*t6648*t6885*t5079*t5005;
  t12237 = t6648*t6885*t11049*t6655;
  t12238 = 3.e-6*t6648*t5340*t7185;
  t12239 = t12236 + t12237 + t12238;
  t12194 = -1.8e-11*t8893;
  t12195 = 1. + t12194;
  t12242 = -1.*t6648*t12158*t5340;
  t12243 = t6648*t6885*t5079*t7185;
  t12248 = 3.e-6*t6648*t6885*t6655*t7185;
  t12249 = t12242 + t12243 + t12248;
  t12203 = 0.1000000000009*t8893;
  t12204 = -9.e-7*t11132;
  t12205 = t9532 + t9558;
  t12210 = 0.2*t12205;
  t12215 = t7335 + t12203 + t12204 + t12210;
  t12223 = t12176 + t9558;
  t12298 = t6648*t5079*t5340;
  t12299 = -1.*t5169*t6655;
  t12300 = t12298 + t12299;
  t12303 = t5079*t5169;
  t12304 = t6648*t5340*t6655;
  t12305 = t12303 + t12304;
  t12308 = 3.e-6*t5005*t12300;
  t12309 = t3894*t12305;
  t12310 = t12308 + t12309;
  t12313 = t11049*t12300;
  t12316 = 3.e-6*t5005*t12305;
  t12323 = t12313 + t12316;
  t12331 = 3.e-6*t12300*t7185;
  t12332 = -1.*t12305*t7185;
  t12333 = t12331 + t12332;
  t12367 = -1.*t6648*t5079*t5340;
  t12369 = t5169*t6655;
  t12371 = t12367 + t12369;
  t12416 = -3.e-6*t6648*t6885*t3894;
  t12418 = 3.e-6*t12371*t7185;
  t12420 = -9.e-12*t12305*t7185;
  t12422 = t12416 + t12418 + t12420;
  t12378 = t6648*t6885*t3894;
  t12382 = -1.*t12371*t7185;
  t12384 = 3.e-6*t12305*t7185;
  t12394 = t12378 + t12382 + t12384;
  t12440 = -1.*t3894*t12371;
  t12442 = 3.e-6*t3894*t12305;
  t12444 = -1.000000000009*t6648*t6885*t7185;
  t12446 = t12440 + t12442 + t12444;
  t12493 = -3.e-6*t7493;
  t12494 = t12493 + t11130;
  t12505 = 3.e-6*t7493;
  t12506 = t12505 + t11130;
  t12542 = -9.e-12*t9558;
  t12558 = t3894*t12371;
  t12563 = t6648*t6885*t7185;
  t12564 = t12558 + t12316 + t12563;
  t12536 = t6648*t6885*t12158;
  t12538 = t12536 + t12382 + t12384;
  t12488 = 3.e-6*t5005*t12371;
  t12490 = t11049*t12305;
  t12491 = -3.e-6*t6648*t6885*t7185;
  t12492 = t12488 + t12490 + t12491;
  t12573 = t12505 + t9627;
  t12580 = 9.e-12*t9558;
  t12571 = t12493 + t9627;
  p_output1[0]=1.;
  p_output1[1]=t11055*t12096 + t12173*t12215 + 0.2000000000018*t5005*t6698 - 6.000000000054e-7*t5005*t6763 + 0.2000000000018*t5169*t6885*t7185 + t11018*t7331 + 0.2*(t12173*t12177 + t11055*t12185 + t12103*t7331) + 0.100001*(t12173*t12185 + t11055*t12195 + t12198*t7331) - 0.3*(t12103*t12173 + t11055*t12198 + t12223*t7331);
  p_output1[2]=t11018*t12234 + t12096*t12239 + t12215*t12249 - 0.3*(t12223*t12234 + t12198*t12239 + t12103*t12249) + 0.2*(t12103*t12234 + t12185*t12239 + t12177*t12249) + 0.100001*(t12198*t12234 + t12195*t12239 + t12185*t12249) - 0.2000000000018*t5005*t5079*t6648*t6885 - 6.000000000054e-7*t5005*t6648*t6655*t6885 + 0.2000000000018*t5340*t6648*t7185;
  p_output1[3]=t11018*t12310 + t12096*t12323 + t12215*t12333 - 0.3*(t12223*t12310 + t12198*t12323 + t12103*t12333) + 0.2*(t12103*t12310 + t12185*t12323 + t12177*t12333) + 0.100001*(t12198*t12310 + t12195*t12323 + t12185*t12333) - 6.000000000054e-7*t12300*t5005 + 0.2000000000018*t12305*t5005;
  p_output1[4]=t11018*t12394 + t12096*t12422 + t12215*t12446 - 0.3*(t12223*t12394 + t12198*t12422 + t12103*t12446) + 0.2*(t12103*t12394 + t12185*t12422 + t12177*t12446) + 0.100001*(t12198*t12394 + t12195*t12422 + t12185*t12446) - 0.2000000000018*t3894*t6648*t6885 - 6.000000000054e-7*t12305*t7185 + 0.2000000000018*t12371*t7185;
  p_output1[5]=t12492*(3.e-7 + 0.2*t12494 + 0.1*t12506 - 1.62e-17*t9558) + t12538*(9.e-13 - 9.e-7*t12494 + 0.2*(t12542 + t7493) + 0.1000000000009*t9558) + t12564*(9.e-13 - 9.e-7*t12506 + 0.1*(t12542 + t8746) + 0.2000000000018*t9558) + 0.100001*(t12564*t12571 + t12538*t12573 - 1.8e-11*t12492*t9558) - 0.3*(t12492*t12571 + t12564*(t12580 + t7493) - 1.000000000009*t12538*t9558) + 0.2*(t12492*t12573 + t12538*(t12580 + t8746) - 1.000000000009*t12564*t9558);
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

#include "J_u_LeftFrontFootHeight_Flight.hh"

namespace Flight2
{

void J_u_LeftFrontFootHeight_Flight_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
