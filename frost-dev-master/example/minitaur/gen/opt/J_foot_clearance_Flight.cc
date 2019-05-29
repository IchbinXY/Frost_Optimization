/*
 * Automatically Generated from Mathematica.
 * Tue 28 May 2019 22:49:14 GMT-04:00
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
  double t880;
  double t714;
  double t1470;
  double t1584;
  double t3725;
  double t3612;
  double t3693;
  double t3762;
  double t4053;
  double t4088;
  double t4113;
  double t4209;
  double t4271;
  double t632;
  double t685;
  double t3707;
  double t3780;
  double t3811;
  double t3906;
  double t3933;
  double t3936;
  double t4301;
  double t4302;
  double t4327;
  double t4284;
  double t4296;
  double t4331;
  double t4313;
  double t4314;
  double t4316;
  double t4317;
  double t4319;
  double t4322;
  double t4345;
  double t4346;
  double t4347;
  double t4348;
  double t4364;
  double t4366;
  double t4368;
  double t4370;
  double t4373;
  double t4374;
  double t4384;
  double t4397;
  double t4398;
  double t4392;
  double t4333;
  double t4388;
  double t4407;
  double t1631;
  double t1734;
  double t3518;
  double t3561;
  double t4003;
  double t4131;
  double t4299;
  double t4307;
  double t4310;
  double t4328;
  double t4335;
  double t4337;
  double t4341;
  double t4342;
  double t4353;
  double t4354;
  double t4355;
  double t4356;
  double t4358;
  double t4440;
  double t4467;
  double t4468;
  double t4474;
  double t4393;
  double t4491;
  double t4494;
  double t4513;
  double t4533;
  double t4551;
  double t4583;
  double t4584;
  double t4588;
  double t4412;
  double t4417;
  double t4419;
  double t4731;
  double t4732;
  double t4733;
  double t4735;
  double t4736;
  double t4738;
  double t4740;
  double t4741;
  double t4744;
  double t4752;
  double t4755;
  double t4757;
  double t4768;
  double t4769;
  double t4770;
  double t4858;
  double t4859;
  double t4860;
  double t4869;
  double t4870;
  double t4872;
  double t4873;
  double t4877;
  double t4879;
  double t4880;
  double t4882;
  double t4886;
  double t4889;
  double t4890;
  double t4893;
  double t4945;
  double t4946;
  double t4934;
  double t4935;
  double t5106;
  double t5008;
  double t5065;
  double t5075;
  double t5090;
  double t5120;
  double t5127;
  double t5128;
  double t5151;
  double t5152;
  double t5157;
  double t5227;
  double t5184;
  t880 = Cos(var1[10]);
  t714 = Sin(var1[3]);
  t1470 = -1.*t880;
  t1584 = 1. + t1470;
  t3725 = Cos(var1[3]);
  t3612 = Cos(var1[5]);
  t3693 = Sin(var1[4]);
  t3762 = Sin(var1[5]);
  t4053 = Cos(var1[12]);
  t4088 = -1.*t4053;
  t4113 = 1. + t4088;
  t4209 = -3.e-6*t4113;
  t4271 = Sin(var1[12]);
  t632 = Cos(var1[4]);
  t685 = Sin(var1[10]);
  t3707 = t3612*t714*t3693;
  t3780 = t3725*t3762;
  t3811 = t3707 + t3780;
  t3906 = t3725*t3612;
  t3933 = -1.*t714*t3693*t3762;
  t3936 = t3906 + t3933;
  t4301 = 3.e-6*t4271;
  t4302 = t4209 + t4301;
  t4327 = 3.e-13*var1[12];
  t4284 = -3.e-6*t4271;
  t4296 = t4209 + t4284;
  t4331 = -9.e-12*t4113;
  t4313 = 3.e-6*t632*t685*t714;
  t4314 = 3.e-6*t1584*t3811;
  t4316 = -9.e-12*t1584;
  t4317 = 1. + t4316;
  t4319 = t4317*t3936;
  t4322 = t4313 + t4314 + t4319;
  t4345 = -1.*t632*t685*t714;
  t4346 = t880*t3811;
  t4347 = 3.e-6*t1584*t3936;
  t4348 = t4345 + t4346 + t4347;
  t4364 = -1.000000000009*t1584;
  t4366 = 1. + t4364;
  t4368 = -1.*t4366*t632*t714;
  t4370 = -1.*t685*t3811;
  t4373 = 3.e-6*t685*t3936;
  t4374 = t4368 + t4370 + t4373;
  t4384 = 3.e-6*t4113;
  t4397 = -1.000000000009*t4113;
  t4398 = 1. + t4397;
  t4392 = 9.e-12*t4113;
  t4333 = -1.*t4271;
  t4388 = t4384 + t4284;
  t4407 = t4384 + t4301;
  t1631 = -1.8e-12*t1584;
  t1734 = -1. + t880;
  t3518 = 0.2*t1734;
  t3561 = t1631 + t3518;
  t4003 = 1.e-7*var1[12];
  t4131 = 5.4e-18*t4113;
  t4299 = -0.200000000003*t4296;
  t4307 = 0.100000000003*t4302;
  t4310 = t4003 + t4131 + t4299 + t4307;
  t4328 = -0.2000000000048*t4113;
  t4335 = t4331 + t4333;
  t4337 = 0.100000000003*t4335;
  t4341 = 3.e-7*t4302;
  t4342 = t4327 + t4328 + t4337 + t4341;
  t4353 = 0.1000000000039*t4113;
  t4354 = 3.e-7*t4296;
  t4355 = t4331 + t4271;
  t4356 = -0.200000000003*t4355;
  t4358 = t4327 + t4353 + t4354 + t4356;
  t4440 = -3.e-6*t1584*t3725*t632*t3612;
  t4467 = 3.e-6*t3725*t685*t3693;
  t4468 = t4317*t3725*t632*t3762;
  t4474 = t4440 + t4467 + t4468;
  t4393 = t4392 + t4271;
  t4491 = -1.*t880*t3725*t632*t3612;
  t4494 = -1.*t3725*t685*t3693;
  t4513 = 3.e-6*t1584*t3725*t632*t3762;
  t4533 = t4491 + t4494 + t4513;
  t4551 = t3725*t632*t3612*t685;
  t4583 = -1.*t4366*t3725*t3693;
  t4584 = 3.e-6*t3725*t632*t685*t3762;
  t4588 = t4551 + t4583 + t4584;
  t4412 = t4392 + t4333;
  t4417 = -1.8e-11*t4113;
  t4419 = 1. + t4417;
  t4731 = t3725*t3612*t3693;
  t4732 = -1.*t714*t3762;
  t4733 = t4731 + t4732;
  t4735 = t3612*t714;
  t4736 = t3725*t3693*t3762;
  t4738 = t4735 + t4736;
  t4740 = t4317*t4733;
  t4741 = 3.e-6*t1584*t4738;
  t4744 = t4740 + t4741;
  t4752 = 3.e-6*t1584*t4733;
  t4755 = t880*t4738;
  t4757 = t4752 + t4755;
  t4768 = 3.e-6*t685*t4733;
  t4769 = -1.*t685*t4738;
  t4770 = t4768 + t4769;
  t4858 = -1.*t3725*t3612*t3693;
  t4859 = t714*t3762;
  t4860 = t4858 + t4859;
  t4869 = -1.000000000009*t3725*t632*t685;
  t4870 = -1.*t880*t4860;
  t4872 = 3.e-6*t880*t4738;
  t4873 = t4869 + t4870 + t4872;
  t4877 = -3.e-6*t880*t3725*t632;
  t4879 = 3.e-6*t685*t4860;
  t4880 = -9.e-12*t685*t4738;
  t4882 = t4877 + t4879 + t4880;
  t4886 = t880*t3725*t632;
  t4889 = -1.*t685*t4860;
  t4890 = 3.e-6*t685*t4738;
  t4893 = t4886 + t4889 + t4890;
  t4945 = 3.e-6*t4053;
  t4946 = t4945 + t4284;
  t4934 = -3.e-6*t4053;
  t4935 = t4934 + t4284;
  t5106 = -9.e-12*t4271;
  t5008 = -3.e-6*t3725*t632*t685;
  t5065 = 3.e-6*t1584*t4860;
  t5075 = t4317*t4738;
  t5090 = t5008 + t5065 + t5075;
  t5120 = t3725*t632*t685;
  t5127 = t880*t4860;
  t5128 = t5120 + t5127 + t4741;
  t5151 = t4366*t3725*t632;
  t5152 = t5151 + t4889 + t4890;
  t5157 = t4945 + t4301;
  t5227 = t4934 + t4301;
  t5184 = 9.e-12*t4271;
  p_output1[0]=1.;
  p_output1[1]=t3561*t3811 + 6.000000000054e-7*t1584*t3936 + t4310*t4322 + t4342*t4348 + t4358*t4374 - 0.3*(t4322*t4388 + t4348*t4393 + t4374*t4398) + 0.2*(-1.*t4348*t4398 - 1.*t4322*t4407 - 1.*t4374*t4412) + 0.100001*(t4348*t4388 + t4374*t4407 + t4322*t4419) - 0.2000000000018*t632*t685*t714;
  p_output1[2]=t4310*t4474 + t4342*t4533 + t4358*t4588 - 0.3*(t4388*t4474 + t4393*t4533 + t4398*t4588) + 0.100001*(t4419*t4474 + t4388*t4533 + t4407*t4588) + 0.2*(-1.*t4407*t4474 - 1.*t4398*t4533 - 1.*t4412*t4588) - 1.*t3561*t3612*t3725*t632 + 6.000000000054e-7*t1584*t3725*t3762*t632 - 0.2000000000018*t3693*t3725*t685;
  p_output1[3]=6.000000000054e-7*t1584*t4733 + t3561*t4738 + t4310*t4744 + t4342*t4757 + t4358*t4770 - 0.3*(t4388*t4744 + t4393*t4757 + t4398*t4770) + 0.100001*(t4419*t4744 + t4388*t4757 + t4407*t4770) + 0.2*(-1.*t4407*t4744 - 1.*t4398*t4757 - 1.*t4412*t4770);
  p_output1[4]=t4358*t4873 + t4310*t4882 + t4342*t4893 + 0.100001*(t4407*t4873 + t4419*t4882 + t4388*t4893) - 0.3*(t4398*t4873 + t4388*t4882 + t4393*t4893) + 0.2*(-1.*t4412*t4873 - 1.*t4407*t4882 - 1.*t4398*t4893) + 6.000000000054e-7*t4738*t685 - 0.2000000000018*t4860*t685 + 0.2000000000018*t3725*t632*t880;
  p_output1[5]=(1.e-7 + 5.4e-18*t4271 - 0.200000000003*t4935 + 0.100000000003*t4946)*t5090 + (3.e-13 - 0.2000000000048*t4271 + 3.e-7*t4946 + 0.100000000003*(t4088 + t5106))*t5128 + (3.e-13 + 0.1000000000039*t4271 + 3.e-7*t4935 - 0.200000000003*(t4053 + t5106))*t5152 + 0.2*(1.000000000009*t4271*t5128 - 1.*t5090*t5157 - 1.*t5152*(t4088 + t5184)) - 0.3*(-1.000000000009*t4271*t5152 + t5128*(t4053 + t5184) + t5090*t5227) + 0.100001*(-1.8e-11*t4271*t5090 + t5152*t5157 + t5128*t5227);
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
