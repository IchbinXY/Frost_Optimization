/*
 * Automatically Generated from Mathematica.
 * Wed 29 May 2019 15:14:11 GMT-04:00
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
  double t12256;
  double t12138;
  double t12261;
  double t12323;
  double t12816;
  double t12737;
  double t12740;
  double t12819;
  double t13176;
  double t13183;
  double t13191;
  double t13254;
  double t13255;
  double t254;
  double t462;
  double t12742;
  double t12823;
  double t12824;
  double t12834;
  double t13086;
  double t13087;
  double t13306;
  double t13378;
  double t13452;
  double t13284;
  double t13285;
  double t13472;
  double t13433;
  double t13434;
  double t13435;
  double t13436;
  double t13437;
  double t13438;
  double t13495;
  double t13501;
  double t13510;
  double t13515;
  double t13609;
  double t13610;
  double t13612;
  double t13613;
  double t13614;
  double t13615;
  double t13619;
  double t13655;
  double t13701;
  double t13623;
  double t13478;
  double t13620;
  double t13713;
  double t12441;
  double t12635;
  double t12657;
  double t12693;
  double t13159;
  double t13234;
  double t13288;
  double t13415;
  double t13425;
  double t13460;
  double t13486;
  double t13487;
  double t13493;
  double t13494;
  double t13603;
  double t13604;
  double t13605;
  double t13607;
  double t13608;
  double t13784;
  double t13788;
  double t13789;
  double t13811;
  double t13624;
  double t13813;
  double t13814;
  double t13816;
  double t13817;
  double t13819;
  double t13821;
  double t13822;
  double t13868;
  double t13719;
  double t13742;
  double t13743;
  double t15013;
  double t15014;
  double t15015;
  double t15024;
  double t15026;
  double t15027;
  double t15046;
  double t15296;
  double t15312;
  double t15421;
  double t15423;
  double t15451;
  double t15522;
  double t15526;
  double t15531;
  double t15653;
  double t15660;
  double t15671;
  double t15681;
  double t15683;
  double t15684;
  double t15688;
  double t15690;
  double t15721;
  double t15724;
  double t15725;
  double t15730;
  double t15734;
  double t15737;
  double t15739;
  double t15809;
  double t15815;
  double t15800;
  double t15803;
  double t15890;
  double t15830;
  double t15831;
  double t15882;
  double t15883;
  double t15911;
  double t15912;
  double t15913;
  double t15944;
  double t15946;
  double t15955;
  double t16873;
  double t15977;
  t12256 = Cos(var1[19]);
  t12138 = Sin(var1[3]);
  t12261 = -1.*t12256;
  t12323 = 1. + t12261;
  t12816 = Cos(var1[3]);
  t12737 = Cos(var1[5]);
  t12740 = Sin(var1[4]);
  t12819 = Sin(var1[5]);
  t13176 = Cos(var1[21]);
  t13183 = -1.*t13176;
  t13191 = 1. + t13183;
  t13254 = -3.e-6*t13191;
  t13255 = Sin(var1[21]);
  t254 = Cos(var1[4]);
  t462 = Sin(var1[19]);
  t12742 = t12737*t12138*t12740;
  t12823 = t12816*t12819;
  t12824 = t12742 + t12823;
  t12834 = t12816*t12737;
  t13086 = -1.*t12138*t12740*t12819;
  t13087 = t12834 + t13086;
  t13306 = 3.e-6*t13255;
  t13378 = t13254 + t13306;
  t13452 = 3.e-13*var1[21];
  t13284 = -3.e-6*t13255;
  t13285 = t13254 + t13284;
  t13472 = -9.e-12*t13191;
  t13433 = 3.e-6*t254*t462*t12138;
  t13434 = 3.e-6*t12323*t12824;
  t13435 = -9.e-12*t12323;
  t13436 = 1. + t13435;
  t13437 = t13436*t13087;
  t13438 = t13433 + t13434 + t13437;
  t13495 = -1.*t254*t462*t12138;
  t13501 = t12256*t12824;
  t13510 = 3.e-6*t12323*t13087;
  t13515 = t13495 + t13501 + t13510;
  t13609 = -1.000000000009*t12323;
  t13610 = 1. + t13609;
  t13612 = -1.*t13610*t254*t12138;
  t13613 = -1.*t462*t12824;
  t13614 = 3.e-6*t462*t13087;
  t13615 = t13612 + t13613 + t13614;
  t13619 = 3.e-6*t13191;
  t13655 = -1.000000000009*t13191;
  t13701 = 1. + t13655;
  t13623 = 9.e-12*t13191;
  t13478 = -1.*t13255;
  t13620 = t13619 + t13284;
  t13713 = t13619 + t13306;
  t12441 = -1.8e-12*t12323;
  t12635 = -1. + t12256;
  t12657 = 0.2*t12635;
  t12693 = t12441 + t12657;
  t13159 = 1.e-7*var1[21];
  t13234 = 5.4e-18*t13191;
  t13288 = -0.200000000003*t13285;
  t13415 = 0.100000000003*t13378;
  t13425 = t13159 + t13234 + t13288 + t13415;
  t13460 = -0.2000000000048*t13191;
  t13486 = t13472 + t13478;
  t13487 = 0.100000000003*t13486;
  t13493 = 3.e-7*t13378;
  t13494 = t13452 + t13460 + t13487 + t13493;
  t13603 = 0.1000000000039*t13191;
  t13604 = 3.e-7*t13285;
  t13605 = t13472 + t13255;
  t13607 = -0.200000000003*t13605;
  t13608 = t13452 + t13603 + t13604 + t13607;
  t13784 = -3.e-6*t12323*t12816*t254*t12737;
  t13788 = 3.e-6*t12816*t462*t12740;
  t13789 = t13436*t12816*t254*t12819;
  t13811 = t13784 + t13788 + t13789;
  t13624 = t13623 + t13255;
  t13813 = -1.*t12256*t12816*t254*t12737;
  t13814 = -1.*t12816*t462*t12740;
  t13816 = 3.e-6*t12323*t12816*t254*t12819;
  t13817 = t13813 + t13814 + t13816;
  t13819 = t12816*t254*t12737*t462;
  t13821 = -1.*t13610*t12816*t12740;
  t13822 = 3.e-6*t12816*t254*t462*t12819;
  t13868 = t13819 + t13821 + t13822;
  t13719 = t13623 + t13478;
  t13742 = -1.8e-11*t13191;
  t13743 = 1. + t13742;
  t15013 = t12816*t12737*t12740;
  t15014 = -1.*t12138*t12819;
  t15015 = t15013 + t15014;
  t15024 = t12737*t12138;
  t15026 = t12816*t12740*t12819;
  t15027 = t15024 + t15026;
  t15046 = t13436*t15015;
  t15296 = 3.e-6*t12323*t15027;
  t15312 = t15046 + t15296;
  t15421 = 3.e-6*t12323*t15015;
  t15423 = t12256*t15027;
  t15451 = t15421 + t15423;
  t15522 = 3.e-6*t462*t15015;
  t15526 = -1.*t462*t15027;
  t15531 = t15522 + t15526;
  t15653 = -1.*t12816*t12737*t12740;
  t15660 = t12138*t12819;
  t15671 = t15653 + t15660;
  t15681 = -1.000000000009*t12816*t254*t462;
  t15683 = -1.*t12256*t15671;
  t15684 = 3.e-6*t12256*t15027;
  t15688 = t15681 + t15683 + t15684;
  t15690 = -3.e-6*t12256*t12816*t254;
  t15721 = 3.e-6*t462*t15671;
  t15724 = -9.e-12*t462*t15027;
  t15725 = t15690 + t15721 + t15724;
  t15730 = t12256*t12816*t254;
  t15734 = -1.*t462*t15671;
  t15737 = 3.e-6*t462*t15027;
  t15739 = t15730 + t15734 + t15737;
  t15809 = 3.e-6*t13176;
  t15815 = t15809 + t13284;
  t15800 = -3.e-6*t13176;
  t15803 = t15800 + t13284;
  t15890 = -9.e-12*t13255;
  t15830 = -3.e-6*t12816*t254*t462;
  t15831 = 3.e-6*t12323*t15671;
  t15882 = t13436*t15027;
  t15883 = t15830 + t15831 + t15882;
  t15911 = t12816*t254*t462;
  t15912 = t12256*t15671;
  t15913 = t15911 + t15912 + t15296;
  t15944 = t13610*t12816*t254;
  t15946 = t15944 + t15734 + t15737;
  t15955 = t15809 + t13306;
  t16873 = t15800 + t13306;
  t15977 = 9.e-12*t13255;
  p_output1[0]=1.;
  p_output1[1]=t12693*t12824 + 6.000000000054e-7*t12323*t13087 + t13425*t13438 + t13494*t13515 + t13608*t13615 - 0.3*(t13438*t13620 + t13515*t13624 + t13615*t13701) + 0.2*(-1.*t13515*t13701 - 1.*t13438*t13713 - 1.*t13615*t13719) - 0.099999*(t13515*t13620 + t13615*t13713 + t13438*t13743) - 0.2000000000018*t12138*t254*t462;
  p_output1[2]=t13425*t13811 + t13494*t13817 + t13608*t13868 - 0.3*(t13620*t13811 + t13624*t13817 + t13701*t13868) - 0.099999*(t13743*t13811 + t13620*t13817 + t13713*t13868) + 0.2*(-1.*t13713*t13811 - 1.*t13701*t13817 - 1.*t13719*t13868) - 1.*t12693*t12737*t12816*t254 + 6.000000000054e-7*t12323*t12816*t12819*t254 - 0.2000000000018*t12740*t12816*t462;
  p_output1[3]=6.000000000054e-7*t12323*t15015 + t12693*t15027 + t13425*t15312 + t13494*t15451 + t13608*t15531 - 0.3*(t13620*t15312 + t13624*t15451 + t13701*t15531) - 0.099999*(t13743*t15312 + t13620*t15451 + t13713*t15531) + 0.2*(-1.*t13713*t15312 - 1.*t13701*t15451 - 1.*t13719*t15531);
  p_output1[4]=t13608*t15688 + t13425*t15725 + t13494*t15739 - 0.099999*(t13713*t15688 + t13743*t15725 + t13620*t15739) - 0.3*(t13701*t15688 + t13620*t15725 + t13624*t15739) + 0.2*(-1.*t13719*t15688 - 1.*t13713*t15725 - 1.*t13701*t15739) + 0.2000000000018*t12256*t12816*t254 + 6.000000000054e-7*t15027*t462 - 0.2000000000018*t15671*t462;
  p_output1[5]=(1.e-7 + 5.4e-18*t13255 - 0.200000000003*t15803 + 0.100000000003*t15815)*t15883 + (3.e-13 - 0.2000000000048*t13255 + 3.e-7*t15815 + 0.100000000003*(t13183 + t15890))*t15913 + (3.e-13 + 0.1000000000039*t13255 + 3.e-7*t15803 - 0.200000000003*(t13176 + t15890))*t15946 + 0.2*(1.000000000009*t13255*t15913 - 1.*t15883*t15955 - 1.*t15946*(t13183 + t15977)) - 0.3*(-1.000000000009*t13255*t15946 + t15913*(t13176 + t15977) + t15883*t16873) - 0.099999*(-1.8e-11*t13255*t15883 + t15946*t15955 + t15913*t16873);
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

#include "J_foot_clearance_BackStance.hh"

namespace BackStance
{

void J_foot_clearance_BackStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
