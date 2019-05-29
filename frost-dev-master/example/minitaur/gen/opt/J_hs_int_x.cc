/*
 * Automatically Generated from Mathematica.
 * Wed 29 May 2019 15:16:01 GMT-04:00
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
  double t681;
  double t19263;
  double t19335;
  double t19362;
  double t26050;
  double t26453;
  double t26511;
  double t26517;
  double t26518;
  double t26513;
  double t27581;
  double t29705;
  double t30734;
  double t30741;
  double t30887;
  double t30893;
  double t30898;
  double t30899;
  double t30907;
  double t30908;
  double t30981;
  double t30984;
  double t31151;
  double t31199;
  double t31213;
  double t31218;
  double t31223;
  double t31225;
  double t31230;
  double t31231;
  double t31241;
  double t31246;
  double t31253;
  double t31254;
  double t31617;
  double t31620;
  double t31630;
  double t31637;
  double t31662;
  double t31825;
  double t32205;
  double t32214;
  double t32378;
  double t32399;
  double t32411;
  double t32412;
  double t32421;
  double t32430;
  double t32471;
  double t32516;
  double t32566;
  double t32567;
  double t32700;
  double t32718;
  double t32600;
  double t32604;
  double t32724;
  double t32732;
  double t32796;
  double t32797;
  double t32821;
  double t32830;
  double t32836;
  double t32838;
  double t32841;
  double t32842;
  double t32848;
  double t32850;
  double t32857;
  double t32858;
  double t32863;
  double t32873;
  double t33023;
  double t33076;
  double t33088;
  double t33090;
  double t33096;
  double t33098;
  double t33103;
  double t33104;
  double t33136;
  double t33141;
  double t33149;
  double t33150;
  double t33638;
  double t33862;
  double t34255;
  double t34841;
  double t34882;
  double t34898;
  double t34917;
  double t34926;
  double t35106;
  double t35122;
  double t35148;
  double t35153;
  t681 = 4.*var5[0];
  t19263 = t681 + var7[0] + var3[0];
  t19335 = -1. + var8[0];
  t19362 = 1/t19335;
  t26050 = -1.*var1[0];
  t26453 = t26050 + var1[1];
  t26511 = -0.333333333333333*t19362*t26453;
  t26517 = 4.*var5[1];
  t26518 = t26517 + var7[1] + var3[1];
  t26513 = -1.33333333333333*t19362*t26453;
  t27581 = 4.*var5[2];
  t29705 = t27581 + var7[2] + var3[2];
  t30734 = 4.*var5[3];
  t30741 = t30734 + var7[3] + var3[3];
  t30887 = 4.*var5[4];
  t30893 = t30887 + var7[4] + var3[4];
  t30898 = 4.*var5[5];
  t30899 = t30898 + var7[5] + var3[5];
  t30907 = 4.*var5[6];
  t30908 = t30907 + var7[6] + var3[6];
  t30981 = 4.*var5[7];
  t30984 = t30981 + var7[7] + var3[7];
  t31151 = 4.*var5[8];
  t31199 = t31151 + var7[8] + var3[8];
  t31213 = 4.*var5[9];
  t31218 = t31213 + var7[9] + var3[9];
  t31223 = 4.*var5[10];
  t31225 = t31223 + var7[10] + var3[10];
  t31230 = 4.*var5[11];
  t31231 = t31230 + var7[11] + var3[11];
  t31241 = 4.*var5[12];
  t31246 = t31241 + var7[12] + var3[12];
  t31253 = 4.*var5[13];
  t31254 = t31253 + var7[13] + var3[13];
  t31617 = 4.*var5[14];
  t31620 = t31617 + var7[14] + var3[14];
  t31630 = 4.*var5[15];
  t31637 = t31630 + var7[15] + var3[15];
  t31662 = 4.*var5[16];
  t31825 = t31662 + var7[16] + var3[16];
  t32205 = 4.*var5[17];
  t32214 = t32205 + var7[17] + var3[17];
  t32378 = 4.*var5[18];
  t32399 = t32378 + var7[18] + var3[18];
  t32411 = 4.*var5[19];
  t32412 = t32411 + var7[19] + var3[19];
  t32421 = 4.*var5[20];
  t32430 = t32421 + var7[20] + var3[20];
  t32471 = 4.*var5[21];
  t32516 = t32471 + var7[21] + var3[21];
  t32566 = -1.*var7[0];
  t32567 = t32566 + var3[0];
  t32700 = -1.*var7[1];
  t32718 = t32700 + var3[1];
  t32600 = -0.25*t19362*t26453;
  t32604 = 0.25*t19362*t26453;
  t32724 = -1.*var7[2];
  t32732 = t32724 + var3[2];
  t32796 = -1.*var7[3];
  t32797 = t32796 + var3[3];
  t32821 = -1.*var7[4];
  t32830 = t32821 + var3[4];
  t32836 = -1.*var7[5];
  t32838 = t32836 + var3[5];
  t32841 = -1.*var7[6];
  t32842 = t32841 + var3[6];
  t32848 = -1.*var7[7];
  t32850 = t32848 + var3[7];
  t32857 = -1.*var7[8];
  t32858 = t32857 + var3[8];
  t32863 = -1.*var7[9];
  t32873 = t32863 + var3[9];
  t33023 = -1.*var7[10];
  t33076 = t33023 + var3[10];
  t33088 = -1.*var7[11];
  t33090 = t33088 + var3[11];
  t33096 = -1.*var7[12];
  t33098 = t33096 + var3[12];
  t33103 = -1.*var7[13];
  t33104 = t33103 + var3[13];
  t33136 = -1.*var7[14];
  t33141 = t33136 + var3[14];
  t33149 = -1.*var7[15];
  t33150 = t33149 + var3[15];
  t33638 = -1.*var7[16];
  t33862 = t33638 + var3[16];
  t34255 = -1.*var7[17];
  t34841 = t34255 + var3[17];
  t34882 = -1.*var7[18];
  t34898 = t34882 + var3[18];
  t34917 = -1.*var7[19];
  t34926 = t34917 + var3[19];
  t35106 = -1.*var7[20];
  t35122 = t35106 + var3[20];
  t35148 = -1.*var7[21];
  t35153 = t35148 + var3[21];
  p_output1[0]=0.333333333333333*t19263*t19362;
  p_output1[1]=-0.333333333333333*t19263*t19362;
  p_output1[2]=-1.;
  p_output1[3]=t26511;
  p_output1[4]=t26513;
  p_output1[5]=1.;
  p_output1[6]=t26511;
  p_output1[7]=0.333333333333333*t19362*t26518;
  p_output1[8]=-0.333333333333333*t19362*t26518;
  p_output1[9]=-1.;
  p_output1[10]=t26511;
  p_output1[11]=t26513;
  p_output1[12]=1.;
  p_output1[13]=t26511;
  p_output1[14]=0.333333333333333*t19362*t29705;
  p_output1[15]=-0.333333333333333*t19362*t29705;
  p_output1[16]=-1.;
  p_output1[17]=t26511;
  p_output1[18]=t26513;
  p_output1[19]=1.;
  p_output1[20]=t26511;
  p_output1[21]=0.333333333333333*t19362*t30741;
  p_output1[22]=-0.333333333333333*t19362*t30741;
  p_output1[23]=-1.;
  p_output1[24]=t26511;
  p_output1[25]=t26513;
  p_output1[26]=1.;
  p_output1[27]=t26511;
  p_output1[28]=0.333333333333333*t19362*t30893;
  p_output1[29]=-0.333333333333333*t19362*t30893;
  p_output1[30]=-1.;
  p_output1[31]=t26511;
  p_output1[32]=t26513;
  p_output1[33]=1.;
  p_output1[34]=t26511;
  p_output1[35]=0.333333333333333*t19362*t30899;
  p_output1[36]=-0.333333333333333*t19362*t30899;
  p_output1[37]=-1.;
  p_output1[38]=t26511;
  p_output1[39]=t26513;
  p_output1[40]=1.;
  p_output1[41]=t26511;
  p_output1[42]=0.333333333333333*t19362*t30908;
  p_output1[43]=-0.333333333333333*t19362*t30908;
  p_output1[44]=-1.;
  p_output1[45]=t26511;
  p_output1[46]=t26513;
  p_output1[47]=1.;
  p_output1[48]=t26511;
  p_output1[49]=0.333333333333333*t19362*t30984;
  p_output1[50]=-0.333333333333333*t19362*t30984;
  p_output1[51]=-1.;
  p_output1[52]=t26511;
  p_output1[53]=t26513;
  p_output1[54]=1.;
  p_output1[55]=t26511;
  p_output1[56]=0.333333333333333*t19362*t31199;
  p_output1[57]=-0.333333333333333*t19362*t31199;
  p_output1[58]=-1.;
  p_output1[59]=t26511;
  p_output1[60]=t26513;
  p_output1[61]=1.;
  p_output1[62]=t26511;
  p_output1[63]=0.333333333333333*t19362*t31218;
  p_output1[64]=-0.333333333333333*t19362*t31218;
  p_output1[65]=-1.;
  p_output1[66]=t26511;
  p_output1[67]=t26513;
  p_output1[68]=1.;
  p_output1[69]=t26511;
  p_output1[70]=0.333333333333333*t19362*t31225;
  p_output1[71]=-0.333333333333333*t19362*t31225;
  p_output1[72]=-1.;
  p_output1[73]=t26511;
  p_output1[74]=t26513;
  p_output1[75]=1.;
  p_output1[76]=t26511;
  p_output1[77]=0.333333333333333*t19362*t31231;
  p_output1[78]=-0.333333333333333*t19362*t31231;
  p_output1[79]=-1.;
  p_output1[80]=t26511;
  p_output1[81]=t26513;
  p_output1[82]=1.;
  p_output1[83]=t26511;
  p_output1[84]=0.333333333333333*t19362*t31246;
  p_output1[85]=-0.333333333333333*t19362*t31246;
  p_output1[86]=-1.;
  p_output1[87]=t26511;
  p_output1[88]=t26513;
  p_output1[89]=1.;
  p_output1[90]=t26511;
  p_output1[91]=0.333333333333333*t19362*t31254;
  p_output1[92]=-0.333333333333333*t19362*t31254;
  p_output1[93]=-1.;
  p_output1[94]=t26511;
  p_output1[95]=t26513;
  p_output1[96]=1.;
  p_output1[97]=t26511;
  p_output1[98]=0.333333333333333*t19362*t31620;
  p_output1[99]=-0.333333333333333*t19362*t31620;
  p_output1[100]=-1.;
  p_output1[101]=t26511;
  p_output1[102]=t26513;
  p_output1[103]=1.;
  p_output1[104]=t26511;
  p_output1[105]=0.333333333333333*t19362*t31637;
  p_output1[106]=-0.333333333333333*t19362*t31637;
  p_output1[107]=-1.;
  p_output1[108]=t26511;
  p_output1[109]=t26513;
  p_output1[110]=1.;
  p_output1[111]=t26511;
  p_output1[112]=0.333333333333333*t19362*t31825;
  p_output1[113]=-0.333333333333333*t19362*t31825;
  p_output1[114]=-1.;
  p_output1[115]=t26511;
  p_output1[116]=t26513;
  p_output1[117]=1.;
  p_output1[118]=t26511;
  p_output1[119]=0.333333333333333*t19362*t32214;
  p_output1[120]=-0.333333333333333*t19362*t32214;
  p_output1[121]=-1.;
  p_output1[122]=t26511;
  p_output1[123]=t26513;
  p_output1[124]=1.;
  p_output1[125]=t26511;
  p_output1[126]=0.333333333333333*t19362*t32399;
  p_output1[127]=-0.333333333333333*t19362*t32399;
  p_output1[128]=-1.;
  p_output1[129]=t26511;
  p_output1[130]=t26513;
  p_output1[131]=1.;
  p_output1[132]=t26511;
  p_output1[133]=0.333333333333333*t19362*t32412;
  p_output1[134]=-0.333333333333333*t19362*t32412;
  p_output1[135]=-1.;
  p_output1[136]=t26511;
  p_output1[137]=t26513;
  p_output1[138]=1.;
  p_output1[139]=t26511;
  p_output1[140]=0.333333333333333*t19362*t32430;
  p_output1[141]=-0.333333333333333*t19362*t32430;
  p_output1[142]=-1.;
  p_output1[143]=t26511;
  p_output1[144]=t26513;
  p_output1[145]=1.;
  p_output1[146]=t26511;
  p_output1[147]=0.333333333333333*t19362*t32516;
  p_output1[148]=-0.333333333333333*t19362*t32516;
  p_output1[149]=-1.;
  p_output1[150]=t26511;
  p_output1[151]=t26513;
  p_output1[152]=1.;
  p_output1[153]=t26511;
  p_output1[154]=0.25*t19362*t32567;
  p_output1[155]=-0.25*t19362*t32567;
  p_output1[156]=-0.5;
  p_output1[157]=t32600;
  p_output1[158]=1.;
  p_output1[159]=-0.5;
  p_output1[160]=t32604;
  p_output1[161]=0.25*t19362*t32718;
  p_output1[162]=-0.25*t19362*t32718;
  p_output1[163]=-0.5;
  p_output1[164]=t32600;
  p_output1[165]=1.;
  p_output1[166]=-0.5;
  p_output1[167]=t32604;
  p_output1[168]=0.25*t19362*t32732;
  p_output1[169]=-0.25*t19362*t32732;
  p_output1[170]=-0.5;
  p_output1[171]=t32600;
  p_output1[172]=1.;
  p_output1[173]=-0.5;
  p_output1[174]=t32604;
  p_output1[175]=0.25*t19362*t32797;
  p_output1[176]=-0.25*t19362*t32797;
  p_output1[177]=-0.5;
  p_output1[178]=t32600;
  p_output1[179]=1.;
  p_output1[180]=-0.5;
  p_output1[181]=t32604;
  p_output1[182]=0.25*t19362*t32830;
  p_output1[183]=-0.25*t19362*t32830;
  p_output1[184]=-0.5;
  p_output1[185]=t32600;
  p_output1[186]=1.;
  p_output1[187]=-0.5;
  p_output1[188]=t32604;
  p_output1[189]=0.25*t19362*t32838;
  p_output1[190]=-0.25*t19362*t32838;
  p_output1[191]=-0.5;
  p_output1[192]=t32600;
  p_output1[193]=1.;
  p_output1[194]=-0.5;
  p_output1[195]=t32604;
  p_output1[196]=0.25*t19362*t32842;
  p_output1[197]=-0.25*t19362*t32842;
  p_output1[198]=-0.5;
  p_output1[199]=t32600;
  p_output1[200]=1.;
  p_output1[201]=-0.5;
  p_output1[202]=t32604;
  p_output1[203]=0.25*t19362*t32850;
  p_output1[204]=-0.25*t19362*t32850;
  p_output1[205]=-0.5;
  p_output1[206]=t32600;
  p_output1[207]=1.;
  p_output1[208]=-0.5;
  p_output1[209]=t32604;
  p_output1[210]=0.25*t19362*t32858;
  p_output1[211]=-0.25*t19362*t32858;
  p_output1[212]=-0.5;
  p_output1[213]=t32600;
  p_output1[214]=1.;
  p_output1[215]=-0.5;
  p_output1[216]=t32604;
  p_output1[217]=0.25*t19362*t32873;
  p_output1[218]=-0.25*t19362*t32873;
  p_output1[219]=-0.5;
  p_output1[220]=t32600;
  p_output1[221]=1.;
  p_output1[222]=-0.5;
  p_output1[223]=t32604;
  p_output1[224]=0.25*t19362*t33076;
  p_output1[225]=-0.25*t19362*t33076;
  p_output1[226]=-0.5;
  p_output1[227]=t32600;
  p_output1[228]=1.;
  p_output1[229]=-0.5;
  p_output1[230]=t32604;
  p_output1[231]=0.25*t19362*t33090;
  p_output1[232]=-0.25*t19362*t33090;
  p_output1[233]=-0.5;
  p_output1[234]=t32600;
  p_output1[235]=1.;
  p_output1[236]=-0.5;
  p_output1[237]=t32604;
  p_output1[238]=0.25*t19362*t33098;
  p_output1[239]=-0.25*t19362*t33098;
  p_output1[240]=-0.5;
  p_output1[241]=t32600;
  p_output1[242]=1.;
  p_output1[243]=-0.5;
  p_output1[244]=t32604;
  p_output1[245]=0.25*t19362*t33104;
  p_output1[246]=-0.25*t19362*t33104;
  p_output1[247]=-0.5;
  p_output1[248]=t32600;
  p_output1[249]=1.;
  p_output1[250]=-0.5;
  p_output1[251]=t32604;
  p_output1[252]=0.25*t19362*t33141;
  p_output1[253]=-0.25*t19362*t33141;
  p_output1[254]=-0.5;
  p_output1[255]=t32600;
  p_output1[256]=1.;
  p_output1[257]=-0.5;
  p_output1[258]=t32604;
  p_output1[259]=0.25*t19362*t33150;
  p_output1[260]=-0.25*t19362*t33150;
  p_output1[261]=-0.5;
  p_output1[262]=t32600;
  p_output1[263]=1.;
  p_output1[264]=-0.5;
  p_output1[265]=t32604;
  p_output1[266]=0.25*t19362*t33862;
  p_output1[267]=-0.25*t19362*t33862;
  p_output1[268]=-0.5;
  p_output1[269]=t32600;
  p_output1[270]=1.;
  p_output1[271]=-0.5;
  p_output1[272]=t32604;
  p_output1[273]=0.25*t19362*t34841;
  p_output1[274]=-0.25*t19362*t34841;
  p_output1[275]=-0.5;
  p_output1[276]=t32600;
  p_output1[277]=1.;
  p_output1[278]=-0.5;
  p_output1[279]=t32604;
  p_output1[280]=0.25*t19362*t34898;
  p_output1[281]=-0.25*t19362*t34898;
  p_output1[282]=-0.5;
  p_output1[283]=t32600;
  p_output1[284]=1.;
  p_output1[285]=-0.5;
  p_output1[286]=t32604;
  p_output1[287]=0.25*t19362*t34926;
  p_output1[288]=-0.25*t19362*t34926;
  p_output1[289]=-0.5;
  p_output1[290]=t32600;
  p_output1[291]=1.;
  p_output1[292]=-0.5;
  p_output1[293]=t32604;
  p_output1[294]=0.25*t19362*t35122;
  p_output1[295]=-0.25*t19362*t35122;
  p_output1[296]=-0.5;
  p_output1[297]=t32600;
  p_output1[298]=1.;
  p_output1[299]=-0.5;
  p_output1[300]=t32604;
  p_output1[301]=0.25*t19362*t35153;
  p_output1[302]=-0.25*t19362*t35153;
  p_output1[303]=-0.5;
  p_output1[304]=t32600;
  p_output1[305]=1.;
  p_output1[306]=-0.5;
  p_output1[307]=t32604;
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
