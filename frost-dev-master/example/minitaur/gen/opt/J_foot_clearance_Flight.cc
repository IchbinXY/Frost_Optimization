/*
 * Automatically Generated from Mathematica.
 * Wed 29 May 2019 15:16:54 GMT-04:00
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
  double t12432;
  double t12390;
  double t12575;
  double t12730;
  double t13075;
  double t12858;
  double t13007;
  double t13079;
  double t14447;
  double t14456;
  double t14487;
  double t14506;
  double t14508;
  double t11581;
  double t12389;
  double t13027;
  double t13080;
  double t13081;
  double t13189;
  double t13190;
  double t13194;
  double t14915;
  double t14948;
  double t15813;
  double t14512;
  double t14517;
  double t15822;
  double t14973;
  double t14974;
  double t15545;
  double t15692;
  double t15700;
  double t15720;
  double t15841;
  double t15845;
  double t15846;
  double t15848;
  double t15963;
  double t16017;
  double t16030;
  double t16047;
  double t16087;
  double t16093;
  double t16096;
  double t16181;
  double t16182;
  double t16124;
  double t15832;
  double t16098;
  double t16195;
  double t12738;
  double t12812;
  double t12820;
  double t12837;
  double t13237;
  double t14488;
  double t14521;
  double t14955;
  double t14965;
  double t15816;
  double t15834;
  double t15835;
  double t15836;
  double t15840;
  double t15861;
  double t15863;
  double t15867;
  double t15870;
  double t15880;
  double t16434;
  double t16437;
  double t16439;
  double t16440;
  double t16140;
  double t16450;
  double t16452;
  double t16470;
  double t16471;
  double t16511;
  double t16513;
  double t16514;
  double t16523;
  double t16242;
  double t16265;
  double t16272;
  double t16680;
  double t16681;
  double t16688;
  double t16724;
  double t16730;
  double t16731;
  double t16737;
  double t16738;
  double t16748;
  double t16763;
  double t16765;
  double t16766;
  double t16769;
  double t16773;
  double t16775;
  double t18035;
  double t18061;
  double t18064;
  double t18188;
  double t18190;
  double t18194;
  double t18195;
  double t18203;
  double t18240;
  double t18243;
  double t18245;
  double t18250;
  double t19491;
  double t20675;
  double t21083;
  double t21207;
  double t21232;
  double t21168;
  double t21170;
  double t22815;
  double t21926;
  double t21942;
  double t21951;
  double t22487;
  double t23231;
  double t23261;
  double t23281;
  double t23511;
  double t23519;
  double t23568;
  double t24199;
  double t24016;
  t12432 = Cos(var1[10]);
  t12390 = Sin(var1[3]);
  t12575 = -1.*t12432;
  t12730 = 1. + t12575;
  t13075 = Cos(var1[3]);
  t12858 = Cos(var1[5]);
  t13007 = Sin(var1[4]);
  t13079 = Sin(var1[5]);
  t14447 = Cos(var1[12]);
  t14456 = -1.*t14447;
  t14487 = 1. + t14456;
  t14506 = -3.e-6*t14487;
  t14508 = Sin(var1[12]);
  t11581 = Cos(var1[4]);
  t12389 = Sin(var1[10]);
  t13027 = t12858*t12390*t13007;
  t13080 = t13075*t13079;
  t13081 = t13027 + t13080;
  t13189 = t13075*t12858;
  t13190 = -1.*t12390*t13007*t13079;
  t13194 = t13189 + t13190;
  t14915 = 3.e-6*t14508;
  t14948 = t14506 + t14915;
  t15813 = 3.e-13*var1[12];
  t14512 = -3.e-6*t14508;
  t14517 = t14506 + t14512;
  t15822 = -9.e-12*t14487;
  t14973 = 3.e-6*t11581*t12389*t12390;
  t14974 = 3.e-6*t12730*t13081;
  t15545 = -9.e-12*t12730;
  t15692 = 1. + t15545;
  t15700 = t15692*t13194;
  t15720 = t14973 + t14974 + t15700;
  t15841 = -1.*t11581*t12389*t12390;
  t15845 = t12432*t13081;
  t15846 = 3.e-6*t12730*t13194;
  t15848 = t15841 + t15845 + t15846;
  t15963 = -1.000000000009*t12730;
  t16017 = 1. + t15963;
  t16030 = -1.*t16017*t11581*t12390;
  t16047 = -1.*t12389*t13081;
  t16087 = 3.e-6*t12389*t13194;
  t16093 = t16030 + t16047 + t16087;
  t16096 = 3.e-6*t14487;
  t16181 = -1.000000000009*t14487;
  t16182 = 1. + t16181;
  t16124 = 9.e-12*t14487;
  t15832 = -1.*t14508;
  t16098 = t16096 + t14512;
  t16195 = t16096 + t14915;
  t12738 = -1.8e-12*t12730;
  t12812 = -1. + t12432;
  t12820 = 0.2*t12812;
  t12837 = t12738 + t12820;
  t13237 = 1.e-7*var1[12];
  t14488 = 5.4e-18*t14487;
  t14521 = -0.200000000003*t14517;
  t14955 = 0.100000000003*t14948;
  t14965 = t13237 + t14488 + t14521 + t14955;
  t15816 = -0.2000000000048*t14487;
  t15834 = t15822 + t15832;
  t15835 = 0.100000000003*t15834;
  t15836 = 3.e-7*t14948;
  t15840 = t15813 + t15816 + t15835 + t15836;
  t15861 = 0.1000000000039*t14487;
  t15863 = 3.e-7*t14517;
  t15867 = t15822 + t14508;
  t15870 = -0.200000000003*t15867;
  t15880 = t15813 + t15861 + t15863 + t15870;
  t16434 = -3.e-6*t12730*t13075*t11581*t12858;
  t16437 = 3.e-6*t13075*t12389*t13007;
  t16439 = t15692*t13075*t11581*t13079;
  t16440 = t16434 + t16437 + t16439;
  t16140 = t16124 + t14508;
  t16450 = -1.*t12432*t13075*t11581*t12858;
  t16452 = -1.*t13075*t12389*t13007;
  t16470 = 3.e-6*t12730*t13075*t11581*t13079;
  t16471 = t16450 + t16452 + t16470;
  t16511 = t13075*t11581*t12858*t12389;
  t16513 = -1.*t16017*t13075*t13007;
  t16514 = 3.e-6*t13075*t11581*t12389*t13079;
  t16523 = t16511 + t16513 + t16514;
  t16242 = t16124 + t15832;
  t16265 = -1.8e-11*t14487;
  t16272 = 1. + t16265;
  t16680 = t13075*t12858*t13007;
  t16681 = -1.*t12390*t13079;
  t16688 = t16680 + t16681;
  t16724 = t12858*t12390;
  t16730 = t13075*t13007*t13079;
  t16731 = t16724 + t16730;
  t16737 = t15692*t16688;
  t16738 = 3.e-6*t12730*t16731;
  t16748 = t16737 + t16738;
  t16763 = 3.e-6*t12730*t16688;
  t16765 = t12432*t16731;
  t16766 = t16763 + t16765;
  t16769 = 3.e-6*t12389*t16688;
  t16773 = -1.*t12389*t16731;
  t16775 = t16769 + t16773;
  t18035 = -1.*t13075*t12858*t13007;
  t18061 = t12390*t13079;
  t18064 = t18035 + t18061;
  t18188 = -1.000000000009*t13075*t11581*t12389;
  t18190 = -1.*t12432*t18064;
  t18194 = 3.e-6*t12432*t16731;
  t18195 = t18188 + t18190 + t18194;
  t18203 = -3.e-6*t12432*t13075*t11581;
  t18240 = 3.e-6*t12389*t18064;
  t18243 = -9.e-12*t12389*t16731;
  t18245 = t18203 + t18240 + t18243;
  t18250 = t12432*t13075*t11581;
  t19491 = -1.*t12389*t18064;
  t20675 = 3.e-6*t12389*t16731;
  t21083 = t18250 + t19491 + t20675;
  t21207 = 3.e-6*t14447;
  t21232 = t21207 + t14512;
  t21168 = -3.e-6*t14447;
  t21170 = t21168 + t14512;
  t22815 = -9.e-12*t14508;
  t21926 = -3.e-6*t13075*t11581*t12389;
  t21942 = 3.e-6*t12730*t18064;
  t21951 = t15692*t16731;
  t22487 = t21926 + t21942 + t21951;
  t23231 = t13075*t11581*t12389;
  t23261 = t12432*t18064;
  t23281 = t23231 + t23261 + t16738;
  t23511 = t16017*t13075*t11581;
  t23519 = t23511 + t19491 + t20675;
  t23568 = t21207 + t14915;
  t24199 = t21168 + t14915;
  t24016 = 9.e-12*t14508;
  p_output1[0]=1.;
  p_output1[1]=-0.2000000000018*t11581*t12389*t12390 + t12837*t13081 + 6.000000000054e-7*t12730*t13194 + t14965*t15720 + t15840*t15848 + t15880*t16093 - 0.3*(t15720*t16098 + t15848*t16140 + t16093*t16182) + 0.2*(-1.*t15848*t16182 - 1.*t15720*t16195 - 1.*t16093*t16242) + 0.100001*(t15848*t16098 + t16093*t16195 + t15720*t16272);
  p_output1[2]=-1.*t11581*t12837*t12858*t13075 - 0.2000000000018*t12389*t13007*t13075 + 6.000000000054e-7*t11581*t12730*t13075*t13079 + t14965*t16440 + t15840*t16471 + t15880*t16523 - 0.3*(t16098*t16440 + t16140*t16471 + t16182*t16523) + 0.100001*(t16272*t16440 + t16098*t16471 + t16195*t16523) + 0.2*(-1.*t16195*t16440 - 1.*t16182*t16471 - 1.*t16242*t16523);
  p_output1[3]=6.000000000054e-7*t12730*t16688 + t12837*t16731 + t14965*t16748 + t15840*t16766 + t15880*t16775 - 0.3*(t16098*t16748 + t16140*t16766 + t16182*t16775) + 0.100001*(t16272*t16748 + t16098*t16766 + t16195*t16775) + 0.2*(-1.*t16195*t16748 - 1.*t16182*t16766 - 1.*t16242*t16775);
  p_output1[4]=0.2000000000018*t11581*t12432*t13075 + 6.000000000054e-7*t12389*t16731 - 0.2000000000018*t12389*t18064 + t15880*t18195 + t14965*t18245 + t15840*t21083 + 0.100001*(t16195*t18195 + t16272*t18245 + t16098*t21083) - 0.3*(t16182*t18195 + t16098*t18245 + t16140*t21083) + 0.2*(-1.*t16242*t18195 - 1.*t16195*t18245 - 1.*t16182*t21083);
  p_output1[5]=(1.e-7 + 5.4e-18*t14508 - 0.200000000003*t21170 + 0.100000000003*t21232)*t22487 + (3.e-13 - 0.2000000000048*t14508 + 3.e-7*t21232 + 0.100000000003*(t14456 + t22815))*t23281 + (3.e-13 + 0.1000000000039*t14508 + 3.e-7*t21170 - 0.200000000003*(t14447 + t22815))*t23519 + 0.2*(1.000000000009*t14508*t23281 - 1.*t22487*t23568 - 1.*t23519*(t14456 + t24016)) - 0.3*(-1.000000000009*t14508*t23519 + t23281*(t14447 + t24016) + t22487*t24199) + 0.100001*(-1.8e-11*t14508*t22487 + t23519*t23568 + t23281*t24199);
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

#include "J_foot_clearance_Flight.hh"

namespace Flight2
{

void J_foot_clearance_Flight_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
