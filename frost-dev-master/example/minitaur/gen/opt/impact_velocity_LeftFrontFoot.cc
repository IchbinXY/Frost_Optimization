/*
 * Automatically Generated from Mathematica.
 * Tue 28 May 2019 22:49:23 GMT-04:00
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
static void output1(double *p_output1,const double *var1,const double *var2)
{
  double t33;
  double t783;
  double t2902;
  double t3548;
  double t4400;
  double t4406;
  double t4408;
  double t4350;
  double t656;
  double t4379;
  double t3999;
  double t4402;
  double t4411;
  double t4415;
  double t4416;
  double t4490;
  double t4631;
  double t4634;
  double t4670;
  double t4675;
  double t4432;
  double t4434;
  double t4435;
  double t4436;
  double t4438;
  double t4466;
  double t4728;
  double t3676;
  double t3897;
  double t3899;
  double t4324;
  double t4391;
  double t4394;
  double t4709;
  double t4739;
  double t4776;
  double t4729;
  double t4897;
  double t4907;
  double t4908;
  double t4862;
  double t4874;
  double t4885;
  double t4903;
  double t4921;
  double t4922;
  double t5134;
  double t5115;
  double t5116;
  double t5117;
  double t5136;
  double t4894;
  double t4932;
  double t4900;
  double t5094;
  double t5103;
  double t5188;
  double t5118;
  double t4899;
  double t4905;
  double t4906;
  double t4909;
  double t4918;
  double t4927;
  double t4928;
  double t4936;
  double t4965;
  double t4974;
  double t5361;
  double t5362;
  double t5391;
  double t5396;
  double t5132;
  double t5426;
  double t5431;
  double t5440;
  double t5443;
  double t5153;
  double t5161;
  double t5447;
  double t5452;
  double t5454;
  double t5455;
  double t5231;
  double t5235;
  double t5242;
  double t5254;
  double t5255;
  double t5287;
  double t6157;
  double t6164;
  double t6183;
  double t6184;
  double t5941;
  double t5944;
  double t6207;
  double t6209;
  double t6210;
  double t6211;
  double t6352;
  double t6348;
  double t4413;
  double t4426;
  double t4427;
  double t4428;
  double t6350;
  double t6354;
  double t6355;
  double t6366;
  double t6372;
  double t6377;
  double t4479;
  double t4546;
  double t4592;
  double t4612;
  double t4613;
  double t4688;
  double t4716;
  double t4718;
  double t4719;
  double t4720;
  double t6392;
  double t6393;
  double t6396;
  double t6431;
  double t4778;
  double t6365;
  double t6379;
  double t6381;
  double t6384;
  double t6439;
  double t6440;
  double t6468;
  double t6475;
  double t4800;
  double t6659;
  double t6660;
  double t6662;
  double t6669;
  double t6674;
  double t6676;
  double t6681;
  double t6696;
  double t6720;
  double t6722;
  double t6723;
  double t6971;
  double t6975;
  double t6976;
  double t7079;
  double t7081;
  double t7083;
  double t7086;
  double t7088;
  double t7089;
  double t7094;
  double t7096;
  double t7097;
  double t7100;
  double t7104;
  double t7108;
  double t7109;
  double t7131;
  double t7144;
  double t7241;
  double t7277;
  double t7293;
  double t7295;
  double t7298;
  double t7299;
  double t7300;
  double t7301;
  double t7306;
  double t7307;
  double t7310;
  double t7319;
  double t7829;
  double t7849;
  double t7877;
  double t7878;
  double t7719;
  double t7720;
  double t7888;
  double t7911;
  double t7912;
  double t7913;
  double t8206;
  double t8207;
  double t8248;
  double t8299;
  double t8301;
  double t8310;
  double t8403;
  double t8404;
  double t8405;
  double t8409;
  double t8388;
  double t8399;
  double t8400;
  double t8401;
  double t8270;
  double t8312;
  double t8371;
  double t8376;
  double t12126;
  double t12134;
  double t12136;
  double t12145;
  double t12151;
  double t12157;
  double t12182;
  double t14016;
  double t14017;
  double t14018;
  double t14019;
  double t14022;
  double t14023;
  double t14025;
  double t14026;
  double t14030;
  double t14032;
  double t14040;
  double t14057;
  double t14165;
  double t14168;
  double t14178;
  double t14180;
  double t14131;
  double t14150;
  double t14186;
  double t14190;
  double t14197;
  double t14198;
  t33 = Cos(var1[4]);
  t783 = Cos(var1[6]);
  t2902 = -1.*t783;
  t3548 = 1. + t2902;
  t4400 = Cos(var1[8]);
  t4406 = Sin(var1[8]);
  t4408 = -3.e-6*t4406;
  t4350 = Sin(var1[4]);
  t656 = Cos(var1[5]);
  t4379 = Sin(var1[6]);
  t3999 = Sin(var1[5]);
  t4402 = -3.e-6*t4400;
  t4411 = t4402 + t4408;
  t4415 = 3.e-6*t4400;
  t4416 = t4415 + t4408;
  t4490 = -9.e-12*t4406;
  t4631 = t33*t656*t783;
  t4634 = -3.e-6*t33*t3548*t3999;
  t4670 = t4350*t4379;
  t4675 = t4631 + t4634 + t4670;
  t4432 = -1.000000000009*t3548;
  t4434 = 1. + t4432;
  t4435 = t4434*t4350;
  t4436 = -1.*t33*t656*t4379;
  t4438 = -3.e-6*t33*t3999*t4379;
  t4466 = t4435 + t4436 + t4438;
  t4728 = 3.e-6*t4406;
  t3676 = 3.e-6*t33*t656*t3548;
  t3897 = -9.e-12*t3548;
  t3899 = 1. + t3897;
  t4324 = -1.*t33*t3899*t3999;
  t4391 = -3.e-6*t4350*t4379;
  t4394 = t3676 + t4324 + t4391;
  t4709 = -1.*t4400;
  t4739 = t4415 + t4728;
  t4776 = 9.e-12*t4406;
  t4729 = t4402 + t4728;
  t4897 = 1. + t4709;
  t4907 = -3.e-6*t4897;
  t4908 = t4907 + t4728;
  t4862 = -3.e-6*t33*t656*t3548;
  t4874 = -1.*t33*t783*t3999;
  t4885 = t4862 + t4874;
  t4903 = -1.*t4406;
  t4921 = -1.*t33*t656*t3899;
  t4922 = t4921 + t4634;
  t5134 = 3.e-6*t4897;
  t5115 = -3.e-6*t33*t656*t4379;
  t5116 = t33*t3999*t4379;
  t5117 = t5115 + t5116;
  t5136 = t5134 + t4728;
  t4894 = 9.e-13*var1[8];
  t4932 = t4907 + t4408;
  t4900 = -9.e-12*t4897;
  t5094 = -1.000000000009*t4897;
  t5103 = 1. + t5094;
  t5188 = t5134 + t4408;
  t5118 = 9.e-12*t4897;
  t4899 = 0.2000000000018*t4897;
  t4905 = t4900 + t4903;
  t4906 = 0.1*t4905;
  t4909 = -9.e-7*t4908;
  t4918 = t4894 + t4899 + t4906 + t4909;
  t4927 = 3.e-7*var1[8];
  t4928 = -1.62e-17*t4897;
  t4936 = 0.2*t4932;
  t4965 = 0.1*t4908;
  t4974 = t4927 + t4928 + t4936 + t4965;
  t5361 = -1.*t656*t783*t4350;
  t5362 = 3.e-6*t3548*t4350*t3999;
  t5391 = t33*t4379;
  t5396 = t5361 + t5362 + t5391;
  t5132 = t5118 + t4903;
  t5426 = -3.e-6*t656*t3548*t4350;
  t5431 = t3899*t4350*t3999;
  t5440 = -3.e-6*t33*t4379;
  t5443 = t5426 + t5431 + t5440;
  t5153 = -1.8e-11*t4897;
  t5161 = 1. + t5153;
  t5447 = t33*t4434;
  t5452 = t656*t4350*t4379;
  t5454 = 3.e-6*t4350*t3999*t4379;
  t5455 = t5447 + t5452 + t5454;
  t5231 = 0.1000000000009*t4897;
  t5235 = -9.e-7*t4932;
  t5242 = t4900 + t4406;
  t5254 = 0.2*t5242;
  t5255 = t4894 + t5231 + t5235 + t5254;
  t5287 = t5118 + t4406;
  t6157 = -3.e-6*t783*t4350;
  t6164 = 3.e-6*t33*t656*t4379;
  t6183 = 9.e-12*t33*t3999*t4379;
  t6184 = t6157 + t6164 + t6183;
  t5941 = t783*t4350;
  t5944 = t5941 + t4436 + t4438;
  t6207 = -1.*t33*t656*t783;
  t6209 = -3.e-6*t33*t783*t3999;
  t6210 = -1.000000000009*t4350*t4379;
  t6211 = t6207 + t6209 + t6210;
  t6352 = Cos(var1[3]);
  t6348 = Sin(var1[3]);
  t4413 = 0.2*t4411;
  t4426 = 0.1*t4416;
  t4427 = -1.62e-17*t4406;
  t4428 = 3.e-7 + t4413 + t4426 + t4427;
  t6350 = t656*t6348*t4350;
  t6354 = t6352*t3999;
  t6355 = t6350 + t6354;
  t6366 = t6352*t656;
  t6372 = -1.*t6348*t4350*t3999;
  t6377 = t6366 + t6372;
  t4479 = -9.e-7*t4411;
  t4546 = t4400 + t4490;
  t4592 = 0.2*t4546;
  t4612 = 0.1000000000009*t4406;
  t4613 = 9.e-13 + t4479 + t4592 + t4612;
  t4688 = -9.e-7*t4416;
  t4716 = t4709 + t4490;
  t4718 = 0.1*t4716;
  t4719 = 0.2000000000018*t4406;
  t4720 = 9.e-13 + t4688 + t4718 + t4719;
  t6392 = -1.*t33*t4434*t6348;
  t6393 = -1.*t6355*t4379;
  t6396 = 3.e-6*t6377*t4379;
  t6431 = t6392 + t6393 + t6396;
  t4778 = t4709 + t4776;
  t6365 = 3.e-6*t3548*t6355;
  t6379 = t3899*t6377;
  t6381 = 3.e-6*t33*t6348*t4379;
  t6384 = t6365 + t6379 + t6381;
  t6439 = t783*t6355;
  t6440 = 3.e-6*t3548*t6377;
  t6468 = -1.*t33*t6348*t4379;
  t6475 = t6439 + t6440 + t6468;
  t4800 = t4400 + t4776;
  t6659 = -1.*t656*t6348*t4350;
  t6660 = -1.*t6352*t3999;
  t6662 = t6659 + t6660;
  t6669 = 3.e-6*t3548*t6662;
  t6674 = t783*t6377;
  t6676 = t6669 + t6674;
  t6681 = t3899*t6662;
  t6696 = t6681 + t6440;
  t6720 = 3.e-6*t6662*t4379;
  t6722 = -1.*t6377*t4379;
  t6723 = t6720 + t6722;
  t6971 = t6352*t656*t4350;
  t6975 = -1.*t6348*t3999;
  t6976 = t6971 + t6975;
  t7079 = -1.*t656*t6348;
  t7081 = -1.*t6352*t4350*t3999;
  t7083 = t7079 + t7081;
  t7086 = t783*t6976;
  t7088 = 3.e-6*t3548*t7083;
  t7089 = -1.*t6352*t33*t4379;
  t7094 = t7086 + t7088 + t7089;
  t7096 = 3.e-6*t3548*t6976;
  t7097 = t3899*t7083;
  t7100 = 3.e-6*t6352*t33*t4379;
  t7104 = t7096 + t7097 + t7100;
  t7108 = -1.*t6352*t33*t4434;
  t7109 = -1.*t6976*t4379;
  t7131 = 3.e-6*t7083*t4379;
  t7144 = t7108 + t7109 + t7131;
  t7241 = t33*t656*t783*t6348;
  t7277 = -3.e-6*t33*t3548*t6348*t3999;
  t7293 = t6348*t4350*t4379;
  t7295 = t7241 + t7277 + t7293;
  t7298 = 3.e-6*t33*t656*t3548*t6348;
  t7299 = -1.*t33*t3899*t6348*t3999;
  t7300 = -3.e-6*t6348*t4350*t4379;
  t7301 = t7298 + t7299 + t7300;
  t7306 = t4434*t6348*t4350;
  t7307 = -1.*t33*t656*t6348*t4379;
  t7310 = -3.e-6*t33*t6348*t3999*t4379;
  t7319 = t7306 + t7307 + t7310;
  t7829 = 3.e-6*t33*t783*t6348;
  t7849 = 3.e-6*t6355*t4379;
  t7877 = -9.e-12*t6377*t4379;
  t7878 = t7829 + t7849 + t7877;
  t7719 = -1.*t33*t783*t6348;
  t7720 = t7719 + t6393 + t6396;
  t7888 = -1.*t783*t6355;
  t7911 = 3.e-6*t783*t6377;
  t7912 = 1.000000000009*t33*t6348*t4379;
  t7913 = t7888 + t7911 + t7912;
  t8206 = -1.*t6352*t656*t4350;
  t8207 = t6348*t3999;
  t8248 = t8206 + t8207;
  t8299 = t656*t6348;
  t8301 = t6352*t4350*t3999;
  t8310 = t8299 + t8301;
  t8403 = t783*t8248;
  t8404 = 3.e-6*t3548*t8310;
  t8405 = t6352*t33*t4379;
  t8409 = t8403 + t8404 + t8405;
  t8388 = t6352*t33*t4434;
  t8399 = -1.*t8248*t4379;
  t8400 = 3.e-6*t8310*t4379;
  t8401 = t8388 + t8399 + t8400;
  t8270 = 3.e-6*t3548*t8248;
  t8312 = t3899*t8310;
  t8371 = -3.e-6*t6352*t33*t4379;
  t8376 = t8270 + t8312 + t8371;
  t12126 = t783*t8310;
  t12134 = t7096 + t12126;
  t12136 = t3899*t6976;
  t12145 = t12136 + t8404;
  t12151 = 3.e-6*t6976*t4379;
  t12157 = -1.*t8310*t4379;
  t12182 = t12151 + t12157;
  t14016 = -1.*t6352*t33*t656*t783;
  t14017 = 3.e-6*t6352*t33*t3548*t3999;
  t14018 = -1.*t6352*t4350*t4379;
  t14019 = t14016 + t14017 + t14018;
  t14022 = -3.e-6*t6352*t33*t656*t3548;
  t14023 = t6352*t33*t3899*t3999;
  t14025 = 3.e-6*t6352*t4350*t4379;
  t14026 = t14022 + t14023 + t14025;
  t14030 = -1.*t6352*t4434*t4350;
  t14032 = t6352*t33*t656*t4379;
  t14040 = 3.e-6*t6352*t33*t3999*t4379;
  t14057 = t14030 + t14032 + t14040;
  t14165 = -3.e-6*t6352*t33*t783;
  t14168 = 3.e-6*t8248*t4379;
  t14178 = -9.e-12*t8310*t4379;
  t14180 = t14165 + t14168 + t14178;
  t14131 = t6352*t33*t783;
  t14150 = t14131 + t8399 + t8400;
  t14186 = -1.*t783*t8248;
  t14190 = 3.e-6*t783*t8310;
  t14197 = -1.000000000009*t6352*t33*t4379;
  t14198 = t14186 + t14190 + t14197;
  p_output1[0]=var2[0] + (-6.000000000054e-7*t3548*t3999*t4350 - 0.2000000000018*t33*t4379 + t4918*t5396 + t4974*t5443 + t5255*t5455 - 0.3*(t5287*t5396 + t5188*t5443 + t5103*t5455) + 0.2*(t5103*t5396 + t5136*t5443 + t5132*t5455) + 0.100001*(t5188*t5396 + t5161*t5443 + t5136*t5455) - 0.2000000000018*t3548*t4350*t656)*var2[4] + (-0.2000000000018*t33*t3548*t3999 + t4885*t4918 + t4922*t4974 + 0.2*(t4885*t5103 + t5117*t5132 + t4922*t5136) + 0.100001*(t5117*t5136 + t4922*t5161 + t4885*t5188) + t5117*t5255 - 0.3*(t5103*t5117 + t4922*t5188 + t4885*t5287) + 6.000000000054e-7*t33*t3548*t656)*var2[5] + (6.000000000054e-7*t33*t3999*t4379 + t4918*t5944 + t4974*t6184 + t5255*t6211 - 0.3*(t5287*t5944 + t5188*t6184 + t5103*t6211) + 0.2*(t5103*t5944 + t5136*t6184 + t5132*t6211) + 0.100001*(t5188*t5944 + t5161*t6184 + t5136*t6211) + 0.2000000000018*t33*t4379*t656 - 0.2000000000018*t4350*t783)*var2[6] + (t4394*t4428 + t4466*t4613 + t4675*t4720 + 0.100001*(-1.8e-11*t4394*t4406 + t4675*t4729 + t4466*t4739) + 0.2*(-1.000000000009*t4406*t4675 + t4394*t4739 + t4466*t4778) - 0.3*(-1.000000000009*t4406*t4466 + t4394*t4729 + t4675*t4800))*var2[8];
  p_output1[1]=var2[1] + (0.2000000000018*t33*t4379*t6352 + 0.2000000000018*t3548*t6976 - 6.000000000054e-7*t3548*t7083 + t4918*t7094 + t4974*t7104 + t5255*t7144 - 0.3*(t5287*t7094 + t5188*t7104 + t5103*t7144) + 0.2*(t5103*t7094 + t5136*t7104 + t5132*t7144) + 0.100001*(t5188*t7094 + t5161*t7104 + t5136*t7144))*var2[3] + (6.000000000054e-7*t33*t3548*t3999*t6348 - 0.2000000000018*t4350*t4379*t6348 + 0.2000000000018*t33*t3548*t6348*t656 + t4918*t7295 + t4974*t7301 + t5255*t7319 - 0.3*(t5287*t7295 + t5188*t7301 + t5103*t7319) + 0.2*(t5103*t7295 + t5136*t7301 + t5132*t7319) + 0.100001*(t5188*t7295 + t5161*t7301 + t5136*t7319))*var2[4] + (0.2000000000018*t3548*t6377 - 6.000000000054e-7*t3548*t6662 + t4918*t6676 + t4974*t6696 + t5255*t6723 - 0.3*(t5287*t6676 + t5188*t6696 + t5103*t6723) + 0.2*(t5103*t6676 + t5136*t6696 + t5132*t6723) + 0.100001*(t5188*t6676 + t5161*t6696 + t5136*t6723))*var2[5] + (0.2000000000018*t4379*t6355 - 6.000000000054e-7*t4379*t6377 + t4918*t7720 + 0.2000000000018*t33*t6348*t783 + t4974*t7878 + t5255*t7913 - 0.3*(t5287*t7720 + t5188*t7878 + t5103*t7913) + 0.2*(t5103*t7720 + t5136*t7878 + t5132*t7913) + 0.100001*(t5188*t7720 + t5161*t7878 + t5136*t7913))*var2[6] + (t4428*t6384 + t4613*t6431 + t4720*t6475 + 0.2*(t4739*t6384 + t4778*t6431 - 1.000000000009*t4406*t6475) + 0.100001*(-1.8e-11*t4406*t6384 + t4739*t6431 + t4729*t6475) - 0.3*(t4729*t6384 - 1.000000000009*t4406*t6431 + t4800*t6475))*var2[8];
  p_output1[2]=var2[2] + (0.2000000000018*t33*t4379*t6348 + 0.2000000000018*t3548*t6355 - 6.000000000054e-7*t3548*t6377 + t4974*t6384 + t5255*t6431 + t4918*t6475 + 0.2*(t5136*t6384 + t5132*t6431 + t5103*t6475) + 0.100001*(t5161*t6384 + t5136*t6431 + t5188*t6475) - 0.3*(t5188*t6384 + t5103*t6431 + t5287*t6475))*var2[3] + (t14019*t4918 + t14026*t4974 + 0.2*(t14019*t5103 + t14057*t5132 + t14026*t5136) + 0.100001*(t14057*t5136 + t14026*t5161 + t14019*t5188) + t14057*t5255 - 0.3*(t14057*t5103 + t14026*t5188 + t14019*t5287) - 6.000000000054e-7*t33*t3548*t3999*t6352 + 0.2000000000018*t4350*t4379*t6352 - 0.2000000000018*t33*t3548*t6352*t656)*var2[4] + (t12134*t4918 + t12145*t4974 + 0.2*(t12134*t5103 + t12182*t5132 + t12145*t5136) + 0.100001*(t12182*t5136 + t12145*t5161 + t12134*t5188) + t12182*t5255 - 0.3*(t12182*t5103 + t12145*t5188 + t12134*t5287) - 6.000000000054e-7*t3548*t6976 + 0.2000000000018*t3548*t8310)*var2[5] + (t14150*t4918 + t14180*t4974 + 0.2*(t14150*t5103 + t14198*t5132 + t14180*t5136) + 0.100001*(t14198*t5136 + t14180*t5161 + t14150*t5188) + t14198*t5255 - 0.3*(t14198*t5103 + t14180*t5188 + t14150*t5287) - 0.2000000000018*t33*t6352*t783 + 0.2000000000018*t4379*t8248 - 6.000000000054e-7*t4379*t8310)*var2[6] + (t4428*t8376 + t4613*t8401 + t4720*t8409 + 0.2*(t4739*t8376 + t4778*t8401 - 1.000000000009*t4406*t8409) + 0.100001*(-1.8e-11*t4406*t8376 + t4739*t8401 + t4729*t8409) - 0.3*(t4729*t8376 - 1.000000000009*t4406*t8401 + t4800*t8409))*var2[8];
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

  double *var1,*var2;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 2)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Two input(s) required (var1,var2).");
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
  mrows = mxGetM(prhs[1]);
  ncols = mxGetN(prhs[1]);
  if( !mxIsDouble(prhs[1]) || mxIsComplex(prhs[1]) ||
    ( !(mrows == 22 && ncols == 1) && 
      !(mrows == 1 && ncols == 22))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var2 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "impact_velocity_LeftFrontFoot.hh"

namespace Flight2
{

void impact_velocity_LeftFrontFoot_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
