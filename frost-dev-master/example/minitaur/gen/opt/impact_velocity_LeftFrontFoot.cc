/*
 * Automatically Generated from Mathematica.
 * Thu 30 May 2019 00:02:35 GMT-04:00
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
  double t2694;
  double t4213;
  double t4508;
  double t15807;
  double t30182;
  double t30232;
  double t30416;
  double t29311;
  double t4033;
  double t29327;
  double t26421;
  double t30215;
  double t30476;
  double t30635;
  double t30738;
  double t31048;
  double t31279;
  double t31293;
  double t31347;
  double t31349;
  double t30889;
  double t30902;
  double t30903;
  double t30906;
  double t30907;
  double t30917;
  double t31544;
  double t15862;
  double t21671;
  double t22610;
  double t28990;
  double t29572;
  double t30139;
  double t31360;
  double t31562;
  double t31613;
  double t31552;
  double t32029;
  double t32045;
  double t32107;
  double t31937;
  double t31938;
  double t32001;
  double t32037;
  double t32136;
  double t32142;
  double t32368;
  double t32285;
  double t32289;
  double t32290;
  double t32377;
  double t32016;
  double t32156;
  double t32036;
  double t32275;
  double t32276;
  double t33131;
  double t32291;
  double t32035;
  double t32041;
  double t32042;
  double t32128;
  double t32131;
  double t32144;
  double t32154;
  double t32270;
  double t32271;
  double t32272;
  double t35389;
  double t35398;
  double t35404;
  double t35416;
  double t32363;
  double t35433;
  double t35436;
  double t35437;
  double t35440;
  double t32395;
  double t32396;
  double t36004;
  double t36005;
  double t36012;
  double t36016;
  double t33159;
  double t33685;
  double t33689;
  double t33691;
  double t33797;
  double t34625;
  double t37385;
  double t37386;
  double t37393;
  double t37394;
  double t37346;
  double t37371;
  double t37601;
  double t37606;
  double t37607;
  double t37609;
  double t43143;
  double t43141;
  double t30561;
  double t30833;
  double t30849;
  double t30853;
  double t43142;
  double t43157;
  double t43158;
  double t43167;
  double t43172;
  double t43174;
  double t30961;
  double t31084;
  double t31099;
  double t31104;
  double t31201;
  double t31359;
  double t31371;
  double t31528;
  double t31529;
  double t31541;
  double t43183;
  double t43184;
  double t43191;
  double t43200;
  double t31622;
  double t43162;
  double t43175;
  double t43177;
  double t43179;
  double t43208;
  double t43232;
  double t43239;
  double t43240;
  double t31673;
  double t43404;
  double t43418;
  double t43420;
  double t43426;
  double t43427;
  double t43435;
  double t43438;
  double t43442;
  double t43507;
  double t43512;
  double t43513;
  double t43717;
  double t43720;
  double t43721;
  double t43743;
  double t43744;
  double t43745;
  double t43759;
  double t43760;
  double t43765;
  double t43772;
  double t43774;
  double t43775;
  double t43776;
  double t43777;
  double t43780;
  double t43781;
  double t43782;
  double t43783;
  double t43826;
  double t43827;
  double t43829;
  double t43834;
  double t43837;
  double t43838;
  double t43840;
  double t43841;
  double t43847;
  double t43848;
  double t43851;
  double t43852;
  double t43898;
  double t43899;
  double t43900;
  double t43901;
  double t43891;
  double t43894;
  double t43906;
  double t43907;
  double t43909;
  double t43911;
  double t43961;
  double t43963;
  double t43964;
  double t43968;
  double t43969;
  double t43974;
  double t43990;
  double t43992;
  double t43994;
  double t43995;
  double t43985;
  double t43986;
  double t43987;
  double t43988;
  double t43967;
  double t43975;
  double t43981;
  double t43983;
  double t44066;
  double t44068;
  double t44072;
  double t44073;
  double t44104;
  double t44106;
  double t44110;
  double t44262;
  double t44263;
  double t44264;
  double t44265;
  double t44272;
  double t44283;
  double t44287;
  double t44292;
  double t44304;
  double t44306;
  double t44307;
  double t44309;
  double t44405;
  double t44406;
  double t44407;
  double t44408;
  double t44398;
  double t44400;
  double t44412;
  double t44413;
  double t44429;
  double t44430;
  t2694 = Cos(var1[4]);
  t4213 = Cos(var1[6]);
  t4508 = -1.*t4213;
  t15807 = 1. + t4508;
  t30182 = Cos(var1[8]);
  t30232 = Sin(var1[8]);
  t30416 = -3.e-6*t30232;
  t29311 = Sin(var1[4]);
  t4033 = Cos(var1[5]);
  t29327 = Sin(var1[6]);
  t26421 = Sin(var1[5]);
  t30215 = -3.e-6*t30182;
  t30476 = t30215 + t30416;
  t30635 = 3.e-6*t30182;
  t30738 = t30635 + t30416;
  t31048 = -9.e-12*t30232;
  t31279 = t2694*t4033*t4213;
  t31293 = -3.e-6*t2694*t15807*t26421;
  t31347 = t29311*t29327;
  t31349 = t31279 + t31293 + t31347;
  t30889 = -1.000000000009*t15807;
  t30902 = 1. + t30889;
  t30903 = t30902*t29311;
  t30906 = -1.*t2694*t4033*t29327;
  t30907 = -3.e-6*t2694*t26421*t29327;
  t30917 = t30903 + t30906 + t30907;
  t31544 = 3.e-6*t30232;
  t15862 = 3.e-6*t2694*t4033*t15807;
  t21671 = -9.e-12*t15807;
  t22610 = 1. + t21671;
  t28990 = -1.*t2694*t22610*t26421;
  t29572 = -3.e-6*t29311*t29327;
  t30139 = t15862 + t28990 + t29572;
  t31360 = -1.*t30182;
  t31562 = t30635 + t31544;
  t31613 = 9.e-12*t30232;
  t31552 = t30215 + t31544;
  t32029 = 1. + t31360;
  t32045 = -3.e-6*t32029;
  t32107 = t32045 + t31544;
  t31937 = -3.e-6*t2694*t4033*t15807;
  t31938 = -1.*t2694*t4213*t26421;
  t32001 = t31937 + t31938;
  t32037 = -1.*t30232;
  t32136 = -1.*t2694*t4033*t22610;
  t32142 = t32136 + t31293;
  t32368 = 3.e-6*t32029;
  t32285 = -3.e-6*t2694*t4033*t29327;
  t32289 = t2694*t26421*t29327;
  t32290 = t32285 + t32289;
  t32377 = t32368 + t31544;
  t32016 = 9.e-13*var1[8];
  t32156 = t32045 + t30416;
  t32036 = -9.e-12*t32029;
  t32275 = -1.000000000009*t32029;
  t32276 = 1. + t32275;
  t33131 = t32368 + t30416;
  t32291 = 9.e-12*t32029;
  t32035 = 0.2000000000018*t32029;
  t32041 = t32036 + t32037;
  t32042 = 0.1*t32041;
  t32128 = -9.e-7*t32107;
  t32131 = t32016 + t32035 + t32042 + t32128;
  t32144 = 3.e-7*var1[8];
  t32154 = -1.62e-17*t32029;
  t32270 = 0.2*t32156;
  t32271 = 0.1*t32107;
  t32272 = t32144 + t32154 + t32270 + t32271;
  t35389 = -1.*t4033*t4213*t29311;
  t35398 = 3.e-6*t15807*t29311*t26421;
  t35404 = t2694*t29327;
  t35416 = t35389 + t35398 + t35404;
  t32363 = t32291 + t32037;
  t35433 = -3.e-6*t4033*t15807*t29311;
  t35436 = t22610*t29311*t26421;
  t35437 = -3.e-6*t2694*t29327;
  t35440 = t35433 + t35436 + t35437;
  t32395 = -1.8e-11*t32029;
  t32396 = 1. + t32395;
  t36004 = t2694*t30902;
  t36005 = t4033*t29311*t29327;
  t36012 = 3.e-6*t29311*t26421*t29327;
  t36016 = t36004 + t36005 + t36012;
  t33159 = 0.1000000000009*t32029;
  t33685 = -9.e-7*t32156;
  t33689 = t32036 + t30232;
  t33691 = 0.2*t33689;
  t33797 = t32016 + t33159 + t33685 + t33691;
  t34625 = t32291 + t30232;
  t37385 = -3.e-6*t4213*t29311;
  t37386 = 3.e-6*t2694*t4033*t29327;
  t37393 = 9.e-12*t2694*t26421*t29327;
  t37394 = t37385 + t37386 + t37393;
  t37346 = t4213*t29311;
  t37371 = t37346 + t30906 + t30907;
  t37601 = -1.*t2694*t4033*t4213;
  t37606 = -3.e-6*t2694*t4213*t26421;
  t37607 = -1.000000000009*t29311*t29327;
  t37609 = t37601 + t37606 + t37607;
  t43143 = Cos(var1[3]);
  t43141 = Sin(var1[3]);
  t30561 = 0.2*t30476;
  t30833 = 0.1*t30738;
  t30849 = -1.62e-17*t30232;
  t30853 = 3.e-7 + t30561 + t30833 + t30849;
  t43142 = t4033*t43141*t29311;
  t43157 = t43143*t26421;
  t43158 = t43142 + t43157;
  t43167 = t43143*t4033;
  t43172 = -1.*t43141*t29311*t26421;
  t43174 = t43167 + t43172;
  t30961 = -9.e-7*t30476;
  t31084 = t30182 + t31048;
  t31099 = 0.2*t31084;
  t31104 = 0.1000000000009*t30232;
  t31201 = 9.e-13 + t30961 + t31099 + t31104;
  t31359 = -9.e-7*t30738;
  t31371 = t31360 + t31048;
  t31528 = 0.1*t31371;
  t31529 = 0.2000000000018*t30232;
  t31541 = 9.e-13 + t31359 + t31528 + t31529;
  t43183 = -1.*t2694*t30902*t43141;
  t43184 = -1.*t43158*t29327;
  t43191 = 3.e-6*t43174*t29327;
  t43200 = t43183 + t43184 + t43191;
  t31622 = t31360 + t31613;
  t43162 = 3.e-6*t15807*t43158;
  t43175 = t22610*t43174;
  t43177 = 3.e-6*t2694*t43141*t29327;
  t43179 = t43162 + t43175 + t43177;
  t43208 = t4213*t43158;
  t43232 = 3.e-6*t15807*t43174;
  t43239 = -1.*t2694*t43141*t29327;
  t43240 = t43208 + t43232 + t43239;
  t31673 = t30182 + t31613;
  t43404 = -1.*t4033*t43141*t29311;
  t43418 = -1.*t43143*t26421;
  t43420 = t43404 + t43418;
  t43426 = 3.e-6*t15807*t43420;
  t43427 = t4213*t43174;
  t43435 = t43426 + t43427;
  t43438 = t22610*t43420;
  t43442 = t43438 + t43232;
  t43507 = 3.e-6*t43420*t29327;
  t43512 = -1.*t43174*t29327;
  t43513 = t43507 + t43512;
  t43717 = t43143*t4033*t29311;
  t43720 = -1.*t43141*t26421;
  t43721 = t43717 + t43720;
  t43743 = -1.*t4033*t43141;
  t43744 = -1.*t43143*t29311*t26421;
  t43745 = t43743 + t43744;
  t43759 = t4213*t43721;
  t43760 = 3.e-6*t15807*t43745;
  t43765 = -1.*t43143*t2694*t29327;
  t43772 = t43759 + t43760 + t43765;
  t43774 = 3.e-6*t15807*t43721;
  t43775 = t22610*t43745;
  t43776 = 3.e-6*t43143*t2694*t29327;
  t43777 = t43774 + t43775 + t43776;
  t43780 = -1.*t43143*t2694*t30902;
  t43781 = -1.*t43721*t29327;
  t43782 = 3.e-6*t43745*t29327;
  t43783 = t43780 + t43781 + t43782;
  t43826 = t2694*t4033*t4213*t43141;
  t43827 = -3.e-6*t2694*t15807*t43141*t26421;
  t43829 = t43141*t29311*t29327;
  t43834 = t43826 + t43827 + t43829;
  t43837 = 3.e-6*t2694*t4033*t15807*t43141;
  t43838 = -1.*t2694*t22610*t43141*t26421;
  t43840 = -3.e-6*t43141*t29311*t29327;
  t43841 = t43837 + t43838 + t43840;
  t43847 = t30902*t43141*t29311;
  t43848 = -1.*t2694*t4033*t43141*t29327;
  t43851 = -3.e-6*t2694*t43141*t26421*t29327;
  t43852 = t43847 + t43848 + t43851;
  t43898 = 3.e-6*t2694*t4213*t43141;
  t43899 = 3.e-6*t43158*t29327;
  t43900 = -9.e-12*t43174*t29327;
  t43901 = t43898 + t43899 + t43900;
  t43891 = -1.*t2694*t4213*t43141;
  t43894 = t43891 + t43184 + t43191;
  t43906 = -1.*t4213*t43158;
  t43907 = 3.e-6*t4213*t43174;
  t43909 = 1.000000000009*t2694*t43141*t29327;
  t43911 = t43906 + t43907 + t43909;
  t43961 = -1.*t43143*t4033*t29311;
  t43963 = t43141*t26421;
  t43964 = t43961 + t43963;
  t43968 = t4033*t43141;
  t43969 = t43143*t29311*t26421;
  t43974 = t43968 + t43969;
  t43990 = t4213*t43964;
  t43992 = 3.e-6*t15807*t43974;
  t43994 = t43143*t2694*t29327;
  t43995 = t43990 + t43992 + t43994;
  t43985 = t43143*t2694*t30902;
  t43986 = -1.*t43964*t29327;
  t43987 = 3.e-6*t43974*t29327;
  t43988 = t43985 + t43986 + t43987;
  t43967 = 3.e-6*t15807*t43964;
  t43975 = t22610*t43974;
  t43981 = -3.e-6*t43143*t2694*t29327;
  t43983 = t43967 + t43975 + t43981;
  t44066 = t4213*t43974;
  t44068 = t43774 + t44066;
  t44072 = t22610*t43721;
  t44073 = t44072 + t43992;
  t44104 = 3.e-6*t43721*t29327;
  t44106 = -1.*t43974*t29327;
  t44110 = t44104 + t44106;
  t44262 = -1.*t43143*t2694*t4033*t4213;
  t44263 = 3.e-6*t43143*t2694*t15807*t26421;
  t44264 = -1.*t43143*t29311*t29327;
  t44265 = t44262 + t44263 + t44264;
  t44272 = -3.e-6*t43143*t2694*t4033*t15807;
  t44283 = t43143*t2694*t22610*t26421;
  t44287 = 3.e-6*t43143*t29311*t29327;
  t44292 = t44272 + t44283 + t44287;
  t44304 = -1.*t43143*t30902*t29311;
  t44306 = t43143*t2694*t4033*t29327;
  t44307 = 3.e-6*t43143*t2694*t26421*t29327;
  t44309 = t44304 + t44306 + t44307;
  t44405 = -3.e-6*t43143*t2694*t4213;
  t44406 = 3.e-6*t43964*t29327;
  t44407 = -9.e-12*t43974*t29327;
  t44408 = t44405 + t44406 + t44407;
  t44398 = t43143*t2694*t4213;
  t44400 = t44398 + t43986 + t43987;
  t44412 = -1.*t4213*t43964;
  t44413 = 3.e-6*t4213*t43974;
  t44429 = -1.000000000009*t43143*t2694*t29327;
  t44430 = t44412 + t44413 + t44429;
  p_output1[0]=var2[0] + (-6.000000000054e-7*t15807*t26421*t29311 - 0.2000000000018*t2694*t29327 + t32131*t35416 + t32272*t35440 + t33797*t36016 - 0.3*(t34625*t35416 + t33131*t35440 + t32276*t36016) + 0.2*(t32276*t35416 + t32377*t35440 + t32363*t36016) + 0.100001*(t33131*t35416 + t32396*t35440 + t32377*t36016) - 0.2000000000018*t15807*t29311*t4033)*var2[4] + (-0.2000000000018*t15807*t26421*t2694 + t32001*t32131 + t32142*t32272 + 0.2*(t32001*t32276 + t32290*t32363 + t32142*t32377) + 0.100001*(t32290*t32377 + t32142*t32396 + t32001*t33131) + t32290*t33797 - 0.3*(t32276*t32290 + t32142*t33131 + t32001*t34625) + 6.000000000054e-7*t15807*t2694*t4033)*var2[5] + (6.000000000054e-7*t26421*t2694*t29327 + t32131*t37371 + t32272*t37394 + t33797*t37609 - 0.3*(t34625*t37371 + t33131*t37394 + t32276*t37609) + 0.2*(t32276*t37371 + t32377*t37394 + t32363*t37609) + 0.100001*(t33131*t37371 + t32396*t37394 + t32377*t37609) + 0.2000000000018*t2694*t29327*t4033 - 0.2000000000018*t29311*t4213)*var2[6] + (t30139*t30853 + t30917*t31201 + t31349*t31541 + 0.100001*(-1.8e-11*t30139*t30232 + t31349*t31552 + t30917*t31562) + 0.2*(-1.000000000009*t30232*t31349 + t30139*t31562 + t30917*t31622) - 0.3*(-1.000000000009*t30232*t30917 + t30139*t31552 + t31349*t31673))*var2[8];
  p_output1[1]=var2[1] + (0.2000000000018*t2694*t29327*t43143 + 0.2000000000018*t15807*t43721 - 6.000000000054e-7*t15807*t43745 + t32131*t43772 + t32272*t43777 + t33797*t43783 - 0.3*(t34625*t43772 + t33131*t43777 + t32276*t43783) + 0.2*(t32276*t43772 + t32377*t43777 + t32363*t43783) + 0.100001*(t33131*t43772 + t32396*t43777 + t32377*t43783))*var2[3] + (6.000000000054e-7*t15807*t26421*t2694*t43141 - 0.2000000000018*t29311*t29327*t43141 + 0.2000000000018*t15807*t2694*t4033*t43141 + t32131*t43834 + t32272*t43841 + t33797*t43852 - 0.3*(t34625*t43834 + t33131*t43841 + t32276*t43852) + 0.2*(t32276*t43834 + t32377*t43841 + t32363*t43852) + 0.100001*(t33131*t43834 + t32396*t43841 + t32377*t43852))*var2[4] + (0.2000000000018*t15807*t43174 - 6.000000000054e-7*t15807*t43420 + t32131*t43435 + t32272*t43442 + t33797*t43513 - 0.3*(t34625*t43435 + t33131*t43442 + t32276*t43513) + 0.2*(t32276*t43435 + t32377*t43442 + t32363*t43513) + 0.100001*(t33131*t43435 + t32396*t43442 + t32377*t43513))*var2[5] + (0.2000000000018*t2694*t4213*t43141 + 0.2000000000018*t29327*t43158 - 6.000000000054e-7*t29327*t43174 + t32131*t43894 + t32272*t43901 + t33797*t43911 - 0.3*(t34625*t43894 + t33131*t43901 + t32276*t43911) + 0.2*(t32276*t43894 + t32377*t43901 + t32363*t43911) + 0.100001*(t33131*t43894 + t32396*t43901 + t32377*t43911))*var2[6] + (t30853*t43179 + t31201*t43200 + t31541*t43240 + 0.2*(t31562*t43179 + t31622*t43200 - 1.000000000009*t30232*t43240) + 0.100001*(-1.8e-11*t30232*t43179 + t31562*t43200 + t31552*t43240) - 0.3*(t31552*t43179 - 1.000000000009*t30232*t43200 + t31673*t43240))*var2[8];
  p_output1[2]=var2[2] + (0.2000000000018*t2694*t29327*t43141 + 0.2000000000018*t15807*t43158 - 6.000000000054e-7*t15807*t43174 + t32272*t43179 + t33797*t43200 + t32131*t43240 + 0.2*(t32377*t43179 + t32363*t43200 + t32276*t43240) + 0.100001*(t32396*t43179 + t32377*t43200 + t33131*t43240) - 0.3*(t33131*t43179 + t32276*t43200 + t34625*t43240))*var2[3] + (-6.000000000054e-7*t15807*t26421*t2694*t43143 + 0.2000000000018*t29311*t29327*t43143 - 0.2000000000018*t15807*t2694*t4033*t43143 + t32131*t44265 + t32272*t44292 + t33797*t44309 - 0.3*(t34625*t44265 + t33131*t44292 + t32276*t44309) + 0.2*(t32276*t44265 + t32377*t44292 + t32363*t44309) + 0.100001*(t33131*t44265 + t32396*t44292 + t32377*t44309))*var2[4] + (-6.000000000054e-7*t15807*t43721 + 0.2000000000018*t15807*t43974 + t32131*t44068 + t32272*t44073 + t33797*t44110 - 0.3*(t34625*t44068 + t33131*t44073 + t32276*t44110) + 0.2*(t32276*t44068 + t32377*t44073 + t32363*t44110) + 0.100001*(t33131*t44068 + t32396*t44073 + t32377*t44110))*var2[5] + (-0.2000000000018*t2694*t4213*t43143 + 0.2000000000018*t29327*t43964 - 6.000000000054e-7*t29327*t43974 + t32131*t44400 + t32272*t44408 + t33797*t44430 - 0.3*(t34625*t44400 + t33131*t44408 + t32276*t44430) + 0.2*(t32276*t44400 + t32377*t44408 + t32363*t44430) + 0.100001*(t33131*t44400 + t32396*t44408 + t32377*t44430))*var2[6] + (t30853*t43983 + t31201*t43988 + t31541*t43995 + 0.2*(t31562*t43983 + t31622*t43988 - 1.000000000009*t30232*t43995) + 0.100001*(-1.8e-11*t30232*t43983 + t31562*t43988 + t31552*t43995) - 0.3*(t31552*t43983 - 1.000000000009*t30232*t43988 + t31673*t43995))*var2[8];
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
