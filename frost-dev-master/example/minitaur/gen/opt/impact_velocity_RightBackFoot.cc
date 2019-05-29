/*
 * Automatically Generated from Mathematica.
 * Tue 28 May 2019 22:49:49 GMT-04:00
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
  double t265;
  double t778;
  double t784;
  double t3589;
  double t3656;
  double t3882;
  double t4156;
  double t867;
  double t1218;
  double t4157;
  double t4420;
  double t4433;
  double t4766;
  double t708;
  double t843;
  double t5154;
  double t4372;
  double t4448;
  double t4601;
  double t4669;
  double t4820;
  double t4840;
  double t6442;
  double t6721;
  double t7092;
  double t7103;
  double t5009;
  double t8157;
  double t8372;
  double t8788;
  double t11070;
  double t11987;
  double t12081;
  double t12112;
  double t12121;
  double t13124;
  double t12214;
  double t16131;
  double t15554;
  double t17103;
  double t16478;
  double t16500;
  double t22815;
  double t17942;
  double t22558;
  double t22602;
  double t22634;
  double t29930;
  double t22907;
  double t22910;
  double t22942;
  double t22944;
  double t22946;
  double t23610;
  double t31412;
  double t31492;
  double t22645;
  double t31471;
  double t31489;
  double t30115;
  double t22916;
  double t22935;
  double t22936;
  double t22938;
  double t22941;
  double t22642;
  double t22650;
  double t22814;
  double t22904;
  double t22906;
  double t16462;
  double t17077;
  double t17184;
  double t17199;
  double t17205;
  double t31776;
  double t31777;
  double t31498;
  double t31786;
  double t31788;
  double t31793;
  double t31795;
  double t31796;
  double t31799;
  double t31578;
  double t31418;
  double t31436;
  double t31680;
  double t31714;
  double t31759;
  double t31770;
  double t31853;
  double t31856;
  double t31857;
  double t31859;
  double t31862;
  double t31863;
  double t31864;
  double t31866;
  double t31869;
  double t31872;
  double t31874;
  double t31876;
  double t32138;
  double t32146;
  double t32148;
  double t32155;
  double t32165;
  double t32174;
  double t32175;
  double t32202;
  double t32214;
  double t32218;
  double t32221;
  double t32222;
  double t32225;
  double t32387;
  double t32785;
  double t32966;
  double t33022;
  double t33099;
  double t33101;
  double t33105;
  double t33113;
  double t33119;
  double t33125;
  double t33127;
  double t33132;
  double t33135;
  double t33136;
  double t33140;
  double t33162;
  double t33185;
  double t33188;
  double t33190;
  double t34005;
  double t34018;
  double t34052;
  double t34078;
  double t34081;
  double t34082;
  double t34084;
  double t34086;
  double t34087;
  double t34193;
  double t34378;
  double t34381;
  double t34388;
  double t34390;
  double t34391;
  double t866;
  double t1621;
  double t1671;
  double t3422;
  double t4958;
  double t5229;
  double t5236;
  double t5772;
  double t6165;
  double t34445;
  double t34451;
  double t34458;
  double t7329;
  double t7386;
  double t7492;
  double t7721;
  double t8078;
  double t34440;
  double t34466;
  double t34468;
  double t34477;
  double t34488;
  double t34489;
  double t34490;
  double t12358;
  double t34497;
  double t34498;
  double t34499;
  double t34500;
  double t15027;
  double t35981;
  double t35998;
  double t36002;
  double t36011;
  double t36038;
  double t36061;
  double t36064;
  double t36068;
  double t36086;
  double t36088;
  double t40472;
  double t40477;
  double t40481;
  double t40482;
  double t40484;
  double t40485;
  double t40487;
  double t40489;
  double t40497;
  double t40498;
  double t40505;
  double t40507;
  double t42684;
  double t42689;
  double t42697;
  double t42704;
  double t42715;
  double t42738;
  double t43295;
  double t43296;
  double t43373;
  double t43375;
  double t43378;
  double t44298;
  double t44308;
  double t44317;
  double t44250;
  double t44342;
  double t44349;
  double t44358;
  double t44371;
  double t44372;
  double t44376;
  double t44382;
  double t44390;
  double t44395;
  double t44396;
  double t44543;
  double t44545;
  double t44546;
  double t44557;
  double t44570;
  double t44571;
  double t44577;
  double t44581;
  double t44585;
  double t44586;
  t265 = Cos(var1[21]);
  t778 = Sin(var1[21]);
  t784 = -3.e-6*t778;
  t3589 = Cos(var1[19]);
  t3656 = -1.*t3589;
  t3882 = 1. + t3656;
  t4156 = Cos(var1[4]);
  t867 = 3.e-6*t265;
  t1218 = t867 + t784;
  t4157 = Cos(var1[5]);
  t4420 = Sin(var1[19]);
  t4433 = Sin(var1[4]);
  t4766 = Sin(var1[5]);
  t708 = -3.e-6*t265;
  t843 = t708 + t784;
  t5154 = -9.e-12*t778;
  t4372 = 3.e-6*t3882*t4156*t4157;
  t4448 = -3.e-6*t4420*t4433;
  t4601 = -9.e-12*t3882;
  t4669 = 1. + t4601;
  t4820 = -1.*t4669*t4156*t4766;
  t4840 = t4372 + t4448 + t4820;
  t6442 = t3589*t4156*t4157;
  t6721 = t4420*t4433;
  t7092 = -3.e-6*t3882*t4156*t4766;
  t7103 = t6442 + t6721 + t7092;
  t5009 = -1.*t265;
  t8157 = -1.*t4156*t4157*t4420;
  t8372 = -1.000000000009*t3882;
  t8788 = 1. + t8372;
  t11070 = t8788*t4433;
  t11987 = -3.e-6*t4156*t4420*t4766;
  t12081 = t8157 + t11070 + t11987;
  t12112 = 3.e-6*t778;
  t12121 = t867 + t12112;
  t13124 = t708 + t12112;
  t12214 = 9.e-12*t778;
  t16131 = 1. + t5009;
  t15554 = 3.e-13*var1[21];
  t17103 = -9.e-12*t16131;
  t16478 = -3.e-6*t16131;
  t16500 = t16478 + t784;
  t22815 = t16478 + t12112;
  t17942 = -1.*t3589*t4156*t4157;
  t22558 = -1.000000000009*t4420*t4433;
  t22602 = -3.e-6*t3589*t4156*t4766;
  t22634 = t17942 + t22558 + t22602;
  t29930 = 3.e-6*t16131;
  t22907 = t3589*t4433;
  t22910 = t8157 + t22907 + t11987;
  t22942 = 3.e-6*t4156*t4157*t4420;
  t22944 = -3.e-6*t3589*t4433;
  t22946 = 9.e-12*t4156*t4420*t4766;
  t23610 = t22942 + t22944 + t22946;
  t31412 = t29930 + t784;
  t31492 = 9.e-12*t16131;
  t22645 = -1.*t778;
  t31471 = -1.000000000009*t16131;
  t31489 = 1. + t31471;
  t30115 = t29930 + t12112;
  t22916 = 1.e-7*var1[21];
  t22935 = 5.4e-18*t16131;
  t22936 = -0.200000000003*t16500;
  t22938 = 0.100000000003*t22815;
  t22941 = t22916 + t22935 + t22936 + t22938;
  t22642 = -0.2000000000048*t16131;
  t22650 = t17103 + t22645;
  t22814 = 0.100000000003*t22650;
  t22904 = 3.e-7*t22815;
  t22906 = t15554 + t22642 + t22814 + t22904;
  t16462 = 0.1000000000039*t16131;
  t17077 = 3.e-7*t16500;
  t17184 = t17103 + t778;
  t17199 = -0.200000000003*t17184;
  t17205 = t15554 + t16462 + t17077 + t17199;
  t31776 = -1.*t4669*t4156*t4157;
  t31777 = t31776 + t7092;
  t31498 = t31492 + t778;
  t31786 = -3.e-6*t3882*t4156*t4157;
  t31788 = -1.*t3589*t4156*t4766;
  t31793 = t31786 + t31788;
  t31795 = -3.e-6*t4156*t4157*t4420;
  t31796 = t4156*t4420*t4766;
  t31799 = t31795 + t31796;
  t31578 = t31492 + t22645;
  t31418 = -1.8e-11*t16131;
  t31436 = 1. + t31418;
  t31680 = -1.8e-12*t3882;
  t31714 = -1. + t3589;
  t31759 = 0.2*t31714;
  t31770 = t31680 + t31759;
  t31853 = -3.e-6*t4156*t4420;
  t31856 = -3.e-6*t3882*t4157*t4433;
  t31857 = t4669*t4433*t4766;
  t31859 = t31853 + t31856 + t31857;
  t31862 = t4156*t4420;
  t31863 = -1.*t3589*t4157*t4433;
  t31864 = 3.e-6*t3882*t4433*t4766;
  t31866 = t31862 + t31863 + t31864;
  t31869 = t8788*t4156;
  t31872 = t4157*t4420*t4433;
  t31874 = 3.e-6*t4420*t4433*t4766;
  t31876 = t31869 + t31872 + t31874;
  t32138 = Sin(var1[3]);
  t32146 = 3.e-6*t3882*t4156*t4157*t32138;
  t32148 = -3.e-6*t4420*t32138*t4433;
  t32155 = -1.*t4669*t4156*t32138*t4766;
  t32165 = t32146 + t32148 + t32155;
  t32174 = t3589*t4156*t4157*t32138;
  t32175 = t4420*t32138*t4433;
  t32202 = -3.e-6*t3882*t4156*t32138*t4766;
  t32214 = t32174 + t32175 + t32202;
  t32218 = -1.*t4156*t4157*t4420*t32138;
  t32221 = t8788*t32138*t4433;
  t32222 = -3.e-6*t4156*t4420*t32138*t4766;
  t32225 = t32218 + t32221 + t32222;
  t32387 = Cos(var1[3]);
  t32785 = t32387*t4157*t4433;
  t32966 = -1.*t32138*t4766;
  t33022 = t32785 + t32966;
  t33099 = -1.*t4157*t32138;
  t33101 = -1.*t32387*t4433*t4766;
  t33105 = t33099 + t33101;
  t33113 = 3.e-6*t32387*t4156*t4420;
  t33119 = 3.e-6*t3882*t33022;
  t33125 = t4669*t33105;
  t33127 = t33113 + t33119 + t33125;
  t33132 = -1.*t32387*t4156*t4420;
  t33135 = t3589*t33022;
  t33136 = 3.e-6*t3882*t33105;
  t33140 = t33132 + t33135 + t33136;
  t33162 = -1.*t8788*t32387*t4156;
  t33185 = -1.*t4420*t33022;
  t33188 = 3.e-6*t4420*t33105;
  t33190 = t33162 + t33185 + t33188;
  t34005 = -1.*t4157*t32138*t4433;
  t34018 = -1.*t32387*t4766;
  t34052 = t34005 + t34018;
  t34078 = t32387*t4157;
  t34081 = -1.*t32138*t4433*t4766;
  t34082 = t34078 + t34081;
  t34084 = t4669*t34052;
  t34086 = 3.e-6*t3882*t34082;
  t34087 = t34084 + t34086;
  t34193 = 3.e-6*t3882*t34052;
  t34378 = t3589*t34082;
  t34381 = t34193 + t34378;
  t34388 = 3.e-6*t4420*t34052;
  t34390 = -1.*t4420*t34082;
  t34391 = t34388 + t34390;
  t866 = -0.200000000003*t843;
  t1621 = 0.100000000003*t1218;
  t1671 = 5.4e-18*t778;
  t3422 = 1.e-7 + t866 + t1621 + t1671;
  t4958 = 3.e-7*t1218;
  t5229 = t5009 + t5154;
  t5236 = 0.100000000003*t5229;
  t5772 = -0.2000000000048*t778;
  t6165 = 3.e-13 + t4958 + t5236 + t5772;
  t34445 = t4157*t32138*t4433;
  t34451 = t32387*t4766;
  t34458 = t34445 + t34451;
  t7329 = 3.e-7*t843;
  t7386 = t265 + t5154;
  t7492 = -0.200000000003*t7386;
  t7721 = 0.1000000000039*t778;
  t8078 = 3.e-13 + t7329 + t7492 + t7721;
  t34440 = 3.e-6*t4156*t4420*t32138;
  t34466 = 3.e-6*t3882*t34458;
  t34468 = t4669*t34082;
  t34477 = t34440 + t34466 + t34468;
  t34488 = -1.*t4156*t4420*t32138;
  t34489 = t3589*t34458;
  t34490 = t34488 + t34489 + t34086;
  t12358 = t5009 + t12214;
  t34497 = -1.*t8788*t4156*t32138;
  t34498 = -1.*t4420*t34458;
  t34499 = 3.e-6*t4420*t34082;
  t34500 = t34497 + t34498 + t34499;
  t15027 = t265 + t12214;
  t35981 = 1.000000000009*t4156*t4420*t32138;
  t35998 = -1.*t3589*t34458;
  t36002 = 3.e-6*t3589*t34082;
  t36011 = t35981 + t35998 + t36002;
  t36038 = 3.e-6*t3589*t4156*t32138;
  t36061 = 3.e-6*t4420*t34458;
  t36064 = -9.e-12*t4420*t34082;
  t36068 = t36038 + t36061 + t36064;
  t36086 = -1.*t3589*t4156*t32138;
  t36088 = t36086 + t34498 + t34499;
  t40472 = -3.e-6*t3882*t32387*t4156*t4157;
  t40477 = 3.e-6*t32387*t4420*t4433;
  t40481 = t4669*t32387*t4156*t4766;
  t40482 = t40472 + t40477 + t40481;
  t40484 = -1.*t3589*t32387*t4156*t4157;
  t40485 = -1.*t32387*t4420*t4433;
  t40487 = 3.e-6*t3882*t32387*t4156*t4766;
  t40489 = t40484 + t40485 + t40487;
  t40497 = t32387*t4156*t4157*t4420;
  t40498 = -1.*t8788*t32387*t4433;
  t40505 = 3.e-6*t32387*t4156*t4420*t4766;
  t40507 = t40497 + t40498 + t40505;
  t42684 = t4157*t32138;
  t42689 = t32387*t4433*t4766;
  t42697 = t42684 + t42689;
  t42704 = t4669*t33022;
  t42715 = 3.e-6*t3882*t42697;
  t42738 = t42704 + t42715;
  t43295 = t3589*t42697;
  t43296 = t33119 + t43295;
  t43373 = 3.e-6*t4420*t33022;
  t43375 = -1.*t4420*t42697;
  t43378 = t43373 + t43375;
  t44298 = -1.*t32387*t4157*t4433;
  t44308 = t32138*t4766;
  t44317 = t44298 + t44308;
  t44250 = -3.e-6*t32387*t4156*t4420;
  t44342 = 3.e-6*t3882*t44317;
  t44349 = t4669*t42697;
  t44358 = t44250 + t44342 + t44349;
  t44371 = t32387*t4156*t4420;
  t44372 = t3589*t44317;
  t44376 = t44371 + t44372 + t42715;
  t44382 = t8788*t32387*t4156;
  t44390 = -1.*t4420*t44317;
  t44395 = 3.e-6*t4420*t42697;
  t44396 = t44382 + t44390 + t44395;
  t44543 = -1.000000000009*t32387*t4156*t4420;
  t44545 = -1.*t3589*t44317;
  t44546 = 3.e-6*t3589*t42697;
  t44557 = t44543 + t44545 + t44546;
  t44570 = -3.e-6*t3589*t32387*t4156;
  t44571 = 3.e-6*t4420*t44317;
  t44577 = -9.e-12*t4420*t42697;
  t44581 = t44570 + t44571 + t44577;
  t44585 = t3589*t32387*t4156;
  t44586 = t44585 + t44390 + t44395;
  p_output1[0]=var2[0] + (t22941*t31859 + t22906*t31866 + t17205*t31876 - 0.099999*(t31436*t31859 + t31412*t31866 + t30115*t31876) - 0.3*(t31412*t31859 + t31498*t31866 + t31489*t31876) + 0.2*(-1.*t30115*t31859 - 1.*t31489*t31866 - 1.*t31578*t31876) + 0.2000000000018*t4156*t4420 - 1.*t31770*t4157*t4433 + 6.000000000054e-7*t3882*t4433*t4766)*var2[4] + (t22941*t31777 + t22906*t31793 + t17205*t31799 - 0.099999*(t31436*t31777 + t31412*t31793 + t30115*t31799) - 0.3*(t31412*t31777 + t31498*t31793 + t31489*t31799) + 0.2*(-1.*t30115*t31777 - 1.*t31489*t31793 - 1.*t31578*t31799) - 6.000000000054e-7*t3882*t4156*t4157 - 1.*t31770*t4156*t4766)*var2[5] + (t17205*t22634 + t22906*t22910 + t22941*t23610 - 0.099999*(t22634*t30115 + t22910*t31412 + t23610*t31436) - 0.3*(t23610*t31412 + t22634*t31489 + t22910*t31498) + 0.2*(-1.*t23610*t30115 - 1.*t22910*t31489 - 1.*t22634*t31578) - 0.2000000000018*t4156*t4157*t4420 + 0.2000000000018*t3589*t4433 - 6.000000000054e-7*t4156*t4420*t4766)*var2[19] + (t3422*t4840 + t6165*t7103 - 0.3*(t13124*t4840 + t15027*t7103 - 1.000000000009*t12081*t778) - 0.099999*(t12081*t12121 + t13124*t7103 - 1.8e-11*t4840*t778) + 0.2*(-1.*t12081*t12358 - 1.*t12121*t4840 + 1.000000000009*t7103*t778) + t12081*t8078)*var2[21];
  p_output1[1]=var2[1] + (t31770*t33022 + t22941*t33127 + t22906*t33140 + t17205*t33190 - 0.099999*(t31436*t33127 + t31412*t33140 + t30115*t33190) - 0.3*(t31412*t33127 + t31498*t33140 + t31489*t33190) + 0.2*(-1.*t30115*t33127 - 1.*t31489*t33140 - 1.*t31578*t33190) + 6.000000000054e-7*t33105*t3882 - 0.2000000000018*t32387*t4156*t4420)*var2[3] + (t22941*t32165 + t22906*t32214 + t17205*t32225 - 0.099999*(t31436*t32165 + t31412*t32214 + t30115*t32225) - 0.3*(t31412*t32165 + t31498*t32214 + t31489*t32225) + 0.2*(-1.*t30115*t32165 - 1.*t31489*t32214 - 1.*t31578*t32225) + t31770*t32138*t4156*t4157 + 0.2000000000018*t32138*t4420*t4433 - 6.000000000054e-7*t32138*t3882*t4156*t4766)*var2[4] + (t31770*t34082 + t22941*t34087 + t22906*t34381 + t17205*t34391 - 0.099999*(t31436*t34087 + t31412*t34381 + t30115*t34391) - 0.3*(t31412*t34087 + t31498*t34381 + t31489*t34391) + 0.2*(-1.*t30115*t34087 - 1.*t31489*t34381 - 1.*t31578*t34391) + 6.000000000054e-7*t34052*t3882)*var2[5] + (t17205*t36011 + t22941*t36068 + t22906*t36088 - 0.099999*(t30115*t36011 + t31436*t36068 + t31412*t36088) + 0.2*(-1.*t31578*t36011 - 1.*t30115*t36068 - 1.*t31489*t36088) - 0.3*(t31489*t36011 + t31412*t36068 + t31498*t36088) - 0.2000000000018*t32138*t3589*t4156 + 6.000000000054e-7*t34082*t4420 - 0.2000000000018*t34458*t4420)*var2[19] + (t3422*t34477 + t34490*t6165 - 0.099999*(t13124*t34490 + t12121*t34500 - 1.8e-11*t34477*t778) + 0.2*(-1.*t12121*t34477 - 1.*t12358*t34500 + 1.000000000009*t34490*t778) - 0.3*(t13124*t34477 + t15027*t34490 - 1.000000000009*t34500*t778) + t34500*t8078)*var2[21];
  p_output1[2]=var2[2] + (t31770*t34458 + t22941*t34477 + t22906*t34490 + t17205*t34500 - 0.099999*(t31436*t34477 + t31412*t34490 + t30115*t34500) - 0.3*(t31412*t34477 + t31498*t34490 + t31489*t34500) + 0.2*(-1.*t30115*t34477 - 1.*t31489*t34490 - 1.*t31578*t34500) + 6.000000000054e-7*t34082*t3882 - 0.2000000000018*t32138*t4156*t4420)*var2[3] + (t22941*t40482 + t22906*t40489 + t17205*t40507 - 0.099999*(t31436*t40482 + t31412*t40489 + t30115*t40507) - 0.3*(t31412*t40482 + t31498*t40489 + t31489*t40507) + 0.2*(-1.*t30115*t40482 - 1.*t31489*t40489 - 1.*t31578*t40507) - 1.*t31770*t32387*t4156*t4157 - 0.2000000000018*t32387*t4420*t4433 + 6.000000000054e-7*t32387*t3882*t4156*t4766)*var2[4] + (6.000000000054e-7*t33022*t3882 + t31770*t42697 + t22941*t42738 + t22906*t43296 + t17205*t43378 - 0.099999*(t31436*t42738 + t31412*t43296 + t30115*t43378) - 0.3*(t31412*t42738 + t31498*t43296 + t31489*t43378) + 0.2*(-1.*t30115*t42738 - 1.*t31489*t43296 - 1.*t31578*t43378))*var2[5] + (0.2000000000018*t32387*t3589*t4156 + 6.000000000054e-7*t42697*t4420 - 0.2000000000018*t4420*t44317 + t17205*t44557 + t22941*t44581 + t22906*t44586 - 0.099999*(t30115*t44557 + t31436*t44581 + t31412*t44586) + 0.2*(-1.*t31578*t44557 - 1.*t30115*t44581 - 1.*t31489*t44586) - 0.3*(t31489*t44557 + t31412*t44581 + t31498*t44586))*var2[19] + (t3422*t44358 + t44376*t6165 - 0.099999*(t13124*t44376 + t12121*t44396 - 1.8e-11*t44358*t778) + 0.2*(-1.*t12121*t44358 - 1.*t12358*t44396 + 1.000000000009*t44376*t778) - 0.3*(t13124*t44358 + t15027*t44376 - 1.000000000009*t44396*t778) + t44396*t8078)*var2[21];
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

#include "impact_velocity_RightBackFoot.hh"

namespace Flight2
{

void impact_velocity_RightBackFoot_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
