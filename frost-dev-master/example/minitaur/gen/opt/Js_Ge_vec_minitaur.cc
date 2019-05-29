/*
 * Automatically Generated from Mathematica.
 * Wed 29 May 2019 01:36:24 GMT-04:00
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
  p_output1[0]=4;
  p_output1[1]=4;
  p_output1[2]=4;
  p_output1[3]=4;
  p_output1[4]=4;
  p_output1[5]=4;
  p_output1[6]=4;
  p_output1[7]=4;
  p_output1[8]=4;
  p_output1[9]=4;
  p_output1[10]=4;
  p_output1[11]=4;
  p_output1[12]=4;
  p_output1[13]=4;
  p_output1[14]=4;
  p_output1[15]=4;
  p_output1[16]=4;
  p_output1[17]=4;
  p_output1[18]=4;
  p_output1[19]=5;
  p_output1[20]=5;
  p_output1[21]=5;
  p_output1[22]=5;
  p_output1[23]=5;
  p_output1[24]=5;
  p_output1[25]=5;
  p_output1[26]=5;
  p_output1[27]=5;
  p_output1[28]=5;
  p_output1[29]=5;
  p_output1[30]=5;
  p_output1[31]=5;
  p_output1[32]=5;
  p_output1[33]=5;
  p_output1[34]=5;
  p_output1[35]=5;
  p_output1[36]=5;
  p_output1[37]=5;
  p_output1[38]=6;
  p_output1[39]=6;
  p_output1[40]=6;
  p_output1[41]=6;
  p_output1[42]=6;
  p_output1[43]=6;
  p_output1[44]=6;
  p_output1[45]=6;
  p_output1[46]=6;
  p_output1[47]=6;
  p_output1[48]=6;
  p_output1[49]=6;
  p_output1[50]=6;
  p_output1[51]=6;
  p_output1[52]=6;
  p_output1[53]=6;
  p_output1[54]=6;
  p_output1[55]=6;
  p_output1[56]=6;
  p_output1[57]=7;
  p_output1[58]=7;
  p_output1[59]=7;
  p_output1[60]=7;
  p_output1[61]=7;
  p_output1[62]=8;
  p_output1[63]=8;
  p_output1[64]=8;
  p_output1[65]=8;
  p_output1[66]=8;
  p_output1[67]=9;
  p_output1[68]=9;
  p_output1[69]=9;
  p_output1[70]=9;
  p_output1[71]=9;
  p_output1[72]=10;
  p_output1[73]=10;
  p_output1[74]=10;
  p_output1[75]=10;
  p_output1[76]=10;
  p_output1[77]=11;
  p_output1[78]=11;
  p_output1[79]=11;
  p_output1[80]=11;
  p_output1[81]=11;
  p_output1[82]=12;
  p_output1[83]=12;
  p_output1[84]=12;
  p_output1[85]=12;
  p_output1[86]=12;
  p_output1[87]=13;
  p_output1[88]=13;
  p_output1[89]=13;
  p_output1[90]=13;
  p_output1[91]=13;
  p_output1[92]=14;
  p_output1[93]=14;
  p_output1[94]=14;
  p_output1[95]=14;
  p_output1[96]=14;
  p_output1[97]=15;
  p_output1[98]=15;
  p_output1[99]=15;
  p_output1[100]=15;
  p_output1[101]=15;
  p_output1[102]=16;
  p_output1[103]=16;
  p_output1[104]=16;
  p_output1[105]=16;
  p_output1[106]=16;
  p_output1[107]=17;
  p_output1[108]=17;
  p_output1[109]=17;
  p_output1[110]=17;
  p_output1[111]=17;
  p_output1[112]=18;
  p_output1[113]=18;
  p_output1[114]=18;
  p_output1[115]=18;
  p_output1[116]=18;
  p_output1[117]=19;
  p_output1[118]=19;
  p_output1[119]=19;
  p_output1[120]=19;
  p_output1[121]=19;
  p_output1[122]=20;
  p_output1[123]=20;
  p_output1[124]=20;
  p_output1[125]=20;
  p_output1[126]=20;
  p_output1[127]=21;
  p_output1[128]=21;
  p_output1[129]=21;
  p_output1[130]=21;
  p_output1[131]=21;
  p_output1[132]=22;
  p_output1[133]=22;
  p_output1[134]=22;
  p_output1[135]=22;
  p_output1[136]=22;
  p_output1[137]=4;
  p_output1[138]=5;
  p_output1[139]=6;
  p_output1[140]=7;
  p_output1[141]=8;
  p_output1[142]=9;
  p_output1[143]=10;
  p_output1[144]=11;
  p_output1[145]=12;
  p_output1[146]=13;
  p_output1[147]=14;
  p_output1[148]=15;
  p_output1[149]=16;
  p_output1[150]=17;
  p_output1[151]=18;
  p_output1[152]=19;
  p_output1[153]=20;
  p_output1[154]=21;
  p_output1[155]=22;
  p_output1[156]=4;
  p_output1[157]=5;
  p_output1[158]=6;
  p_output1[159]=7;
  p_output1[160]=8;
  p_output1[161]=9;
  p_output1[162]=10;
  p_output1[163]=11;
  p_output1[164]=12;
  p_output1[165]=13;
  p_output1[166]=14;
  p_output1[167]=15;
  p_output1[168]=16;
  p_output1[169]=17;
  p_output1[170]=18;
  p_output1[171]=19;
  p_output1[172]=20;
  p_output1[173]=21;
  p_output1[174]=22;
  p_output1[175]=4;
  p_output1[176]=5;
  p_output1[177]=6;
  p_output1[178]=7;
  p_output1[179]=8;
  p_output1[180]=9;
  p_output1[181]=10;
  p_output1[182]=11;
  p_output1[183]=12;
  p_output1[184]=13;
  p_output1[185]=14;
  p_output1[186]=15;
  p_output1[187]=16;
  p_output1[188]=17;
  p_output1[189]=18;
  p_output1[190]=19;
  p_output1[191]=20;
  p_output1[192]=21;
  p_output1[193]=22;
  p_output1[194]=4;
  p_output1[195]=5;
  p_output1[196]=6;
  p_output1[197]=7;
  p_output1[198]=9;
  p_output1[199]=4;
  p_output1[200]=5;
  p_output1[201]=6;
  p_output1[202]=8;
  p_output1[203]=10;
  p_output1[204]=4;
  p_output1[205]=5;
  p_output1[206]=6;
  p_output1[207]=7;
  p_output1[208]=9;
  p_output1[209]=4;
  p_output1[210]=5;
  p_output1[211]=6;
  p_output1[212]=8;
  p_output1[213]=10;
  p_output1[214]=4;
  p_output1[215]=5;
  p_output1[216]=6;
  p_output1[217]=11;
  p_output1[218]=13;
  p_output1[219]=4;
  p_output1[220]=5;
  p_output1[221]=6;
  p_output1[222]=12;
  p_output1[223]=14;
  p_output1[224]=4;
  p_output1[225]=5;
  p_output1[226]=6;
  p_output1[227]=11;
  p_output1[228]=13;
  p_output1[229]=4;
  p_output1[230]=5;
  p_output1[231]=6;
  p_output1[232]=12;
  p_output1[233]=14;
  p_output1[234]=4;
  p_output1[235]=5;
  p_output1[236]=6;
  p_output1[237]=15;
  p_output1[238]=17;
  p_output1[239]=4;
  p_output1[240]=5;
  p_output1[241]=6;
  p_output1[242]=16;
  p_output1[243]=18;
  p_output1[244]=4;
  p_output1[245]=5;
  p_output1[246]=6;
  p_output1[247]=15;
  p_output1[248]=17;
  p_output1[249]=4;
  p_output1[250]=5;
  p_output1[251]=6;
  p_output1[252]=16;
  p_output1[253]=18;
  p_output1[254]=4;
  p_output1[255]=5;
  p_output1[256]=6;
  p_output1[257]=19;
  p_output1[258]=21;
  p_output1[259]=4;
  p_output1[260]=5;
  p_output1[261]=6;
  p_output1[262]=20;
  p_output1[263]=22;
  p_output1[264]=4;
  p_output1[265]=5;
  p_output1[266]=6;
  p_output1[267]=19;
  p_output1[268]=21;
  p_output1[269]=4;
  p_output1[270]=5;
  p_output1[271]=6;
  p_output1[272]=20;
  p_output1[273]=22;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 137, (mwSize) 2, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "Js_Ge_vec_minitaur.hh"

namespace FrontStance
{

void Js_Ge_vec_minitaur_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
