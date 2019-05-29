/*
 * Automatically Generated from Mathematica.
 * Tue 28 May 2019 22:41:57 GMT-04:00
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
  double t1582;
  double t2988;
  double t3323;
  double t3477;
  double t3480;
  double t3484;
  double t3492;
  double t3456;
  double t3463;
  double t3499;
  double t3517;
  double t3518;
  double t3540;
  double t2978;
  double t3369;
  double t3594;
  double t3513;
  double t3519;
  double t3524;
  double t3531;
  double t3548;
  double t3554;
  double t3612;
  double t3613;
  double t3614;
  double t3615;
  double t3593;
  double t3641;
  double t3642;
  double t3643;
  double t3651;
  double t3659;
  double t3677;
  double t3680;
  double t3684;
  double t3695;
  double t3688;
  double t3905;
  double t3904;
  double t3916;
  double t3910;
  double t3911;
  double t4056;
  double t3972;
  double t4002;
  double t4015;
  double t4043;
  double t4216;
  double t4063;
  double t4073;
  double t4089;
  double t4092;
  double t4095;
  double t4113;
  double t4247;
  double t4280;
  double t4050;
  double t4262;
  double t4263;
  double t4243;
  double t4079;
  double t4082;
  double t4083;
  double t4085;
  double t4088;
  double t4046;
  double t4052;
  double t4053;
  double t4059;
  double t4062;
  double t3906;
  double t3913;
  double t3919;
  double t3921;
  double t3940;
  double t4356;
  double t4358;
  double t4284;
  double t4364;
  double t4366;
  double t4368;
  double t4375;
  double t4380;
  double t4386;
  double t4319;
  double t4252;
  double t4254;
  double t4348;
  double t4350;
  double t4353;
  double t4354;
  double t4426;
  double t4427;
  double t4428;
  double t4429;
  double t4431;
  double t4432;
  double t4434;
  double t4435;
  double t4437;
  double t4438;
  double t4439;
  double t4440;
  double t4479;
  double t4486;
  double t4487;
  double t4489;
  double t4494;
  double t4506;
  double t4507;
  double t4509;
  double t4510;
  double t4513;
  double t4514;
  double t4516;
  double t4517;
  double t4593;
  double t4599;
  double t4600;
  double t4601;
  double t4607;
  double t4608;
  double t4609;
  double t4612;
  double t4613;
  double t4624;
  double t4627;
  double t4674;
  double t4683;
  double t4684;
  double t4685;
  double t4688;
  double t4690;
  double t4691;
  double t4695;
  double t4734;
  double t4735;
  double t4736;
  double t4739;
  double t4740;
  double t4741;
  double t4745;
  double t4748;
  double t4749;
  double t4754;
  double t4755;
  double t4757;
  double t4761;
  double t4762;
  double t4763;
  double t3448;
  double t3468;
  double t3469;
  double t3472;
  double t3591;
  double t3596;
  double t3600;
  double t3609;
  double t3611;
  double t4812;
  double t4815;
  double t4820;
  double t3633;
  double t3636;
  double t3637;
  double t3639;
  double t3640;
  double t4811;
  double t4821;
  double t4822;
  double t4824;
  double t4840;
  double t4846;
  double t4850;
  double t3689;
  double t4852;
  double t4855;
  double t4858;
  double t4859;
  double t3780;
  double t4890;
  double t4893;
  double t4894;
  double t4896;
  double t4899;
  double t4900;
  double t4903;
  double t4905;
  double t4907;
  double t4908;
  double t4945;
  double t4946;
  double t4949;
  double t4950;
  double t4956;
  double t4957;
  double t4958;
  double t4959;
  double t4962;
  double t4964;
  double t4965;
  double t4968;
  double t5007;
  double t5008;
  double t5009;
  double t5041;
  double t5060;
  double t5061;
  double t5065;
  double t5075;
  double t5083;
  double t5090;
  double t5094;
  double t5139;
  double t5141;
  double t5142;
  double t5138;
  double t5143;
  double t5144;
  double t5145;
  double t5148;
  double t5151;
  double t5152;
  double t5155;
  double t5157;
  double t5161;
  double t5165;
  double t5231;
  double t5232;
  double t5234;
  double t5236;
  double t5254;
  double t5255;
  double t5256;
  double t5257;
  double t5260;
  double t5262;
  t1582 = Cos(var1[21]);
  t2988 = Sin(var1[21]);
  t3323 = -3.e-6*t2988;
  t3477 = Cos(var1[19]);
  t3480 = -1.*t3477;
  t3484 = 1. + t3480;
  t3492 = Cos(var1[4]);
  t3456 = 3.e-6*t1582;
  t3463 = t3456 + t3323;
  t3499 = Cos(var1[5]);
  t3517 = Sin(var1[19]);
  t3518 = Sin(var1[4]);
  t3540 = Sin(var1[5]);
  t2978 = -3.e-6*t1582;
  t3369 = t2978 + t3323;
  t3594 = -9.e-12*t2988;
  t3513 = 3.e-6*t3484*t3492*t3499;
  t3519 = -3.e-6*t3517*t3518;
  t3524 = -9.e-12*t3484;
  t3531 = 1. + t3524;
  t3548 = -1.*t3531*t3492*t3540;
  t3554 = t3513 + t3519 + t3548;
  t3612 = t3477*t3492*t3499;
  t3613 = t3517*t3518;
  t3614 = -3.e-6*t3484*t3492*t3540;
  t3615 = t3612 + t3613 + t3614;
  t3593 = -1.*t1582;
  t3641 = -1.*t3492*t3499*t3517;
  t3642 = -1.000000000009*t3484;
  t3643 = 1. + t3642;
  t3651 = t3643*t3518;
  t3659 = -3.e-6*t3492*t3517*t3540;
  t3677 = t3641 + t3651 + t3659;
  t3680 = 3.e-6*t2988;
  t3684 = t3456 + t3680;
  t3695 = t2978 + t3680;
  t3688 = 9.e-12*t2988;
  t3905 = 1. + t3593;
  t3904 = 3.e-13*var1[21];
  t3916 = -9.e-12*t3905;
  t3910 = -3.e-6*t3905;
  t3911 = t3910 + t3323;
  t4056 = t3910 + t3680;
  t3972 = -1.*t3477*t3492*t3499;
  t4002 = -1.000000000009*t3517*t3518;
  t4015 = -3.e-6*t3477*t3492*t3540;
  t4043 = t3972 + t4002 + t4015;
  t4216 = 3.e-6*t3905;
  t4063 = t3477*t3518;
  t4073 = t3641 + t4063 + t3659;
  t4089 = 3.e-6*t3492*t3499*t3517;
  t4092 = -3.e-6*t3477*t3518;
  t4095 = 9.e-12*t3492*t3517*t3540;
  t4113 = t4089 + t4092 + t4095;
  t4247 = t4216 + t3323;
  t4280 = 9.e-12*t3905;
  t4050 = -1.*t2988;
  t4262 = -1.000000000009*t3905;
  t4263 = 1. + t4262;
  t4243 = t4216 + t3680;
  t4079 = 1.e-7*var1[21];
  t4082 = 5.4e-18*t3905;
  t4083 = -0.200000000003*t3911;
  t4085 = 0.100000000003*t4056;
  t4088 = t4079 + t4082 + t4083 + t4085;
  t4046 = -0.2000000000048*t3905;
  t4052 = t3916 + t4050;
  t4053 = 0.100000000003*t4052;
  t4059 = 3.e-7*t4056;
  t4062 = t3904 + t4046 + t4053 + t4059;
  t3906 = 0.1000000000039*t3905;
  t3913 = 3.e-7*t3911;
  t3919 = t3916 + t2988;
  t3921 = -0.200000000003*t3919;
  t3940 = t3904 + t3906 + t3913 + t3921;
  t4356 = -1.*t3531*t3492*t3499;
  t4358 = t4356 + t3614;
  t4284 = t4280 + t2988;
  t4364 = -3.e-6*t3484*t3492*t3499;
  t4366 = -1.*t3477*t3492*t3540;
  t4368 = t4364 + t4366;
  t4375 = -3.e-6*t3492*t3499*t3517;
  t4380 = t3492*t3517*t3540;
  t4386 = t4375 + t4380;
  t4319 = t4280 + t4050;
  t4252 = -1.8e-11*t3905;
  t4254 = 1. + t4252;
  t4348 = -1.8e-12*t3484;
  t4350 = -1. + t3477;
  t4353 = 0.2*t4350;
  t4354 = t4348 + t4353;
  t4426 = -3.e-6*t3492*t3517;
  t4427 = -3.e-6*t3484*t3499*t3518;
  t4428 = t3531*t3518*t3540;
  t4429 = t4426 + t4427 + t4428;
  t4431 = t3492*t3517;
  t4432 = -1.*t3477*t3499*t3518;
  t4434 = 3.e-6*t3484*t3518*t3540;
  t4435 = t4431 + t4432 + t4434;
  t4437 = t3643*t3492;
  t4438 = t3499*t3517*t3518;
  t4439 = 3.e-6*t3517*t3518*t3540;
  t4440 = t4437 + t4438 + t4439;
  t4479 = Sin(var1[3]);
  t4486 = 3.e-6*t3484*t3492*t3499*t4479;
  t4487 = -3.e-6*t3517*t4479*t3518;
  t4489 = -1.*t3531*t3492*t4479*t3540;
  t4494 = t4486 + t4487 + t4489;
  t4506 = t3477*t3492*t3499*t4479;
  t4507 = t3517*t4479*t3518;
  t4509 = -3.e-6*t3484*t3492*t4479*t3540;
  t4510 = t4506 + t4507 + t4509;
  t4513 = -1.*t3492*t3499*t3517*t4479;
  t4514 = t3643*t4479*t3518;
  t4516 = -3.e-6*t3492*t3517*t4479*t3540;
  t4517 = t4513 + t4514 + t4516;
  t4593 = Cos(var1[3]);
  t4599 = t4593*t3499*t3518;
  t4600 = -1.*t4479*t3540;
  t4601 = t4599 + t4600;
  t4607 = -1.*t3499*t4479;
  t4608 = -1.*t4593*t3518*t3540;
  t4609 = t4607 + t4608;
  t4612 = 3.e-6*t4593*t3492*t3517;
  t4613 = 3.e-6*t3484*t4601;
  t4624 = t3531*t4609;
  t4627 = t4612 + t4613 + t4624;
  t4674 = -1.*t4593*t3492*t3517;
  t4683 = t3477*t4601;
  t4684 = 3.e-6*t3484*t4609;
  t4685 = t4674 + t4683 + t4684;
  t4688 = -1.*t3643*t4593*t3492;
  t4690 = -1.*t3517*t4601;
  t4691 = 3.e-6*t3517*t4609;
  t4695 = t4688 + t4690 + t4691;
  t4734 = -1.*t3499*t4479*t3518;
  t4735 = -1.*t4593*t3540;
  t4736 = t4734 + t4735;
  t4739 = t4593*t3499;
  t4740 = -1.*t4479*t3518*t3540;
  t4741 = t4739 + t4740;
  t4745 = t3531*t4736;
  t4748 = 3.e-6*t3484*t4741;
  t4749 = t4745 + t4748;
  t4754 = 3.e-6*t3484*t4736;
  t4755 = t3477*t4741;
  t4757 = t4754 + t4755;
  t4761 = 3.e-6*t3517*t4736;
  t4762 = -1.*t3517*t4741;
  t4763 = t4761 + t4762;
  t3448 = -0.200000000003*t3369;
  t3468 = 0.100000000003*t3463;
  t3469 = 5.4e-18*t2988;
  t3472 = 1.e-7 + t3448 + t3468 + t3469;
  t3591 = 3.e-7*t3463;
  t3596 = t3593 + t3594;
  t3600 = 0.100000000003*t3596;
  t3609 = -0.2000000000048*t2988;
  t3611 = 3.e-13 + t3591 + t3600 + t3609;
  t4812 = t3499*t4479*t3518;
  t4815 = t4593*t3540;
  t4820 = t4812 + t4815;
  t3633 = 3.e-7*t3369;
  t3636 = t1582 + t3594;
  t3637 = -0.200000000003*t3636;
  t3639 = 0.1000000000039*t2988;
  t3640 = 3.e-13 + t3633 + t3637 + t3639;
  t4811 = 3.e-6*t3492*t3517*t4479;
  t4821 = 3.e-6*t3484*t4820;
  t4822 = t3531*t4741;
  t4824 = t4811 + t4821 + t4822;
  t4840 = -1.*t3492*t3517*t4479;
  t4846 = t3477*t4820;
  t4850 = t4840 + t4846 + t4748;
  t3689 = t3593 + t3688;
  t4852 = -1.*t3643*t3492*t4479;
  t4855 = -1.*t3517*t4820;
  t4858 = 3.e-6*t3517*t4741;
  t4859 = t4852 + t4855 + t4858;
  t3780 = t1582 + t3688;
  t4890 = 1.000000000009*t3492*t3517*t4479;
  t4893 = -1.*t3477*t4820;
  t4894 = 3.e-6*t3477*t4741;
  t4896 = t4890 + t4893 + t4894;
  t4899 = 3.e-6*t3477*t3492*t4479;
  t4900 = 3.e-6*t3517*t4820;
  t4903 = -9.e-12*t3517*t4741;
  t4905 = t4899 + t4900 + t4903;
  t4907 = -1.*t3477*t3492*t4479;
  t4908 = t4907 + t4855 + t4858;
  t4945 = -3.e-6*t3484*t4593*t3492*t3499;
  t4946 = 3.e-6*t4593*t3517*t3518;
  t4949 = t3531*t4593*t3492*t3540;
  t4950 = t4945 + t4946 + t4949;
  t4956 = -1.*t3477*t4593*t3492*t3499;
  t4957 = -1.*t4593*t3517*t3518;
  t4958 = 3.e-6*t3484*t4593*t3492*t3540;
  t4959 = t4956 + t4957 + t4958;
  t4962 = t4593*t3492*t3499*t3517;
  t4964 = -1.*t3643*t4593*t3518;
  t4965 = 3.e-6*t4593*t3492*t3517*t3540;
  t4968 = t4962 + t4964 + t4965;
  t5007 = t3499*t4479;
  t5008 = t4593*t3518*t3540;
  t5009 = t5007 + t5008;
  t5041 = t3531*t4601;
  t5060 = 3.e-6*t3484*t5009;
  t5061 = t5041 + t5060;
  t5065 = t3477*t5009;
  t5075 = t4613 + t5065;
  t5083 = 3.e-6*t3517*t4601;
  t5090 = -1.*t3517*t5009;
  t5094 = t5083 + t5090;
  t5139 = -1.*t4593*t3499*t3518;
  t5141 = t4479*t3540;
  t5142 = t5139 + t5141;
  t5138 = -3.e-6*t4593*t3492*t3517;
  t5143 = 3.e-6*t3484*t5142;
  t5144 = t3531*t5009;
  t5145 = t5138 + t5143 + t5144;
  t5148 = t4593*t3492*t3517;
  t5151 = t3477*t5142;
  t5152 = t5148 + t5151 + t5060;
  t5155 = t3643*t4593*t3492;
  t5157 = -1.*t3517*t5142;
  t5161 = 3.e-6*t3517*t5009;
  t5165 = t5155 + t5157 + t5161;
  t5231 = -1.000000000009*t4593*t3492*t3517;
  t5232 = -1.*t3477*t5142;
  t5234 = 3.e-6*t3477*t5009;
  t5236 = t5231 + t5232 + t5234;
  t5254 = -3.e-6*t3477*t4593*t3492;
  t5255 = 3.e-6*t3517*t5142;
  t5256 = -9.e-12*t3517*t5009;
  t5257 = t5254 + t5255 + t5256;
  t5260 = t3477*t4593*t3492;
  t5262 = t5260 + t5157 + t5161;
  p_output1[0]=var2[0] + (0.2000000000018*t3492*t3517 + 6.000000000054e-7*t3484*t3518*t3540 - 1.*t3499*t3518*t4354 + t4088*t4429 + t4062*t4435 + t3940*t4440 - 0.099999*(t4254*t4429 + t4247*t4435 + t4243*t4440) - 0.3*(t4247*t4429 + t4284*t4435 + t4263*t4440) + 0.2*(-1.*t4243*t4429 - 1.*t4263*t4435 - 1.*t4319*t4440))*var2[4] + (-6.000000000054e-7*t3484*t3492*t3499 - 1.*t3492*t3540*t4354 + t4088*t4358 + t4062*t4368 + t3940*t4386 - 0.099999*(t4254*t4358 + t4247*t4368 + t4243*t4386) - 0.3*(t4247*t4358 + t4284*t4368 + t4263*t4386) + 0.2*(-1.*t4243*t4358 - 1.*t4263*t4368 - 1.*t4319*t4386))*var2[5] + (-0.2000000000018*t3492*t3499*t3517 + 0.2000000000018*t3477*t3518 - 6.000000000054e-7*t3492*t3517*t3540 + t3940*t4043 + t4062*t4073 + t4088*t4113 - 0.099999*(t4043*t4243 + t4073*t4247 + t4113*t4254) - 0.3*(t4113*t4247 + t4043*t4263 + t4073*t4284) + 0.2*(-1.*t4113*t4243 - 1.*t4073*t4263 - 1.*t4043*t4319))*var2[19] + (t3472*t3554 + t3611*t3615 + t3640*t3677 + 0.2*(1.000000000009*t2988*t3615 - 1.*t3554*t3684 - 1.*t3677*t3689) - 0.099999*(-1.8e-11*t2988*t3554 + t3677*t3684 + t3615*t3695) - 0.3*(-1.000000000009*t2988*t3677 + t3554*t3695 + t3615*t3780))*var2[21];
  p_output1[1]=var2[1] + (-0.2000000000018*t3492*t3517*t4593 + t4354*t4601 + 6.000000000054e-7*t3484*t4609 + t4088*t4627 + t4062*t4685 + t3940*t4695 - 0.099999*(t4254*t4627 + t4247*t4685 + t4243*t4695) - 0.3*(t4247*t4627 + t4284*t4685 + t4263*t4695) + 0.2*(-1.*t4243*t4627 - 1.*t4263*t4685 - 1.*t4319*t4695))*var2[3] + (0.2000000000018*t3517*t3518*t4479 - 6.000000000054e-7*t3484*t3492*t3540*t4479 + t3492*t3499*t4354*t4479 + t4088*t4494 + t4062*t4510 + t3940*t4517 - 0.099999*(t4254*t4494 + t4247*t4510 + t4243*t4517) - 0.3*(t4247*t4494 + t4284*t4510 + t4263*t4517) + 0.2*(-1.*t4243*t4494 - 1.*t4263*t4510 - 1.*t4319*t4517))*var2[4] + (6.000000000054e-7*t3484*t4736 + t4354*t4741 + t4088*t4749 + t4062*t4757 + t3940*t4763 - 0.099999*(t4254*t4749 + t4247*t4757 + t4243*t4763) - 0.3*(t4247*t4749 + t4284*t4757 + t4263*t4763) + 0.2*(-1.*t4243*t4749 - 1.*t4263*t4757 - 1.*t4319*t4763))*var2[5] + (-0.2000000000018*t3477*t3492*t4479 + 6.000000000054e-7*t3517*t4741 - 0.2000000000018*t3517*t4820 + t3940*t4896 + t4088*t4905 + t4062*t4908 - 0.099999*(t4243*t4896 + t4254*t4905 + t4247*t4908) + 0.2*(-1.*t4319*t4896 - 1.*t4243*t4905 - 1.*t4263*t4908) - 0.3*(t4263*t4896 + t4247*t4905 + t4284*t4908))*var2[19] + (t3472*t4824 + t3611*t4850 + t3640*t4859 - 0.3*(t3695*t4824 + t3780*t4850 - 1.000000000009*t2988*t4859) - 0.099999*(-1.8e-11*t2988*t4824 + t3695*t4850 + t3684*t4859) + 0.2*(-1.*t3684*t4824 + 1.000000000009*t2988*t4850 - 1.*t3689*t4859))*var2[21];
  p_output1[2]=var2[2] + (-0.2000000000018*t3492*t3517*t4479 + 6.000000000054e-7*t3484*t4741 + t4354*t4820 + t4088*t4824 + t4062*t4850 + t3940*t4859 - 0.099999*(t4254*t4824 + t4247*t4850 + t4243*t4859) - 0.3*(t4247*t4824 + t4284*t4850 + t4263*t4859) + 0.2*(-1.*t4243*t4824 - 1.*t4263*t4850 - 1.*t4319*t4859))*var2[3] + (-0.2000000000018*t3517*t3518*t4593 + 6.000000000054e-7*t3484*t3492*t3540*t4593 - 1.*t3492*t3499*t4354*t4593 + t4088*t4950 + t4062*t4959 + t3940*t4968 - 0.099999*(t4254*t4950 + t4247*t4959 + t4243*t4968) - 0.3*(t4247*t4950 + t4284*t4959 + t4263*t4968) + 0.2*(-1.*t4243*t4950 - 1.*t4263*t4959 - 1.*t4319*t4968))*var2[4] + (6.000000000054e-7*t3484*t4601 + t4354*t5009 + t4088*t5061 + t4062*t5075 + t3940*t5094 - 0.099999*(t4254*t5061 + t4247*t5075 + t4243*t5094) - 0.3*(t4247*t5061 + t4284*t5075 + t4263*t5094) + 0.2*(-1.*t4243*t5061 - 1.*t4263*t5075 - 1.*t4319*t5094))*var2[5] + (0.2000000000018*t3477*t3492*t4593 + 6.000000000054e-7*t3517*t5009 - 0.2000000000018*t3517*t5142 + t3940*t5236 + t4088*t5257 + t4062*t5262 - 0.099999*(t4243*t5236 + t4254*t5257 + t4247*t5262) + 0.2*(-1.*t4319*t5236 - 1.*t4243*t5257 - 1.*t4263*t5262) - 0.3*(t4263*t5236 + t4247*t5257 + t4284*t5262))*var2[19] + (t3472*t5145 + t3611*t5152 + t3640*t5165 - 0.3*(t3695*t5145 + t3780*t5152 - 1.000000000009*t2988*t5165) - 0.099999*(-1.8e-11*t2988*t5145 + t3695*t5152 + t3684*t5165) + 0.2*(-1.*t3684*t5145 + 1.000000000009*t2988*t5152 - 1.*t3689*t5165))*var2[21];
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

#include "dh_RightBackFoot_BackStance.hh"

namespace BackStance
{

void dh_RightBackFoot_BackStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
