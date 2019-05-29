/*
 * Automatically Generated from Mathematica.
 * Tue 28 May 2019 22:42:28 GMT-04:00
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
  double t656;
  double t680;
  double t2993;
  double t3442;
  double t3551;
  double t3560;
  double t3644;
  double t3646;
  double t3654;
  double t77;
  double t459;
  double t3395;
  double t3459;
  double t3670;
  double t3711;
  double t4118;
  double t3656;
  double t3661;
  double t4190;
  double t3772;
  double t3922;
  double t3962;
  double t4010;
  double t4096;
  double t4102;
  double t4307;
  double t4314;
  double t4316;
  double t4322;
  double t4412;
  double t4490;
  double t4502;
  double t4503;
  double t4532;
  double t4533;
  double t4545;
  double t4615;
  double t4616;
  double t4560;
  double t4191;
  double t4546;
  double t4634;
  double t3176;
  double t3336;
  double t3362;
  double t3393;
  double t3550;
  double t3645;
  double t3665;
  double t3712;
  double t3729;
  double t4131;
  double t4209;
  double t4299;
  double t4300;
  double t4302;
  double t4324;
  double t4328;
  double t4331;
  double t4377;
  double t4387;
  double t5005;
  double t5133;
  double t5150;
  double t4568;
  double t5310;
  double t5351;
  double t5352;
  double t5459;
  double t5464;
  double t5467;
  double t4671;
  double t4682;
  double t4709;
  double t7216;
  double t7240;
  double t7282;
  double t7328;
  double t7386;
  double t7510;
  double t7832;
  double t8270;
  double t8298;
  double t8306;
  double t8310;
  double t8312;
  double t12698;
  double t13054;
  double t12449;
  double t12462;
  double t14740;
  double t14439;
  double t14453;
  double t14516;
  double t14690;
  double t14860;
  double t14861;
  double t14909;
  double t15065;
  double t15066;
  double t15068;
  double t15116;
  double t15076;
  double t15301;
  double t15304;
  double t15303;
  double t15305;
  double t15306;
  double t15342;
  double t15406;
  double t15407;
  double t15409;
  double t15410;
  double t15411;
  double t15414;
  double t15416;
  double t15423;
  double t15427;
  double t15434;
  double t15436;
  double t15437;
  double t15438;
  double t15439;
  double t15460;
  double t15461;
  double t15462;
  double t15464;
  double t15466;
  double t15468;
  double t15469;
  double t15471;
  double t15474;
  double t15476;
  double t15478;
  double t15479;
  double t16056;
  double t16462;
  double t16592;
  double t17060;
  double t17063;
  double t17066;
  double t17069;
  double t17070;
  double t17071;
  double t17073;
  double t17074;
  double t17075;
  double t17077;
  double t17078;
  double t17079;
  double t17541;
  double t17605;
  double t17606;
  double t17643;
  double t17644;
  double t17645;
  double t17680;
  double t17697;
  double t17715;
  double t17742;
  double t17811;
  double t17838;
  double t17839;
  double t18537;
  double t18538;
  double t12587;
  double t14215;
  double t14322;
  double t14337;
  double t14697;
  double t14752;
  double t14753;
  double t14839;
  double t14840;
  double t14952;
  double t14953;
  double t14954;
  double t15027;
  double t15028;
  double t19693;
  double t19694;
  double t19699;
  double t19701;
  double t19706;
  double t19707;
  double t19708;
  double t15088;
  double t19710;
  double t19711;
  double t15260;
  double t19889;
  double t19890;
  double t19891;
  double t19892;
  double t19894;
  double t19895;
  double t19896;
  double t19898;
  double t19900;
  double t19901;
  double t19905;
  double t19906;
  double t19939;
  double t19940;
  double t19941;
  double t19943;
  double t19944;
  double t19946;
  double t19950;
  double t19989;
  double t20012;
  double t20014;
  double t20015;
  double t20347;
  double t20348;
  double t20401;
  double t20967;
  double t21161;
  double t21164;
  double t21169;
  double t21171;
  double t21183;
  double t21191;
  double t21193;
  double t21216;
  double t21217;
  double t21327;
  double t21329;
  double t24834;
  double t24849;
  double t26573;
  double t26577;
  double t26720;
  double t27060;
  double t27061;
  double t27063;
  double t27064;
  t656 = Cos(var1[10]);
  t680 = -1.*t656;
  t2993 = 1. + t680;
  t3442 = Sin(var1[4]);
  t3551 = Cos(var1[12]);
  t3560 = -1.*t3551;
  t3644 = 1. + t3560;
  t3646 = -3.e-6*t3644;
  t3654 = Sin(var1[12]);
  t77 = Cos(var1[4]);
  t459 = Sin(var1[10]);
  t3395 = Cos(var1[5]);
  t3459 = Sin(var1[5]);
  t3670 = 3.e-6*t3654;
  t3711 = t3646 + t3670;
  t4118 = 3.e-13*var1[12];
  t3656 = -3.e-6*t3654;
  t3661 = t3646 + t3656;
  t4190 = -9.e-12*t3644;
  t3772 = -3.e-6*t77*t459;
  t3922 = -3.e-6*t2993*t3395*t3442;
  t3962 = -9.e-12*t2993;
  t4010 = 1. + t3962;
  t4096 = t4010*t3442*t3459;
  t4102 = t3772 + t3922 + t4096;
  t4307 = t77*t459;
  t4314 = -1.*t656*t3395*t3442;
  t4316 = 3.e-6*t2993*t3442*t3459;
  t4322 = t4307 + t4314 + t4316;
  t4412 = -1.000000000009*t2993;
  t4490 = 1. + t4412;
  t4502 = t4490*t77;
  t4503 = t3395*t459*t3442;
  t4532 = 3.e-6*t459*t3442*t3459;
  t4533 = t4502 + t4503 + t4532;
  t4545 = 3.e-6*t3644;
  t4615 = -1.000000000009*t3644;
  t4616 = 1. + t4615;
  t4560 = 9.e-12*t3644;
  t4191 = -1.*t3654;
  t4546 = t4545 + t3656;
  t4634 = t4545 + t3670;
  t3176 = -1.8e-12*t2993;
  t3336 = -1. + t656;
  t3362 = 0.2*t3336;
  t3393 = t3176 + t3362;
  t3550 = 1.e-7*var1[12];
  t3645 = 5.4e-18*t3644;
  t3665 = -0.200000000003*t3661;
  t3712 = 0.100000000003*t3711;
  t3729 = t3550 + t3645 + t3665 + t3712;
  t4131 = -0.2000000000048*t3644;
  t4209 = t4190 + t4191;
  t4299 = 0.100000000003*t4209;
  t4300 = 3.e-7*t3711;
  t4302 = t4118 + t4131 + t4299 + t4300;
  t4324 = 0.1000000000039*t3644;
  t4328 = 3.e-7*t3661;
  t4331 = t4190 + t3654;
  t4377 = -0.200000000003*t4331;
  t4387 = t4118 + t4324 + t4328 + t4377;
  t5005 = -1.*t4010*t77*t3395;
  t5133 = -3.e-6*t2993*t77*t3459;
  t5150 = t5005 + t5133;
  t4568 = t4560 + t3654;
  t5310 = -3.e-6*t2993*t77*t3395;
  t5351 = -1.*t656*t77*t3459;
  t5352 = t5310 + t5351;
  t5459 = -3.e-6*t77*t3395*t459;
  t5464 = t77*t459*t3459;
  t5467 = t5459 + t5464;
  t4671 = t4560 + t4191;
  t4682 = -1.8e-11*t3644;
  t4709 = 1. + t4682;
  t7216 = -1.*t656*t77*t3395;
  t7240 = -1.000000000009*t459*t3442;
  t7282 = -3.e-6*t656*t77*t3459;
  t7328 = t7216 + t7240 + t7282;
  t7386 = -1.*t77*t3395*t459;
  t7510 = t656*t3442;
  t7832 = -3.e-6*t77*t459*t3459;
  t8270 = t7386 + t7510 + t7832;
  t8298 = 3.e-6*t77*t3395*t459;
  t8306 = -3.e-6*t656*t3442;
  t8310 = 9.e-12*t77*t459*t3459;
  t8312 = t8298 + t8306 + t8310;
  t12698 = 3.e-6*t3551;
  t13054 = t12698 + t3656;
  t12449 = -3.e-6*t3551;
  t12462 = t12449 + t3656;
  t14740 = -9.e-12*t3654;
  t14439 = 3.e-6*t2993*t77*t3395;
  t14453 = -3.e-6*t459*t3442;
  t14516 = -1.*t4010*t77*t3459;
  t14690 = t14439 + t14453 + t14516;
  t14860 = t656*t77*t3395;
  t14861 = t459*t3442;
  t14909 = t14860 + t14861 + t5133;
  t15065 = t4490*t3442;
  t15066 = t7386 + t15065 + t7832;
  t15068 = t12698 + t3670;
  t15116 = t12449 + t3670;
  t15076 = 9.e-12*t3654;
  t15301 = Cos(var1[3]);
  t15304 = Sin(var1[3]);
  t15303 = t15301*t3395*t3442;
  t15305 = -1.*t15304*t3459;
  t15306 = t15303 + t15305;
  t15342 = -1.*t3395*t15304;
  t15406 = -1.*t15301*t3442*t3459;
  t15407 = t15342 + t15406;
  t15409 = 3.e-6*t15301*t77*t459;
  t15410 = 3.e-6*t2993*t15306;
  t15411 = t4010*t15407;
  t15414 = t15409 + t15410 + t15411;
  t15416 = -1.*t15301*t77*t459;
  t15423 = t656*t15306;
  t15427 = 3.e-6*t2993*t15407;
  t15434 = t15416 + t15423 + t15427;
  t15436 = -1.*t4490*t15301*t77;
  t15437 = -1.*t459*t15306;
  t15438 = 3.e-6*t459*t15407;
  t15439 = t15436 + t15437 + t15438;
  t15460 = 3.e-6*t2993*t77*t3395*t15304;
  t15461 = -3.e-6*t459*t15304*t3442;
  t15462 = -1.*t4010*t77*t15304*t3459;
  t15464 = t15460 + t15461 + t15462;
  t15466 = t656*t77*t3395*t15304;
  t15468 = t459*t15304*t3442;
  t15469 = -3.e-6*t2993*t77*t15304*t3459;
  t15471 = t15466 + t15468 + t15469;
  t15474 = -1.*t77*t3395*t459*t15304;
  t15476 = t4490*t15304*t3442;
  t15478 = -3.e-6*t77*t459*t15304*t3459;
  t15479 = t15474 + t15476 + t15478;
  t16056 = -1.*t3395*t15304*t3442;
  t16462 = -1.*t15301*t3459;
  t16592 = t16056 + t16462;
  t17060 = t15301*t3395;
  t17063 = -1.*t15304*t3442*t3459;
  t17066 = t17060 + t17063;
  t17069 = t4010*t16592;
  t17070 = 3.e-6*t2993*t17066;
  t17071 = t17069 + t17070;
  t17073 = 3.e-6*t2993*t16592;
  t17074 = t656*t17066;
  t17075 = t17073 + t17074;
  t17077 = 3.e-6*t459*t16592;
  t17078 = -1.*t459*t17066;
  t17079 = t17077 + t17078;
  t17541 = t3395*t15304*t3442;
  t17605 = t15301*t3459;
  t17606 = t17541 + t17605;
  t17643 = 1.000000000009*t77*t459*t15304;
  t17644 = -1.*t656*t17606;
  t17645 = 3.e-6*t656*t17066;
  t17680 = t17643 + t17644 + t17645;
  t17697 = 3.e-6*t656*t77*t15304;
  t17715 = 3.e-6*t459*t17606;
  t17742 = -9.e-12*t459*t17066;
  t17811 = t17697 + t17715 + t17742;
  t17838 = -1.*t656*t77*t15304;
  t17839 = -1.*t459*t17606;
  t18537 = 3.e-6*t459*t17066;
  t18538 = t17838 + t17839 + t18537;
  t12587 = -0.200000000003*t12462;
  t14215 = 0.100000000003*t13054;
  t14322 = 5.4e-18*t3654;
  t14337 = 1.e-7 + t12587 + t14215 + t14322;
  t14697 = 3.e-7*t13054;
  t14752 = t3560 + t14740;
  t14753 = 0.100000000003*t14752;
  t14839 = -0.2000000000048*t3654;
  t14840 = 3.e-13 + t14697 + t14753 + t14839;
  t14952 = 3.e-7*t12462;
  t14953 = t3551 + t14740;
  t14954 = -0.200000000003*t14953;
  t15027 = 0.1000000000039*t3654;
  t15028 = 3.e-13 + t14952 + t14954 + t15027;
  t19693 = 3.e-6*t77*t459*t15304;
  t19694 = 3.e-6*t2993*t17606;
  t19699 = t4010*t17066;
  t19701 = t19693 + t19694 + t19699;
  t19706 = -1.*t77*t459*t15304;
  t19707 = t656*t17606;
  t19708 = t19706 + t19707 + t17070;
  t15088 = t3560 + t15076;
  t19710 = -1.*t4490*t77*t15304;
  t19711 = t19710 + t17839 + t18537;
  t15260 = t3551 + t15076;
  t19889 = -3.e-6*t2993*t15301*t77*t3395;
  t19890 = 3.e-6*t15301*t459*t3442;
  t19891 = t4010*t15301*t77*t3459;
  t19892 = t19889 + t19890 + t19891;
  t19894 = -1.*t656*t15301*t77*t3395;
  t19895 = -1.*t15301*t459*t3442;
  t19896 = 3.e-6*t2993*t15301*t77*t3459;
  t19898 = t19894 + t19895 + t19896;
  t19900 = t15301*t77*t3395*t459;
  t19901 = -1.*t4490*t15301*t3442;
  t19905 = 3.e-6*t15301*t77*t459*t3459;
  t19906 = t19900 + t19901 + t19905;
  t19939 = t3395*t15304;
  t19940 = t15301*t3442*t3459;
  t19941 = t19939 + t19940;
  t19943 = t4010*t15306;
  t19944 = 3.e-6*t2993*t19941;
  t19946 = t19943 + t19944;
  t19950 = t656*t19941;
  t19989 = t15410 + t19950;
  t20012 = 3.e-6*t459*t15306;
  t20014 = -1.*t459*t19941;
  t20015 = t20012 + t20014;
  t20347 = -1.*t15301*t3395*t3442;
  t20348 = t15304*t3459;
  t20401 = t20347 + t20348;
  t20967 = -1.000000000009*t15301*t77*t459;
  t21161 = -1.*t656*t20401;
  t21164 = 3.e-6*t656*t19941;
  t21169 = t20967 + t21161 + t21164;
  t21171 = -3.e-6*t656*t15301*t77;
  t21183 = 3.e-6*t459*t20401;
  t21191 = -9.e-12*t459*t19941;
  t21193 = t21171 + t21183 + t21191;
  t21216 = t656*t15301*t77;
  t21217 = -1.*t459*t20401;
  t21327 = 3.e-6*t459*t19941;
  t21329 = t21216 + t21217 + t21327;
  t24834 = -3.e-6*t15301*t77*t459;
  t24849 = 3.e-6*t2993*t20401;
  t26573 = t4010*t19941;
  t26577 = t24834 + t24849 + t26573;
  t26720 = t15301*t77*t459;
  t27060 = t656*t20401;
  t27061 = t26720 + t27060 + t19944;
  t27063 = t4490*t15301*t77;
  t27064 = t27063 + t21217 + t21327;
  p_output1[0]=1.;
  p_output1[1]=-1.*t3393*t3395*t3442 + 6.000000000054e-7*t2993*t3442*t3459 + t3729*t4102 + t4302*t4322 + t4387*t4533 - 0.3*(t4102*t4546 + t4322*t4568 + t4533*t4616) + 0.2*(-1.*t4322*t4616 - 1.*t4102*t4634 - 1.*t4533*t4671) + 0.100001*(t4322*t4546 + t4533*t4634 + t4102*t4709) + 0.2000000000018*t459*t77;
  p_output1[2]=t3729*t5150 + t4302*t5352 + t4387*t5467 - 0.3*(t4546*t5150 + t4568*t5352 + t4616*t5467) + 0.100001*(t4709*t5150 + t4546*t5352 + t4634*t5467) + 0.2*(-1.*t4634*t5150 - 1.*t4616*t5352 - 1.*t4671*t5467) - 6.000000000054e-7*t2993*t3395*t77 - 1.*t3393*t3459*t77;
  p_output1[3]=0.2000000000018*t3442*t656 + t4387*t7328 - 0.2000000000018*t3395*t459*t77 - 6.000000000054e-7*t3459*t459*t77 + t4302*t8270 + t3729*t8312 - 0.3*(t4616*t7328 + t4568*t8270 + t4546*t8312) + 0.2*(-1.*t4671*t7328 - 1.*t4616*t8270 - 1.*t4634*t8312) + 0.100001*(t4634*t7328 + t4546*t8270 + t4709*t8312);
  p_output1[4]=t14337*t14690 + t14840*t14909 + t15028*t15066 + 0.100001*(t15066*t15068 + t14909*t15116 - 1.8e-11*t14690*t3654) + 0.2*(-1.*t14690*t15068 - 1.*t15066*t15088 + 1.000000000009*t14909*t3654) - 0.3*(t14690*t15116 + t14909*t15260 - 1.000000000009*t15066*t3654);
  p_output1[5]=-1.;
  p_output1[6]=1.;
  p_output1[7]=6.000000000054e-7*t15407*t2993 + t15306*t3393 + t15414*t3729 + t15434*t4302 + t15439*t4387 - 0.3*(t15414*t4546 + t15434*t4568 + t15439*t4616) + 0.2*(-1.*t15434*t4616 - 1.*t15414*t4634 - 1.*t15439*t4671) + 0.100001*(t15434*t4546 + t15439*t4634 + t15414*t4709) - 0.2000000000018*t15301*t459*t77;
  p_output1[8]=t15464*t3729 + t15471*t4302 + t15479*t4387 + 0.2000000000018*t15304*t3442*t459 - 0.3*(t15464*t4546 + t15471*t4568 + t15479*t4616) + 0.2*(-1.*t15471*t4616 - 1.*t15464*t4634 - 1.*t15479*t4671) + 0.100001*(t15471*t4546 + t15479*t4634 + t15464*t4709) + t15304*t3393*t3395*t77 - 6.000000000054e-7*t15304*t2993*t3459*t77;
  p_output1[9]=6.000000000054e-7*t16592*t2993 + t17066*t3393 + t17071*t3729 + t17075*t4302 + t17079*t4387 - 0.3*(t17071*t4546 + t17075*t4568 + t17079*t4616) + 0.2*(-1.*t17075*t4616 - 1.*t17071*t4634 - 1.*t17079*t4671) + 0.100001*(t17075*t4546 + t17079*t4634 + t17071*t4709);
  p_output1[10]=t17811*t3729 + t18538*t4302 + t17680*t4387 + 6.000000000054e-7*t17066*t459 - 0.2000000000018*t17606*t459 - 0.3*(t17811*t4546 + t18538*t4568 + t17680*t4616) + 0.2*(-1.*t18538*t4616 - 1.*t17811*t4634 - 1.*t17680*t4671) + 0.100001*(t18538*t4546 + t17680*t4634 + t17811*t4709) - 0.2000000000018*t15304*t656*t77;
  p_output1[11]=t14337*t19701 + t14840*t19708 + t15028*t19711 + 0.100001*(t15116*t19708 + t15068*t19711 - 1.8e-11*t19701*t3654) + 0.2*(-1.*t15068*t19701 - 1.*t15088*t19711 + 1.000000000009*t19708*t3654) - 0.3*(t15116*t19701 + t15260*t19708 - 1.000000000009*t19711*t3654);
  p_output1[12]=-1.;
  p_output1[13]=1.;
  p_output1[14]=6.000000000054e-7*t17066*t2993 + t17606*t3393 + t19701*t3729 + t19708*t4302 + t19711*t4387 - 0.3*(t19701*t4546 + t19708*t4568 + t19711*t4616) + 0.2*(-1.*t19708*t4616 - 1.*t19701*t4634 - 1.*t19711*t4671) + 0.100001*(t19708*t4546 + t19711*t4634 + t19701*t4709) - 0.2000000000018*t15304*t459*t77;
  p_output1[15]=t19892*t3729 + t19898*t4302 + t19906*t4387 - 0.2000000000018*t15301*t3442*t459 - 0.3*(t19892*t4546 + t19898*t4568 + t19906*t4616) + 0.2*(-1.*t19898*t4616 - 1.*t19892*t4634 - 1.*t19906*t4671) + 0.100001*(t19898*t4546 + t19906*t4634 + t19892*t4709) - 1.*t15301*t3393*t3395*t77 + 6.000000000054e-7*t15301*t2993*t3459*t77;
  p_output1[16]=6.000000000054e-7*t15306*t2993 + t19941*t3393 + t19946*t3729 + t19989*t4302 + t20015*t4387 - 0.3*(t19946*t4546 + t19989*t4568 + t20015*t4616) + 0.2*(-1.*t19989*t4616 - 1.*t19946*t4634 - 1.*t20015*t4671) + 0.100001*(t19989*t4546 + t20015*t4634 + t19946*t4709);
  p_output1[17]=t21193*t3729 + t21329*t4302 + t21169*t4387 + 6.000000000054e-7*t19941*t459 - 0.2000000000018*t20401*t459 - 0.3*(t21193*t4546 + t21329*t4568 + t21169*t4616) + 0.2*(-1.*t21329*t4616 - 1.*t21193*t4634 - 1.*t21169*t4671) + 0.100001*(t21329*t4546 + t21169*t4634 + t21193*t4709) + 0.2000000000018*t15301*t656*t77;
  p_output1[18]=t14337*t26577 + t14840*t27061 + t15028*t27064 + 0.100001*(t15116*t27061 + t15068*t27064 - 1.8e-11*t26577*t3654) + 0.2*(-1.*t15068*t26577 - 1.*t15088*t27064 + 1.000000000009*t27061*t3654) - 0.3*(t15116*t26577 + t15260*t27061 - 1.000000000009*t27064*t3654);
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

#include "J_h_LeftBackFoot_BackStance.hh"

namespace BackStance
{

void J_h_LeftBackFoot_BackStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
