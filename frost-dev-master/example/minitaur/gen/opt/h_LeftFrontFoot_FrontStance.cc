/*
 * Automatically Generated from Mathematica.
 * Wed 29 May 2019 23:45:24 GMT-04:00
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
static void output1(double *p_output1,const double *var1,const double *var2)
{
  double t1450;
  double t1611;
  double t1672;
  double t1762;
  double t1490;
  double t1869;
  double t2164;
  double t11609;
  double t17706;
  double t17713;
  double t17721;
  double t17833;
  double t19624;
  double t20191;
  double t20303;
  double t14678;
  double t15589;
  double t15666;
  double t16319;
  double t17855;
  double t20488;
  double t20546;
  double t20651;
  double t20845;
  double t21071;
  double t21092;
  double t24268;
  double t21996;
  double t22980;
  double t23489;
  double t23596;
  double t23616;
  double t23734;
  double t23895;
  double t24439;
  double t17692;
  double t22131;
  double t17812;
  double t22885;
  double t22950;
  double t24798;
  double t24029;
  double t28920;
  double t28873;
  double t28894;
  double t28956;
  double t28975;
  double t29017;
  double t29018;
  double t29025;
  double t17728;
  double t19566;
  double t19614;
  double t20325;
  double t20413;
  double t21165;
  double t21955;
  double t22260;
  double t22376;
  double t22635;
  double t29085;
  double t29135;
  double t29149;
  double t29155;
  double t24252;
  double t29460;
  double t29469;
  double t29473;
  double t29901;
  double t24562;
  double t24597;
  double t29998;
  double t30002;
  double t30059;
  double t30090;
  double t26879;
  double t26947;
  double t27000;
  double t27660;
  double t28020;
  double t28466;
  double t30595;
  double t30753;
  double t30762;
  double t30803;
  double t30806;
  double t30807;
  double t30820;
  double t30827;
  double t30830;
  double t30932;
  double t30988;
  double t30995;
  double t30997;
  double t31008;
  double t31029;
  double t31076;
  double t31118;
  double t31120;
  t1450 = Cos(var1[4]);
  t1611 = Cos(var1[6]);
  t1672 = -1.*t1611;
  t1762 = 1. + t1672;
  t1490 = Cos(var1[5]);
  t1869 = Sin(var1[5]);
  t2164 = Sin(var1[4]);
  t11609 = Sin(var1[6]);
  t17706 = Cos(var1[8]);
  t17713 = -1.*t17706;
  t17721 = 1. + t17713;
  t17833 = Sin(var1[8]);
  t19624 = -3.e-6*t17721;
  t20191 = 3.e-6*t17833;
  t20303 = t19624 + t20191;
  t14678 = t1450*t1490*t1611;
  t15589 = -3.e-6*t1450*t1762*t1869;
  t15666 = t2164*t11609;
  t16319 = t14678 + t15589 + t15666;
  t17855 = -1.*t17833;
  t20488 = 3.e-6*t1450*t1490*t1762;
  t20546 = -9.e-12*t1762;
  t20651 = 1. + t20546;
  t20845 = -1.*t1450*t20651*t1869;
  t21071 = -3.e-6*t2164*t11609;
  t21092 = t20488 + t20845 + t21071;
  t24268 = 3.e-6*t17721;
  t21996 = -3.e-6*t17833;
  t22980 = -1.000000000009*t1762;
  t23489 = 1. + t22980;
  t23596 = t23489*t2164;
  t23616 = -1.*t1450*t1490*t11609;
  t23734 = -3.e-6*t1450*t1869*t11609;
  t23895 = t23596 + t23616 + t23734;
  t24439 = t24268 + t20191;
  t17692 = 9.e-13*var1[8];
  t22131 = t19624 + t21996;
  t17812 = -9.e-12*t17721;
  t22885 = -1.000000000009*t17721;
  t22950 = 1. + t22885;
  t24798 = t24268 + t21996;
  t24029 = 9.e-12*t17721;
  t28920 = Cos(var1[3]);
  t28873 = Sin(var1[3]);
  t28894 = t1490*t28873*t2164;
  t28956 = t28920*t1869;
  t28975 = t28894 + t28956;
  t29017 = t28920*t1490;
  t29018 = -1.*t28873*t2164*t1869;
  t29025 = t29017 + t29018;
  t17728 = 0.2000000000018*t17721;
  t19566 = t17812 + t17855;
  t19614 = 0.1*t19566;
  t20325 = -9.e-7*t20303;
  t20413 = t17692 + t17728 + t19614 + t20325;
  t21165 = 3.e-7*var1[8];
  t21955 = -1.62e-17*t17721;
  t22260 = 0.2*t22131;
  t22376 = 0.1*t20303;
  t22635 = t21165 + t21955 + t22260 + t22376;
  t29085 = t1611*t28975;
  t29135 = 3.e-6*t1762*t29025;
  t29149 = -1.*t1450*t28873*t11609;
  t29155 = t29085 + t29135 + t29149;
  t24252 = t24029 + t17855;
  t29460 = 3.e-6*t1762*t28975;
  t29469 = t20651*t29025;
  t29473 = 3.e-6*t1450*t28873*t11609;
  t29901 = t29460 + t29469 + t29473;
  t24562 = -1.8e-11*t17721;
  t24597 = 1. + t24562;
  t29998 = -1.*t1450*t23489*t28873;
  t30002 = -1.*t28975*t11609;
  t30059 = 3.e-6*t29025*t11609;
  t30090 = t29998 + t30002 + t30059;
  t26879 = 0.1000000000009*t17721;
  t26947 = -9.e-7*t22131;
  t27000 = t17812 + t17833;
  t27660 = 0.2*t27000;
  t28020 = t17692 + t26879 + t26947 + t27660;
  t28466 = t24029 + t17833;
  t30595 = -1.*t28920*t1490*t2164;
  t30753 = t28873*t1869;
  t30762 = t30595 + t30753;
  t30803 = t1490*t28873;
  t30806 = t28920*t2164*t1869;
  t30807 = t30803 + t30806;
  t30820 = t1611*t30762;
  t30827 = 3.e-6*t1762*t30807;
  t30830 = t28920*t1450*t11609;
  t30932 = t30820 + t30827 + t30830;
  t30988 = 3.e-6*t1762*t30762;
  t30995 = t20651*t30807;
  t30997 = -3.e-6*t28920*t1450*t11609;
  t31008 = t30988 + t30995 + t30997;
  t31029 = t28920*t1450*t23489;
  t31076 = -1.*t30762*t11609;
  t31118 = 3.e-6*t30807*t11609;
  t31120 = t31029 + t31076 + t31118;
  p_output1[0]=0.2000000000018*t1450*t1490*t1762 + 6.000000000054e-7*t1450*t1762*t1869 + t16319*t20413 - 0.2000000000018*t11609*t2164 + t21092*t22635 + 0.2*(t16319*t22950 + t23895*t24252 + t21092*t24439) + 0.100001*(t23895*t24439 + t21092*t24597 + t16319*t24798) + t23895*t28020 - 0.3*(t22950*t23895 + t21092*t24798 + t16319*t28466) + var1[0] - 1.*var2[0];
  p_output1[1]=0.2000000000018*t11609*t1450*t28873 + 0.2000000000018*t1762*t28975 - 6.000000000054e-7*t1762*t29025 + t20413*t29155 + t22635*t29901 + t28020*t30090 - 0.3*(t28466*t29155 + t24798*t29901 + t22950*t30090) + 0.2*(t22950*t29155 + t24439*t29901 + t24252*t30090) + 0.100001*(t24798*t29155 + t24597*t29901 + t24439*t30090) + var1[1] - 1.*var2[1];
  p_output1[2]=-0.2000000000018*t11609*t1450*t28920 + 0.2000000000018*t1762*t30762 - 6.000000000054e-7*t1762*t30807 + t20413*t30932 + t22635*t31008 + t28020*t31120 - 0.3*(t28466*t30932 + t24798*t31008 + t22950*t31120) + 0.2*(t22950*t30932 + t24439*t31008 + t24252*t31120) + 0.100001*(t24798*t30932 + t24597*t31008 + t24439*t31120) + var1[2] - 1.*var2[2];
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

  double *var1,*var2;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 2)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Two input(s) required (var1,var2).");
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
  mrows = mxGetM(prhs[1]);
  ncols = mxGetN(prhs[1]);
  if( !mxIsDouble(prhs[1]) || mxIsComplex(prhs[1]) ||
    ( !(mrows == 3 && ncols == 1) && 
      !(mrows == 1 && ncols == 3))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var2 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "h_LeftFrontFoot_FrontStance.hh"

namespace FrontStance
{

void h_LeftFrontFoot_FrontStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
