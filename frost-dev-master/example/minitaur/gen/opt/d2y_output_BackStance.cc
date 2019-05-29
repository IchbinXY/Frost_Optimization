/*
 * Automatically Generated from Mathematica.
 * Tue 28 May 2019 22:43:54 GMT-04:00
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
static void output1(double *p_output1,const double *var1,const double *var2,const double *var3,const double *var4,const double *var5,const double *var6,const double *var7,const double *var8,const double *var9)
{
  double t216;
  double t232;
  double t265;
  double t311;
  double t336;
  double t397;
  double t580;
  double t586;
  double t672;
  double t702;
  double t708;
  double t738;
  double t782;
  double t793;
  double t802;
  double t806;
  double t832;
  double t841;
  double t866;
  double t867;
  double t880;
  double t908;
  double t963;
  double t1064;
  t216 = -1.*var6[0];
  t232 = t216 + var6[1];
  t265 = Power(t232,-5);
  t311 = -1. + var7[0];
  t336 = -1. + var8[0];
  t397 = 1/t336;
  t580 = -1.*var1[0];
  t586 = t580 + var1[1];
  t672 = t311*t397*t586;
  t702 = t216 + var1[0] + t672;
  t708 = Power(t702,3);
  t738 = Power(t232,-4);
  t782 = Power(t702,2);
  t793 = 1/t232;
  t802 = -1.*t793*t702;
  t806 = 1. + t802;
  t832 = Power(t232,-3);
  t841 = Power(t806,2);
  t866 = Power(t232,-2);
  t867 = Power(t806,3);
  t880 = Power(t702,4);
  t908 = Power(t806,4);
  t963 = Power(t702,5);
  t1064 = Power(t806,5);
  p_output1[0]=0.5*var4[6] + 0.5*var4[7] - 20.*t866*t867*var5[0] - 60.*t702*t832*t841*var5[8] + 40.*t866*t867*var5[8] - 60.*t738*t782*t806*var5[16] + 120.*t702*t832*t841*var5[16] - 20.*t866*t867*var5[16] - 20.*t265*t708*var5[24] + 120.*t738*t782*t806*var5[24] - 60.*t702*t832*t841*var5[24] + 40.*t265*t708*var5[32] - 60.*t738*t782*t806*var5[32] - 20.*t265*t708*var5[40] + (0.5*(var2[6] + var2[7]) - 1.*t1064*var5[0] - 5.*t702*t793*t908*var5[8] - 10.*t782*t866*t867*var5[16] - 10.*t708*t832*t841*var5[24] - 5.*t738*t806*t880*var5[32] - 1.*t265*t963*var5[40])*var9[0] + (0.5*var3[6] + 0.5*var3[7] + 5.*t793*t908*var5[0] + 20.*t702*t866*t867*var5[8] - 5.*t793*t908*var5[8] + 30.*t782*t832*t841*var5[16] - 20.*t702*t866*t867*var5[16] + 20.*t708*t738*t806*var5[24] - 30.*t782*t832*t841*var5[24] - 20.*t708*t738*t806*var5[32] + 5.*t265*t880*var5[32] - 5.*t265*t880*var5[40])*var9[1];
  p_output1[1]=-1.*var4[6] + var4[7] - 20.*t866*t867*var5[1] - 60.*t702*t832*t841*var5[9] + 40.*t866*t867*var5[9] - 60.*t738*t782*t806*var5[17] + 120.*t702*t832*t841*var5[17] - 20.*t866*t867*var5[17] - 20.*t265*t708*var5[25] + 120.*t738*t782*t806*var5[25] - 60.*t702*t832*t841*var5[25] + 40.*t265*t708*var5[33] - 60.*t738*t782*t806*var5[33] - 20.*t265*t708*var5[41] + (-1.*var2[6] + var2[7] - 1.*t1064*var5[1] - 5.*t702*t793*t908*var5[9] - 10.*t782*t866*t867*var5[17] - 10.*t708*t832*t841*var5[25] - 5.*t738*t806*t880*var5[33] - 1.*t265*t963*var5[41])*var9[0] + (-1.*var3[6] + var3[7] + 5.*t793*t908*var5[1] + 20.*t702*t866*t867*var5[9] - 5.*t793*t908*var5[9] + 30.*t782*t832*t841*var5[17] - 20.*t702*t866*t867*var5[17] + 20.*t708*t738*t806*var5[25] - 30.*t782*t832*t841*var5[25] - 20.*t708*t738*t806*var5[33] + 5.*t265*t880*var5[33] - 5.*t265*t880*var5[41])*var9[1];
  p_output1[2]=0.5*var4[10] + 0.5*var4[11] - 20.*t866*t867*var5[2] - 60.*t702*t832*t841*var5[10] + 40.*t866*t867*var5[10] - 60.*t738*t782*t806*var5[18] + 120.*t702*t832*t841*var5[18] - 20.*t866*t867*var5[18] - 20.*t265*t708*var5[26] + 120.*t738*t782*t806*var5[26] - 60.*t702*t832*t841*var5[26] + 40.*t265*t708*var5[34] - 60.*t738*t782*t806*var5[34] - 20.*t265*t708*var5[42] + (0.5*(var2[10] + var2[11]) - 1.*t1064*var5[2] - 5.*t702*t793*t908*var5[10] - 10.*t782*t866*t867*var5[18] - 10.*t708*t832*t841*var5[26] - 5.*t738*t806*t880*var5[34] - 1.*t265*t963*var5[42])*var9[0] + (0.5*var3[10] + 0.5*var3[11] + 5.*t793*t908*var5[2] + 20.*t702*t866*t867*var5[10] - 5.*t793*t908*var5[10] + 30.*t782*t832*t841*var5[18] - 20.*t702*t866*t867*var5[18] + 20.*t708*t738*t806*var5[26] - 30.*t782*t832*t841*var5[26] - 20.*t708*t738*t806*var5[34] + 5.*t265*t880*var5[34] - 5.*t265*t880*var5[42])*var9[1];
  p_output1[3]=-1.*var4[10] + var4[11] - 20.*t866*t867*var5[3] - 60.*t702*t832*t841*var5[11] + 40.*t866*t867*var5[11] - 60.*t738*t782*t806*var5[19] + 120.*t702*t832*t841*var5[19] - 20.*t866*t867*var5[19] - 20.*t265*t708*var5[27] + 120.*t738*t782*t806*var5[27] - 60.*t702*t832*t841*var5[27] + 40.*t265*t708*var5[35] - 60.*t738*t782*t806*var5[35] - 20.*t265*t708*var5[43] + (-1.*var2[10] + var2[11] - 1.*t1064*var5[3] - 5.*t702*t793*t908*var5[11] - 10.*t782*t866*t867*var5[19] - 10.*t708*t832*t841*var5[27] - 5.*t738*t806*t880*var5[35] - 1.*t265*t963*var5[43])*var9[0] + (-1.*var3[10] + var3[11] + 5.*t793*t908*var5[3] + 20.*t702*t866*t867*var5[11] - 5.*t793*t908*var5[11] + 30.*t782*t832*t841*var5[19] - 20.*t702*t866*t867*var5[19] + 20.*t708*t738*t806*var5[27] - 30.*t782*t832*t841*var5[27] - 20.*t708*t738*t806*var5[35] + 5.*t265*t880*var5[35] - 5.*t265*t880*var5[43])*var9[1];
  p_output1[4]=0.5*var4[14] + 0.5*var4[15] - 20.*t866*t867*var5[4] - 60.*t702*t832*t841*var5[12] + 40.*t866*t867*var5[12] - 60.*t738*t782*t806*var5[20] + 120.*t702*t832*t841*var5[20] - 20.*t866*t867*var5[20] - 20.*t265*t708*var5[28] + 120.*t738*t782*t806*var5[28] - 60.*t702*t832*t841*var5[28] + 40.*t265*t708*var5[36] - 60.*t738*t782*t806*var5[36] - 20.*t265*t708*var5[44] + (0.5*(var2[14] + var2[15]) - 1.*t1064*var5[4] - 5.*t702*t793*t908*var5[12] - 10.*t782*t866*t867*var5[20] - 10.*t708*t832*t841*var5[28] - 5.*t738*t806*t880*var5[36] - 1.*t265*t963*var5[44])*var9[0] + (0.5*var3[14] + 0.5*var3[15] + 5.*t793*t908*var5[4] + 20.*t702*t866*t867*var5[12] - 5.*t793*t908*var5[12] + 30.*t782*t832*t841*var5[20] - 20.*t702*t866*t867*var5[20] + 20.*t708*t738*t806*var5[28] - 30.*t782*t832*t841*var5[28] - 20.*t708*t738*t806*var5[36] + 5.*t265*t880*var5[36] - 5.*t265*t880*var5[44])*var9[1];
  p_output1[5]=-1.*var4[14] + var4[15] - 20.*t866*t867*var5[5] - 60.*t702*t832*t841*var5[13] + 40.*t866*t867*var5[13] - 60.*t738*t782*t806*var5[21] + 120.*t702*t832*t841*var5[21] - 20.*t866*t867*var5[21] - 20.*t265*t708*var5[29] + 120.*t738*t782*t806*var5[29] - 60.*t702*t832*t841*var5[29] + 40.*t265*t708*var5[37] - 60.*t738*t782*t806*var5[37] - 20.*t265*t708*var5[45] + (-1.*var2[14] + var2[15] - 1.*t1064*var5[5] - 5.*t702*t793*t908*var5[13] - 10.*t782*t866*t867*var5[21] - 10.*t708*t832*t841*var5[29] - 5.*t738*t806*t880*var5[37] - 1.*t265*t963*var5[45])*var9[0] + (-1.*var3[14] + var3[15] + 5.*t793*t908*var5[5] + 20.*t702*t866*t867*var5[13] - 5.*t793*t908*var5[13] + 30.*t782*t832*t841*var5[21] - 20.*t702*t866*t867*var5[21] + 20.*t708*t738*t806*var5[29] - 30.*t782*t832*t841*var5[29] - 20.*t708*t738*t806*var5[37] + 5.*t265*t880*var5[37] - 5.*t265*t880*var5[45])*var9[1];
  p_output1[6]=0.5*var4[18] + 0.5*var4[19] - 20.*t866*t867*var5[6] - 60.*t702*t832*t841*var5[14] + 40.*t866*t867*var5[14] - 60.*t738*t782*t806*var5[22] + 120.*t702*t832*t841*var5[22] - 20.*t866*t867*var5[22] - 20.*t265*t708*var5[30] + 120.*t738*t782*t806*var5[30] - 60.*t702*t832*t841*var5[30] + 40.*t265*t708*var5[38] - 60.*t738*t782*t806*var5[38] - 20.*t265*t708*var5[46] + (0.5*(var2[18] + var2[19]) - 1.*t1064*var5[6] - 5.*t702*t793*t908*var5[14] - 10.*t782*t866*t867*var5[22] - 10.*t708*t832*t841*var5[30] - 5.*t738*t806*t880*var5[38] - 1.*t265*t963*var5[46])*var9[0] + (0.5*var3[18] + 0.5*var3[19] + 5.*t793*t908*var5[6] + 20.*t702*t866*t867*var5[14] - 5.*t793*t908*var5[14] + 30.*t782*t832*t841*var5[22] - 20.*t702*t866*t867*var5[22] + 20.*t708*t738*t806*var5[30] - 30.*t782*t832*t841*var5[30] - 20.*t708*t738*t806*var5[38] + 5.*t265*t880*var5[38] - 5.*t265*t880*var5[46])*var9[1];
  p_output1[7]=-1.*var4[18] + var4[19] - 20.*t866*t867*var5[7] - 60.*t702*t832*t841*var5[15] + 40.*t866*t867*var5[15] - 60.*t738*t782*t806*var5[23] + 120.*t702*t832*t841*var5[23] - 20.*t866*t867*var5[23] - 20.*t265*t708*var5[31] + 120.*t738*t782*t806*var5[31] - 60.*t702*t832*t841*var5[31] + 40.*t265*t708*var5[39] - 60.*t738*t782*t806*var5[39] - 20.*t265*t708*var5[47] + (-1.*var2[18] + var2[19] - 1.*t1064*var5[7] - 5.*t702*t793*t908*var5[15] - 10.*t782*t866*t867*var5[23] - 10.*t708*t832*t841*var5[31] - 5.*t738*t806*t880*var5[39] - 1.*t265*t963*var5[47])*var9[0] + (-1.*var3[18] + var3[19] + 5.*t793*t908*var5[7] + 20.*t702*t866*t867*var5[15] - 5.*t793*t908*var5[15] + 30.*t782*t832*t841*var5[23] - 20.*t702*t866*t867*var5[23] + 20.*t708*t738*t806*var5[31] - 30.*t782*t832*t841*var5[31] - 20.*t708*t738*t806*var5[39] + 5.*t265*t880*var5[39] - 5.*t265*t880*var5[47])*var9[1];
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

  double *var1,*var2,*var3,*var4,*var5,*var6,*var7,*var8,*var9;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 9)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Nine input(s) required (var1,var2,var3,var4,var5,var6,var7,var8,var9).");
    }
  else if( nlhs > 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:maxlhs", "Too many output arguments.");
    }

  /*  The input must be a noncomplex double vector or scaler.  */
  mrows = mxGetM(prhs[0]);
  ncols = mxGetN(prhs[0]);
  if( !mxIsDouble(prhs[0]) || mxIsComplex(prhs[0]) ||
    ( !(mrows == 2 && ncols == 1) && 
      !(mrows == 1 && ncols == 2))) 
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
    ( !(mrows == 22 && ncols == 1) && 
      !(mrows == 1 && ncols == 22))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var4 is wrong.");
    }
  mrows = mxGetM(prhs[4]);
  ncols = mxGetN(prhs[4]);
  if( !mxIsDouble(prhs[4]) || mxIsComplex(prhs[4]) ||
    ( !(mrows == 48 && ncols == 1) && 
      !(mrows == 1 && ncols == 48))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var5 is wrong.");
    }
  mrows = mxGetM(prhs[5]);
  ncols = mxGetN(prhs[5]);
  if( !mxIsDouble(prhs[5]) || mxIsComplex(prhs[5]) ||
    ( !(mrows == 2 && ncols == 1) && 
      !(mrows == 1 && ncols == 2))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var6 is wrong.");
    }
  mrows = mxGetM(prhs[6]);
  ncols = mxGetN(prhs[6]);
  if( !mxIsDouble(prhs[6]) || mxIsComplex(prhs[6]) ||
    ( !(mrows == 1 && ncols == 1) && 
      !(mrows == 1 && ncols == 1))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var7 is wrong.");
    }
  mrows = mxGetM(prhs[7]);
  ncols = mxGetN(prhs[7]);
  if( !mxIsDouble(prhs[7]) || mxIsComplex(prhs[7]) ||
    ( !(mrows == 1 && ncols == 1) && 
      !(mrows == 1 && ncols == 1))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var8 is wrong.");
    }
  mrows = mxGetM(prhs[8]);
  ncols = mxGetN(prhs[8]);
  if( !mxIsDouble(prhs[8]) || mxIsComplex(prhs[8]) ||
    ( !(mrows == 2 && ncols == 1) && 
      !(mrows == 1 && ncols == 2))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var9 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
  var3 = mxGetPr(prhs[2]);
  var4 = mxGetPr(prhs[3]);
  var5 = mxGetPr(prhs[4]);
  var6 = mxGetPr(prhs[5]);
  var7 = mxGetPr(prhs[6]);
  var8 = mxGetPr(prhs[7]);
  var9 = mxGetPr(prhs[8]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 8, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3,var4,var5,var6,var7,var8,var9);


}

#else // MATLAB_MEX_FILE

#include "d2y_output_BackStance.hh"

namespace BackStance
{

void d2y_output_BackStance_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4,const double *var5,const double *var6,const double *var7,const double *var8,const double *var9)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4, var5, var6, var7, var8, var9);

}

}

#endif // MATLAB_MEX_FILE
