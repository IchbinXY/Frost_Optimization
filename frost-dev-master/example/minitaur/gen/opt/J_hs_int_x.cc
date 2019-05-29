/*
 * Automatically Generated from Mathematica.
 * Tue 28 May 2019 22:47:45 GMT-04:00
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
static void output1(double *p_output1,const double *var1,const double *var2,const double *var3,const double *var4,const double *var5,const double *var6,const double *var7,const double *var8)
{
  double t77;
  double t459;
  double t3395;
  double t4616;
  double t5265;
  double t5284;
  double t5294;
  double t5306;
  double t5307;
  double t5301;
  double t7091;
  double t7170;
  double t11975;
  double t11993;
  double t12246;
  double t12253;
  double t14605;
  double t14607;
  double t14628;
  double t14630;
  double t14641;
  double t14642;
  double t14649;
  double t14651;
  double t15304;
  double t15460;
  double t17026;
  double t17680;
  double t17838;
  double t17928;
  double t18042;
  double t18088;
  double t18100;
  double t18102;
  double t18105;
  double t18123;
  double t18135;
  double t18138;
  double t18151;
  double t18178;
  double t18190;
  double t18193;
  double t18197;
  double t18200;
  double t18225;
  double t18228;
  double t18231;
  double t18234;
  double t18347;
  double t18418;
  double t18421;
  double t18455;
  double t18528;
  double t18532;
  double t18520;
  double t18524;
  double t18536;
  double t18537;
  double t18540;
  double t18541;
  double t18545;
  double t18546;
  double t18583;
  double t18611;
  double t18618;
  double t18619;
  double t18623;
  double t18624;
  double t18628;
  double t18629;
  double t18633;
  double t18634;
  double t18668;
  double t18670;
  double t18702;
  double t18703;
  double t18711;
  double t18715;
  double t18721;
  double t18727;
  double t18848;
  double t18849;
  double t18942;
  double t18944;
  double t18957;
  double t18958;
  double t18983;
  double t18985;
  double t18988;
  double t18990;
  double t19185;
  double t19318;
  double t19510;
  double t19521;
  double t19545;
  double t19546;
  t77 = 4.*var5[0];
  t459 = t77 + var7[0] + var3[0];
  t3395 = -1. + var8[0];
  t4616 = 1/t3395;
  t5265 = -1.*var1[0];
  t5284 = t5265 + var1[1];
  t5294 = -0.333333333333333*t4616*t5284;
  t5306 = 4.*var5[1];
  t5307 = t5306 + var7[1] + var3[1];
  t5301 = -1.33333333333333*t4616*t5284;
  t7091 = 4.*var5[2];
  t7170 = t7091 + var7[2] + var3[2];
  t11975 = 4.*var5[3];
  t11993 = t11975 + var7[3] + var3[3];
  t12246 = 4.*var5[4];
  t12253 = t12246 + var7[4] + var3[4];
  t14605 = 4.*var5[5];
  t14607 = t14605 + var7[5] + var3[5];
  t14628 = 4.*var5[6];
  t14630 = t14628 + var7[6] + var3[6];
  t14641 = 4.*var5[7];
  t14642 = t14641 + var7[7] + var3[7];
  t14649 = 4.*var5[8];
  t14651 = t14649 + var7[8] + var3[8];
  t15304 = 4.*var5[9];
  t15460 = t15304 + var7[9] + var3[9];
  t17026 = 4.*var5[10];
  t17680 = t17026 + var7[10] + var3[10];
  t17838 = 4.*var5[11];
  t17928 = t17838 + var7[11] + var3[11];
  t18042 = 4.*var5[12];
  t18088 = t18042 + var7[12] + var3[12];
  t18100 = 4.*var5[13];
  t18102 = t18100 + var7[13] + var3[13];
  t18105 = 4.*var5[14];
  t18123 = t18105 + var7[14] + var3[14];
  t18135 = 4.*var5[15];
  t18138 = t18135 + var7[15] + var3[15];
  t18151 = 4.*var5[16];
  t18178 = t18151 + var7[16] + var3[16];
  t18190 = 4.*var5[17];
  t18193 = t18190 + var7[17] + var3[17];
  t18197 = 4.*var5[18];
  t18200 = t18197 + var7[18] + var3[18];
  t18225 = 4.*var5[19];
  t18228 = t18225 + var7[19] + var3[19];
  t18231 = 4.*var5[20];
  t18234 = t18231 + var7[20] + var3[20];
  t18347 = 4.*var5[21];
  t18418 = t18347 + var7[21] + var3[21];
  t18421 = -1.*var7[0];
  t18455 = t18421 + var3[0];
  t18528 = -1.*var7[1];
  t18532 = t18528 + var3[1];
  t18520 = -0.25*t4616*t5284;
  t18524 = 0.25*t4616*t5284;
  t18536 = -1.*var7[2];
  t18537 = t18536 + var3[2];
  t18540 = -1.*var7[3];
  t18541 = t18540 + var3[3];
  t18545 = -1.*var7[4];
  t18546 = t18545 + var3[4];
  t18583 = -1.*var7[5];
  t18611 = t18583 + var3[5];
  t18618 = -1.*var7[6];
  t18619 = t18618 + var3[6];
  t18623 = -1.*var7[7];
  t18624 = t18623 + var3[7];
  t18628 = -1.*var7[8];
  t18629 = t18628 + var3[8];
  t18633 = -1.*var7[9];
  t18634 = t18633 + var3[9];
  t18668 = -1.*var7[10];
  t18670 = t18668 + var3[10];
  t18702 = -1.*var7[11];
  t18703 = t18702 + var3[11];
  t18711 = -1.*var7[12];
  t18715 = t18711 + var3[12];
  t18721 = -1.*var7[13];
  t18727 = t18721 + var3[13];
  t18848 = -1.*var7[14];
  t18849 = t18848 + var3[14];
  t18942 = -1.*var7[15];
  t18944 = t18942 + var3[15];
  t18957 = -1.*var7[16];
  t18958 = t18957 + var3[16];
  t18983 = -1.*var7[17];
  t18985 = t18983 + var3[17];
  t18988 = -1.*var7[18];
  t18990 = t18988 + var3[18];
  t19185 = -1.*var7[19];
  t19318 = t19185 + var3[19];
  t19510 = -1.*var7[20];
  t19521 = t19510 + var3[20];
  t19545 = -1.*var7[21];
  t19546 = t19545 + var3[21];
  p_output1[0]=0.333333333333333*t459*t4616;
  p_output1[1]=-0.333333333333333*t459*t4616;
  p_output1[2]=-1.;
  p_output1[3]=t5294;
  p_output1[4]=t5301;
  p_output1[5]=1.;
  p_output1[6]=t5294;
  p_output1[7]=0.333333333333333*t4616*t5307;
  p_output1[8]=-0.333333333333333*t4616*t5307;
  p_output1[9]=-1.;
  p_output1[10]=t5294;
  p_output1[11]=t5301;
  p_output1[12]=1.;
  p_output1[13]=t5294;
  p_output1[14]=0.333333333333333*t4616*t7170;
  p_output1[15]=-0.333333333333333*t4616*t7170;
  p_output1[16]=-1.;
  p_output1[17]=t5294;
  p_output1[18]=t5301;
  p_output1[19]=1.;
  p_output1[20]=t5294;
  p_output1[21]=0.333333333333333*t11993*t4616;
  p_output1[22]=-0.333333333333333*t11993*t4616;
  p_output1[23]=-1.;
  p_output1[24]=t5294;
  p_output1[25]=t5301;
  p_output1[26]=1.;
  p_output1[27]=t5294;
  p_output1[28]=0.333333333333333*t12253*t4616;
  p_output1[29]=-0.333333333333333*t12253*t4616;
  p_output1[30]=-1.;
  p_output1[31]=t5294;
  p_output1[32]=t5301;
  p_output1[33]=1.;
  p_output1[34]=t5294;
  p_output1[35]=0.333333333333333*t14607*t4616;
  p_output1[36]=-0.333333333333333*t14607*t4616;
  p_output1[37]=-1.;
  p_output1[38]=t5294;
  p_output1[39]=t5301;
  p_output1[40]=1.;
  p_output1[41]=t5294;
  p_output1[42]=0.333333333333333*t14630*t4616;
  p_output1[43]=-0.333333333333333*t14630*t4616;
  p_output1[44]=-1.;
  p_output1[45]=t5294;
  p_output1[46]=t5301;
  p_output1[47]=1.;
  p_output1[48]=t5294;
  p_output1[49]=0.333333333333333*t14642*t4616;
  p_output1[50]=-0.333333333333333*t14642*t4616;
  p_output1[51]=-1.;
  p_output1[52]=t5294;
  p_output1[53]=t5301;
  p_output1[54]=1.;
  p_output1[55]=t5294;
  p_output1[56]=0.333333333333333*t14651*t4616;
  p_output1[57]=-0.333333333333333*t14651*t4616;
  p_output1[58]=-1.;
  p_output1[59]=t5294;
  p_output1[60]=t5301;
  p_output1[61]=1.;
  p_output1[62]=t5294;
  p_output1[63]=0.333333333333333*t15460*t4616;
  p_output1[64]=-0.333333333333333*t15460*t4616;
  p_output1[65]=-1.;
  p_output1[66]=t5294;
  p_output1[67]=t5301;
  p_output1[68]=1.;
  p_output1[69]=t5294;
  p_output1[70]=0.333333333333333*t17680*t4616;
  p_output1[71]=-0.333333333333333*t17680*t4616;
  p_output1[72]=-1.;
  p_output1[73]=t5294;
  p_output1[74]=t5301;
  p_output1[75]=1.;
  p_output1[76]=t5294;
  p_output1[77]=0.333333333333333*t17928*t4616;
  p_output1[78]=-0.333333333333333*t17928*t4616;
  p_output1[79]=-1.;
  p_output1[80]=t5294;
  p_output1[81]=t5301;
  p_output1[82]=1.;
  p_output1[83]=t5294;
  p_output1[84]=0.333333333333333*t18088*t4616;
  p_output1[85]=-0.333333333333333*t18088*t4616;
  p_output1[86]=-1.;
  p_output1[87]=t5294;
  p_output1[88]=t5301;
  p_output1[89]=1.;
  p_output1[90]=t5294;
  p_output1[91]=0.333333333333333*t18102*t4616;
  p_output1[92]=-0.333333333333333*t18102*t4616;
  p_output1[93]=-1.;
  p_output1[94]=t5294;
  p_output1[95]=t5301;
  p_output1[96]=1.;
  p_output1[97]=t5294;
  p_output1[98]=0.333333333333333*t18123*t4616;
  p_output1[99]=-0.333333333333333*t18123*t4616;
  p_output1[100]=-1.;
  p_output1[101]=t5294;
  p_output1[102]=t5301;
  p_output1[103]=1.;
  p_output1[104]=t5294;
  p_output1[105]=0.333333333333333*t18138*t4616;
  p_output1[106]=-0.333333333333333*t18138*t4616;
  p_output1[107]=-1.;
  p_output1[108]=t5294;
  p_output1[109]=t5301;
  p_output1[110]=1.;
  p_output1[111]=t5294;
  p_output1[112]=0.333333333333333*t18178*t4616;
  p_output1[113]=-0.333333333333333*t18178*t4616;
  p_output1[114]=-1.;
  p_output1[115]=t5294;
  p_output1[116]=t5301;
  p_output1[117]=1.;
  p_output1[118]=t5294;
  p_output1[119]=0.333333333333333*t18193*t4616;
  p_output1[120]=-0.333333333333333*t18193*t4616;
  p_output1[121]=-1.;
  p_output1[122]=t5294;
  p_output1[123]=t5301;
  p_output1[124]=1.;
  p_output1[125]=t5294;
  p_output1[126]=0.333333333333333*t18200*t4616;
  p_output1[127]=-0.333333333333333*t18200*t4616;
  p_output1[128]=-1.;
  p_output1[129]=t5294;
  p_output1[130]=t5301;
  p_output1[131]=1.;
  p_output1[132]=t5294;
  p_output1[133]=0.333333333333333*t18228*t4616;
  p_output1[134]=-0.333333333333333*t18228*t4616;
  p_output1[135]=-1.;
  p_output1[136]=t5294;
  p_output1[137]=t5301;
  p_output1[138]=1.;
  p_output1[139]=t5294;
  p_output1[140]=0.333333333333333*t18234*t4616;
  p_output1[141]=-0.333333333333333*t18234*t4616;
  p_output1[142]=-1.;
  p_output1[143]=t5294;
  p_output1[144]=t5301;
  p_output1[145]=1.;
  p_output1[146]=t5294;
  p_output1[147]=0.333333333333333*t18418*t4616;
  p_output1[148]=-0.333333333333333*t18418*t4616;
  p_output1[149]=-1.;
  p_output1[150]=t5294;
  p_output1[151]=t5301;
  p_output1[152]=1.;
  p_output1[153]=t5294;
  p_output1[154]=0.25*t18455*t4616;
  p_output1[155]=-0.25*t18455*t4616;
  p_output1[156]=-0.5;
  p_output1[157]=t18520;
  p_output1[158]=1.;
  p_output1[159]=-0.5;
  p_output1[160]=t18524;
  p_output1[161]=0.25*t18532*t4616;
  p_output1[162]=-0.25*t18532*t4616;
  p_output1[163]=-0.5;
  p_output1[164]=t18520;
  p_output1[165]=1.;
  p_output1[166]=-0.5;
  p_output1[167]=t18524;
  p_output1[168]=0.25*t18537*t4616;
  p_output1[169]=-0.25*t18537*t4616;
  p_output1[170]=-0.5;
  p_output1[171]=t18520;
  p_output1[172]=1.;
  p_output1[173]=-0.5;
  p_output1[174]=t18524;
  p_output1[175]=0.25*t18541*t4616;
  p_output1[176]=-0.25*t18541*t4616;
  p_output1[177]=-0.5;
  p_output1[178]=t18520;
  p_output1[179]=1.;
  p_output1[180]=-0.5;
  p_output1[181]=t18524;
  p_output1[182]=0.25*t18546*t4616;
  p_output1[183]=-0.25*t18546*t4616;
  p_output1[184]=-0.5;
  p_output1[185]=t18520;
  p_output1[186]=1.;
  p_output1[187]=-0.5;
  p_output1[188]=t18524;
  p_output1[189]=0.25*t18611*t4616;
  p_output1[190]=-0.25*t18611*t4616;
  p_output1[191]=-0.5;
  p_output1[192]=t18520;
  p_output1[193]=1.;
  p_output1[194]=-0.5;
  p_output1[195]=t18524;
  p_output1[196]=0.25*t18619*t4616;
  p_output1[197]=-0.25*t18619*t4616;
  p_output1[198]=-0.5;
  p_output1[199]=t18520;
  p_output1[200]=1.;
  p_output1[201]=-0.5;
  p_output1[202]=t18524;
  p_output1[203]=0.25*t18624*t4616;
  p_output1[204]=-0.25*t18624*t4616;
  p_output1[205]=-0.5;
  p_output1[206]=t18520;
  p_output1[207]=1.;
  p_output1[208]=-0.5;
  p_output1[209]=t18524;
  p_output1[210]=0.25*t18629*t4616;
  p_output1[211]=-0.25*t18629*t4616;
  p_output1[212]=-0.5;
  p_output1[213]=t18520;
  p_output1[214]=1.;
  p_output1[215]=-0.5;
  p_output1[216]=t18524;
  p_output1[217]=0.25*t18634*t4616;
  p_output1[218]=-0.25*t18634*t4616;
  p_output1[219]=-0.5;
  p_output1[220]=t18520;
  p_output1[221]=1.;
  p_output1[222]=-0.5;
  p_output1[223]=t18524;
  p_output1[224]=0.25*t18670*t4616;
  p_output1[225]=-0.25*t18670*t4616;
  p_output1[226]=-0.5;
  p_output1[227]=t18520;
  p_output1[228]=1.;
  p_output1[229]=-0.5;
  p_output1[230]=t18524;
  p_output1[231]=0.25*t18703*t4616;
  p_output1[232]=-0.25*t18703*t4616;
  p_output1[233]=-0.5;
  p_output1[234]=t18520;
  p_output1[235]=1.;
  p_output1[236]=-0.5;
  p_output1[237]=t18524;
  p_output1[238]=0.25*t18715*t4616;
  p_output1[239]=-0.25*t18715*t4616;
  p_output1[240]=-0.5;
  p_output1[241]=t18520;
  p_output1[242]=1.;
  p_output1[243]=-0.5;
  p_output1[244]=t18524;
  p_output1[245]=0.25*t18727*t4616;
  p_output1[246]=-0.25*t18727*t4616;
  p_output1[247]=-0.5;
  p_output1[248]=t18520;
  p_output1[249]=1.;
  p_output1[250]=-0.5;
  p_output1[251]=t18524;
  p_output1[252]=0.25*t18849*t4616;
  p_output1[253]=-0.25*t18849*t4616;
  p_output1[254]=-0.5;
  p_output1[255]=t18520;
  p_output1[256]=1.;
  p_output1[257]=-0.5;
  p_output1[258]=t18524;
  p_output1[259]=0.25*t18944*t4616;
  p_output1[260]=-0.25*t18944*t4616;
  p_output1[261]=-0.5;
  p_output1[262]=t18520;
  p_output1[263]=1.;
  p_output1[264]=-0.5;
  p_output1[265]=t18524;
  p_output1[266]=0.25*t18958*t4616;
  p_output1[267]=-0.25*t18958*t4616;
  p_output1[268]=-0.5;
  p_output1[269]=t18520;
  p_output1[270]=1.;
  p_output1[271]=-0.5;
  p_output1[272]=t18524;
  p_output1[273]=0.25*t18985*t4616;
  p_output1[274]=-0.25*t18985*t4616;
  p_output1[275]=-0.5;
  p_output1[276]=t18520;
  p_output1[277]=1.;
  p_output1[278]=-0.5;
  p_output1[279]=t18524;
  p_output1[280]=0.25*t18990*t4616;
  p_output1[281]=-0.25*t18990*t4616;
  p_output1[282]=-0.5;
  p_output1[283]=t18520;
  p_output1[284]=1.;
  p_output1[285]=-0.5;
  p_output1[286]=t18524;
  p_output1[287]=0.25*t19318*t4616;
  p_output1[288]=-0.25*t19318*t4616;
  p_output1[289]=-0.5;
  p_output1[290]=t18520;
  p_output1[291]=1.;
  p_output1[292]=-0.5;
  p_output1[293]=t18524;
  p_output1[294]=0.25*t19521*t4616;
  p_output1[295]=-0.25*t19521*t4616;
  p_output1[296]=-0.5;
  p_output1[297]=t18520;
  p_output1[298]=1.;
  p_output1[299]=-0.5;
  p_output1[300]=t18524;
  p_output1[301]=0.25*t19546*t4616;
  p_output1[302]=-0.25*t19546*t4616;
  p_output1[303]=-0.5;
  p_output1[304]=t18520;
  p_output1[305]=1.;
  p_output1[306]=-0.5;
  p_output1[307]=t18524;
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

  double *var1,*var2,*var3,*var4,*var5,*var6,*var7,*var8;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 8)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Eight input(s) required (var1,var2,var3,var4,var5,var6,var7,var8).");
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
    ( !(mrows == 22 && ncols == 1) && 
      !(mrows == 1 && ncols == 22))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var5 is wrong.");
    }
  mrows = mxGetM(prhs[5]);
  ncols = mxGetN(prhs[5]);
  if( !mxIsDouble(prhs[5]) || mxIsComplex(prhs[5]) ||
    ( !(mrows == 22 && ncols == 1) && 
      !(mrows == 1 && ncols == 22))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var6 is wrong.");
    }
  mrows = mxGetM(prhs[6]);
  ncols = mxGetN(prhs[6]);
  if( !mxIsDouble(prhs[6]) || mxIsComplex(prhs[6]) ||
    ( !(mrows == 22 && ncols == 1) && 
      !(mrows == 1 && ncols == 22))) 
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

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
  var3 = mxGetPr(prhs[2]);
  var4 = mxGetPr(prhs[3]);
  var5 = mxGetPr(prhs[4]);
  var6 = mxGetPr(prhs[5]);
  var7 = mxGetPr(prhs[6]);
  var8 = mxGetPr(prhs[7]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 308, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3,var4,var5,var6,var7,var8);


}

#else // MATLAB_MEX_FILE

#include "J_hs_int_x.hh"

namespace Flight2
{

void J_hs_int_x_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4,const double *var5,const double *var6,const double *var7,const double *var8)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4, var5, var6, var7, var8);

}

}

#endif // MATLAB_MEX_FILE
