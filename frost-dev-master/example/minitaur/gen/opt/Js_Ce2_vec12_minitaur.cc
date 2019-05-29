/*
 * Automatically Generated from Mathematica.
 * Tue 28 May 2019 23:30:22 GMT-04:00
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
  p_output1[0]=1;
  p_output1[1]=1;
  p_output1[2]=1;
  p_output1[3]=1;
  p_output1[4]=1;
  p_output1[5]=1;
  p_output1[6]=1;
  p_output1[7]=1;
  p_output1[8]=1;
  p_output1[9]=1;
  p_output1[10]=1;
  p_output1[11]=1;
  p_output1[12]=1;
  p_output1[13]=2;
  p_output1[14]=2;
  p_output1[15]=2;
  p_output1[16]=2;
  p_output1[17]=2;
  p_output1[18]=2;
  p_output1[19]=2;
  p_output1[20]=2;
  p_output1[21]=2;
  p_output1[22]=2;
  p_output1[23]=2;
  p_output1[24]=2;
  p_output1[25]=2;
  p_output1[26]=3;
  p_output1[27]=3;
  p_output1[28]=3;
  p_output1[29]=3;
  p_output1[30]=3;
  p_output1[31]=3;
  p_output1[32]=3;
  p_output1[33]=3;
  p_output1[34]=3;
  p_output1[35]=3;
  p_output1[36]=3;
  p_output1[37]=3;
  p_output1[38]=3;
  p_output1[39]=4;
  p_output1[40]=4;
  p_output1[41]=4;
  p_output1[42]=4;
  p_output1[43]=4;
  p_output1[44]=4;
  p_output1[45]=4;
  p_output1[46]=4;
  p_output1[47]=4;
  p_output1[48]=4;
  p_output1[49]=4;
  p_output1[50]=4;
  p_output1[51]=4;
  p_output1[52]=5;
  p_output1[53]=5;
  p_output1[54]=5;
  p_output1[55]=5;
  p_output1[56]=5;
  p_output1[57]=5;
  p_output1[58]=5;
  p_output1[59]=5;
  p_output1[60]=5;
  p_output1[61]=5;
  p_output1[62]=5;
  p_output1[63]=5;
  p_output1[64]=5;
  p_output1[65]=6;
  p_output1[66]=6;
  p_output1[67]=6;
  p_output1[68]=6;
  p_output1[69]=6;
  p_output1[70]=6;
  p_output1[71]=6;
  p_output1[72]=6;
  p_output1[73]=6;
  p_output1[74]=6;
  p_output1[75]=6;
  p_output1[76]=6;
  p_output1[77]=6;
  p_output1[78]=12;
  p_output1[79]=12;
  p_output1[80]=12;
  p_output1[81]=12;
  p_output1[82]=12;
  p_output1[83]=12;
  p_output1[84]=12;
  p_output1[85]=12;
  p_output1[86]=12;
  p_output1[87]=12;
  p_output1[88]=12;
  p_output1[89]=12;
  p_output1[90]=14;
  p_output1[91]=14;
  p_output1[92]=14;
  p_output1[93]=14;
  p_output1[94]=14;
  p_output1[95]=14;
  p_output1[96]=14;
  p_output1[97]=14;
  p_output1[98]=14;
  p_output1[99]=14;
  p_output1[100]=14;
  p_output1[101]=14;
  p_output1[102]=4;
  p_output1[103]=5;
  p_output1[104]=6;
  p_output1[105]=12;
  p_output1[106]=14;
  p_output1[107]=23;
  p_output1[108]=24;
  p_output1[109]=25;
  p_output1[110]=26;
  p_output1[111]=27;
  p_output1[112]=28;
  p_output1[113]=34;
  p_output1[114]=36;
  p_output1[115]=4;
  p_output1[116]=5;
  p_output1[117]=6;
  p_output1[118]=12;
  p_output1[119]=14;
  p_output1[120]=23;
  p_output1[121]=24;
  p_output1[122]=25;
  p_output1[123]=26;
  p_output1[124]=27;
  p_output1[125]=28;
  p_output1[126]=34;
  p_output1[127]=36;
  p_output1[128]=4;
  p_output1[129]=5;
  p_output1[130]=6;
  p_output1[131]=12;
  p_output1[132]=14;
  p_output1[133]=23;
  p_output1[134]=24;
  p_output1[135]=25;
  p_output1[136]=26;
  p_output1[137]=27;
  p_output1[138]=28;
  p_output1[139]=34;
  p_output1[140]=36;
  p_output1[141]=4;
  p_output1[142]=5;
  p_output1[143]=6;
  p_output1[144]=12;
  p_output1[145]=14;
  p_output1[146]=23;
  p_output1[147]=24;
  p_output1[148]=25;
  p_output1[149]=26;
  p_output1[150]=27;
  p_output1[151]=28;
  p_output1[152]=34;
  p_output1[153]=36;
  p_output1[154]=4;
  p_output1[155]=5;
  p_output1[156]=6;
  p_output1[157]=12;
  p_output1[158]=14;
  p_output1[159]=23;
  p_output1[160]=24;
  p_output1[161]=25;
  p_output1[162]=26;
  p_output1[163]=27;
  p_output1[164]=28;
  p_output1[165]=34;
  p_output1[166]=36;
  p_output1[167]=4;
  p_output1[168]=5;
  p_output1[169]=6;
  p_output1[170]=12;
  p_output1[171]=14;
  p_output1[172]=23;
  p_output1[173]=24;
  p_output1[174]=25;
  p_output1[175]=26;
  p_output1[176]=27;
  p_output1[177]=28;
  p_output1[178]=34;
  p_output1[179]=36;
  p_output1[180]=4;
  p_output1[181]=5;
  p_output1[182]=6;
  p_output1[183]=12;
  p_output1[184]=14;
  p_output1[185]=23;
  p_output1[186]=24;
  p_output1[187]=25;
  p_output1[188]=26;
  p_output1[189]=27;
  p_output1[190]=28;
  p_output1[191]=34;
  p_output1[192]=4;
  p_output1[193]=5;
  p_output1[194]=6;
  p_output1[195]=12;
  p_output1[196]=14;
  p_output1[197]=23;
  p_output1[198]=24;
  p_output1[199]=25;
  p_output1[200]=26;
  p_output1[201]=27;
  p_output1[202]=28;
  p_output1[203]=34;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 102, (mwSize) 2, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "Js_Ce2_vec12_minitaur.hh"

namespace FrontStance
{

void Js_Ce2_vec12_minitaur_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
