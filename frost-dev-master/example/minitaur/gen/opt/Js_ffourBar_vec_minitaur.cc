/*
 * Automatically Generated from Mathematica.
 * Wed 29 May 2019 01:36:40 GMT-04:00
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
  double _NotUsed;
  NULL;
  p_output1[0]=7;
  p_output1[1]=7;
  p_output1[2]=7;
  p_output1[3]=7;
  p_output1[4]=8;
  p_output1[5]=8;
  p_output1[6]=8;
  p_output1[7]=8;
  p_output1[8]=9;
  p_output1[9]=9;
  p_output1[10]=9;
  p_output1[11]=9;
  p_output1[12]=10;
  p_output1[13]=10;
  p_output1[14]=10;
  p_output1[15]=10;
  p_output1[16]=11;
  p_output1[17]=11;
  p_output1[18]=11;
  p_output1[19]=11;
  p_output1[20]=12;
  p_output1[21]=12;
  p_output1[22]=12;
  p_output1[23]=12;
  p_output1[24]=13;
  p_output1[25]=13;
  p_output1[26]=13;
  p_output1[27]=13;
  p_output1[28]=14;
  p_output1[29]=14;
  p_output1[30]=14;
  p_output1[31]=14;
  p_output1[32]=15;
  p_output1[33]=15;
  p_output1[34]=15;
  p_output1[35]=15;
  p_output1[36]=16;
  p_output1[37]=16;
  p_output1[38]=16;
  p_output1[39]=16;
  p_output1[40]=17;
  p_output1[41]=17;
  p_output1[42]=17;
  p_output1[43]=17;
  p_output1[44]=18;
  p_output1[45]=18;
  p_output1[46]=18;
  p_output1[47]=18;
  p_output1[48]=19;
  p_output1[49]=19;
  p_output1[50]=19;
  p_output1[51]=19;
  p_output1[52]=20;
  p_output1[53]=20;
  p_output1[54]=20;
  p_output1[55]=20;
  p_output1[56]=21;
  p_output1[57]=21;
  p_output1[58]=21;
  p_output1[59]=21;
  p_output1[60]=22;
  p_output1[61]=22;
  p_output1[62]=22;
  p_output1[63]=22;
  p_output1[64]=7;
  p_output1[65]=9;
  p_output1[66]=25;
  p_output1[67]=26;
  p_output1[68]=8;
  p_output1[69]=10;
  p_output1[70]=25;
  p_output1[71]=26;
  p_output1[72]=7;
  p_output1[73]=9;
  p_output1[74]=25;
  p_output1[75]=26;
  p_output1[76]=8;
  p_output1[77]=10;
  p_output1[78]=25;
  p_output1[79]=26;
  p_output1[80]=11;
  p_output1[81]=13;
  p_output1[82]=29;
  p_output1[83]=30;
  p_output1[84]=12;
  p_output1[85]=14;
  p_output1[86]=29;
  p_output1[87]=30;
  p_output1[88]=11;
  p_output1[89]=13;
  p_output1[90]=29;
  p_output1[91]=30;
  p_output1[92]=12;
  p_output1[93]=14;
  p_output1[94]=29;
  p_output1[95]=30;
  p_output1[96]=15;
  p_output1[97]=17;
  p_output1[98]=23;
  p_output1[99]=24;
  p_output1[100]=16;
  p_output1[101]=18;
  p_output1[102]=23;
  p_output1[103]=24;
  p_output1[104]=15;
  p_output1[105]=17;
  p_output1[106]=23;
  p_output1[107]=24;
  p_output1[108]=16;
  p_output1[109]=18;
  p_output1[110]=23;
  p_output1[111]=24;
  p_output1[112]=19;
  p_output1[113]=21;
  p_output1[114]=27;
  p_output1[115]=28;
  p_output1[116]=20;
  p_output1[117]=22;
  p_output1[118]=27;
  p_output1[119]=28;
  p_output1[120]=19;
  p_output1[121]=21;
  p_output1[122]=27;
  p_output1[123]=28;
  p_output1[124]=20;
  p_output1[125]=22;
  p_output1[126]=27;
  p_output1[127]=28;
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
    ( !(mrows == 1 && ncols == 1) && 
      !(mrows == 1 && ncols == 1))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var1 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 64, (mwSize) 2, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "Js_ffourBar_vec_minitaur.hh"

namespace FrontStance
{

void Js_ffourBar_vec_minitaur_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
