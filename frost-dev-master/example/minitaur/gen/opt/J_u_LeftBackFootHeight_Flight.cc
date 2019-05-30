/*
 * Automatically Generated from Mathematica.
 * Wed 29 May 2019 23:53:12 GMT-04:00
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
  double t14442;
  double t12819;
  double t15129;
  double t15153;
  double t15902;
  double t15315;
  double t15348;
  double t15903;
  double t17182;
  double t17228;
  double t17230;
  double t17433;
  double t17729;
  double t3803;
  double t4148;
  double t15877;
  double t15933;
  double t15938;
  double t16037;
  double t16112;
  double t16189;
  double t19754;
  double t19830;
  double t19923;
  double t18583;
  double t19521;
  double t20053;
  double t19837;
  double t19838;
  double t19849;
  double t19868;
  double t19875;
  double t19914;
  double t20737;
  double t20744;
  double t20764;
  double t20765;
  double t20929;
  double t20975;
  double t20978;
  double t20981;
  double t21016;
  double t21021;
  double t21081;
  double t21321;
  double t21397;
  double t21206;
  double t20194;
  double t21166;
  double t22623;
  double t15175;
  double t15182;
  double t15295;
  double t15311;
  double t17178;
  double t17232;
  double t19722;
  double t19832;
  double t19835;
  double t19927;
  double t20243;
  double t20380;
  double t20479;
  double t20668;
  double t20811;
  double t20821;
  double t20827;
  double t20837;
  double t20850;
  double t24410;
  double t24532;
  double t24568;
  double t24633;
  double t21208;
  double t24719;
  double t24790;
  double t24799;
  double t24817;
  double t24856;
  double t24924;
  double t25018;
  double t25236;
  double t23836;
  double t24143;
  double t24229;
  double t26290;
  double t26293;
  double t26294;
  double t26297;
  double t26300;
  double t26301;
  double t26321;
  double t26322;
  double t26323;
  double t26342;
  double t26356;
  double t26358;
  double t26376;
  double t26388;
  double t26390;
  double t26643;
  double t26650;
  double t26651;
  double t26693;
  double t26701;
  double t26715;
  double t26717;
  double t26724;
  double t26726;
  double t26728;
  double t26779;
  double t26910;
  double t26911;
  double t26922;
  double t26926;
  double t27399;
  double t27403;
  double t27396;
  double t27397;
  double t27463;
  double t27426;
  double t27427;
  double t27434;
  double t27457;
  double t27581;
  double t27586;
  double t27589;
  double t27634;
  double t27641;
  double t27666;
  double t27829;
  double t27771;
  t14442 = Cos(var1[10]);
  t12819 = Sin(var1[3]);
  t15129 = -1.*t14442;
  t15153 = 1. + t15129;
  t15902 = Cos(var1[3]);
  t15315 = Cos(var1[5]);
  t15348 = Sin(var1[4]);
  t15903 = Sin(var1[5]);
  t17182 = Cos(var1[12]);
  t17228 = -1.*t17182;
  t17230 = 1. + t17228;
  t17433 = -3.e-6*t17230;
  t17729 = Sin(var1[12]);
  t3803 = Cos(var1[4]);
  t4148 = Sin(var1[10]);
  t15877 = t15315*t12819*t15348;
  t15933 = t15902*t15903;
  t15938 = t15877 + t15933;
  t16037 = t15902*t15315;
  t16112 = -1.*t12819*t15348*t15903;
  t16189 = t16037 + t16112;
  t19754 = 3.e-6*t17729;
  t19830 = t17433 + t19754;
  t19923 = 3.e-13*var1[12];
  t18583 = -3.e-6*t17729;
  t19521 = t17433 + t18583;
  t20053 = -9.e-12*t17230;
  t19837 = 3.e-6*t3803*t4148*t12819;
  t19838 = 3.e-6*t15153*t15938;
  t19849 = -9.e-12*t15153;
  t19868 = 1. + t19849;
  t19875 = t19868*t16189;
  t19914 = t19837 + t19838 + t19875;
  t20737 = -1.*t3803*t4148*t12819;
  t20744 = t14442*t15938;
  t20764 = 3.e-6*t15153*t16189;
  t20765 = t20737 + t20744 + t20764;
  t20929 = -1.000000000009*t15153;
  t20975 = 1. + t20929;
  t20978 = -1.*t20975*t3803*t12819;
  t20981 = -1.*t4148*t15938;
  t21016 = 3.e-6*t4148*t16189;
  t21021 = t20978 + t20981 + t21016;
  t21081 = 3.e-6*t17230;
  t21321 = -1.000000000009*t17230;
  t21397 = 1. + t21321;
  t21206 = 9.e-12*t17230;
  t20194 = -1.*t17729;
  t21166 = t21081 + t18583;
  t22623 = t21081 + t19754;
  t15175 = -1.8e-12*t15153;
  t15182 = -1. + t14442;
  t15295 = 0.2*t15182;
  t15311 = t15175 + t15295;
  t17178 = 1.e-7*var1[12];
  t17232 = 5.4e-18*t17230;
  t19722 = -0.200000000003*t19521;
  t19832 = 0.100000000003*t19830;
  t19835 = t17178 + t17232 + t19722 + t19832;
  t19927 = -0.2000000000048*t17230;
  t20243 = t20053 + t20194;
  t20380 = 0.100000000003*t20243;
  t20479 = 3.e-7*t19830;
  t20668 = t19923 + t19927 + t20380 + t20479;
  t20811 = 0.1000000000039*t17230;
  t20821 = 3.e-7*t19521;
  t20827 = t20053 + t17729;
  t20837 = -0.200000000003*t20827;
  t20850 = t19923 + t20811 + t20821 + t20837;
  t24410 = -3.e-6*t15153*t15902*t3803*t15315;
  t24532 = 3.e-6*t15902*t4148*t15348;
  t24568 = t19868*t15902*t3803*t15903;
  t24633 = t24410 + t24532 + t24568;
  t21208 = t21206 + t17729;
  t24719 = -1.*t14442*t15902*t3803*t15315;
  t24790 = -1.*t15902*t4148*t15348;
  t24799 = 3.e-6*t15153*t15902*t3803*t15903;
  t24817 = t24719 + t24790 + t24799;
  t24856 = t15902*t3803*t15315*t4148;
  t24924 = -1.*t20975*t15902*t15348;
  t25018 = 3.e-6*t15902*t3803*t4148*t15903;
  t25236 = t24856 + t24924 + t25018;
  t23836 = t21206 + t20194;
  t24143 = -1.8e-11*t17230;
  t24229 = 1. + t24143;
  t26290 = t15902*t15315*t15348;
  t26293 = -1.*t12819*t15903;
  t26294 = t26290 + t26293;
  t26297 = t15315*t12819;
  t26300 = t15902*t15348*t15903;
  t26301 = t26297 + t26300;
  t26321 = t19868*t26294;
  t26322 = 3.e-6*t15153*t26301;
  t26323 = t26321 + t26322;
  t26342 = 3.e-6*t15153*t26294;
  t26356 = t14442*t26301;
  t26358 = t26342 + t26356;
  t26376 = 3.e-6*t4148*t26294;
  t26388 = -1.*t4148*t26301;
  t26390 = t26376 + t26388;
  t26643 = -1.*t15902*t15315*t15348;
  t26650 = t12819*t15903;
  t26651 = t26643 + t26650;
  t26693 = -1.000000000009*t15902*t3803*t4148;
  t26701 = -1.*t14442*t26651;
  t26715 = 3.e-6*t14442*t26301;
  t26717 = t26693 + t26701 + t26715;
  t26724 = -3.e-6*t14442*t15902*t3803;
  t26726 = 3.e-6*t4148*t26651;
  t26728 = -9.e-12*t4148*t26301;
  t26779 = t26724 + t26726 + t26728;
  t26910 = t14442*t15902*t3803;
  t26911 = -1.*t4148*t26651;
  t26922 = 3.e-6*t4148*t26301;
  t26926 = t26910 + t26911 + t26922;
  t27399 = 3.e-6*t17182;
  t27403 = t27399 + t18583;
  t27396 = -3.e-6*t17182;
  t27397 = t27396 + t18583;
  t27463 = -9.e-12*t17729;
  t27426 = -3.e-6*t15902*t3803*t4148;
  t27427 = 3.e-6*t15153*t26651;
  t27434 = t19868*t26301;
  t27457 = t27426 + t27427 + t27434;
  t27581 = t15902*t3803*t4148;
  t27586 = t14442*t26651;
  t27589 = t27581 + t27586 + t26322;
  t27634 = t20975*t15902*t3803;
  t27641 = t27634 + t26911 + t26922;
  t27666 = t27399 + t19754;
  t27829 = t27396 + t19754;
  t27771 = 9.e-12*t17729;
  p_output1[0]=1.;
  p_output1[1]=t15311*t15938 + 6.000000000054e-7*t15153*t16189 + t19835*t19914 + t20668*t20765 + t20850*t21021 - 0.3*(t19914*t21166 + t20765*t21208 + t21021*t21397) + 0.2*(-1.*t20765*t21397 - 1.*t19914*t22623 - 1.*t21021*t23836) + 0.100001*(t20765*t21166 + t21021*t22623 + t19914*t24229) - 0.2000000000018*t12819*t3803*t4148;
  p_output1[2]=t19835*t24633 + t20668*t24817 + t20850*t25236 - 0.3*(t21166*t24633 + t21208*t24817 + t21397*t25236) + 0.100001*(t24229*t24633 + t21166*t24817 + t22623*t25236) + 0.2*(-1.*t22623*t24633 - 1.*t21397*t24817 - 1.*t23836*t25236) - 1.*t15311*t15315*t15902*t3803 + 6.000000000054e-7*t15153*t15902*t15903*t3803 - 0.2000000000018*t15348*t15902*t4148;
  p_output1[3]=6.000000000054e-7*t15153*t26294 + t15311*t26301 + t19835*t26323 + t20668*t26358 + t20850*t26390 - 0.3*(t21166*t26323 + t21208*t26358 + t21397*t26390) + 0.100001*(t24229*t26323 + t21166*t26358 + t22623*t26390) + 0.2*(-1.*t22623*t26323 - 1.*t21397*t26358 - 1.*t23836*t26390);
  p_output1[4]=t20850*t26717 + t19835*t26779 + t20668*t26926 + 0.100001*(t22623*t26717 + t24229*t26779 + t21166*t26926) - 0.3*(t21397*t26717 + t21166*t26779 + t21208*t26926) + 0.2*(-1.*t23836*t26717 - 1.*t22623*t26779 - 1.*t21397*t26926) + 0.2000000000018*t14442*t15902*t3803 + 6.000000000054e-7*t26301*t4148 - 0.2000000000018*t26651*t4148;
  p_output1[5]=(1.e-7 + 5.4e-18*t17729 - 0.200000000003*t27397 + 0.100000000003*t27403)*t27457 + (3.e-13 - 0.2000000000048*t17729 + 3.e-7*t27403 + 0.100000000003*(t17228 + t27463))*t27589 + (3.e-13 + 0.1000000000039*t17729 + 3.e-7*t27397 - 0.200000000003*(t17182 + t27463))*t27641 + 0.2*(1.000000000009*t17729*t27589 - 1.*t27457*t27666 - 1.*t27641*(t17228 + t27771)) - 0.3*(-1.000000000009*t17729*t27641 + t27589*(t17182 + t27771) + t27457*t27829) + 0.100001*(-1.8e-11*t17729*t27457 + t27641*t27666 + t27589*t27829);
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
