/*
 * Automatically Generated from Mathematica.
 * Tue 28 May 2019 22:47:58 GMT-04:00
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
  double t3362;
  double t3456;
  double t3462;
  double t3517;
  double t3550;
  double t3563;
  double t3577;
  double t3591;
  double t3600;
  double t3579;
  double t3820;
  double t3821;
  double t3876;
  double t3886;
  double t3940;
  double t3990;
  double t4041;
  double t4078;
  double t4214;
  double t4216;
  double t4300;
  double t4375;
  double t4381;
  double t4386;
  double t4489;
  double t4495;
  double t4504;
  double t4506;
  double t4609;
  double t4624;
  double t4674;
  double t4679;
  double t4749;
  double t4761;
  double t4824;
  double t4850;
  double t4956;
  double t4957;
  double t4968;
  double t5005;
  double t5169;
  double t5181;
  double t5310;
  double t5325;
  double t5464;
  double t5563;
  double t7328;
  double t7832;
  double t8787;
  double t12242;
  double t12587;
  double t13052;
  double t14609;
  double t14624;
  double t14221;
  double t14322;
  double t14648;
  double t14652;
  double t14953;
  double t15022;
  double t15069;
  double t15341;
  double t15452;
  double t15454;
  double t17811;
  double t17836;
  double t18099;
  double t18103;
  double t18139;
  double t18140;
  double t18196;
  double t18201;
  double t18235;
  double t18236;
  double t18518;
  double t18534;
  double t18542;
  double t18544;
  double t18617;
  double t18621;
  double t18631;
  double t18632;
  double t18672;
  double t18704;
  double t18846;
  double t18847;
  double t18949;
  double t18959;
  double t18991;
  double t18992;
  double t19495;
  double t19501;
  double t19549;
  double t19554;
  double t19561;
  double t19562;
  t3362 = 4.*var5[0];
  t3456 = var3[0] + t3362 + var7[0];
  t3462 = -1. + var8[0];
  t3517 = 1/t3462;
  t3550 = -1.*var1[0];
  t3563 = t3550 + var1[1];
  t3577 = -0.333333333333333*t3517*t3563;
  t3591 = 4.*var5[1];
  t3600 = var3[1] + t3591 + var7[1];
  t3579 = -1.33333333333333*t3517*t3563;
  t3820 = 4.*var5[2];
  t3821 = var3[2] + t3820 + var7[2];
  t3876 = 4.*var5[3];
  t3886 = var3[3] + t3876 + var7[3];
  t3940 = 4.*var5[4];
  t3990 = var3[4] + t3940 + var7[4];
  t4041 = 4.*var5[5];
  t4078 = var3[5] + t4041 + var7[5];
  t4214 = 4.*var5[6];
  t4216 = var3[6] + t4214 + var7[6];
  t4300 = 4.*var5[7];
  t4375 = var3[7] + t4300 + var7[7];
  t4381 = 4.*var5[8];
  t4386 = var3[8] + t4381 + var7[8];
  t4489 = 4.*var5[9];
  t4495 = var3[9] + t4489 + var7[9];
  t4504 = 4.*var5[10];
  t4506 = var3[10] + t4504 + var7[10];
  t4609 = 4.*var5[11];
  t4624 = var3[11] + t4609 + var7[11];
  t4674 = 4.*var5[12];
  t4679 = var3[12] + t4674 + var7[12];
  t4749 = 4.*var5[13];
  t4761 = var3[13] + t4749 + var7[13];
  t4824 = 4.*var5[14];
  t4850 = var3[14] + t4824 + var7[14];
  t4956 = 4.*var5[15];
  t4957 = var3[15] + t4956 + var7[15];
  t4968 = 4.*var5[16];
  t5005 = var3[16] + t4968 + var7[16];
  t5169 = 4.*var5[17];
  t5181 = var3[17] + t5169 + var7[17];
  t5310 = 4.*var5[18];
  t5325 = var3[18] + t5310 + var7[18];
  t5464 = 4.*var5[19];
  t5563 = var3[19] + t5464 + var7[19];
  t7328 = 4.*var5[20];
  t7832 = var3[20] + t7328 + var7[20];
  t8787 = 4.*var5[21];
  t12242 = var3[21] + t8787 + var7[21];
  t12587 = -1.*var7[0];
  t13052 = var3[0] + t12587;
  t14609 = -1.*var7[1];
  t14624 = var3[1] + t14609;
  t14221 = -0.25*t3517*t3563;
  t14322 = 0.25*t3517*t3563;
  t14648 = -1.*var7[2];
  t14652 = var3[2] + t14648;
  t14953 = -1.*var7[3];
  t15022 = var3[3] + t14953;
  t15069 = -1.*var7[4];
  t15341 = var3[4] + t15069;
  t15452 = -1.*var7[5];
  t15454 = var3[5] + t15452;
  t17811 = -1.*var7[6];
  t17836 = var3[6] + t17811;
  t18099 = -1.*var7[7];
  t18103 = var3[7] + t18099;
  t18139 = -1.*var7[8];
  t18140 = var3[8] + t18139;
  t18196 = -1.*var7[9];
  t18201 = var3[9] + t18196;
  t18235 = -1.*var7[10];
  t18236 = var3[10] + t18235;
  t18518 = -1.*var7[11];
  t18534 = var3[11] + t18518;
  t18542 = -1.*var7[12];
  t18544 = var3[12] + t18542;
  t18617 = -1.*var7[13];
  t18621 = var3[13] + t18617;
  t18631 = -1.*var7[14];
  t18632 = var3[14] + t18631;
  t18672 = -1.*var7[15];
  t18704 = var3[15] + t18672;
  t18846 = -1.*var7[16];
  t18847 = var3[16] + t18846;
  t18949 = -1.*var7[17];
  t18959 = var3[17] + t18949;
  t18991 = -1.*var7[18];
  t18992 = var3[18] + t18991;
  t19495 = -1.*var7[19];
  t19501 = var3[19] + t19495;
  t19549 = -1.*var7[20];
  t19554 = var3[20] + t19549;
  t19561 = -1.*var7[21];
  t19562 = var3[21] + t19561;
  p_output1[0]=0.333333333333333*t3456*t3517;
  p_output1[1]=-0.333333333333333*t3456*t3517;
  p_output1[2]=-1.;
  p_output1[3]=t3577;
  p_output1[4]=t3579;
  p_output1[5]=1.;
  p_output1[6]=t3577;
  p_output1[7]=0.333333333333333*t3517*t3600;
  p_output1[8]=-0.333333333333333*t3517*t3600;
  p_output1[9]=-1.;
  p_output1[10]=t3577;
  p_output1[11]=t3579;
  p_output1[12]=1.;
  p_output1[13]=t3577;
  p_output1[14]=0.333333333333333*t3517*t3821;
  p_output1[15]=-0.333333333333333*t3517*t3821;
  p_output1[16]=-1.;
  p_output1[17]=t3577;
  p_output1[18]=t3579;
  p_output1[19]=1.;
  p_output1[20]=t3577;
  p_output1[21]=0.333333333333333*t3517*t3886;
  p_output1[22]=-0.333333333333333*t3517*t3886;
  p_output1[23]=-1.;
  p_output1[24]=t3577;
  p_output1[25]=t3579;
  p_output1[26]=1.;
  p_output1[27]=t3577;
  p_output1[28]=0.333333333333333*t3517*t3990;
  p_output1[29]=-0.333333333333333*t3517*t3990;
  p_output1[30]=-1.;
  p_output1[31]=t3577;
  p_output1[32]=t3579;
  p_output1[33]=1.;
  p_output1[34]=t3577;
  p_output1[35]=0.333333333333333*t3517*t4078;
  p_output1[36]=-0.333333333333333*t3517*t4078;
  p_output1[37]=-1.;
  p_output1[38]=t3577;
  p_output1[39]=t3579;
  p_output1[40]=1.;
  p_output1[41]=t3577;
  p_output1[42]=0.333333333333333*t3517*t4216;
  p_output1[43]=-0.333333333333333*t3517*t4216;
  p_output1[44]=-1.;
  p_output1[45]=t3577;
  p_output1[46]=t3579;
  p_output1[47]=1.;
  p_output1[48]=t3577;
  p_output1[49]=0.333333333333333*t3517*t4375;
  p_output1[50]=-0.333333333333333*t3517*t4375;
  p_output1[51]=-1.;
  p_output1[52]=t3577;
  p_output1[53]=t3579;
  p_output1[54]=1.;
  p_output1[55]=t3577;
  p_output1[56]=0.333333333333333*t3517*t4386;
  p_output1[57]=-0.333333333333333*t3517*t4386;
  p_output1[58]=-1.;
  p_output1[59]=t3577;
  p_output1[60]=t3579;
  p_output1[61]=1.;
  p_output1[62]=t3577;
  p_output1[63]=0.333333333333333*t3517*t4495;
  p_output1[64]=-0.333333333333333*t3517*t4495;
  p_output1[65]=-1.;
  p_output1[66]=t3577;
  p_output1[67]=t3579;
  p_output1[68]=1.;
  p_output1[69]=t3577;
  p_output1[70]=0.333333333333333*t3517*t4506;
  p_output1[71]=-0.333333333333333*t3517*t4506;
  p_output1[72]=-1.;
  p_output1[73]=t3577;
  p_output1[74]=t3579;
  p_output1[75]=1.;
  p_output1[76]=t3577;
  p_output1[77]=0.333333333333333*t3517*t4624;
  p_output1[78]=-0.333333333333333*t3517*t4624;
  p_output1[79]=-1.;
  p_output1[80]=t3577;
  p_output1[81]=t3579;
  p_output1[82]=1.;
  p_output1[83]=t3577;
  p_output1[84]=0.333333333333333*t3517*t4679;
  p_output1[85]=-0.333333333333333*t3517*t4679;
  p_output1[86]=-1.;
  p_output1[87]=t3577;
  p_output1[88]=t3579;
  p_output1[89]=1.;
  p_output1[90]=t3577;
  p_output1[91]=0.333333333333333*t3517*t4761;
  p_output1[92]=-0.333333333333333*t3517*t4761;
  p_output1[93]=-1.;
  p_output1[94]=t3577;
  p_output1[95]=t3579;
  p_output1[96]=1.;
  p_output1[97]=t3577;
  p_output1[98]=0.333333333333333*t3517*t4850;
  p_output1[99]=-0.333333333333333*t3517*t4850;
  p_output1[100]=-1.;
  p_output1[101]=t3577;
  p_output1[102]=t3579;
  p_output1[103]=1.;
  p_output1[104]=t3577;
  p_output1[105]=0.333333333333333*t3517*t4957;
  p_output1[106]=-0.333333333333333*t3517*t4957;
  p_output1[107]=-1.;
  p_output1[108]=t3577;
  p_output1[109]=t3579;
  p_output1[110]=1.;
  p_output1[111]=t3577;
  p_output1[112]=0.333333333333333*t3517*t5005;
  p_output1[113]=-0.333333333333333*t3517*t5005;
  p_output1[114]=-1.;
  p_output1[115]=t3577;
  p_output1[116]=t3579;
  p_output1[117]=1.;
  p_output1[118]=t3577;
  p_output1[119]=0.333333333333333*t3517*t5181;
  p_output1[120]=-0.333333333333333*t3517*t5181;
  p_output1[121]=-1.;
  p_output1[122]=t3577;
  p_output1[123]=t3579;
  p_output1[124]=1.;
  p_output1[125]=t3577;
  p_output1[126]=0.333333333333333*t3517*t5325;
  p_output1[127]=-0.333333333333333*t3517*t5325;
  p_output1[128]=-1.;
  p_output1[129]=t3577;
  p_output1[130]=t3579;
  p_output1[131]=1.;
  p_output1[132]=t3577;
  p_output1[133]=0.333333333333333*t3517*t5563;
  p_output1[134]=-0.333333333333333*t3517*t5563;
  p_output1[135]=-1.;
  p_output1[136]=t3577;
  p_output1[137]=t3579;
  p_output1[138]=1.;
  p_output1[139]=t3577;
  p_output1[140]=0.333333333333333*t3517*t7832;
  p_output1[141]=-0.333333333333333*t3517*t7832;
  p_output1[142]=-1.;
  p_output1[143]=t3577;
  p_output1[144]=t3579;
  p_output1[145]=1.;
  p_output1[146]=t3577;
  p_output1[147]=0.333333333333333*t12242*t3517;
  p_output1[148]=-0.333333333333333*t12242*t3517;
  p_output1[149]=-1.;
  p_output1[150]=t3577;
  p_output1[151]=t3579;
  p_output1[152]=1.;
  p_output1[153]=t3577;
  p_output1[154]=0.25*t13052*t3517;
  p_output1[155]=-0.25*t13052*t3517;
  p_output1[156]=-0.5;
  p_output1[157]=t14221;
  p_output1[158]=1.;
  p_output1[159]=-0.5;
  p_output1[160]=t14322;
  p_output1[161]=0.25*t14624*t3517;
  p_output1[162]=-0.25*t14624*t3517;
  p_output1[163]=-0.5;
  p_output1[164]=t14221;
  p_output1[165]=1.;
  p_output1[166]=-0.5;
  p_output1[167]=t14322;
  p_output1[168]=0.25*t14652*t3517;
  p_output1[169]=-0.25*t14652*t3517;
  p_output1[170]=-0.5;
  p_output1[171]=t14221;
  p_output1[172]=1.;
  p_output1[173]=-0.5;
  p_output1[174]=t14322;
  p_output1[175]=0.25*t15022*t3517;
  p_output1[176]=-0.25*t15022*t3517;
  p_output1[177]=-0.5;
  p_output1[178]=t14221;
  p_output1[179]=1.;
  p_output1[180]=-0.5;
  p_output1[181]=t14322;
  p_output1[182]=0.25*t15341*t3517;
  p_output1[183]=-0.25*t15341*t3517;
  p_output1[184]=-0.5;
  p_output1[185]=t14221;
  p_output1[186]=1.;
  p_output1[187]=-0.5;
  p_output1[188]=t14322;
  p_output1[189]=0.25*t15454*t3517;
  p_output1[190]=-0.25*t15454*t3517;
  p_output1[191]=-0.5;
  p_output1[192]=t14221;
  p_output1[193]=1.;
  p_output1[194]=-0.5;
  p_output1[195]=t14322;
  p_output1[196]=0.25*t17836*t3517;
  p_output1[197]=-0.25*t17836*t3517;
  p_output1[198]=-0.5;
  p_output1[199]=t14221;
  p_output1[200]=1.;
  p_output1[201]=-0.5;
  p_output1[202]=t14322;
  p_output1[203]=0.25*t18103*t3517;
  p_output1[204]=-0.25*t18103*t3517;
  p_output1[205]=-0.5;
  p_output1[206]=t14221;
  p_output1[207]=1.;
  p_output1[208]=-0.5;
  p_output1[209]=t14322;
  p_output1[210]=0.25*t18140*t3517;
  p_output1[211]=-0.25*t18140*t3517;
  p_output1[212]=-0.5;
  p_output1[213]=t14221;
  p_output1[214]=1.;
  p_output1[215]=-0.5;
  p_output1[216]=t14322;
  p_output1[217]=0.25*t18201*t3517;
  p_output1[218]=-0.25*t18201*t3517;
  p_output1[219]=-0.5;
  p_output1[220]=t14221;
  p_output1[221]=1.;
  p_output1[222]=-0.5;
  p_output1[223]=t14322;
  p_output1[224]=0.25*t18236*t3517;
  p_output1[225]=-0.25*t18236*t3517;
  p_output1[226]=-0.5;
  p_output1[227]=t14221;
  p_output1[228]=1.;
  p_output1[229]=-0.5;
  p_output1[230]=t14322;
  p_output1[231]=0.25*t18534*t3517;
  p_output1[232]=-0.25*t18534*t3517;
  p_output1[233]=-0.5;
  p_output1[234]=t14221;
  p_output1[235]=1.;
  p_output1[236]=-0.5;
  p_output1[237]=t14322;
  p_output1[238]=0.25*t18544*t3517;
  p_output1[239]=-0.25*t18544*t3517;
  p_output1[240]=-0.5;
  p_output1[241]=t14221;
  p_output1[242]=1.;
  p_output1[243]=-0.5;
  p_output1[244]=t14322;
  p_output1[245]=0.25*t18621*t3517;
  p_output1[246]=-0.25*t18621*t3517;
  p_output1[247]=-0.5;
  p_output1[248]=t14221;
  p_output1[249]=1.;
  p_output1[250]=-0.5;
  p_output1[251]=t14322;
  p_output1[252]=0.25*t18632*t3517;
  p_output1[253]=-0.25*t18632*t3517;
  p_output1[254]=-0.5;
  p_output1[255]=t14221;
  p_output1[256]=1.;
  p_output1[257]=-0.5;
  p_output1[258]=t14322;
  p_output1[259]=0.25*t18704*t3517;
  p_output1[260]=-0.25*t18704*t3517;
  p_output1[261]=-0.5;
  p_output1[262]=t14221;
  p_output1[263]=1.;
  p_output1[264]=-0.5;
  p_output1[265]=t14322;
  p_output1[266]=0.25*t18847*t3517;
  p_output1[267]=-0.25*t18847*t3517;
  p_output1[268]=-0.5;
  p_output1[269]=t14221;
  p_output1[270]=1.;
  p_output1[271]=-0.5;
  p_output1[272]=t14322;
  p_output1[273]=0.25*t18959*t3517;
  p_output1[274]=-0.25*t18959*t3517;
  p_output1[275]=-0.5;
  p_output1[276]=t14221;
  p_output1[277]=1.;
  p_output1[278]=-0.5;
  p_output1[279]=t14322;
  p_output1[280]=0.25*t18992*t3517;
  p_output1[281]=-0.25*t18992*t3517;
  p_output1[282]=-0.5;
  p_output1[283]=t14221;
  p_output1[284]=1.;
  p_output1[285]=-0.5;
  p_output1[286]=t14322;
  p_output1[287]=0.25*t19501*t3517;
  p_output1[288]=-0.25*t19501*t3517;
  p_output1[289]=-0.5;
  p_output1[290]=t14221;
  p_output1[291]=1.;
  p_output1[292]=-0.5;
  p_output1[293]=t14322;
  p_output1[294]=0.25*t19554*t3517;
  p_output1[295]=-0.25*t19554*t3517;
  p_output1[296]=-0.5;
  p_output1[297]=t14221;
  p_output1[298]=1.;
  p_output1[299]=-0.5;
  p_output1[300]=t14322;
  p_output1[301]=0.25*t19562*t3517;
  p_output1[302]=-0.25*t19562*t3517;
  p_output1[303]=-0.5;
  p_output1[304]=t14221;
  p_output1[305]=1.;
  p_output1[306]=-0.5;
  p_output1[307]=t14322;
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
