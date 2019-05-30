/*
 * Automatically Generated from Mathematica.
 * Wed 29 May 2019 23:58:21 GMT-04:00
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
  double t15833;
  double t15801;
  double t21397;
  double t21686;
  double t24746;
  double t23908;
  double t24456;
  double t24790;
  double t24965;
  double t25018;
  double t25348;
  double t26277;
  double t26297;
  double t4278;
  double t15368;
  double t24550;
  double t24799;
  double t24817;
  double t24871;
  double t24890;
  double t24905;
  double t26651;
  double t26721;
  double t28161;
  double t26321;
  double t26392;
  double t28178;
  double t27449;
  double t27828;
  double t27907;
  double t27946;
  double t27948;
  double t27959;
  double t28204;
  double t28205;
  double t28208;
  double t28210;
  double t28331;
  double t28355;
  double t28359;
  double t28434;
  double t28456;
  double t28499;
  double t28625;
  double t28867;
  double t28970;
  double t28724;
  double t28180;
  double t28639;
  double t29038;
  double t21971;
  double t22615;
  double t23848;
  double t23906;
  double t24911;
  double t25644;
  double t26412;
  double t26762;
  double t27373;
  double t28176;
  double t28183;
  double t28189;
  double t28190;
  double t28198;
  double t28218;
  double t28219;
  double t28310;
  double t28319;
  double t28323;
  double t29315;
  double t29316;
  double t29317;
  double t29319;
  double t28865;
  double t29323;
  double t29325;
  double t29413;
  double t29422;
  double t29428;
  double t29434;
  double t29443;
  double t29444;
  double t29104;
  double t29288;
  double t29295;
  double t29579;
  double t29584;
  double t29585;
  double t29592;
  double t29596;
  double t29598;
  double t29668;
  double t29670;
  double t29707;
  double t29734;
  double t29759;
  double t29764;
  double t29780;
  double t29788;
  double t29833;
  double t30118;
  double t30122;
  double t30129;
  double t30145;
  double t30146;
  double t30147;
  double t30148;
  double t30151;
  double t30152;
  double t30153;
  double t30154;
  double t30158;
  double t30166;
  double t30168;
  double t30169;
  double t30231;
  double t30236;
  double t30225;
  double t30226;
  double t30441;
  double t30404;
  double t30412;
  double t30413;
  double t30415;
  double t30469;
  double t30470;
  double t30473;
  double t30488;
  double t30494;
  double t30498;
  double t30579;
  double t30502;
  t15833 = Cos(var1[19]);
  t15801 = Sin(var1[3]);
  t21397 = -1.*t15833;
  t21686 = 1. + t21397;
  t24746 = Cos(var1[3]);
  t23908 = Cos(var1[5]);
  t24456 = Sin(var1[4]);
  t24790 = Sin(var1[5]);
  t24965 = Cos(var1[21]);
  t25018 = -1.*t24965;
  t25348 = 1. + t25018;
  t26277 = -3.e-6*t25348;
  t26297 = Sin(var1[21]);
  t4278 = Cos(var1[4]);
  t15368 = Sin(var1[19]);
  t24550 = t23908*t15801*t24456;
  t24799 = t24746*t24790;
  t24817 = t24550 + t24799;
  t24871 = t24746*t23908;
  t24890 = -1.*t15801*t24456*t24790;
  t24905 = t24871 + t24890;
  t26651 = 3.e-6*t26297;
  t26721 = t26277 + t26651;
  t28161 = 3.e-13*var1[21];
  t26321 = -3.e-6*t26297;
  t26392 = t26277 + t26321;
  t28178 = -9.e-12*t25348;
  t27449 = 3.e-6*t4278*t15368*t15801;
  t27828 = 3.e-6*t21686*t24817;
  t27907 = -9.e-12*t21686;
  t27946 = 1. + t27907;
  t27948 = t27946*t24905;
  t27959 = t27449 + t27828 + t27948;
  t28204 = -1.*t4278*t15368*t15801;
  t28205 = t15833*t24817;
  t28208 = 3.e-6*t21686*t24905;
  t28210 = t28204 + t28205 + t28208;
  t28331 = -1.000000000009*t21686;
  t28355 = 1. + t28331;
  t28359 = -1.*t28355*t4278*t15801;
  t28434 = -1.*t15368*t24817;
  t28456 = 3.e-6*t15368*t24905;
  t28499 = t28359 + t28434 + t28456;
  t28625 = 3.e-6*t25348;
  t28867 = -1.000000000009*t25348;
  t28970 = 1. + t28867;
  t28724 = 9.e-12*t25348;
  t28180 = -1.*t26297;
  t28639 = t28625 + t26321;
  t29038 = t28625 + t26651;
  t21971 = -1.8e-12*t21686;
  t22615 = -1. + t15833;
  t23848 = 0.2*t22615;
  t23906 = t21971 + t23848;
  t24911 = 1.e-7*var1[21];
  t25644 = 5.4e-18*t25348;
  t26412 = -0.200000000003*t26392;
  t26762 = 0.100000000003*t26721;
  t27373 = t24911 + t25644 + t26412 + t26762;
  t28176 = -0.2000000000048*t25348;
  t28183 = t28178 + t28180;
  t28189 = 0.100000000003*t28183;
  t28190 = 3.e-7*t26721;
  t28198 = t28161 + t28176 + t28189 + t28190;
  t28218 = 0.1000000000039*t25348;
  t28219 = 3.e-7*t26392;
  t28310 = t28178 + t26297;
  t28319 = -0.200000000003*t28310;
  t28323 = t28161 + t28218 + t28219 + t28319;
  t29315 = -3.e-6*t21686*t24746*t4278*t23908;
  t29316 = 3.e-6*t24746*t15368*t24456;
  t29317 = t27946*t24746*t4278*t24790;
  t29319 = t29315 + t29316 + t29317;
  t28865 = t28724 + t26297;
  t29323 = -1.*t15833*t24746*t4278*t23908;
  t29325 = -1.*t24746*t15368*t24456;
  t29413 = 3.e-6*t21686*t24746*t4278*t24790;
  t29422 = t29323 + t29325 + t29413;
  t29428 = t24746*t4278*t23908*t15368;
  t29434 = -1.*t28355*t24746*t24456;
  t29443 = 3.e-6*t24746*t4278*t15368*t24790;
  t29444 = t29428 + t29434 + t29443;
  t29104 = t28724 + t28180;
  t29288 = -1.8e-11*t25348;
  t29295 = 1. + t29288;
  t29579 = t24746*t23908*t24456;
  t29584 = -1.*t15801*t24790;
  t29585 = t29579 + t29584;
  t29592 = t23908*t15801;
  t29596 = t24746*t24456*t24790;
  t29598 = t29592 + t29596;
  t29668 = t27946*t29585;
  t29670 = 3.e-6*t21686*t29598;
  t29707 = t29668 + t29670;
  t29734 = 3.e-6*t21686*t29585;
  t29759 = t15833*t29598;
  t29764 = t29734 + t29759;
  t29780 = 3.e-6*t15368*t29585;
  t29788 = -1.*t15368*t29598;
  t29833 = t29780 + t29788;
  t30118 = -1.*t24746*t23908*t24456;
  t30122 = t15801*t24790;
  t30129 = t30118 + t30122;
  t30145 = -1.000000000009*t24746*t4278*t15368;
  t30146 = -1.*t15833*t30129;
  t30147 = 3.e-6*t15833*t29598;
  t30148 = t30145 + t30146 + t30147;
  t30151 = -3.e-6*t15833*t24746*t4278;
  t30152 = 3.e-6*t15368*t30129;
  t30153 = -9.e-12*t15368*t29598;
  t30154 = t30151 + t30152 + t30153;
  t30158 = t15833*t24746*t4278;
  t30166 = -1.*t15368*t30129;
  t30168 = 3.e-6*t15368*t29598;
  t30169 = t30158 + t30166 + t30168;
  t30231 = 3.e-6*t24965;
  t30236 = t30231 + t26321;
  t30225 = -3.e-6*t24965;
  t30226 = t30225 + t26321;
  t30441 = -9.e-12*t26297;
  t30404 = -3.e-6*t24746*t4278*t15368;
  t30412 = 3.e-6*t21686*t30129;
  t30413 = t27946*t29598;
  t30415 = t30404 + t30412 + t30413;
  t30469 = t24746*t4278*t15368;
  t30470 = t15833*t30129;
  t30473 = t30469 + t30470 + t29670;
  t30488 = t28355*t24746*t4278;
  t30494 = t30488 + t30166 + t30168;
  t30498 = t30231 + t26651;
  t30579 = t30225 + t26651;
  t30502 = 9.e-12*t26297;
  p_output1[0]=1.;
  p_output1[1]=t23906*t24817 + 6.000000000054e-7*t21686*t24905 + t27373*t27959 + t28198*t28210 + t28323*t28499 - 0.3*(t27959*t28639 + t28210*t28865 + t28499*t28970) + 0.2*(-1.*t28210*t28970 - 1.*t27959*t29038 - 1.*t28499*t29104) - 0.099999*(t28210*t28639 + t28499*t29038 + t27959*t29295) - 0.2000000000018*t15368*t15801*t4278;
  p_output1[2]=-0.2000000000018*t15368*t24456*t24746 + t27373*t29319 + t28198*t29422 + t28323*t29444 - 0.3*(t28639*t29319 + t28865*t29422 + t28970*t29444) - 0.099999*(t29295*t29319 + t28639*t29422 + t29038*t29444) + 0.2*(-1.*t29038*t29319 - 1.*t28970*t29422 - 1.*t29104*t29444) - 1.*t23906*t23908*t24746*t4278 + 6.000000000054e-7*t21686*t24746*t24790*t4278;
  p_output1[3]=6.000000000054e-7*t21686*t29585 + t23906*t29598 + t27373*t29707 + t28198*t29764 + t28323*t29833 - 0.3*(t28639*t29707 + t28865*t29764 + t28970*t29833) - 0.099999*(t29295*t29707 + t28639*t29764 + t29038*t29833) + 0.2*(-1.*t29038*t29707 - 1.*t28970*t29764 - 1.*t29104*t29833);
  p_output1[4]=6.000000000054e-7*t15368*t29598 - 0.2000000000018*t15368*t30129 + t28323*t30148 + t27373*t30154 + t28198*t30169 - 0.099999*(t29038*t30148 + t29295*t30154 + t28639*t30169) - 0.3*(t28970*t30148 + t28639*t30154 + t28865*t30169) + 0.2*(-1.*t29104*t30148 - 1.*t29038*t30154 - 1.*t28970*t30169) + 0.2000000000018*t15833*t24746*t4278;
  p_output1[5]=(1.e-7 + 5.4e-18*t26297 - 0.200000000003*t30226 + 0.100000000003*t30236)*t30415 + (3.e-13 - 0.2000000000048*t26297 + 3.e-7*t30236 + 0.100000000003*(t25018 + t30441))*t30473 + (3.e-13 + 0.1000000000039*t26297 + 3.e-7*t30226 - 0.200000000003*(t24965 + t30441))*t30494 + 0.2*(1.000000000009*t26297*t30473 - 1.*t30415*t30498 - 1.*t30494*(t25018 + t30502)) - 0.3*(-1.000000000009*t26297*t30494 + t30473*(t24965 + t30502) + t30415*t30579) - 0.099999*(-1.8e-11*t26297*t30415 + t30494*t30498 + t30473*t30579);
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
