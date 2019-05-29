/*
 * Automatically Generated from Mathematica.
 * Tue 28 May 2019 23:03:43 GMT-04:00
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
  double t3456;
  double t3550;
  double t3563;
  double t3577;
  double t3820;
  double t3579;
  double t3591;
  double t3821;
  double t4216;
  double t4284;
  double t4300;
  double t4327;
  double t4335;
  double t1881;
  double t3362;
  double t3600;
  double t3876;
  double t3886;
  double t3990;
  double t4003;
  double t4041;
  double t4370;
  double t4373;
  double t4504;
  double t4337;
  double t4355;
  double t4533;
  double t4384;
  double t4386;
  double t4392;
  double t4489;
  double t4491;
  double t4494;
  double t4735;
  double t4740;
  double t4744;
  double t4749;
  double t4850;
  double t4858;
  double t4859;
  double t4869;
  double t4870;
  double t4872;
  double t4877;
  double t4890;
  double t4893;
  double t4882;
  double t4551;
  double t4879;
  double t4968;
  double t4209;
  double t4302;
  double t4364;
  double t4375;
  double t4381;
  double t4513;
  double t4583;
  double t4609;
  double t4624;
  double t4679;
  double t4761;
  double t4763;
  double t4768;
  double t4769;
  double t4815;
  double t5179;
  double t5181;
  double t5184;
  double t5192;
  double t4886;
  double t5217;
  double t5227;
  double t5310;
  double t5325;
  double t5386;
  double t5464;
  double t5494;
  double t5563;
  double t5075;
  double t5127;
  double t5128;
  double t6728;
  double t6734;
  double t6735;
  double t6742;
  double t6747;
  double t6749;
  double t6797;
  double t6798;
  double t6806;
  double t6815;
  double t6816;
  double t6825;
  double t6830;
  double t6836;
  double t6852;
  double t7384;
  double t7387;
  double t7395;
  double t7832;
  double t8006;
  double t8008;
  double t8705;
  double t8767;
  double t8768;
  double t8771;
  double t8787;
  double t8933;
  double t9021;
  double t9505;
  double t9531;
  double t11061;
  double t11126;
  double t11056;
  double t11058;
  double t12095;
  double t11152;
  double t11155;
  double t11156;
  double t11158;
  double t12104;
  double t12109;
  double t12123;
  double t12162;
  double t12171;
  double t12174;
  double t12188;
  double t12179;
  t3456 = Sin(var1[3]);
  t3550 = Cos(var1[15]);
  t3563 = -1.*t3550;
  t3577 = 1. + t3563;
  t3820 = Cos(var1[3]);
  t3579 = Cos(var1[5]);
  t3591 = Sin(var1[4]);
  t3821 = Sin(var1[5]);
  t4216 = Cos(var1[17]);
  t4284 = -1.*t4216;
  t4300 = 1. + t4284;
  t4327 = -3.e-6*t4300;
  t4335 = Sin(var1[17]);
  t1881 = Cos(var1[4]);
  t3362 = Sin(var1[15]);
  t3600 = t3579*t3456*t3591;
  t3876 = t3820*t3821;
  t3886 = t3600 + t3876;
  t3990 = t3820*t3579;
  t4003 = -1.*t3456*t3591*t3821;
  t4041 = t3990 + t4003;
  t4370 = 3.e-6*t4335;
  t4373 = t4327 + t4370;
  t4504 = 9.e-13*var1[17];
  t4337 = -3.e-6*t4335;
  t4355 = t4327 + t4337;
  t4533 = -9.e-12*t4300;
  t4384 = 3.e-6*t1881*t3362*t3456;
  t4386 = 3.e-6*t3577*t3886;
  t4392 = -9.e-12*t3577;
  t4489 = 1. + t4392;
  t4491 = t4489*t4041;
  t4494 = t4384 + t4386 + t4491;
  t4735 = -1.*t1881*t3362*t3456;
  t4740 = t3550*t3886;
  t4744 = 3.e-6*t3577*t4041;
  t4749 = t4735 + t4740 + t4744;
  t4850 = -1.000000000009*t3577;
  t4858 = 1. + t4850;
  t4859 = -1.*t4858*t1881*t3456;
  t4869 = -1.*t3362*t3886;
  t4870 = 3.e-6*t3362*t4041;
  t4872 = t4859 + t4869 + t4870;
  t4877 = 3.e-6*t4300;
  t4890 = -1.000000000009*t4300;
  t4893 = 1. + t4890;
  t4882 = 9.e-12*t4300;
  t4551 = -1.*t4335;
  t4879 = t4877 + t4337;
  t4968 = t4877 + t4370;
  t4209 = 3.e-7*var1[17];
  t4302 = -1.62e-17*t4300;
  t4364 = 0.2*t4355;
  t4375 = 0.1*t4373;
  t4381 = t4209 + t4302 + t4364 + t4375;
  t4513 = 0.2000000000018*t4300;
  t4583 = t4533 + t4551;
  t4609 = 0.1*t4583;
  t4624 = -9.e-7*t4373;
  t4679 = t4504 + t4513 + t4609 + t4624;
  t4761 = 0.1000000000009*t4300;
  t4763 = -9.e-7*t4355;
  t4768 = t4533 + t4335;
  t4769 = 0.2*t4768;
  t4815 = t4504 + t4761 + t4763 + t4769;
  t5179 = -3.e-6*t3577*t3820*t1881*t3579;
  t5181 = 3.e-6*t3820*t3362*t3591;
  t5184 = t4489*t3820*t1881*t3821;
  t5192 = t5179 + t5181 + t5184;
  t4886 = t4882 + t4335;
  t5217 = -1.*t3550*t3820*t1881*t3579;
  t5227 = -1.*t3820*t3362*t3591;
  t5310 = 3.e-6*t3577*t3820*t1881*t3821;
  t5325 = t5217 + t5227 + t5310;
  t5386 = t3820*t1881*t3579*t3362;
  t5464 = -1.*t4858*t3820*t3591;
  t5494 = 3.e-6*t3820*t1881*t3362*t3821;
  t5563 = t5386 + t5464 + t5494;
  t5075 = t4882 + t4551;
  t5127 = -1.8e-11*t4300;
  t5128 = 1. + t5127;
  t6728 = t3820*t3579*t3591;
  t6734 = -1.*t3456*t3821;
  t6735 = t6728 + t6734;
  t6742 = t3579*t3456;
  t6747 = t3820*t3591*t3821;
  t6749 = t6742 + t6747;
  t6797 = t4489*t6735;
  t6798 = 3.e-6*t3577*t6749;
  t6806 = t6797 + t6798;
  t6815 = 3.e-6*t3577*t6735;
  t6816 = t3550*t6749;
  t6825 = t6815 + t6816;
  t6830 = 3.e-6*t3362*t6735;
  t6836 = -1.*t3362*t6749;
  t6852 = t6830 + t6836;
  t7384 = -1.*t3820*t3579*t3591;
  t7387 = t3456*t3821;
  t7395 = t7384 + t7387;
  t7832 = -1.000000000009*t3820*t1881*t3362;
  t8006 = -1.*t3550*t7395;
  t8008 = 3.e-6*t3550*t6749;
  t8705 = t7832 + t8006 + t8008;
  t8767 = -3.e-6*t3550*t3820*t1881;
  t8768 = 3.e-6*t3362*t7395;
  t8771 = -9.e-12*t3362*t6749;
  t8787 = t8767 + t8768 + t8771;
  t8933 = t3550*t3820*t1881;
  t9021 = -1.*t3362*t7395;
  t9505 = 3.e-6*t3362*t6749;
  t9531 = t8933 + t9021 + t9505;
  t11061 = 3.e-6*t4216;
  t11126 = t11061 + t4337;
  t11056 = -3.e-6*t4216;
  t11058 = t11056 + t4337;
  t12095 = -9.e-12*t4335;
  t11152 = -3.e-6*t3820*t1881*t3362;
  t11155 = 3.e-6*t3577*t7395;
  t11156 = t4489*t6749;
  t11158 = t11152 + t11155 + t11156;
  t12104 = t3820*t1881*t3362;
  t12109 = t3550*t7395;
  t12123 = t12104 + t12109 + t6798;
  t12162 = t4858*t3820*t1881;
  t12171 = t12162 + t9021 + t9505;
  t12174 = t11061 + t4370;
  t12188 = t11056 + t4370;
  t12179 = 9.e-12*t4335;
  p_output1[0]=1.;
  p_output1[1]=0.2000000000018*t1881*t3362*t3456 + 0.2000000000018*t3577*t3886 - 6.000000000054e-7*t3577*t4041 + t4381*t4494 + t4679*t4749 + t4815*t4872 - 0.3*(t4494*t4879 + t4749*t4886 + t4872*t4893) + 0.2*(t4749*t4893 + t4494*t4968 + t4872*t5075) - 0.099999*(t4749*t4879 + t4872*t4968 + t4494*t5128);
  p_output1[2]=-0.2000000000018*t1881*t3577*t3579*t3820 + 0.2000000000018*t3362*t3591*t3820 - 6.000000000054e-7*t1881*t3577*t3820*t3821 + t4381*t5192 + t4679*t5325 + t4815*t5563 - 0.3*(t4879*t5192 + t4886*t5325 + t4893*t5563) - 0.099999*(t5128*t5192 + t4879*t5325 + t4968*t5563) + 0.2*(t4968*t5192 + t4893*t5325 + t5075*t5563);
  p_output1[3]=-6.000000000054e-7*t3577*t6735 + 0.2000000000018*t3577*t6749 + t4381*t6806 + t4679*t6825 + t4815*t6852 - 0.3*(t4879*t6806 + t4886*t6825 + t4893*t6852) - 0.099999*(t5128*t6806 + t4879*t6825 + t4968*t6852) + 0.2*(t4968*t6806 + t4893*t6825 + t5075*t6852);
  p_output1[4]=-0.2000000000018*t1881*t3550*t3820 - 6.000000000054e-7*t3362*t6749 + 0.2000000000018*t3362*t7395 + t4815*t8705 + t4381*t8787 + t4679*t9531 - 0.099999*(t4968*t8705 + t5128*t8787 + t4879*t9531) - 0.3*(t4893*t8705 + t4879*t8787 + t4886*t9531) + 0.2*(t5075*t8705 + t4968*t8787 + t4893*t9531);
  p_output1[5]=t11158*(3.e-7 + 0.2*t11058 + 0.1*t11126 - 1.62e-17*t4335) + t12171*(9.e-13 - 9.e-7*t11058 + 0.2*(t12095 + t4216) + 0.1000000000009*t4335) + t12123*(9.e-13 - 9.e-7*t11126 + 0.1*(t12095 + t4284) + 0.2000000000018*t4335) - 0.099999*(t12171*t12174 + t12123*t12188 - 1.8e-11*t11158*t4335) + 0.2*(t11158*t12174 + t12171*(t12179 + t4284) - 1.000000000009*t12123*t4335) - 0.3*(t11158*t12188 + t12123*(t12179 + t4216) - 1.000000000009*t12171*t4335);
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
