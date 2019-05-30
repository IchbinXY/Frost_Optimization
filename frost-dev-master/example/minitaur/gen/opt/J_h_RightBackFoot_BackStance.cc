/*
 * Automatically Generated from Mathematica.
 * Wed 29 May 2019 23:55:52 GMT-04:00
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
  double t2695;
  double t3495;
  double t3671;
  double t4021;
  double t4220;
  double t4244;
  double t4245;
  double t4282;
  double t4290;
  double t1484;
  double t2330;
  double t4009;
  double t4106;
  double t4418;
  double t4461;
  double t5040;
  double t4293;
  double t4325;
  double t5080;
  double t4732;
  double t4733;
  double t4739;
  double t4743;
  double t4758;
  double t4805;
  double t5155;
  double t5166;
  double t5194;
  double t5231;
  double t5571;
  double t5586;
  double t5673;
  double t5690;
  double t5727;
  double t5787;
  double t5909;
  double t6031;
  double t6051;
  double t6020;
  double t5113;
  double t5948;
  double t6091;
  double t3815;
  double t3872;
  double t3896;
  double t4001;
  double t4218;
  double t4275;
  double t4341;
  double t4519;
  double t4632;
  double t5072;
  double t5136;
  double t5141;
  double t5147;
  double t5149;
  double t5333;
  double t5377;
  double t5440;
  double t5491;
  double t5560;
  double t6403;
  double t6490;
  double t6571;
  double t6025;
  double t6648;
  double t6681;
  double t6958;
  double t7295;
  double t7300;
  double t7310;
  double t6106;
  double t6155;
  double t6156;
  double t9035;
  double t9846;
  double t10647;
  double t10698;
  double t11059;
  double t11064;
  double t11100;
  double t11157;
  double t11164;
  double t11340;
  double t11972;
  double t11975;
  double t12275;
  double t12346;
  double t12235;
  double t12238;
  double t12780;
  double t12478;
  double t12581;
  double t12585;
  double t12591;
  double t12844;
  double t12860;
  double t12896;
  double t13091;
  double t13092;
  double t13102;
  double t13277;
  double t13111;
  double t14127;
  double t14135;
  double t14131;
  double t14149;
  double t14197;
  double t14208;
  double t14258;
  double t14259;
  double t14285;
  double t14286;
  double t14292;
  double t14302;
  double t14358;
  double t14361;
  double t14369;
  double t14408;
  double t14442;
  double t14443;
  double t14445;
  double t14447;
  double t14675;
  double t14700;
  double t14704;
  double t14716;
  double t14748;
  double t14750;
  double t14820;
  double t14835;
  double t14885;
  double t14889;
  double t14901;
  double t14924;
  double t15085;
  double t15091;
  double t15101;
  double t15104;
  double t15119;
  double t15129;
  double t15135;
  double t15150;
  double t15151;
  double t15162;
  double t15163;
  double t15175;
  double t15189;
  double t15199;
  double t15203;
  double t15282;
  double t15285;
  double t15288;
  double t15291;
  double t15292;
  double t15295;
  double t15308;
  double t15310;
  double t15312;
  double t15315;
  double t15316;
  double t15326;
  double t15327;
  double t15328;
  double t15329;
  double t12253;
  double t12372;
  double t12416;
  double t12430;
  double t12685;
  double t12799;
  double t12807;
  double t12819;
  double t12820;
  double t12958;
  double t12970;
  double t12977;
  double t12986;
  double t13009;
  double t15377;
  double t15383;
  double t15384;
  double t15385;
  double t15389;
  double t15390;
  double t15394;
  double t13120;
  double t15396;
  double t15398;
  double t13956;
  double t15941;
  double t15950;
  double t15955;
  double t15960;
  double t15983;
  double t15984;
  double t15985;
  double t15986;
  double t15988;
  double t15989;
  double t15990;
  double t15991;
  double t16172;
  double t16174;
  double t16179;
  double t16189;
  double t16198;
  double t16201;
  double t16276;
  double t16281;
  double t16323;
  double t16324;
  double t16349;
  double t16764;
  double t16794;
  double t16795;
  double t16811;
  double t16812;
  double t16853;
  double t16861;
  double t16907;
  double t16914;
  double t16916;
  double t16922;
  double t17033;
  double t17044;
  double t17049;
  double t17058;
  double t17139;
  double t17143;
  double t17146;
  double t17150;
  double t17159;
  double t17160;
  double t17161;
  double t17171;
  double t17174;
  t2695 = Cos(var1[19]);
  t3495 = -1.*t2695;
  t3671 = 1. + t3495;
  t4021 = Sin(var1[4]);
  t4220 = Cos(var1[21]);
  t4244 = -1.*t4220;
  t4245 = 1. + t4244;
  t4282 = -3.e-6*t4245;
  t4290 = Sin(var1[21]);
  t1484 = Cos(var1[4]);
  t2330 = Sin(var1[19]);
  t4009 = Cos(var1[5]);
  t4106 = Sin(var1[5]);
  t4418 = 3.e-6*t4290;
  t4461 = t4282 + t4418;
  t5040 = 3.e-13*var1[21];
  t4293 = -3.e-6*t4290;
  t4325 = t4282 + t4293;
  t5080 = -9.e-12*t4245;
  t4732 = -3.e-6*t1484*t2330;
  t4733 = -3.e-6*t3671*t4009*t4021;
  t4739 = -9.e-12*t3671;
  t4743 = 1. + t4739;
  t4758 = t4743*t4021*t4106;
  t4805 = t4732 + t4733 + t4758;
  t5155 = t1484*t2330;
  t5166 = -1.*t2695*t4009*t4021;
  t5194 = 3.e-6*t3671*t4021*t4106;
  t5231 = t5155 + t5166 + t5194;
  t5571 = -1.000000000009*t3671;
  t5586 = 1. + t5571;
  t5673 = t5586*t1484;
  t5690 = t4009*t2330*t4021;
  t5727 = 3.e-6*t2330*t4021*t4106;
  t5787 = t5673 + t5690 + t5727;
  t5909 = 3.e-6*t4245;
  t6031 = -1.000000000009*t4245;
  t6051 = 1. + t6031;
  t6020 = 9.e-12*t4245;
  t5113 = -1.*t4290;
  t5948 = t5909 + t4293;
  t6091 = t5909 + t4418;
  t3815 = -1.8e-12*t3671;
  t3872 = -1. + t2695;
  t3896 = 0.2*t3872;
  t4001 = t3815 + t3896;
  t4218 = 1.e-7*var1[21];
  t4275 = 5.4e-18*t4245;
  t4341 = -0.200000000003*t4325;
  t4519 = 0.100000000003*t4461;
  t4632 = t4218 + t4275 + t4341 + t4519;
  t5072 = -0.2000000000048*t4245;
  t5136 = t5080 + t5113;
  t5141 = 0.100000000003*t5136;
  t5147 = 3.e-7*t4461;
  t5149 = t5040 + t5072 + t5141 + t5147;
  t5333 = 0.1000000000039*t4245;
  t5377 = 3.e-7*t4325;
  t5440 = t5080 + t4290;
  t5491 = -0.200000000003*t5440;
  t5560 = t5040 + t5333 + t5377 + t5491;
  t6403 = -1.*t4743*t1484*t4009;
  t6490 = -3.e-6*t3671*t1484*t4106;
  t6571 = t6403 + t6490;
  t6025 = t6020 + t4290;
  t6648 = -3.e-6*t3671*t1484*t4009;
  t6681 = -1.*t2695*t1484*t4106;
  t6958 = t6648 + t6681;
  t7295 = -3.e-6*t1484*t4009*t2330;
  t7300 = t1484*t2330*t4106;
  t7310 = t7295 + t7300;
  t6106 = t6020 + t5113;
  t6155 = -1.8e-11*t4245;
  t6156 = 1. + t6155;
  t9035 = -1.*t2695*t1484*t4009;
  t9846 = -1.000000000009*t2330*t4021;
  t10647 = -3.e-6*t2695*t1484*t4106;
  t10698 = t9035 + t9846 + t10647;
  t11059 = -1.*t1484*t4009*t2330;
  t11064 = t2695*t4021;
  t11100 = -3.e-6*t1484*t2330*t4106;
  t11157 = t11059 + t11064 + t11100;
  t11164 = 3.e-6*t1484*t4009*t2330;
  t11340 = -3.e-6*t2695*t4021;
  t11972 = 9.e-12*t1484*t2330*t4106;
  t11975 = t11164 + t11340 + t11972;
  t12275 = 3.e-6*t4220;
  t12346 = t12275 + t4293;
  t12235 = -3.e-6*t4220;
  t12238 = t12235 + t4293;
  t12780 = -9.e-12*t4290;
  t12478 = 3.e-6*t3671*t1484*t4009;
  t12581 = -3.e-6*t2330*t4021;
  t12585 = -1.*t4743*t1484*t4106;
  t12591 = t12478 + t12581 + t12585;
  t12844 = t2695*t1484*t4009;
  t12860 = t2330*t4021;
  t12896 = t12844 + t12860 + t6490;
  t13091 = t5586*t4021;
  t13092 = t11059 + t13091 + t11100;
  t13102 = t12275 + t4418;
  t13277 = t12235 + t4418;
  t13111 = 9.e-12*t4290;
  t14127 = Cos(var1[3]);
  t14135 = Sin(var1[3]);
  t14131 = t14127*t4009*t4021;
  t14149 = -1.*t14135*t4106;
  t14197 = t14131 + t14149;
  t14208 = -1.*t4009*t14135;
  t14258 = -1.*t14127*t4021*t4106;
  t14259 = t14208 + t14258;
  t14285 = 3.e-6*t14127*t1484*t2330;
  t14286 = 3.e-6*t3671*t14197;
  t14292 = t4743*t14259;
  t14302 = t14285 + t14286 + t14292;
  t14358 = -1.*t14127*t1484*t2330;
  t14361 = t2695*t14197;
  t14369 = 3.e-6*t3671*t14259;
  t14408 = t14358 + t14361 + t14369;
  t14442 = -1.*t5586*t14127*t1484;
  t14443 = -1.*t2330*t14197;
  t14445 = 3.e-6*t2330*t14259;
  t14447 = t14442 + t14443 + t14445;
  t14675 = 3.e-6*t3671*t1484*t4009*t14135;
  t14700 = -3.e-6*t2330*t14135*t4021;
  t14704 = -1.*t4743*t1484*t14135*t4106;
  t14716 = t14675 + t14700 + t14704;
  t14748 = t2695*t1484*t4009*t14135;
  t14750 = t2330*t14135*t4021;
  t14820 = -3.e-6*t3671*t1484*t14135*t4106;
  t14835 = t14748 + t14750 + t14820;
  t14885 = -1.*t1484*t4009*t2330*t14135;
  t14889 = t5586*t14135*t4021;
  t14901 = -3.e-6*t1484*t2330*t14135*t4106;
  t14924 = t14885 + t14889 + t14901;
  t15085 = -1.*t4009*t14135*t4021;
  t15091 = -1.*t14127*t4106;
  t15101 = t15085 + t15091;
  t15104 = t14127*t4009;
  t15119 = -1.*t14135*t4021*t4106;
  t15129 = t15104 + t15119;
  t15135 = t4743*t15101;
  t15150 = 3.e-6*t3671*t15129;
  t15151 = t15135 + t15150;
  t15162 = 3.e-6*t3671*t15101;
  t15163 = t2695*t15129;
  t15175 = t15162 + t15163;
  t15189 = 3.e-6*t2330*t15101;
  t15199 = -1.*t2330*t15129;
  t15203 = t15189 + t15199;
  t15282 = t4009*t14135*t4021;
  t15285 = t14127*t4106;
  t15288 = t15282 + t15285;
  t15291 = 1.000000000009*t1484*t2330*t14135;
  t15292 = -1.*t2695*t15288;
  t15295 = 3.e-6*t2695*t15129;
  t15308 = t15291 + t15292 + t15295;
  t15310 = 3.e-6*t2695*t1484*t14135;
  t15312 = 3.e-6*t2330*t15288;
  t15315 = -9.e-12*t2330*t15129;
  t15316 = t15310 + t15312 + t15315;
  t15326 = -1.*t2695*t1484*t14135;
  t15327 = -1.*t2330*t15288;
  t15328 = 3.e-6*t2330*t15129;
  t15329 = t15326 + t15327 + t15328;
  t12253 = -0.200000000003*t12238;
  t12372 = 0.100000000003*t12346;
  t12416 = 5.4e-18*t4290;
  t12430 = 1.e-7 + t12253 + t12372 + t12416;
  t12685 = 3.e-7*t12346;
  t12799 = t4244 + t12780;
  t12807 = 0.100000000003*t12799;
  t12819 = -0.2000000000048*t4290;
  t12820 = 3.e-13 + t12685 + t12807 + t12819;
  t12958 = 3.e-7*t12238;
  t12970 = t4220 + t12780;
  t12977 = -0.200000000003*t12970;
  t12986 = 0.1000000000039*t4290;
  t13009 = 3.e-13 + t12958 + t12977 + t12986;
  t15377 = 3.e-6*t1484*t2330*t14135;
  t15383 = 3.e-6*t3671*t15288;
  t15384 = t4743*t15129;
  t15385 = t15377 + t15383 + t15384;
  t15389 = -1.*t1484*t2330*t14135;
  t15390 = t2695*t15288;
  t15394 = t15389 + t15390 + t15150;
  t13120 = t4244 + t13111;
  t15396 = -1.*t5586*t1484*t14135;
  t15398 = t15396 + t15327 + t15328;
  t13956 = t4220 + t13111;
  t15941 = -3.e-6*t3671*t14127*t1484*t4009;
  t15950 = 3.e-6*t14127*t2330*t4021;
  t15955 = t4743*t14127*t1484*t4106;
  t15960 = t15941 + t15950 + t15955;
  t15983 = -1.*t2695*t14127*t1484*t4009;
  t15984 = -1.*t14127*t2330*t4021;
  t15985 = 3.e-6*t3671*t14127*t1484*t4106;
  t15986 = t15983 + t15984 + t15985;
  t15988 = t14127*t1484*t4009*t2330;
  t15989 = -1.*t5586*t14127*t4021;
  t15990 = 3.e-6*t14127*t1484*t2330*t4106;
  t15991 = t15988 + t15989 + t15990;
  t16172 = t4009*t14135;
  t16174 = t14127*t4021*t4106;
  t16179 = t16172 + t16174;
  t16189 = t4743*t14197;
  t16198 = 3.e-6*t3671*t16179;
  t16201 = t16189 + t16198;
  t16276 = t2695*t16179;
  t16281 = t14286 + t16276;
  t16323 = 3.e-6*t2330*t14197;
  t16324 = -1.*t2330*t16179;
  t16349 = t16323 + t16324;
  t16764 = -1.*t14127*t4009*t4021;
  t16794 = t14135*t4106;
  t16795 = t16764 + t16794;
  t16811 = -1.000000000009*t14127*t1484*t2330;
  t16812 = -1.*t2695*t16795;
  t16853 = 3.e-6*t2695*t16179;
  t16861 = t16811 + t16812 + t16853;
  t16907 = -3.e-6*t2695*t14127*t1484;
  t16914 = 3.e-6*t2330*t16795;
  t16916 = -9.e-12*t2330*t16179;
  t16922 = t16907 + t16914 + t16916;
  t17033 = t2695*t14127*t1484;
  t17044 = -1.*t2330*t16795;
  t17049 = 3.e-6*t2330*t16179;
  t17058 = t17033 + t17044 + t17049;
  t17139 = -3.e-6*t14127*t1484*t2330;
  t17143 = 3.e-6*t3671*t16795;
  t17146 = t4743*t16179;
  t17150 = t17139 + t17143 + t17146;
  t17159 = t14127*t1484*t2330;
  t17160 = t2695*t16795;
  t17161 = t17159 + t17160 + t16198;
  t17171 = t5586*t14127*t1484;
  t17174 = t17171 + t17044 + t17049;
  p_output1[0]=1.;
  p_output1[1]=0.2000000000018*t1484*t2330 - 1.*t4001*t4009*t4021 + 6.000000000054e-7*t3671*t4021*t4106 + t4632*t4805 + t5149*t5231 + t5560*t5787 - 0.3*(t4805*t5948 + t5231*t6025 + t5787*t6051) + 0.2*(-1.*t5231*t6051 - 1.*t4805*t6091 - 1.*t5787*t6106) - 0.099999*(t5231*t5948 + t5787*t6091 + t4805*t6156);
  p_output1[2]=-6.000000000054e-7*t1484*t3671*t4009 - 1.*t1484*t4001*t4106 + t4632*t6571 + t5149*t6958 + t5560*t7310 - 0.3*(t5948*t6571 + t6025*t6958 + t6051*t7310) - 0.099999*(t6156*t6571 + t5948*t6958 + t6091*t7310) + 0.2*(-1.*t6091*t6571 - 1.*t6051*t6958 - 1.*t6106*t7310);
  p_output1[3]=-0.2000000000018*t1484*t2330*t4009 + 0.2000000000018*t2695*t4021 - 6.000000000054e-7*t1484*t2330*t4106 + t11975*t4632 + t11157*t5149 + t10698*t5560 - 0.3*(t11975*t5948 + t11157*t6025 + t10698*t6051) + 0.2*(-1.*t11157*t6051 - 1.*t11975*t6091 - 1.*t10698*t6106) - 0.099999*(t11157*t5948 + t10698*t6091 + t11975*t6156);
  p_output1[4]=t12430*t12591 + t12820*t12896 + t13009*t13092 - 0.099999*(t13092*t13102 + t12896*t13277 - 1.8e-11*t12591*t4290) + 0.2*(-1.*t12591*t13102 - 1.*t13092*t13120 + 1.000000000009*t12896*t4290) - 0.3*(t12591*t13277 + t12896*t13956 - 1.000000000009*t13092*t4290);
  p_output1[5]=-1.;
  p_output1[6]=1.;
  p_output1[7]=-0.2000000000018*t14127*t1484*t2330 + 6.000000000054e-7*t14259*t3671 + t14197*t4001 + t14302*t4632 + t14408*t5149 + t14447*t5560 - 0.3*(t14302*t5948 + t14408*t6025 + t14447*t6051) + 0.2*(-1.*t14408*t6051 - 1.*t14302*t6091 - 1.*t14447*t6106) - 0.099999*(t14408*t5948 + t14447*t6091 + t14302*t6156);
  p_output1[8]=t14135*t1484*t4001*t4009 + 0.2000000000018*t14135*t2330*t4021 - 6.000000000054e-7*t14135*t1484*t3671*t4106 + t14716*t4632 + t14835*t5149 + t14924*t5560 - 0.3*(t14716*t5948 + t14835*t6025 + t14924*t6051) + 0.2*(-1.*t14835*t6051 - 1.*t14716*t6091 - 1.*t14924*t6106) - 0.099999*(t14835*t5948 + t14924*t6091 + t14716*t6156);
  p_output1[9]=6.000000000054e-7*t15101*t3671 + t15129*t4001 + t15151*t4632 + t15175*t5149 + t15203*t5560 - 0.3*(t15151*t5948 + t15175*t6025 + t15203*t6051) + 0.2*(-1.*t15175*t6051 - 1.*t15151*t6091 - 1.*t15203*t6106) - 0.099999*(t15175*t5948 + t15203*t6091 + t15151*t6156);
  p_output1[10]=6.000000000054e-7*t15129*t2330 - 0.2000000000018*t15288*t2330 - 0.2000000000018*t14135*t1484*t2695 + t15316*t4632 + t15329*t5149 + t15308*t5560 - 0.3*(t15316*t5948 + t15329*t6025 + t15308*t6051) + 0.2*(-1.*t15329*t6051 - 1.*t15316*t6091 - 1.*t15308*t6106) - 0.099999*(t15329*t5948 + t15308*t6091 + t15316*t6156);
  p_output1[11]=t12430*t15385 + t12820*t15394 + t13009*t15398 - 0.099999*(t13277*t15394 + t13102*t15398 - 1.8e-11*t15385*t4290) + 0.2*(-1.*t13102*t15385 - 1.*t13120*t15398 + 1.000000000009*t15394*t4290) - 0.3*(t13277*t15385 + t13956*t15394 - 1.000000000009*t15398*t4290);
  p_output1[12]=-1.;
  p_output1[13]=1.;
  p_output1[14]=-0.2000000000018*t14135*t1484*t2330 + 6.000000000054e-7*t15129*t3671 + t15288*t4001 + t15385*t4632 + t15394*t5149 + t15398*t5560 - 0.3*(t15385*t5948 + t15394*t6025 + t15398*t6051) + 0.2*(-1.*t15394*t6051 - 1.*t15385*t6091 - 1.*t15398*t6106) - 0.099999*(t15394*t5948 + t15398*t6091 + t15385*t6156);
  p_output1[15]=-1.*t14127*t1484*t4001*t4009 - 0.2000000000018*t14127*t2330*t4021 + 6.000000000054e-7*t14127*t1484*t3671*t4106 + t15960*t4632 + t15986*t5149 + t15991*t5560 - 0.3*(t15960*t5948 + t15986*t6025 + t15991*t6051) + 0.2*(-1.*t15986*t6051 - 1.*t15960*t6091 - 1.*t15991*t6106) - 0.099999*(t15986*t5948 + t15991*t6091 + t15960*t6156);
  p_output1[16]=6.000000000054e-7*t14197*t3671 + t16179*t4001 + t16201*t4632 + t16281*t5149 + t16349*t5560 - 0.3*(t16201*t5948 + t16281*t6025 + t16349*t6051) + 0.2*(-1.*t16281*t6051 - 1.*t16201*t6091 - 1.*t16349*t6106) - 0.099999*(t16281*t5948 + t16349*t6091 + t16201*t6156);
  p_output1[17]=6.000000000054e-7*t16179*t2330 - 0.2000000000018*t16795*t2330 + 0.2000000000018*t14127*t1484*t2695 + t16922*t4632 + t17058*t5149 + t16861*t5560 - 0.3*(t16922*t5948 + t17058*t6025 + t16861*t6051) + 0.2*(-1.*t17058*t6051 - 1.*t16922*t6091 - 1.*t16861*t6106) - 0.099999*(t17058*t5948 + t16861*t6091 + t16922*t6156);
  p_output1[18]=t12430*t17150 + t12820*t17161 + t13009*t17174 - 0.099999*(t13277*t17161 + t13102*t17174 - 1.8e-11*t17150*t4290) + 0.2*(-1.*t13102*t17150 - 1.*t13120*t17174 + 1.000000000009*t17161*t4290) - 0.3*(t13277*t17150 + t13956*t17161 - 1.000000000009*t17174*t4290);
  p_output1[19]=-1.;
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
    ( !(mrows == 3 && ncols == 1) && 
      !(mrows == 1 && ncols == 3))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var2 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 20, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_h_RightBackFoot_BackStance.hh"

namespace BackStance
{

void J_h_RightBackFoot_BackStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
