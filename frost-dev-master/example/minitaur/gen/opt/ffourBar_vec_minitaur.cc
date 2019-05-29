/*
 * Automatically Generated from Mathematica.
 * Tue 28 May 2019 23:14:19 GMT-04:00
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
  double t361;
  double t835;
  double t574;
  double t736;
  double t839;
  double t889;
  double t952;
  double t1096;
  double t955;
  double t1021;
  double t1097;
  double t1151;
  double t14539;
  double t41615;
  double t19604;
  double t32367;
  double t41720;
  double t45227;
  double t48757;
  double t48888;
  double t48759;
  double t48816;
  double t48889;
  double t48978;
  t361 = var1[6] + var1[8];
  t835 = var1[9] + var1[7];
  t574 = Cos(t361);
  t736 = Sin(t361);
  t839 = Cos(t835);
  t889 = Sin(t835);
  t952 = var1[10] + var1[12];
  t1096 = var1[11] + var1[13];
  t955 = Cos(t952);
  t1021 = Sin(t952);
  t1097 = Cos(t1096);
  t1151 = Sin(t1096);
  t14539 = var1[14] + var1[16];
  t41615 = var1[15] + var1[17];
  t19604 = Cos(t14539);
  t32367 = Sin(t14539);
  t41720 = Cos(t41615);
  t45227 = Sin(t41615);
  t48757 = var1[18] + var1[20];
  t48888 = var1[19] + var1[21];
  t48759 = Cos(t48757);
  t48816 = Sin(t48757);
  t48889 = Cos(t48888);
  t48978 = Sin(t48888);
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=(0.1*t574 + 0.05*Cos(var1[6]))*var2[2] + var2[3]*(-0.1*t736 - 0.05*Sin(var1[6]));
  p_output1[7]=(-0.1*t839 - 0.05*Cos(var1[7]))*var2[2] + var2[3]*(0.1*t889 + 0.05*Sin(var1[7]));
  p_output1[8]=0.1*t574*var2[2] - 0.1*t736*var2[3];
  p_output1[9]=-0.1*t839*var2[2] + 0.1*t889*var2[3];
  p_output1[10]=(0.1*t955 + 0.05*Cos(var1[10]))*var2[6] + var2[7]*(-0.1*t1021 - 0.05*Sin(var1[10]));
  p_output1[11]=(-0.1*t1097 - 0.05*Cos(var1[11]))*var2[6] + var2[7]*(0.1*t1151 + 0.05*Sin(var1[11]));
  p_output1[12]=0.1*t955*var2[6] - 0.1*t1021*var2[7];
  p_output1[13]=-0.1*t1097*var2[6] + 0.1*t1151*var2[7];
  p_output1[14]=(0.1*t19604 + 0.05*Cos(var1[14]))*var2[0] + var2[1]*(-0.1*t32367 - 0.05*Sin(var1[14]));
  p_output1[15]=(-0.1*t41720 - 0.05*Cos(var1[15]))*var2[0] + var2[1]*(0.1*t45227 + 0.05*Sin(var1[15]));
  p_output1[16]=0.1*t19604*var2[0] - 0.1*t32367*var2[1];
  p_output1[17]=-0.1*t41720*var2[0] + 0.1*t45227*var2[1];
  p_output1[18]=(0.1*t48759 + 0.05*Cos(var1[18]))*var2[4] + var2[5]*(-0.1*t48816 - 0.05*Sin(var1[18]));
  p_output1[19]=(-0.1*t48889 - 0.05*Cos(var1[19]))*var2[4] + var2[5]*(0.1*t48978 + 0.05*Sin(var1[19]));
  p_output1[20]=0.1*t48759*var2[4] - 0.1*t48816*var2[5];
  p_output1[21]=-0.1*t48889*var2[4] + 0.1*t48978*var2[5];
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
    ( !(mrows == 8 && ncols == 1) && 
      !(mrows == 1 && ncols == 8))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var2 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 22, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "ffourBar_vec_minitaur.hh"

namespace FrontStance
{

void ffourBar_vec_minitaur_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
