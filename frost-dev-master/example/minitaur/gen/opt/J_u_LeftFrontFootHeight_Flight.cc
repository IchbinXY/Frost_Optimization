/*
 * Automatically Generated from Mathematica.
 * Wed 29 May 2019 15:17:59 GMT-04:00
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
  double t21445;
  double t21495;
  double t23646;
  double t24416;
  double t24394;
  double t24404;
  double t24405;
  double t24421;
  double t24415;
  double t24449;
  double t24458;
  double t24587;
  double t24588;
  double t24595;
  double t24684;
  double t24685;
  double t26536;
  double t26537;
  double t26538;
  double t26543;
  double t26550;
  double t26551;
  double t26554;
  double t25314;
  double t25336;
  double t25470;
  double t25697;
  double t26546;
  double t26568;
  double t26584;
  double t26611;
  double t26621;
  double t26683;
  double t26832;
  double t27440;
  double t27183;
  double t27313;
  double t27316;
  double t27377;
  double t27425;
  double t27426;
  double t27432;
  double t27615;
  double t25911;
  double t27184;
  double t26542;
  double t27308;
  double t27310;
  double t27895;
  double t27436;
  double t26540;
  double t26547;
  double t26549;
  double t26555;
  double t26558;
  double t27002;
  double t27003;
  double t27185;
  double t27186;
  double t27187;
  double t28203;
  double t28204;
  double t28205;
  double t28227;
  double t27437;
  double t28249;
  double t28253;
  double t28254;
  double t28255;
  double t27663;
  double t27666;
  double t28267;
  double t28268;
  double t28269;
  double t28270;
  double t28153;
  double t28163;
  double t28164;
  double t28165;
  double t28167;
  double t28177;
  double t28390;
  double t28391;
  double t28392;
  double t28395;
  double t28396;
  double t28397;
  double t28399;
  double t28403;
  double t28436;
  double t28439;
  double t28440;
  double t28474;
  double t28488;
  double t28558;
  double t28559;
  double t29244;
  double t29245;
  double t29250;
  double t29327;
  double t29328;
  double t29329;
  double t29331;
  double t29320;
  double t29321;
  double t29323;
  double t29324;
  double t29354;
  double t29358;
  double t29361;
  double t29362;
  double t29536;
  double t29547;
  double t29557;
  double t29558;
  double t29569;
  double t29623;
  double t29624;
  double t29625;
  double t29566;
  double t29567;
  double t29532;
  double t29533;
  double t29534;
  double t29535;
  double t29655;
  double t29661;
  double t29653;
  t21445 = Cos(var1[6]);
  t21495 = -1.*t21445;
  t23646 = 1. + t21495;
  t24416 = Cos(var1[3]);
  t24394 = Cos(var1[5]);
  t24404 = Sin(var1[3]);
  t24405 = Sin(var1[4]);
  t24421 = Sin(var1[5]);
  t24415 = t24394*t24404*t24405;
  t24449 = t24416*t24421;
  t24458 = t24415 + t24449;
  t24587 = t24416*t24394;
  t24588 = -1.*t24404*t24405*t24421;
  t24595 = t24587 + t24588;
  t24684 = Cos(var1[4]);
  t24685 = Sin(var1[6]);
  t26536 = Cos(var1[8]);
  t26537 = -1.*t26536;
  t26538 = 1. + t26537;
  t26543 = Sin(var1[8]);
  t26550 = -3.e-6*t26538;
  t26551 = 3.e-6*t26543;
  t26554 = t26550 + t26551;
  t25314 = t21445*t24458;
  t25336 = 3.e-6*t23646*t24595;
  t25470 = -1.*t24684*t24404*t24685;
  t25697 = t25314 + t25336 + t25470;
  t26546 = -1.*t26543;
  t26568 = 3.e-6*t23646*t24458;
  t26584 = -9.e-12*t23646;
  t26611 = 1. + t26584;
  t26621 = t26611*t24595;
  t26683 = 3.e-6*t24684*t24404*t24685;
  t26832 = t26568 + t26621 + t26683;
  t27440 = 3.e-6*t26538;
  t27183 = -3.e-6*t26543;
  t27313 = -1.000000000009*t23646;
  t27316 = 1. + t27313;
  t27377 = -1.*t24684*t27316*t24404;
  t27425 = -1.*t24458*t24685;
  t27426 = 3.e-6*t24595*t24685;
  t27432 = t27377 + t27425 + t27426;
  t27615 = t27440 + t26551;
  t25911 = 9.e-13*var1[8];
  t27184 = t26550 + t27183;
  t26542 = -9.e-12*t26538;
  t27308 = -1.000000000009*t26538;
  t27310 = 1. + t27308;
  t27895 = t27440 + t27183;
  t27436 = 9.e-12*t26538;
  t26540 = 0.2000000000018*t26538;
  t26547 = t26542 + t26546;
  t26549 = 0.1*t26547;
  t26555 = -9.e-7*t26554;
  t26558 = t25911 + t26540 + t26549 + t26555;
  t27002 = 3.e-7*var1[8];
  t27003 = -1.62e-17*t26538;
  t27185 = 0.2*t27184;
  t27186 = 0.1*t26554;
  t27187 = t27002 + t27003 + t27185 + t27186;
  t28203 = -1.*t24416*t24684*t24394*t21445;
  t28204 = 3.e-6*t24416*t24684*t23646*t24421;
  t28205 = -1.*t24416*t24405*t24685;
  t28227 = t28203 + t28204 + t28205;
  t27437 = t27436 + t26546;
  t28249 = -3.e-6*t24416*t24684*t24394*t23646;
  t28253 = t24416*t24684*t26611*t24421;
  t28254 = 3.e-6*t24416*t24405*t24685;
  t28255 = t28249 + t28253 + t28254;
  t27663 = -1.8e-11*t26538;
  t27666 = 1. + t27663;
  t28267 = -1.*t24416*t27316*t24405;
  t28268 = t24416*t24684*t24394*t24685;
  t28269 = 3.e-6*t24416*t24684*t24421*t24685;
  t28270 = t28267 + t28268 + t28269;
  t28153 = 0.1000000000009*t26538;
  t28163 = -9.e-7*t27184;
  t28164 = t26542 + t26543;
  t28165 = 0.2*t28164;
  t28167 = t25911 + t28153 + t28163 + t28165;
  t28177 = t27436 + t26543;
  t28390 = t24416*t24394*t24405;
  t28391 = -1.*t24404*t24421;
  t28392 = t28390 + t28391;
  t28395 = t24394*t24404;
  t28396 = t24416*t24405*t24421;
  t28397 = t28395 + t28396;
  t28399 = 3.e-6*t23646*t28392;
  t28403 = t21445*t28397;
  t28436 = t28399 + t28403;
  t28439 = t26611*t28392;
  t28440 = 3.e-6*t23646*t28397;
  t28474 = t28439 + t28440;
  t28488 = 3.e-6*t28392*t24685;
  t28558 = -1.*t28397*t24685;
  t28559 = t28488 + t28558;
  t29244 = -1.*t24416*t24394*t24405;
  t29245 = t24404*t24421;
  t29250 = t29244 + t29245;
  t29327 = -3.e-6*t24416*t24684*t21445;
  t29328 = 3.e-6*t29250*t24685;
  t29329 = -9.e-12*t28397*t24685;
  t29331 = t29327 + t29328 + t29329;
  t29320 = t24416*t24684*t21445;
  t29321 = -1.*t29250*t24685;
  t29323 = 3.e-6*t28397*t24685;
  t29324 = t29320 + t29321 + t29323;
  t29354 = -1.*t21445*t29250;
  t29358 = 3.e-6*t21445*t28397;
  t29361 = -1.000000000009*t24416*t24684*t24685;
  t29362 = t29354 + t29358 + t29361;
  t29536 = -3.e-6*t26536;
  t29547 = t29536 + t27183;
  t29557 = 3.e-6*t26536;
  t29558 = t29557 + t27183;
  t29569 = -9.e-12*t26543;
  t29623 = t21445*t29250;
  t29624 = t24416*t24684*t24685;
  t29625 = t29623 + t28440 + t29624;
  t29566 = t24416*t24684*t27316;
  t29567 = t29566 + t29321 + t29323;
  t29532 = 3.e-6*t23646*t29250;
  t29533 = t26611*t28397;
  t29534 = -3.e-6*t24416*t24684*t24685;
  t29535 = t29532 + t29533 + t29534;
  t29655 = t29557 + t26551;
  t29661 = 9.e-12*t26543;
  t29653 = t29536 + t26551;
  p_output1[0]=1.;
  p_output1[1]=0.2000000000018*t23646*t24458 - 6.000000000054e-7*t23646*t24595 + 0.2000000000018*t24404*t24684*t24685 + t25697*t26558 + t26832*t27187 + 0.2*(t25697*t27310 + t27432*t27437 + t26832*t27615) + 0.100001*(t27432*t27615 + t26832*t27666 + t25697*t27895) + t27432*t28167 - 0.3*(t27310*t27432 + t26832*t27895 + t25697*t28177);
  p_output1[2]=-0.2000000000018*t23646*t24394*t24416*t24684 - 6.000000000054e-7*t23646*t24416*t24421*t24684 + 0.2000000000018*t24405*t24416*t24685 + t26558*t28227 + t27187*t28255 + t28167*t28270 - 0.3*(t28177*t28227 + t27895*t28255 + t27310*t28270) + 0.2*(t27310*t28227 + t27615*t28255 + t27437*t28270) + 0.100001*(t27895*t28227 + t27666*t28255 + t27615*t28270);
  p_output1[3]=-6.000000000054e-7*t23646*t28392 + 0.2000000000018*t23646*t28397 + t26558*t28436 + t27187*t28474 + t28167*t28559 - 0.3*(t28177*t28436 + t27895*t28474 + t27310*t28559) + 0.2*(t27310*t28436 + t27615*t28474 + t27437*t28559) + 0.100001*(t27895*t28436 + t27666*t28474 + t27615*t28559);
  p_output1[4]=-0.2000000000018*t21445*t24416*t24684 - 6.000000000054e-7*t24685*t28397 + 0.2000000000018*t24685*t29250 + t26558*t29324 + t27187*t29331 + t28167*t29362 - 0.3*(t28177*t29324 + t27895*t29331 + t27310*t29362) + 0.2*(t27310*t29324 + t27615*t29331 + t27437*t29362) + 0.100001*(t27895*t29324 + t27666*t29331 + t27615*t29362);
  p_output1[5]=t29535*(3.e-7 - 1.62e-17*t26543 + 0.2*t29547 + 0.1*t29558) + t29567*(9.e-13 + 0.1000000000009*t26543 - 9.e-7*t29547 + 0.2*(t26536 + t29569)) + (9.e-13 + 0.2000000000018*t26543 - 9.e-7*t29558 + 0.1*(t26537 + t29569))*t29625 + 0.100001*(-1.8e-11*t26543*t29535 + t29625*t29653 + t29567*t29655) - 0.3*(-1.000000000009*t26543*t29567 + t29535*t29653 + t29625*(t26536 + t29661)) + 0.2*(-1.000000000009*t26543*t29625 + t29535*t29655 + t29567*(t26537 + t29661));
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
