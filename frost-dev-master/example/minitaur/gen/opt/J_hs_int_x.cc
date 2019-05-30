/*
 * Automatically Generated from Mathematica.
 * Thu 30 May 2019 00:01:09 GMT-04:00
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
  double t30142;
  double t30353;
  double t30370;
  double t30434;
  double t32249;
  double t32257;
  double t32261;
  double t32267;
  double t32273;
  double t32265;
  double t32314;
  double t32316;
  double t32323;
  double t32330;
  double t36464;
  double t36468;
  double t36910;
  double t36914;
  double t36927;
  double t36929;
  double t36936;
  double t36939;
  double t36960;
  double t36966;
  double t37651;
  double t37717;
  double t37759;
  double t37765;
  double t37773;
  double t37777;
  double t37787;
  double t37790;
  double t37800;
  double t37806;
  double t37815;
  double t37817;
  double t37911;
  double t37919;
  double t37952;
  double t37964;
  double t37980;
  double t37983;
  double t38006;
  double t38007;
  double t38015;
  double t38016;
  double t38041;
  double t38045;
  double t38060;
  double t38072;
  double t38088;
  double t38093;
  double t38138;
  double t38139;
  double t38113;
  double t38129;
  double t38152;
  double t38159;
  double t38165;
  double t38166;
  double t38187;
  double t38205;
  double t38209;
  double t38211;
  double t38223;
  double t38226;
  double t38251;
  double t38262;
  double t38275;
  double t38284;
  double t38290;
  double t38292;
  double t38319;
  double t38320;
  double t38334;
  double t38345;
  double t38370;
  double t38371;
  double t38380;
  double t38381;
  double t38387;
  double t38388;
  double t38393;
  double t38394;
  double t38403;
  double t38406;
  double t38410;
  double t38411;
  double t38719;
  double t38742;
  double t38806;
  double t38814;
  double t38830;
  double t38832;
  double t38838;
  double t38839;
  t30142 = 4.*var5[0];
  t30353 = t30142 + var7[0] + var3[0];
  t30370 = -1. + var8[0];
  t30434 = 1/t30370;
  t32249 = -1.*var1[0];
  t32257 = t32249 + var1[1];
  t32261 = -0.333333333333333*t30434*t32257;
  t32267 = 4.*var5[1];
  t32273 = t32267 + var7[1] + var3[1];
  t32265 = -1.33333333333333*t30434*t32257;
  t32314 = 4.*var5[2];
  t32316 = t32314 + var7[2] + var3[2];
  t32323 = 4.*var5[3];
  t32330 = t32323 + var7[3] + var3[3];
  t36464 = 4.*var5[4];
  t36468 = t36464 + var7[4] + var3[4];
  t36910 = 4.*var5[5];
  t36914 = t36910 + var7[5] + var3[5];
  t36927 = 4.*var5[6];
  t36929 = t36927 + var7[6] + var3[6];
  t36936 = 4.*var5[7];
  t36939 = t36936 + var7[7] + var3[7];
  t36960 = 4.*var5[8];
  t36966 = t36960 + var7[8] + var3[8];
  t37651 = 4.*var5[9];
  t37717 = t37651 + var7[9] + var3[9];
  t37759 = 4.*var5[10];
  t37765 = t37759 + var7[10] + var3[10];
  t37773 = 4.*var5[11];
  t37777 = t37773 + var7[11] + var3[11];
  t37787 = 4.*var5[12];
  t37790 = t37787 + var7[12] + var3[12];
  t37800 = 4.*var5[13];
  t37806 = t37800 + var7[13] + var3[13];
  t37815 = 4.*var5[14];
  t37817 = t37815 + var7[14] + var3[14];
  t37911 = 4.*var5[15];
  t37919 = t37911 + var7[15] + var3[15];
  t37952 = 4.*var5[16];
  t37964 = t37952 + var7[16] + var3[16];
  t37980 = 4.*var5[17];
  t37983 = t37980 + var7[17] + var3[17];
  t38006 = 4.*var5[18];
  t38007 = t38006 + var7[18] + var3[18];
  t38015 = 4.*var5[19];
  t38016 = t38015 + var7[19] + var3[19];
  t38041 = 4.*var5[20];
  t38045 = t38041 + var7[20] + var3[20];
  t38060 = 4.*var5[21];
  t38072 = t38060 + var7[21] + var3[21];
  t38088 = -1.*var7[0];
  t38093 = t38088 + var3[0];
  t38138 = -1.*var7[1];
  t38139 = t38138 + var3[1];
  t38113 = -0.25*t30434*t32257;
  t38129 = 0.25*t30434*t32257;
  t38152 = -1.*var7[2];
  t38159 = t38152 + var3[2];
  t38165 = -1.*var7[3];
  t38166 = t38165 + var3[3];
  t38187 = -1.*var7[4];
  t38205 = t38187 + var3[4];
  t38209 = -1.*var7[5];
  t38211 = t38209 + var3[5];
  t38223 = -1.*var7[6];
  t38226 = t38223 + var3[6];
  t38251 = -1.*var7[7];
  t38262 = t38251 + var3[7];
  t38275 = -1.*var7[8];
  t38284 = t38275 + var3[8];
  t38290 = -1.*var7[9];
  t38292 = t38290 + var3[9];
  t38319 = -1.*var7[10];
  t38320 = t38319 + var3[10];
  t38334 = -1.*var7[11];
  t38345 = t38334 + var3[11];
  t38370 = -1.*var7[12];
  t38371 = t38370 + var3[12];
  t38380 = -1.*var7[13];
  t38381 = t38380 + var3[13];
  t38387 = -1.*var7[14];
  t38388 = t38387 + var3[14];
  t38393 = -1.*var7[15];
  t38394 = t38393 + var3[15];
  t38403 = -1.*var7[16];
  t38406 = t38403 + var3[16];
  t38410 = -1.*var7[17];
  t38411 = t38410 + var3[17];
  t38719 = -1.*var7[18];
  t38742 = t38719 + var3[18];
  t38806 = -1.*var7[19];
  t38814 = t38806 + var3[19];
  t38830 = -1.*var7[20];
  t38832 = t38830 + var3[20];
  t38838 = -1.*var7[21];
  t38839 = t38838 + var3[21];
  p_output1[0]=0.333333333333333*t30353*t30434;
  p_output1[1]=-0.333333333333333*t30353*t30434;
  p_output1[2]=-1.;
  p_output1[3]=t32261;
  p_output1[4]=t32265;
  p_output1[5]=1.;
  p_output1[6]=t32261;
  p_output1[7]=0.333333333333333*t30434*t32273;
  p_output1[8]=-0.333333333333333*t30434*t32273;
  p_output1[9]=-1.;
  p_output1[10]=t32261;
  p_output1[11]=t32265;
  p_output1[12]=1.;
  p_output1[13]=t32261;
  p_output1[14]=0.333333333333333*t30434*t32316;
  p_output1[15]=-0.333333333333333*t30434*t32316;
  p_output1[16]=-1.;
  p_output1[17]=t32261;
  p_output1[18]=t32265;
  p_output1[19]=1.;
  p_output1[20]=t32261;
  p_output1[21]=0.333333333333333*t30434*t32330;
  p_output1[22]=-0.333333333333333*t30434*t32330;
  p_output1[23]=-1.;
  p_output1[24]=t32261;
  p_output1[25]=t32265;
  p_output1[26]=1.;
  p_output1[27]=t32261;
  p_output1[28]=0.333333333333333*t30434*t36468;
  p_output1[29]=-0.333333333333333*t30434*t36468;
  p_output1[30]=-1.;
  p_output1[31]=t32261;
  p_output1[32]=t32265;
  p_output1[33]=1.;
  p_output1[34]=t32261;
  p_output1[35]=0.333333333333333*t30434*t36914;
  p_output1[36]=-0.333333333333333*t30434*t36914;
  p_output1[37]=-1.;
  p_output1[38]=t32261;
  p_output1[39]=t32265;
  p_output1[40]=1.;
  p_output1[41]=t32261;
  p_output1[42]=0.333333333333333*t30434*t36929;
  p_output1[43]=-0.333333333333333*t30434*t36929;
  p_output1[44]=-1.;
  p_output1[45]=t32261;
  p_output1[46]=t32265;
  p_output1[47]=1.;
  p_output1[48]=t32261;
  p_output1[49]=0.333333333333333*t30434*t36939;
  p_output1[50]=-0.333333333333333*t30434*t36939;
  p_output1[51]=-1.;
  p_output1[52]=t32261;
  p_output1[53]=t32265;
  p_output1[54]=1.;
  p_output1[55]=t32261;
  p_output1[56]=0.333333333333333*t30434*t36966;
  p_output1[57]=-0.333333333333333*t30434*t36966;
  p_output1[58]=-1.;
  p_output1[59]=t32261;
  p_output1[60]=t32265;
  p_output1[61]=1.;
  p_output1[62]=t32261;
  p_output1[63]=0.333333333333333*t30434*t37717;
  p_output1[64]=-0.333333333333333*t30434*t37717;
  p_output1[65]=-1.;
  p_output1[66]=t32261;
  p_output1[67]=t32265;
  p_output1[68]=1.;
  p_output1[69]=t32261;
  p_output1[70]=0.333333333333333*t30434*t37765;
  p_output1[71]=-0.333333333333333*t30434*t37765;
  p_output1[72]=-1.;
  p_output1[73]=t32261;
  p_output1[74]=t32265;
  p_output1[75]=1.;
  p_output1[76]=t32261;
  p_output1[77]=0.333333333333333*t30434*t37777;
  p_output1[78]=-0.333333333333333*t30434*t37777;
  p_output1[79]=-1.;
  p_output1[80]=t32261;
  p_output1[81]=t32265;
  p_output1[82]=1.;
  p_output1[83]=t32261;
  p_output1[84]=0.333333333333333*t30434*t37790;
  p_output1[85]=-0.333333333333333*t30434*t37790;
  p_output1[86]=-1.;
  p_output1[87]=t32261;
  p_output1[88]=t32265;
  p_output1[89]=1.;
  p_output1[90]=t32261;
  p_output1[91]=0.333333333333333*t30434*t37806;
  p_output1[92]=-0.333333333333333*t30434*t37806;
  p_output1[93]=-1.;
  p_output1[94]=t32261;
  p_output1[95]=t32265;
  p_output1[96]=1.;
  p_output1[97]=t32261;
  p_output1[98]=0.333333333333333*t30434*t37817;
  p_output1[99]=-0.333333333333333*t30434*t37817;
  p_output1[100]=-1.;
  p_output1[101]=t32261;
  p_output1[102]=t32265;
  p_output1[103]=1.;
  p_output1[104]=t32261;
  p_output1[105]=0.333333333333333*t30434*t37919;
  p_output1[106]=-0.333333333333333*t30434*t37919;
  p_output1[107]=-1.;
  p_output1[108]=t32261;
  p_output1[109]=t32265;
  p_output1[110]=1.;
  p_output1[111]=t32261;
  p_output1[112]=0.333333333333333*t30434*t37964;
  p_output1[113]=-0.333333333333333*t30434*t37964;
  p_output1[114]=-1.;
  p_output1[115]=t32261;
  p_output1[116]=t32265;
  p_output1[117]=1.;
  p_output1[118]=t32261;
  p_output1[119]=0.333333333333333*t30434*t37983;
  p_output1[120]=-0.333333333333333*t30434*t37983;
  p_output1[121]=-1.;
  p_output1[122]=t32261;
  p_output1[123]=t32265;
  p_output1[124]=1.;
  p_output1[125]=t32261;
  p_output1[126]=0.333333333333333*t30434*t38007;
  p_output1[127]=-0.333333333333333*t30434*t38007;
  p_output1[128]=-1.;
  p_output1[129]=t32261;
  p_output1[130]=t32265;
  p_output1[131]=1.;
  p_output1[132]=t32261;
  p_output1[133]=0.333333333333333*t30434*t38016;
  p_output1[134]=-0.333333333333333*t30434*t38016;
  p_output1[135]=-1.;
  p_output1[136]=t32261;
  p_output1[137]=t32265;
  p_output1[138]=1.;
  p_output1[139]=t32261;
  p_output1[140]=0.333333333333333*t30434*t38045;
  p_output1[141]=-0.333333333333333*t30434*t38045;
  p_output1[142]=-1.;
  p_output1[143]=t32261;
  p_output1[144]=t32265;
  p_output1[145]=1.;
  p_output1[146]=t32261;
  p_output1[147]=0.333333333333333*t30434*t38072;
  p_output1[148]=-0.333333333333333*t30434*t38072;
  p_output1[149]=-1.;
  p_output1[150]=t32261;
  p_output1[151]=t32265;
  p_output1[152]=1.;
  p_output1[153]=t32261;
  p_output1[154]=0.25*t30434*t38093;
  p_output1[155]=-0.25*t30434*t38093;
  p_output1[156]=-0.5;
  p_output1[157]=t38113;
  p_output1[158]=1.;
  p_output1[159]=-0.5;
  p_output1[160]=t38129;
  p_output1[161]=0.25*t30434*t38139;
  p_output1[162]=-0.25*t30434*t38139;
  p_output1[163]=-0.5;
  p_output1[164]=t38113;
  p_output1[165]=1.;
  p_output1[166]=-0.5;
  p_output1[167]=t38129;
  p_output1[168]=0.25*t30434*t38159;
  p_output1[169]=-0.25*t30434*t38159;
  p_output1[170]=-0.5;
  p_output1[171]=t38113;
  p_output1[172]=1.;
  p_output1[173]=-0.5;
  p_output1[174]=t38129;
  p_output1[175]=0.25*t30434*t38166;
  p_output1[176]=-0.25*t30434*t38166;
  p_output1[177]=-0.5;
  p_output1[178]=t38113;
  p_output1[179]=1.;
  p_output1[180]=-0.5;
  p_output1[181]=t38129;
  p_output1[182]=0.25*t30434*t38205;
  p_output1[183]=-0.25*t30434*t38205;
  p_output1[184]=-0.5;
  p_output1[185]=t38113;
  p_output1[186]=1.;
  p_output1[187]=-0.5;
  p_output1[188]=t38129;
  p_output1[189]=0.25*t30434*t38211;
  p_output1[190]=-0.25*t30434*t38211;
  p_output1[191]=-0.5;
  p_output1[192]=t38113;
  p_output1[193]=1.;
  p_output1[194]=-0.5;
  p_output1[195]=t38129;
  p_output1[196]=0.25*t30434*t38226;
  p_output1[197]=-0.25*t30434*t38226;
  p_output1[198]=-0.5;
  p_output1[199]=t38113;
  p_output1[200]=1.;
  p_output1[201]=-0.5;
  p_output1[202]=t38129;
  p_output1[203]=0.25*t30434*t38262;
  p_output1[204]=-0.25*t30434*t38262;
  p_output1[205]=-0.5;
  p_output1[206]=t38113;
  p_output1[207]=1.;
  p_output1[208]=-0.5;
  p_output1[209]=t38129;
  p_output1[210]=0.25*t30434*t38284;
  p_output1[211]=-0.25*t30434*t38284;
  p_output1[212]=-0.5;
  p_output1[213]=t38113;
  p_output1[214]=1.;
  p_output1[215]=-0.5;
  p_output1[216]=t38129;
  p_output1[217]=0.25*t30434*t38292;
  p_output1[218]=-0.25*t30434*t38292;
  p_output1[219]=-0.5;
  p_output1[220]=t38113;
  p_output1[221]=1.;
  p_output1[222]=-0.5;
  p_output1[223]=t38129;
  p_output1[224]=0.25*t30434*t38320;
  p_output1[225]=-0.25*t30434*t38320;
  p_output1[226]=-0.5;
  p_output1[227]=t38113;
  p_output1[228]=1.;
  p_output1[229]=-0.5;
  p_output1[230]=t38129;
  p_output1[231]=0.25*t30434*t38345;
  p_output1[232]=-0.25*t30434*t38345;
  p_output1[233]=-0.5;
  p_output1[234]=t38113;
  p_output1[235]=1.;
  p_output1[236]=-0.5;
  p_output1[237]=t38129;
  p_output1[238]=0.25*t30434*t38371;
  p_output1[239]=-0.25*t30434*t38371;
  p_output1[240]=-0.5;
  p_output1[241]=t38113;
  p_output1[242]=1.;
  p_output1[243]=-0.5;
  p_output1[244]=t38129;
  p_output1[245]=0.25*t30434*t38381;
  p_output1[246]=-0.25*t30434*t38381;
  p_output1[247]=-0.5;
  p_output1[248]=t38113;
  p_output1[249]=1.;
  p_output1[250]=-0.5;
  p_output1[251]=t38129;
  p_output1[252]=0.25*t30434*t38388;
  p_output1[253]=-0.25*t30434*t38388;
  p_output1[254]=-0.5;
  p_output1[255]=t38113;
  p_output1[256]=1.;
  p_output1[257]=-0.5;
  p_output1[258]=t38129;
  p_output1[259]=0.25*t30434*t38394;
  p_output1[260]=-0.25*t30434*t38394;
  p_output1[261]=-0.5;
  p_output1[262]=t38113;
  p_output1[263]=1.;
  p_output1[264]=-0.5;
  p_output1[265]=t38129;
  p_output1[266]=0.25*t30434*t38406;
  p_output1[267]=-0.25*t30434*t38406;
  p_output1[268]=-0.5;
  p_output1[269]=t38113;
  p_output1[270]=1.;
  p_output1[271]=-0.5;
  p_output1[272]=t38129;
  p_output1[273]=0.25*t30434*t38411;
  p_output1[274]=-0.25*t30434*t38411;
  p_output1[275]=-0.5;
  p_output1[276]=t38113;
  p_output1[277]=1.;
  p_output1[278]=-0.5;
  p_output1[279]=t38129;
  p_output1[280]=0.25*t30434*t38742;
  p_output1[281]=-0.25*t30434*t38742;
  p_output1[282]=-0.5;
  p_output1[283]=t38113;
  p_output1[284]=1.;
  p_output1[285]=-0.5;
  p_output1[286]=t38129;
  p_output1[287]=0.25*t30434*t38814;
  p_output1[288]=-0.25*t30434*t38814;
  p_output1[289]=-0.5;
  p_output1[290]=t38113;
  p_output1[291]=1.;
  p_output1[292]=-0.5;
  p_output1[293]=t38129;
  p_output1[294]=0.25*t30434*t38832;
  p_output1[295]=-0.25*t30434*t38832;
  p_output1[296]=-0.5;
  p_output1[297]=t38113;
  p_output1[298]=1.;
  p_output1[299]=-0.5;
  p_output1[300]=t38129;
  p_output1[301]=0.25*t30434*t38839;
  p_output1[302]=-0.25*t30434*t38839;
  p_output1[303]=-0.5;
  p_output1[304]=t38113;
  p_output1[305]=1.;
  p_output1[306]=-0.5;
  p_output1[307]=t38129;
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
