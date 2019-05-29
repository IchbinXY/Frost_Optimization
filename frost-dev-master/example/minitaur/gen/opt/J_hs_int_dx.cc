/*
 * Automatically Generated from Mathematica.
 * Wed 29 May 2019 15:16:09 GMT-04:00
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
  double t150;
  double t19363;
  double t20251;
  double t27837;
  double t30718;
  double t30872;
  double t30882;
  double t30901;
  double t30903;
  double t30895;
  double t31150;
  double t31201;
  double t31226;
  double t31229;
  double t31251;
  double t31418;
  double t31641;
  double t31656;
  double t32319;
  double t32406;
  double t32441;
  double t32455;
  double t32599;
  double t32720;
  double t32810;
  double t32815;
  double t32840;
  double t32843;
  double t32860;
  double t32862;
  double t33083;
  double t33091;
  double t33116;
  double t33119;
  double t33208;
  double t33926;
  double t33948;
  double t34866;
  double t35055;
  double t35103;
  double t35194;
  double t35234;
  double t35774;
  double t35848;
  double t35864;
  double t35872;
  double t35890;
  double t35904;
  double t35932;
  double t35945;
  double t35969;
  double t35999;
  double t36060;
  double t36061;
  double t36058;
  double t36059;
  double t36139;
  double t36141;
  double t36149;
  double t36150;
  double t36156;
  double t36157;
  double t36185;
  double t36186;
  double t36189;
  double t36190;
  double t36193;
  double t36194;
  double t36201;
  double t36202;
  double t36221;
  double t36222;
  double t36226;
  double t36227;
  double t36230;
  double t36231;
  double t36234;
  double t36235;
  double t36239;
  double t36240;
  double t36276;
  double t36277;
  double t36287;
  double t36293;
  double t36302;
  double t36306;
  double t36312;
  double t36313;
  double t36317;
  double t36342;
  double t36345;
  double t36346;
  double t36353;
  double t36354;
  double t36566;
  double t36567;
  t150 = 4.*var5[0];
  t19363 = var3[0] + t150 + var7[0];
  t20251 = -1. + var8[0];
  t27837 = 1/t20251;
  t30718 = -1.*var1[0];
  t30872 = t30718 + var1[1];
  t30882 = -0.333333333333333*t27837*t30872;
  t30901 = 4.*var5[1];
  t30903 = var3[1] + t30901 + var7[1];
  t30895 = -1.33333333333333*t27837*t30872;
  t31150 = 4.*var5[2];
  t31201 = var3[2] + t31150 + var7[2];
  t31226 = 4.*var5[3];
  t31229 = var3[3] + t31226 + var7[3];
  t31251 = 4.*var5[4];
  t31418 = var3[4] + t31251 + var7[4];
  t31641 = 4.*var5[5];
  t31656 = var3[5] + t31641 + var7[5];
  t32319 = 4.*var5[6];
  t32406 = var3[6] + t32319 + var7[6];
  t32441 = 4.*var5[7];
  t32455 = var3[7] + t32441 + var7[7];
  t32599 = 4.*var5[8];
  t32720 = var3[8] + t32599 + var7[8];
  t32810 = 4.*var5[9];
  t32815 = var3[9] + t32810 + var7[9];
  t32840 = 4.*var5[10];
  t32843 = var3[10] + t32840 + var7[10];
  t32860 = 4.*var5[11];
  t32862 = var3[11] + t32860 + var7[11];
  t33083 = 4.*var5[12];
  t33091 = var3[12] + t33083 + var7[12];
  t33116 = 4.*var5[13];
  t33119 = var3[13] + t33116 + var7[13];
  t33208 = 4.*var5[14];
  t33926 = var3[14] + t33208 + var7[14];
  t33948 = 4.*var5[15];
  t34866 = var3[15] + t33948 + var7[15];
  t35055 = 4.*var5[16];
  t35103 = var3[16] + t35055 + var7[16];
  t35194 = 4.*var5[17];
  t35234 = var3[17] + t35194 + var7[17];
  t35774 = 4.*var5[18];
  t35848 = var3[18] + t35774 + var7[18];
  t35864 = 4.*var5[19];
  t35872 = var3[19] + t35864 + var7[19];
  t35890 = 4.*var5[20];
  t35904 = var3[20] + t35890 + var7[20];
  t35932 = 4.*var5[21];
  t35945 = var3[21] + t35932 + var7[21];
  t35969 = -1.*var7[0];
  t35999 = var3[0] + t35969;
  t36060 = -1.*var7[1];
  t36061 = var3[1] + t36060;
  t36058 = -0.25*t27837*t30872;
  t36059 = 0.25*t27837*t30872;
  t36139 = -1.*var7[2];
  t36141 = var3[2] + t36139;
  t36149 = -1.*var7[3];
  t36150 = var3[3] + t36149;
  t36156 = -1.*var7[4];
  t36157 = var3[4] + t36156;
  t36185 = -1.*var7[5];
  t36186 = var3[5] + t36185;
  t36189 = -1.*var7[6];
  t36190 = var3[6] + t36189;
  t36193 = -1.*var7[7];
  t36194 = var3[7] + t36193;
  t36201 = -1.*var7[8];
  t36202 = var3[8] + t36201;
  t36221 = -1.*var7[9];
  t36222 = var3[9] + t36221;
  t36226 = -1.*var7[10];
  t36227 = var3[10] + t36226;
  t36230 = -1.*var7[11];
  t36231 = var3[11] + t36230;
  t36234 = -1.*var7[12];
  t36235 = var3[12] + t36234;
  t36239 = -1.*var7[13];
  t36240 = var3[13] + t36239;
  t36276 = -1.*var7[14];
  t36277 = var3[14] + t36276;
  t36287 = -1.*var7[15];
  t36293 = var3[15] + t36287;
  t36302 = -1.*var7[16];
  t36306 = var3[16] + t36302;
  t36312 = -1.*var7[17];
  t36313 = var3[17] + t36312;
  t36317 = -1.*var7[18];
  t36342 = var3[18] + t36317;
  t36345 = -1.*var7[19];
  t36346 = var3[19] + t36345;
  t36353 = -1.*var7[20];
  t36354 = var3[20] + t36353;
  t36566 = -1.*var7[21];
  t36567 = var3[21] + t36566;
  p_output1[0]=0.333333333333333*t19363*t27837;
  p_output1[1]=-0.333333333333333*t19363*t27837;
  p_output1[2]=-1.;
  p_output1[3]=t30882;
  p_output1[4]=t30895;
  p_output1[5]=1.;
  p_output1[6]=t30882;
  p_output1[7]=0.333333333333333*t27837*t30903;
  p_output1[8]=-0.333333333333333*t27837*t30903;
  p_output1[9]=-1.;
  p_output1[10]=t30882;
  p_output1[11]=t30895;
  p_output1[12]=1.;
  p_output1[13]=t30882;
  p_output1[14]=0.333333333333333*t27837*t31201;
  p_output1[15]=-0.333333333333333*t27837*t31201;
  p_output1[16]=-1.;
  p_output1[17]=t30882;
  p_output1[18]=t30895;
  p_output1[19]=1.;
  p_output1[20]=t30882;
  p_output1[21]=0.333333333333333*t27837*t31229;
  p_output1[22]=-0.333333333333333*t27837*t31229;
  p_output1[23]=-1.;
  p_output1[24]=t30882;
  p_output1[25]=t30895;
  p_output1[26]=1.;
  p_output1[27]=t30882;
  p_output1[28]=0.333333333333333*t27837*t31418;
  p_output1[29]=-0.333333333333333*t27837*t31418;
  p_output1[30]=-1.;
  p_output1[31]=t30882;
  p_output1[32]=t30895;
  p_output1[33]=1.;
  p_output1[34]=t30882;
  p_output1[35]=0.333333333333333*t27837*t31656;
  p_output1[36]=-0.333333333333333*t27837*t31656;
  p_output1[37]=-1.;
  p_output1[38]=t30882;
  p_output1[39]=t30895;
  p_output1[40]=1.;
  p_output1[41]=t30882;
  p_output1[42]=0.333333333333333*t27837*t32406;
  p_output1[43]=-0.333333333333333*t27837*t32406;
  p_output1[44]=-1.;
  p_output1[45]=t30882;
  p_output1[46]=t30895;
  p_output1[47]=1.;
  p_output1[48]=t30882;
  p_output1[49]=0.333333333333333*t27837*t32455;
  p_output1[50]=-0.333333333333333*t27837*t32455;
  p_output1[51]=-1.;
  p_output1[52]=t30882;
  p_output1[53]=t30895;
  p_output1[54]=1.;
  p_output1[55]=t30882;
  p_output1[56]=0.333333333333333*t27837*t32720;
  p_output1[57]=-0.333333333333333*t27837*t32720;
  p_output1[58]=-1.;
  p_output1[59]=t30882;
  p_output1[60]=t30895;
  p_output1[61]=1.;
  p_output1[62]=t30882;
  p_output1[63]=0.333333333333333*t27837*t32815;
  p_output1[64]=-0.333333333333333*t27837*t32815;
  p_output1[65]=-1.;
  p_output1[66]=t30882;
  p_output1[67]=t30895;
  p_output1[68]=1.;
  p_output1[69]=t30882;
  p_output1[70]=0.333333333333333*t27837*t32843;
  p_output1[71]=-0.333333333333333*t27837*t32843;
  p_output1[72]=-1.;
  p_output1[73]=t30882;
  p_output1[74]=t30895;
  p_output1[75]=1.;
  p_output1[76]=t30882;
  p_output1[77]=0.333333333333333*t27837*t32862;
  p_output1[78]=-0.333333333333333*t27837*t32862;
  p_output1[79]=-1.;
  p_output1[80]=t30882;
  p_output1[81]=t30895;
  p_output1[82]=1.;
  p_output1[83]=t30882;
  p_output1[84]=0.333333333333333*t27837*t33091;
  p_output1[85]=-0.333333333333333*t27837*t33091;
  p_output1[86]=-1.;
  p_output1[87]=t30882;
  p_output1[88]=t30895;
  p_output1[89]=1.;
  p_output1[90]=t30882;
  p_output1[91]=0.333333333333333*t27837*t33119;
  p_output1[92]=-0.333333333333333*t27837*t33119;
  p_output1[93]=-1.;
  p_output1[94]=t30882;
  p_output1[95]=t30895;
  p_output1[96]=1.;
  p_output1[97]=t30882;
  p_output1[98]=0.333333333333333*t27837*t33926;
  p_output1[99]=-0.333333333333333*t27837*t33926;
  p_output1[100]=-1.;
  p_output1[101]=t30882;
  p_output1[102]=t30895;
  p_output1[103]=1.;
  p_output1[104]=t30882;
  p_output1[105]=0.333333333333333*t27837*t34866;
  p_output1[106]=-0.333333333333333*t27837*t34866;
  p_output1[107]=-1.;
  p_output1[108]=t30882;
  p_output1[109]=t30895;
  p_output1[110]=1.;
  p_output1[111]=t30882;
  p_output1[112]=0.333333333333333*t27837*t35103;
  p_output1[113]=-0.333333333333333*t27837*t35103;
  p_output1[114]=-1.;
  p_output1[115]=t30882;
  p_output1[116]=t30895;
  p_output1[117]=1.;
  p_output1[118]=t30882;
  p_output1[119]=0.333333333333333*t27837*t35234;
  p_output1[120]=-0.333333333333333*t27837*t35234;
  p_output1[121]=-1.;
  p_output1[122]=t30882;
  p_output1[123]=t30895;
  p_output1[124]=1.;
  p_output1[125]=t30882;
  p_output1[126]=0.333333333333333*t27837*t35848;
  p_output1[127]=-0.333333333333333*t27837*t35848;
  p_output1[128]=-1.;
  p_output1[129]=t30882;
  p_output1[130]=t30895;
  p_output1[131]=1.;
  p_output1[132]=t30882;
  p_output1[133]=0.333333333333333*t27837*t35872;
  p_output1[134]=-0.333333333333333*t27837*t35872;
  p_output1[135]=-1.;
  p_output1[136]=t30882;
  p_output1[137]=t30895;
  p_output1[138]=1.;
  p_output1[139]=t30882;
  p_output1[140]=0.333333333333333*t27837*t35904;
  p_output1[141]=-0.333333333333333*t27837*t35904;
  p_output1[142]=-1.;
  p_output1[143]=t30882;
  p_output1[144]=t30895;
  p_output1[145]=1.;
  p_output1[146]=t30882;
  p_output1[147]=0.333333333333333*t27837*t35945;
  p_output1[148]=-0.333333333333333*t27837*t35945;
  p_output1[149]=-1.;
  p_output1[150]=t30882;
  p_output1[151]=t30895;
  p_output1[152]=1.;
  p_output1[153]=t30882;
  p_output1[154]=0.25*t27837*t35999;
  p_output1[155]=-0.25*t27837*t35999;
  p_output1[156]=-0.5;
  p_output1[157]=t36058;
  p_output1[158]=1.;
  p_output1[159]=-0.5;
  p_output1[160]=t36059;
  p_output1[161]=0.25*t27837*t36061;
  p_output1[162]=-0.25*t27837*t36061;
  p_output1[163]=-0.5;
  p_output1[164]=t36058;
  p_output1[165]=1.;
  p_output1[166]=-0.5;
  p_output1[167]=t36059;
  p_output1[168]=0.25*t27837*t36141;
  p_output1[169]=-0.25*t27837*t36141;
  p_output1[170]=-0.5;
  p_output1[171]=t36058;
  p_output1[172]=1.;
  p_output1[173]=-0.5;
  p_output1[174]=t36059;
  p_output1[175]=0.25*t27837*t36150;
  p_output1[176]=-0.25*t27837*t36150;
  p_output1[177]=-0.5;
  p_output1[178]=t36058;
  p_output1[179]=1.;
  p_output1[180]=-0.5;
  p_output1[181]=t36059;
  p_output1[182]=0.25*t27837*t36157;
  p_output1[183]=-0.25*t27837*t36157;
  p_output1[184]=-0.5;
  p_output1[185]=t36058;
  p_output1[186]=1.;
  p_output1[187]=-0.5;
  p_output1[188]=t36059;
  p_output1[189]=0.25*t27837*t36186;
  p_output1[190]=-0.25*t27837*t36186;
  p_output1[191]=-0.5;
  p_output1[192]=t36058;
  p_output1[193]=1.;
  p_output1[194]=-0.5;
  p_output1[195]=t36059;
  p_output1[196]=0.25*t27837*t36190;
  p_output1[197]=-0.25*t27837*t36190;
  p_output1[198]=-0.5;
  p_output1[199]=t36058;
  p_output1[200]=1.;
  p_output1[201]=-0.5;
  p_output1[202]=t36059;
  p_output1[203]=0.25*t27837*t36194;
  p_output1[204]=-0.25*t27837*t36194;
  p_output1[205]=-0.5;
  p_output1[206]=t36058;
  p_output1[207]=1.;
  p_output1[208]=-0.5;
  p_output1[209]=t36059;
  p_output1[210]=0.25*t27837*t36202;
  p_output1[211]=-0.25*t27837*t36202;
  p_output1[212]=-0.5;
  p_output1[213]=t36058;
  p_output1[214]=1.;
  p_output1[215]=-0.5;
  p_output1[216]=t36059;
  p_output1[217]=0.25*t27837*t36222;
  p_output1[218]=-0.25*t27837*t36222;
  p_output1[219]=-0.5;
  p_output1[220]=t36058;
  p_output1[221]=1.;
  p_output1[222]=-0.5;
  p_output1[223]=t36059;
  p_output1[224]=0.25*t27837*t36227;
  p_output1[225]=-0.25*t27837*t36227;
  p_output1[226]=-0.5;
  p_output1[227]=t36058;
  p_output1[228]=1.;
  p_output1[229]=-0.5;
  p_output1[230]=t36059;
  p_output1[231]=0.25*t27837*t36231;
  p_output1[232]=-0.25*t27837*t36231;
  p_output1[233]=-0.5;
  p_output1[234]=t36058;
  p_output1[235]=1.;
  p_output1[236]=-0.5;
  p_output1[237]=t36059;
  p_output1[238]=0.25*t27837*t36235;
  p_output1[239]=-0.25*t27837*t36235;
  p_output1[240]=-0.5;
  p_output1[241]=t36058;
  p_output1[242]=1.;
  p_output1[243]=-0.5;
  p_output1[244]=t36059;
  p_output1[245]=0.25*t27837*t36240;
  p_output1[246]=-0.25*t27837*t36240;
  p_output1[247]=-0.5;
  p_output1[248]=t36058;
  p_output1[249]=1.;
  p_output1[250]=-0.5;
  p_output1[251]=t36059;
  p_output1[252]=0.25*t27837*t36277;
  p_output1[253]=-0.25*t27837*t36277;
  p_output1[254]=-0.5;
  p_output1[255]=t36058;
  p_output1[256]=1.;
  p_output1[257]=-0.5;
  p_output1[258]=t36059;
  p_output1[259]=0.25*t27837*t36293;
  p_output1[260]=-0.25*t27837*t36293;
  p_output1[261]=-0.5;
  p_output1[262]=t36058;
  p_output1[263]=1.;
  p_output1[264]=-0.5;
  p_output1[265]=t36059;
  p_output1[266]=0.25*t27837*t36306;
  p_output1[267]=-0.25*t27837*t36306;
  p_output1[268]=-0.5;
  p_output1[269]=t36058;
  p_output1[270]=1.;
  p_output1[271]=-0.5;
  p_output1[272]=t36059;
  p_output1[273]=0.25*t27837*t36313;
  p_output1[274]=-0.25*t27837*t36313;
  p_output1[275]=-0.5;
  p_output1[276]=t36058;
  p_output1[277]=1.;
  p_output1[278]=-0.5;
  p_output1[279]=t36059;
  p_output1[280]=0.25*t27837*t36342;
  p_output1[281]=-0.25*t27837*t36342;
  p_output1[282]=-0.5;
  p_output1[283]=t36058;
  p_output1[284]=1.;
  p_output1[285]=-0.5;
  p_output1[286]=t36059;
  p_output1[287]=0.25*t27837*t36346;
  p_output1[288]=-0.25*t27837*t36346;
  p_output1[289]=-0.5;
  p_output1[290]=t36058;
  p_output1[291]=1.;
  p_output1[292]=-0.5;
  p_output1[293]=t36059;
  p_output1[294]=0.25*t27837*t36354;
  p_output1[295]=-0.25*t27837*t36354;
  p_output1[296]=-0.5;
  p_output1[297]=t36058;
  p_output1[298]=1.;
  p_output1[299]=-0.5;
  p_output1[300]=t36059;
  p_output1[301]=0.25*t27837*t36567;
  p_output1[302]=-0.25*t27837*t36567;
  p_output1[303]=-0.5;
  p_output1[304]=t36058;
  p_output1[305]=1.;
  p_output1[306]=-0.5;
  p_output1[307]=t36059;
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

#include "J_hs_int_dx.hh"

namespace Flight2
{

void J_hs_int_dx_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4,const double *var5,const double *var6,const double *var7,const double *var8)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4, var5, var6, var7, var8);

}

}

#endif // MATLAB_MEX_FILE
