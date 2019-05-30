/*
 * Automatically Generated from Mathematica.
 * Thu 30 May 2019 00:01:20 GMT-04:00
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
  double t1826;
  double t1942;
  double t2026;
  double t2091;
  double t2700;
  double t2985;
  double t2989;
  double t3269;
  double t3438;
  double t3241;
  double t4430;
  double t17920;
  double t32245;
  double t32443;
  double t36917;
  double t36924;
  double t36957;
  double t37421;
  double t37766;
  double t37771;
  double t37799;
  double t37812;
  double t37932;
  double t37944;
  double t38004;
  double t38009;
  double t38046;
  double t38059;
  double t38112;
  double t38145;
  double t38167;
  double t38181;
  double t38220;
  double t38227;
  double t38286;
  double t38288;
  double t38324;
  double t38356;
  double t38382;
  double t38384;
  double t38401;
  double t38407;
  double t38743;
  double t38783;
  double t38836;
  double t38841;
  double t38855;
  double t38858;
  double t38876;
  double t38877;
  double t39303;
  double t39306;
  double t39374;
  double t39380;
  double t39367;
  double t39368;
  double t39387;
  double t39388;
  double t39398;
  double t39399;
  double t39408;
  double t39409;
  double t39416;
  double t39417;
  double t39635;
  double t39646;
  double t39666;
  double t39668;
  double t39677;
  double t39678;
  double t39686;
  double t39689;
  double t39694;
  double t39699;
  double t39717;
  double t39722;
  double t39744;
  double t39854;
  double t40123;
  double t40132;
  double t40162;
  double t40165;
  double t40202;
  double t40206;
  double t40217;
  double t40218;
  double t40225;
  double t40226;
  double t40476;
  double t40517;
  double t40699;
  double t40703;
  double t40710;
  double t40805;
  double t40821;
  double t40830;
  t1826 = 4.*var5[0];
  t1942 = var3[0] + t1826 + var7[0];
  t2026 = -1. + var8[0];
  t2091 = 1/t2026;
  t2700 = -1.*var1[0];
  t2985 = t2700 + var1[1];
  t2989 = -0.333333333333333*t2091*t2985;
  t3269 = 4.*var5[1];
  t3438 = var3[1] + t3269 + var7[1];
  t3241 = -1.33333333333333*t2091*t2985;
  t4430 = 4.*var5[2];
  t17920 = var3[2] + t4430 + var7[2];
  t32245 = 4.*var5[3];
  t32443 = var3[3] + t32245 + var7[3];
  t36917 = 4.*var5[4];
  t36924 = var3[4] + t36917 + var7[4];
  t36957 = 4.*var5[5];
  t37421 = var3[5] + t36957 + var7[5];
  t37766 = 4.*var5[6];
  t37771 = var3[6] + t37766 + var7[6];
  t37799 = 4.*var5[7];
  t37812 = var3[7] + t37799 + var7[7];
  t37932 = 4.*var5[8];
  t37944 = var3[8] + t37932 + var7[8];
  t38004 = 4.*var5[9];
  t38009 = var3[9] + t38004 + var7[9];
  t38046 = 4.*var5[10];
  t38059 = var3[10] + t38046 + var7[10];
  t38112 = 4.*var5[11];
  t38145 = var3[11] + t38112 + var7[11];
  t38167 = 4.*var5[12];
  t38181 = var3[12] + t38167 + var7[12];
  t38220 = 4.*var5[13];
  t38227 = var3[13] + t38220 + var7[13];
  t38286 = 4.*var5[14];
  t38288 = var3[14] + t38286 + var7[14];
  t38324 = 4.*var5[15];
  t38356 = var3[15] + t38324 + var7[15];
  t38382 = 4.*var5[16];
  t38384 = var3[16] + t38382 + var7[16];
  t38401 = 4.*var5[17];
  t38407 = var3[17] + t38401 + var7[17];
  t38743 = 4.*var5[18];
  t38783 = var3[18] + t38743 + var7[18];
  t38836 = 4.*var5[19];
  t38841 = var3[19] + t38836 + var7[19];
  t38855 = 4.*var5[20];
  t38858 = var3[20] + t38855 + var7[20];
  t38876 = 4.*var5[21];
  t38877 = var3[21] + t38876 + var7[21];
  t39303 = -1.*var7[0];
  t39306 = var3[0] + t39303;
  t39374 = -1.*var7[1];
  t39380 = var3[1] + t39374;
  t39367 = -0.25*t2091*t2985;
  t39368 = 0.25*t2091*t2985;
  t39387 = -1.*var7[2];
  t39388 = var3[2] + t39387;
  t39398 = -1.*var7[3];
  t39399 = var3[3] + t39398;
  t39408 = -1.*var7[4];
  t39409 = var3[4] + t39408;
  t39416 = -1.*var7[5];
  t39417 = var3[5] + t39416;
  t39635 = -1.*var7[6];
  t39646 = var3[6] + t39635;
  t39666 = -1.*var7[7];
  t39668 = var3[7] + t39666;
  t39677 = -1.*var7[8];
  t39678 = var3[8] + t39677;
  t39686 = -1.*var7[9];
  t39689 = var3[9] + t39686;
  t39694 = -1.*var7[10];
  t39699 = var3[10] + t39694;
  t39717 = -1.*var7[11];
  t39722 = var3[11] + t39717;
  t39744 = -1.*var7[12];
  t39854 = var3[12] + t39744;
  t40123 = -1.*var7[13];
  t40132 = var3[13] + t40123;
  t40162 = -1.*var7[14];
  t40165 = var3[14] + t40162;
  t40202 = -1.*var7[15];
  t40206 = var3[15] + t40202;
  t40217 = -1.*var7[16];
  t40218 = var3[16] + t40217;
  t40225 = -1.*var7[17];
  t40226 = var3[17] + t40225;
  t40476 = -1.*var7[18];
  t40517 = var3[18] + t40476;
  t40699 = -1.*var7[19];
  t40703 = var3[19] + t40699;
  t40710 = -1.*var7[20];
  t40805 = var3[20] + t40710;
  t40821 = -1.*var7[21];
  t40830 = var3[21] + t40821;
  p_output1[0]=0.333333333333333*t1942*t2091;
  p_output1[1]=-0.333333333333333*t1942*t2091;
  p_output1[2]=-1.;
  p_output1[3]=t2989;
  p_output1[4]=t3241;
  p_output1[5]=1.;
  p_output1[6]=t2989;
  p_output1[7]=0.333333333333333*t2091*t3438;
  p_output1[8]=-0.333333333333333*t2091*t3438;
  p_output1[9]=-1.;
  p_output1[10]=t2989;
  p_output1[11]=t3241;
  p_output1[12]=1.;
  p_output1[13]=t2989;
  p_output1[14]=0.333333333333333*t17920*t2091;
  p_output1[15]=-0.333333333333333*t17920*t2091;
  p_output1[16]=-1.;
  p_output1[17]=t2989;
  p_output1[18]=t3241;
  p_output1[19]=1.;
  p_output1[20]=t2989;
  p_output1[21]=0.333333333333333*t2091*t32443;
  p_output1[22]=-0.333333333333333*t2091*t32443;
  p_output1[23]=-1.;
  p_output1[24]=t2989;
  p_output1[25]=t3241;
  p_output1[26]=1.;
  p_output1[27]=t2989;
  p_output1[28]=0.333333333333333*t2091*t36924;
  p_output1[29]=-0.333333333333333*t2091*t36924;
  p_output1[30]=-1.;
  p_output1[31]=t2989;
  p_output1[32]=t3241;
  p_output1[33]=1.;
  p_output1[34]=t2989;
  p_output1[35]=0.333333333333333*t2091*t37421;
  p_output1[36]=-0.333333333333333*t2091*t37421;
  p_output1[37]=-1.;
  p_output1[38]=t2989;
  p_output1[39]=t3241;
  p_output1[40]=1.;
  p_output1[41]=t2989;
  p_output1[42]=0.333333333333333*t2091*t37771;
  p_output1[43]=-0.333333333333333*t2091*t37771;
  p_output1[44]=-1.;
  p_output1[45]=t2989;
  p_output1[46]=t3241;
  p_output1[47]=1.;
  p_output1[48]=t2989;
  p_output1[49]=0.333333333333333*t2091*t37812;
  p_output1[50]=-0.333333333333333*t2091*t37812;
  p_output1[51]=-1.;
  p_output1[52]=t2989;
  p_output1[53]=t3241;
  p_output1[54]=1.;
  p_output1[55]=t2989;
  p_output1[56]=0.333333333333333*t2091*t37944;
  p_output1[57]=-0.333333333333333*t2091*t37944;
  p_output1[58]=-1.;
  p_output1[59]=t2989;
  p_output1[60]=t3241;
  p_output1[61]=1.;
  p_output1[62]=t2989;
  p_output1[63]=0.333333333333333*t2091*t38009;
  p_output1[64]=-0.333333333333333*t2091*t38009;
  p_output1[65]=-1.;
  p_output1[66]=t2989;
  p_output1[67]=t3241;
  p_output1[68]=1.;
  p_output1[69]=t2989;
  p_output1[70]=0.333333333333333*t2091*t38059;
  p_output1[71]=-0.333333333333333*t2091*t38059;
  p_output1[72]=-1.;
  p_output1[73]=t2989;
  p_output1[74]=t3241;
  p_output1[75]=1.;
  p_output1[76]=t2989;
  p_output1[77]=0.333333333333333*t2091*t38145;
  p_output1[78]=-0.333333333333333*t2091*t38145;
  p_output1[79]=-1.;
  p_output1[80]=t2989;
  p_output1[81]=t3241;
  p_output1[82]=1.;
  p_output1[83]=t2989;
  p_output1[84]=0.333333333333333*t2091*t38181;
  p_output1[85]=-0.333333333333333*t2091*t38181;
  p_output1[86]=-1.;
  p_output1[87]=t2989;
  p_output1[88]=t3241;
  p_output1[89]=1.;
  p_output1[90]=t2989;
  p_output1[91]=0.333333333333333*t2091*t38227;
  p_output1[92]=-0.333333333333333*t2091*t38227;
  p_output1[93]=-1.;
  p_output1[94]=t2989;
  p_output1[95]=t3241;
  p_output1[96]=1.;
  p_output1[97]=t2989;
  p_output1[98]=0.333333333333333*t2091*t38288;
  p_output1[99]=-0.333333333333333*t2091*t38288;
  p_output1[100]=-1.;
  p_output1[101]=t2989;
  p_output1[102]=t3241;
  p_output1[103]=1.;
  p_output1[104]=t2989;
  p_output1[105]=0.333333333333333*t2091*t38356;
  p_output1[106]=-0.333333333333333*t2091*t38356;
  p_output1[107]=-1.;
  p_output1[108]=t2989;
  p_output1[109]=t3241;
  p_output1[110]=1.;
  p_output1[111]=t2989;
  p_output1[112]=0.333333333333333*t2091*t38384;
  p_output1[113]=-0.333333333333333*t2091*t38384;
  p_output1[114]=-1.;
  p_output1[115]=t2989;
  p_output1[116]=t3241;
  p_output1[117]=1.;
  p_output1[118]=t2989;
  p_output1[119]=0.333333333333333*t2091*t38407;
  p_output1[120]=-0.333333333333333*t2091*t38407;
  p_output1[121]=-1.;
  p_output1[122]=t2989;
  p_output1[123]=t3241;
  p_output1[124]=1.;
  p_output1[125]=t2989;
  p_output1[126]=0.333333333333333*t2091*t38783;
  p_output1[127]=-0.333333333333333*t2091*t38783;
  p_output1[128]=-1.;
  p_output1[129]=t2989;
  p_output1[130]=t3241;
  p_output1[131]=1.;
  p_output1[132]=t2989;
  p_output1[133]=0.333333333333333*t2091*t38841;
  p_output1[134]=-0.333333333333333*t2091*t38841;
  p_output1[135]=-1.;
  p_output1[136]=t2989;
  p_output1[137]=t3241;
  p_output1[138]=1.;
  p_output1[139]=t2989;
  p_output1[140]=0.333333333333333*t2091*t38858;
  p_output1[141]=-0.333333333333333*t2091*t38858;
  p_output1[142]=-1.;
  p_output1[143]=t2989;
  p_output1[144]=t3241;
  p_output1[145]=1.;
  p_output1[146]=t2989;
  p_output1[147]=0.333333333333333*t2091*t38877;
  p_output1[148]=-0.333333333333333*t2091*t38877;
  p_output1[149]=-1.;
  p_output1[150]=t2989;
  p_output1[151]=t3241;
  p_output1[152]=1.;
  p_output1[153]=t2989;
  p_output1[154]=0.25*t2091*t39306;
  p_output1[155]=-0.25*t2091*t39306;
  p_output1[156]=-0.5;
  p_output1[157]=t39367;
  p_output1[158]=1.;
  p_output1[159]=-0.5;
  p_output1[160]=t39368;
  p_output1[161]=0.25*t2091*t39380;
  p_output1[162]=-0.25*t2091*t39380;
  p_output1[163]=-0.5;
  p_output1[164]=t39367;
  p_output1[165]=1.;
  p_output1[166]=-0.5;
  p_output1[167]=t39368;
  p_output1[168]=0.25*t2091*t39388;
  p_output1[169]=-0.25*t2091*t39388;
  p_output1[170]=-0.5;
  p_output1[171]=t39367;
  p_output1[172]=1.;
  p_output1[173]=-0.5;
  p_output1[174]=t39368;
  p_output1[175]=0.25*t2091*t39399;
  p_output1[176]=-0.25*t2091*t39399;
  p_output1[177]=-0.5;
  p_output1[178]=t39367;
  p_output1[179]=1.;
  p_output1[180]=-0.5;
  p_output1[181]=t39368;
  p_output1[182]=0.25*t2091*t39409;
  p_output1[183]=-0.25*t2091*t39409;
  p_output1[184]=-0.5;
  p_output1[185]=t39367;
  p_output1[186]=1.;
  p_output1[187]=-0.5;
  p_output1[188]=t39368;
  p_output1[189]=0.25*t2091*t39417;
  p_output1[190]=-0.25*t2091*t39417;
  p_output1[191]=-0.5;
  p_output1[192]=t39367;
  p_output1[193]=1.;
  p_output1[194]=-0.5;
  p_output1[195]=t39368;
  p_output1[196]=0.25*t2091*t39646;
  p_output1[197]=-0.25*t2091*t39646;
  p_output1[198]=-0.5;
  p_output1[199]=t39367;
  p_output1[200]=1.;
  p_output1[201]=-0.5;
  p_output1[202]=t39368;
  p_output1[203]=0.25*t2091*t39668;
  p_output1[204]=-0.25*t2091*t39668;
  p_output1[205]=-0.5;
  p_output1[206]=t39367;
  p_output1[207]=1.;
  p_output1[208]=-0.5;
  p_output1[209]=t39368;
  p_output1[210]=0.25*t2091*t39678;
  p_output1[211]=-0.25*t2091*t39678;
  p_output1[212]=-0.5;
  p_output1[213]=t39367;
  p_output1[214]=1.;
  p_output1[215]=-0.5;
  p_output1[216]=t39368;
  p_output1[217]=0.25*t2091*t39689;
  p_output1[218]=-0.25*t2091*t39689;
  p_output1[219]=-0.5;
  p_output1[220]=t39367;
  p_output1[221]=1.;
  p_output1[222]=-0.5;
  p_output1[223]=t39368;
  p_output1[224]=0.25*t2091*t39699;
  p_output1[225]=-0.25*t2091*t39699;
  p_output1[226]=-0.5;
  p_output1[227]=t39367;
  p_output1[228]=1.;
  p_output1[229]=-0.5;
  p_output1[230]=t39368;
  p_output1[231]=0.25*t2091*t39722;
  p_output1[232]=-0.25*t2091*t39722;
  p_output1[233]=-0.5;
  p_output1[234]=t39367;
  p_output1[235]=1.;
  p_output1[236]=-0.5;
  p_output1[237]=t39368;
  p_output1[238]=0.25*t2091*t39854;
  p_output1[239]=-0.25*t2091*t39854;
  p_output1[240]=-0.5;
  p_output1[241]=t39367;
  p_output1[242]=1.;
  p_output1[243]=-0.5;
  p_output1[244]=t39368;
  p_output1[245]=0.25*t2091*t40132;
  p_output1[246]=-0.25*t2091*t40132;
  p_output1[247]=-0.5;
  p_output1[248]=t39367;
  p_output1[249]=1.;
  p_output1[250]=-0.5;
  p_output1[251]=t39368;
  p_output1[252]=0.25*t2091*t40165;
  p_output1[253]=-0.25*t2091*t40165;
  p_output1[254]=-0.5;
  p_output1[255]=t39367;
  p_output1[256]=1.;
  p_output1[257]=-0.5;
  p_output1[258]=t39368;
  p_output1[259]=0.25*t2091*t40206;
  p_output1[260]=-0.25*t2091*t40206;
  p_output1[261]=-0.5;
  p_output1[262]=t39367;
  p_output1[263]=1.;
  p_output1[264]=-0.5;
  p_output1[265]=t39368;
  p_output1[266]=0.25*t2091*t40218;
  p_output1[267]=-0.25*t2091*t40218;
  p_output1[268]=-0.5;
  p_output1[269]=t39367;
  p_output1[270]=1.;
  p_output1[271]=-0.5;
  p_output1[272]=t39368;
  p_output1[273]=0.25*t2091*t40226;
  p_output1[274]=-0.25*t2091*t40226;
  p_output1[275]=-0.5;
  p_output1[276]=t39367;
  p_output1[277]=1.;
  p_output1[278]=-0.5;
  p_output1[279]=t39368;
  p_output1[280]=0.25*t2091*t40517;
  p_output1[281]=-0.25*t2091*t40517;
  p_output1[282]=-0.5;
  p_output1[283]=t39367;
  p_output1[284]=1.;
  p_output1[285]=-0.5;
  p_output1[286]=t39368;
  p_output1[287]=0.25*t2091*t40703;
  p_output1[288]=-0.25*t2091*t40703;
  p_output1[289]=-0.5;
  p_output1[290]=t39367;
  p_output1[291]=1.;
  p_output1[292]=-0.5;
  p_output1[293]=t39368;
  p_output1[294]=0.25*t2091*t40805;
  p_output1[295]=-0.25*t2091*t40805;
  p_output1[296]=-0.5;
  p_output1[297]=t39367;
  p_output1[298]=1.;
  p_output1[299]=-0.5;
  p_output1[300]=t39368;
  p_output1[301]=0.25*t2091*t40830;
  p_output1[302]=-0.25*t2091*t40830;
  p_output1[303]=-0.5;
  p_output1[304]=t39367;
  p_output1[305]=1.;
  p_output1[306]=-0.5;
  p_output1[307]=t39368;
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
