/*
 * Automatically Generated from Mathematica.
 * Tue 28 May 2019 22:48:41 GMT-04:00
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
  p_output1[13]=1;
  p_output1[14]=1;
  p_output1[15]=1;
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
  p_output1[26]=2;
  p_output1[27]=2;
  p_output1[28]=2;
  p_output1[29]=2;
  p_output1[30]=2;
  p_output1[31]=2;
  p_output1[32]=3;
  p_output1[33]=3;
  p_output1[34]=3;
  p_output1[35]=3;
  p_output1[36]=3;
  p_output1[37]=3;
  p_output1[38]=3;
  p_output1[39]=3;
  p_output1[40]=3;
  p_output1[41]=3;
  p_output1[42]=3;
  p_output1[43]=3;
  p_output1[44]=3;
  p_output1[45]=3;
  p_output1[46]=3;
  p_output1[47]=3;
  p_output1[48]=4;
  p_output1[49]=4;
  p_output1[50]=4;
  p_output1[51]=4;
  p_output1[52]=4;
  p_output1[53]=4;
  p_output1[54]=4;
  p_output1[55]=4;
  p_output1[56]=4;
  p_output1[57]=4;
  p_output1[58]=4;
  p_output1[59]=4;
  p_output1[60]=4;
  p_output1[61]=4;
  p_output1[62]=4;
  p_output1[63]=4;
  p_output1[64]=5;
  p_output1[65]=5;
  p_output1[66]=5;
  p_output1[67]=5;
  p_output1[68]=5;
  p_output1[69]=5;
  p_output1[70]=5;
  p_output1[71]=5;
  p_output1[72]=5;
  p_output1[73]=5;
  p_output1[74]=5;
  p_output1[75]=5;
  p_output1[76]=5;
  p_output1[77]=5;
  p_output1[78]=5;
  p_output1[79]=5;
  p_output1[80]=6;
  p_output1[81]=6;
  p_output1[82]=6;
  p_output1[83]=6;
  p_output1[84]=6;
  p_output1[85]=6;
  p_output1[86]=6;
  p_output1[87]=6;
  p_output1[88]=6;
  p_output1[89]=6;
  p_output1[90]=6;
  p_output1[91]=6;
  p_output1[92]=6;
  p_output1[93]=6;
  p_output1[94]=6;
  p_output1[95]=6;
  p_output1[96]=7;
  p_output1[97]=7;
  p_output1[98]=7;
  p_output1[99]=7;
  p_output1[100]=7;
  p_output1[101]=7;
  p_output1[102]=7;
  p_output1[103]=7;
  p_output1[104]=7;
  p_output1[105]=7;
  p_output1[106]=7;
  p_output1[107]=7;
  p_output1[108]=7;
  p_output1[109]=7;
  p_output1[110]=7;
  p_output1[111]=7;
  p_output1[112]=8;
  p_output1[113]=8;
  p_output1[114]=8;
  p_output1[115]=8;
  p_output1[116]=8;
  p_output1[117]=8;
  p_output1[118]=8;
  p_output1[119]=8;
  p_output1[120]=8;
  p_output1[121]=8;
  p_output1[122]=8;
  p_output1[123]=8;
  p_output1[124]=8;
  p_output1[125]=8;
  p_output1[126]=8;
  p_output1[127]=8;
  p_output1[128]=1;
  p_output1[129]=2;
  p_output1[130]=9;
  p_output1[131]=10;
  p_output1[132]=31;
  p_output1[133]=32;
  p_output1[134]=53;
  p_output1[135]=54;
  p_output1[136]=69;
  p_output1[137]=77;
  p_output1[138]=85;
  p_output1[139]=93;
  p_output1[140]=101;
  p_output1[141]=109;
  p_output1[142]=117;
  p_output1[143]=118;
  p_output1[144]=1;
  p_output1[145]=2;
  p_output1[146]=9;
  p_output1[147]=10;
  p_output1[148]=31;
  p_output1[149]=32;
  p_output1[150]=53;
  p_output1[151]=54;
  p_output1[152]=70;
  p_output1[153]=78;
  p_output1[154]=86;
  p_output1[155]=94;
  p_output1[156]=102;
  p_output1[157]=110;
  p_output1[158]=117;
  p_output1[159]=118;
  p_output1[160]=1;
  p_output1[161]=2;
  p_output1[162]=13;
  p_output1[163]=14;
  p_output1[164]=35;
  p_output1[165]=36;
  p_output1[166]=57;
  p_output1[167]=58;
  p_output1[168]=71;
  p_output1[169]=79;
  p_output1[170]=87;
  p_output1[171]=95;
  p_output1[172]=103;
  p_output1[173]=111;
  p_output1[174]=117;
  p_output1[175]=118;
  p_output1[176]=1;
  p_output1[177]=2;
  p_output1[178]=13;
  p_output1[179]=14;
  p_output1[180]=35;
  p_output1[181]=36;
  p_output1[182]=57;
  p_output1[183]=58;
  p_output1[184]=72;
  p_output1[185]=80;
  p_output1[186]=88;
  p_output1[187]=96;
  p_output1[188]=104;
  p_output1[189]=112;
  p_output1[190]=117;
  p_output1[191]=118;
  p_output1[192]=1;
  p_output1[193]=2;
  p_output1[194]=17;
  p_output1[195]=18;
  p_output1[196]=39;
  p_output1[197]=40;
  p_output1[198]=61;
  p_output1[199]=62;
  p_output1[200]=73;
  p_output1[201]=81;
  p_output1[202]=89;
  p_output1[203]=97;
  p_output1[204]=105;
  p_output1[205]=113;
  p_output1[206]=117;
  p_output1[207]=118;
  p_output1[208]=1;
  p_output1[209]=2;
  p_output1[210]=17;
  p_output1[211]=18;
  p_output1[212]=39;
  p_output1[213]=40;
  p_output1[214]=61;
  p_output1[215]=62;
  p_output1[216]=74;
  p_output1[217]=82;
  p_output1[218]=90;
  p_output1[219]=98;
  p_output1[220]=106;
  p_output1[221]=114;
  p_output1[222]=117;
  p_output1[223]=118;
  p_output1[224]=1;
  p_output1[225]=2;
  p_output1[226]=21;
  p_output1[227]=22;
  p_output1[228]=43;
  p_output1[229]=44;
  p_output1[230]=65;
  p_output1[231]=66;
  p_output1[232]=75;
  p_output1[233]=83;
  p_output1[234]=91;
  p_output1[235]=99;
  p_output1[236]=107;
  p_output1[237]=115;
  p_output1[238]=117;
  p_output1[239]=118;
  p_output1[240]=1;
  p_output1[241]=2;
  p_output1[242]=21;
  p_output1[243]=22;
  p_output1[244]=43;
  p_output1[245]=44;
  p_output1[246]=65;
  p_output1[247]=66;
  p_output1[248]=76;
  p_output1[249]=84;
  p_output1[250]=92;
  p_output1[251]=100;
  p_output1[252]=108;
  p_output1[253]=116;
  p_output1[254]=117;
  p_output1[255]=118;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 128, (mwSize) 2, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "Js_d2y_output_Flight.hh"

namespace Flight2
{

void Js_d2y_output_Flight_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
