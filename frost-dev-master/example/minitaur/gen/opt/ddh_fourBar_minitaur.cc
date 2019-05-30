/*
 * Automatically Generated from Mathematica.
 * Wed 29 May 2019 23:44:38 GMT-04:00
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
static void output1(double *p_output1,const double *var1,const double *var2,const double *var3,const double *var4)
{
  double t16071;
  double t16342;
  double t16354;
  double t16918;
  double t17230;
  double t17690;
  double t17729;
  double t17797;
  double t17804;
  double t17818;
  double t17819;
  double t17833;
  double t17894;
  double t18613;
  double t19546;
  double t17914;
  double t19589;
  double t19624;
  double t19683;
  double t19799;
  double t19509;
  double t19524;
  double t19527;
  double t19544;
  double t19594;
  double t19608;
  double t19614;
  double t19623;
  double t20243;
  double t20255;
  double t20281;
  double t20296;
  double t20302;
  double t20338;
  double t20490;
  double t20491;
  double t20496;
  double t20503;
  double t20510;
  double t20541;
  double t20598;
  double t20601;
  double t20859;
  double t20594;
  double t20929;
  double t21037;
  double t21245;
  double t21401;
  double t20651;
  double t20795;
  double t20839;
  double t20845;
  double t20958;
  double t20972;
  double t21014;
  double t21021;
  double t21798;
  double t21807;
  double t21808;
  double t21811;
  double t21821;
  double t21899;
  double t22029;
  double t22044;
  double t22094;
  double t22101;
  double t22122;
  double t22133;
  double t22185;
  double t22423;
  double t22442;
  double t22256;
  double t22591;
  double t22619;
  double t22753;
  double t23093;
  double t22430;
  double t22438;
  double t22439;
  double t22440;
  double t22597;
  double t22610;
  double t22614;
  double t22615;
  double t23489;
  double t23492;
  double t23507;
  double t23513;
  double t23519;
  double t23562;
  double t23758;
  double t24012;
  double t24029;
  double t24142;
  double t24209;
  double t24220;
  double t24354;
  double t24492;
  double t24570;
  double t24371;
  double t24763;
  double t25007;
  double t25363;
  double t25913;
  double t24539;
  double t24551;
  double t24557;
  double t24568;
  double t24798;
  double t24921;
  double t24965;
  double t24992;
  t16071 = Cos(var1[14]);
  t16342 = 0.05*t16071;
  t16354 = var1[14] + var1[16];
  t16918 = Cos(t16354);
  t17230 = 0.1*t16918;
  t17690 = t16342 + t17230;
  t17729 = Cos(var1[15]);
  t17797 = -0.05*t17729;
  t17804 = var1[15] + var1[17];
  t17818 = Cos(t17804);
  t17819 = -0.1*t17818;
  t17833 = t17797 + t17819;
  t17894 = Sin(var1[14]);
  t18613 = Sin(t16354);
  t19546 = -0.1*var2[16]*t18613;
  t17914 = Sin(var1[15]);
  t19589 = Sin(t17804);
  t19624 = 0.1*var2[17]*t19589;
  t19683 = -0.1*var2[16]*t16918;
  t19799 = 0.1*var2[17]*t17818;
  t19509 = -0.05*t17894;
  t19524 = -0.1*t18613;
  t19527 = t19509 + t19524;
  t19544 = var2[14]*t19527;
  t19594 = 0.05*t17914;
  t19608 = 0.1*t19589;
  t19614 = t19594 + t19608;
  t19623 = var2[15]*t19614;
  t20243 = Cos(var1[7]);
  t20255 = -0.05*t20243;
  t20281 = var1[9] + var1[7];
  t20296 = Cos(t20281);
  t20302 = -0.1*t20296;
  t20338 = t20255 + t20302;
  t20490 = Cos(var1[6]);
  t20491 = 0.05*t20490;
  t20496 = var1[6] + var1[8];
  t20503 = Cos(t20496);
  t20510 = 0.1*t20503;
  t20541 = t20491 + t20510;
  t20598 = Sin(var1[7]);
  t20601 = Sin(t20281);
  t20859 = 0.1*var2[9]*t20601;
  t20594 = Sin(var1[6]);
  t20929 = Sin(t20496);
  t21037 = -0.1*var2[8]*t20929;
  t21245 = 0.1*var2[9]*t20296;
  t21401 = -0.1*var2[8]*t20503;
  t20651 = 0.05*t20598;
  t20795 = 0.1*t20601;
  t20839 = t20651 + t20795;
  t20845 = var2[7]*t20839;
  t20958 = -0.05*t20594;
  t20972 = -0.1*t20929;
  t21014 = t20958 + t20972;
  t21021 = var2[6]*t21014;
  t21798 = Cos(var1[18]);
  t21807 = 0.05*t21798;
  t21808 = var1[18] + var1[20];
  t21811 = Cos(t21808);
  t21821 = 0.1*t21811;
  t21899 = t21807 + t21821;
  t22029 = Cos(var1[19]);
  t22044 = -0.05*t22029;
  t22094 = var1[19] + var1[21];
  t22101 = Cos(t22094);
  t22122 = -0.1*t22101;
  t22133 = t22044 + t22122;
  t22185 = Sin(var1[18]);
  t22423 = Sin(t21808);
  t22442 = -0.1*var2[20]*t22423;
  t22256 = Sin(var1[19]);
  t22591 = Sin(t22094);
  t22619 = 0.1*var2[21]*t22591;
  t22753 = -0.1*var2[20]*t21811;
  t23093 = 0.1*var2[21]*t22101;
  t22430 = -0.05*t22185;
  t22438 = -0.1*t22423;
  t22439 = t22430 + t22438;
  t22440 = var2[18]*t22439;
  t22597 = 0.05*t22256;
  t22610 = 0.1*t22591;
  t22614 = t22597 + t22610;
  t22615 = var2[19]*t22614;
  t23489 = Cos(var1[10]);
  t23492 = 0.05*t23489;
  t23507 = var1[10] + var1[12];
  t23513 = Cos(t23507);
  t23519 = 0.1*t23513;
  t23562 = t23492 + t23519;
  t23758 = Cos(var1[11]);
  t24012 = -0.05*t23758;
  t24029 = var1[11] + var1[13];
  t24142 = Cos(t24029);
  t24209 = -0.1*t24142;
  t24220 = t24012 + t24209;
  t24354 = Sin(var1[10]);
  t24492 = Sin(t23507);
  t24570 = -0.1*var2[12]*t24492;
  t24371 = Sin(var1[11]);
  t24763 = Sin(t24029);
  t25007 = 0.1*var2[13]*t24763;
  t25363 = -0.1*var2[12]*t23513;
  t25913 = 0.1*var2[13]*t24142;
  t24539 = -0.05*t24354;
  t24551 = -0.1*t24492;
  t24557 = t24539 + t24551;
  t24568 = var2[10]*t24557;
  t24798 = 0.05*t24371;
  t24921 = 0.1*t24763;
  t24965 = t24798 + t24921;
  t24992 = var2[11]*t24965;
  p_output1[0]=0.05*t17894 - 0.05*t17914 + 0.1*t18613 - 0.1*t19589 + t17690*var2[14] + (t19544 + t19546)*var2[14] + t17833*var2[15] + (t19623 + t19624)*var2[15] + 0.1*t16918*var2[16] + (t19546 - 0.1*t18613*var2[14])*var2[16] - 0.1*t17818*var2[17] + (t19624 + 0.1*t19589*var2[15])*var2[17] + t17690*var3[14] + t17833*var3[15] + 0.1*t16918*var3[16] - 0.1*t17818*var3[17] - 1.*var4[0];
  p_output1[1]=t16342 + t17230 + t17797 + t17819 + t19544 + t19546 + t19623 + t19624 + var2[14]*(t19683 + (-0.05*t16071 - 0.1*t16918)*var2[14]) + var2[15]*(t19799 + (0.05*t17729 + 0.1*t17818)*var2[15]) + (t19683 - 0.1*t16918*var2[14])*var2[16] + (t19799 + 0.1*t17818*var2[15])*var2[17] + t19527*var3[14] + t19614*var3[15] - 0.1*t18613*var3[16] + 0.1*t19589*var3[17] - 1.*var4[1];
  p_output1[2]=0.05*t20594 - 0.05*t20598 - 0.1*t20601 + 0.1*t20929 + t20541*var2[6] + (t21021 + t21037)*var2[6] + t20338*var2[7] + (t20845 + t20859)*var2[7] + 0.1*t20503*var2[8] + (t21037 - 0.1*t20929*var2[6])*var2[8] - 0.1*t20296*var2[9] + (t20859 + 0.1*t20601*var2[7])*var2[9] + t20541*var3[6] + t20338*var3[7] + 0.1*t20503*var3[8] - 0.1*t20296*var3[9] - 1.*var4[2];
  p_output1[3]=t20255 + t20302 + t20491 + t20510 + t20845 + t20859 + t21021 + t21037 + var2[6]*(t21401 + (-0.05*t20490 - 0.1*t20503)*var2[6]) + var2[7]*(t21245 + (0.05*t20243 + 0.1*t20296)*var2[7]) + (t21401 - 0.1*t20503*var2[6])*var2[8] + (t21245 + 0.1*t20296*var2[7])*var2[9] + t21014*var3[6] + t20839*var3[7] - 0.1*t20929*var3[8] + 0.1*t20601*var3[9] - 1.*var4[3];
  p_output1[4]=0.05*t22185 - 0.05*t22256 + 0.1*t22423 - 0.1*t22591 + t21899*var2[18] + (t22440 + t22442)*var2[18] + t22133*var2[19] + (t22615 + t22619)*var2[19] + 0.1*t21811*var2[20] + (t22442 - 0.1*t22423*var2[18])*var2[20] - 0.1*t22101*var2[21] + (t22619 + 0.1*t22591*var2[19])*var2[21] + t21899*var3[18] + t22133*var3[19] + 0.1*t21811*var3[20] - 0.1*t22101*var3[21] - 1.*var4[4];
  p_output1[5]=t21807 + t21821 + t22044 + t22122 + t22440 + t22442 + t22615 + t22619 + var2[18]*(t22753 + (-0.05*t21798 - 0.1*t21811)*var2[18]) + var2[19]*(t23093 + (0.05*t22029 + 0.1*t22101)*var2[19]) + (t22753 - 0.1*t21811*var2[18])*var2[20] + (t23093 + 0.1*t22101*var2[19])*var2[21] + t22439*var3[18] + t22614*var3[19] - 0.1*t22423*var3[20] + 0.1*t22591*var3[21] - 1.*var4[5];
  p_output1[6]=0.05*t24354 - 0.05*t24371 + 0.1*t24492 - 0.1*t24763 + t23562*var2[10] + (t24568 + t24570)*var2[10] + t24220*var2[11] + (t24992 + t25007)*var2[11] + 0.1*t23513*var2[12] + (t24570 - 0.1*t24492*var2[10])*var2[12] - 0.1*t24142*var2[13] + (t25007 + 0.1*t24763*var2[11])*var2[13] + t23562*var3[10] + t24220*var3[11] + 0.1*t23513*var3[12] - 0.1*t24142*var3[13] - 1.*var4[6];
  p_output1[7]=t23492 + t23519 + t24012 + t24209 + t24568 + t24570 + t24992 + t25007 + var2[10]*(t25363 + (-0.05*t23489 - 0.1*t23513)*var2[10]) + var2[11]*(t25913 + (0.05*t23758 + 0.1*t24142)*var2[11]) + (t25363 - 0.1*t23513*var2[10])*var2[12] + (t25913 + 0.1*t24142*var2[11])*var2[13] + t24557*var3[10] + t24965*var3[11] - 0.1*t24492*var3[12] + 0.1*t24763*var3[13] - 1.*var4[7];
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

  double *var1,*var2,*var3,*var4;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 4)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Four input(s) required (var1,var2,var3,var4).");
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
    ( !(mrows == 22 && ncols == 1) && 
      !(mrows == 1 && ncols == 22))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var2 is wrong.");
    }
  mrows = mxGetM(prhs[2]);
  ncols = mxGetN(prhs[2]);
  if( !mxIsDouble(prhs[2]) || mxIsComplex(prhs[2]) ||
    ( !(mrows == 22 && ncols == 1) && 
      !(mrows == 1 && ncols == 22))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var3 is wrong.");
    }
  mrows = mxGetM(prhs[3]);
  ncols = mxGetN(prhs[3]);
  if( !mxIsDouble(prhs[3]) || mxIsComplex(prhs[3]) ||
    ( !(mrows == 8 && ncols == 1) && 
      !(mrows == 1 && ncols == 8))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var4 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
  var3 = mxGetPr(prhs[2]);
  var4 = mxGetPr(prhs[3]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 8, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3,var4);


}

#else // MATLAB_MEX_FILE

#include "ddh_fourBar_minitaur.hh"

namespace FrontStance
{

void ddh_fourBar_minitaur_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4);

}

}

#endif // MATLAB_MEX_FILE
