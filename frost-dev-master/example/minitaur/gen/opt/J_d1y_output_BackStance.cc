/*
 * Automatically Generated from Mathematica.
 * Tue 28 May 2019 22:43:45 GMT-04:00
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
static void output1(double *p_output1,const double *var1,const double *var2,const double *var3,const double *var4,const double *var5,const double *var6,const double *var7)
{
  double t562;
  double t38;
  double t47;
  double t383;
  double t428;
  double t552;
  double t634;
  double t652;
  double t671;
  double t675;
  double t685;
  double t687;
  double t720;
  double t757;
  double t769;
  double t778;
  double t783;
  double t784;
  double t843;
  double t852;
  double t876;
  double t877;
  double t1218;
  double t1621;
  double t1671;
  double t1734;
  double t1735;
  double t1230;
  double t1239;
  double t1254;
  double t1275;
  double t1414;
  double t1470;
  double t1579;
  double t1580;
  double t1582;
  double t1584;
  double t1631;
  double t1638;
  double t1647;
  double t1657;
  t562 = -1.*var5[0];
  t38 = -1. + var6[0];
  t47 = -1. + var7[0];
  t383 = 1/t47;
  t428 = -1.*t38*t383;
  t552 = 1. + t428;
  t634 = t562 + var5[1];
  t652 = Power(t634,-5);
  t671 = -1.*var1[0];
  t675 = t671 + var1[1];
  t685 = t38*t383*t675;
  t687 = t562 + var1[0] + t685;
  t720 = Power(t687,3);
  t757 = Power(t634,-4);
  t769 = Power(t687,2);
  t778 = 1/t634;
  t783 = -1.*t778*t687;
  t784 = 1. + t783;
  t843 = Power(t634,-3);
  t852 = Power(t784,2);
  t876 = Power(t634,-2);
  t877 = Power(t784,3);
  t1218 = Power(t784,4);
  t1621 = Power(t687,4);
  t1671 = Power(t634,-6);
  t1734 = -1.*t876*t687;
  t1735 = t778 + t1734;
  t1230 = 5.*t778*t1218;
  t1239 = 20.*t876*t687*t877;
  t1254 = -5.*t778*t1218;
  t1275 = t1239 + t1254;
  t1414 = 30.*t843*t769*t852;
  t1470 = -20.*t876*t687*t877;
  t1579 = t1414 + t1470;
  t1580 = 20.*t757*t720*t784;
  t1582 = -30.*t843*t769*t852;
  t1584 = t1580 + t1582;
  t1631 = 5.*t652*t1621;
  t1638 = -20.*t757*t720*t784;
  t1647 = t1631 + t1638;
  t1657 = -5.*t652*t1621;
  p_output1[0]=-20.*t552*t876*t877*var4[0] - 60.*t552*t687*t843*t852*var4[8] + 40.*t552*t876*t877*var4[8] - 60.*t552*t757*t769*t784*var4[16] + 120.*t552*t687*t843*t852*var4[16] - 20.*t552*t876*t877*var4[16] - 20.*t552*t652*t720*var4[24] + 120.*t552*t757*t769*t784*var4[24] - 60.*t552*t687*t843*t852*var4[24] + 40.*t552*t652*t720*var4[32] - 60.*t552*t757*t769*t784*var4[32] - 20.*t552*t652*t720*var4[40];
  p_output1[1]=-20.*t38*t383*t876*t877*var4[0] - 60.*t38*t383*t687*t843*t852*var4[8] + 40.*t38*t383*t876*t877*var4[8] - 60.*t38*t383*t757*t769*t784*var4[16] + 120.*t38*t383*t687*t843*t852*var4[16] - 20.*t38*t383*t876*t877*var4[16] - 20.*t38*t383*t652*t720*var4[24] + 120.*t38*t383*t757*t769*t784*var4[24] - 60.*t38*t383*t687*t843*t852*var4[24] + 40.*t38*t383*t652*t720*var4[32] - 60.*t38*t383*t757*t769*t784*var4[32] - 20.*t38*t383*t652*t720*var4[40];
  p_output1[2]=0.5;
  p_output1[3]=0.5;
  p_output1[4]=t1230;
  p_output1[5]=t1275;
  p_output1[6]=t1579;
  p_output1[7]=t1584;
  p_output1[8]=t1647;
  p_output1[9]=t1657;
  p_output1[10]=5.*t1218*t876*var4[0] + 20.*t1735*t778*t877*var4[0] - 5.*t1218*t876*var4[8] + 60.*t1735*t687*t852*t876*var4[8] - 20.*t1735*t778*t877*var4[8] + 40.*t687*t843*t877*var4[8] - 20.*t876*t877*var4[8] + 60.*t1735*t769*t784*t843*var4[16] + 90.*t757*t769*t852*var4[16] - 60.*t687*t843*t852*var4[16] - 60.*t1735*t687*t852*t876*var4[16] - 40.*t687*t843*t877*var4[16] + 20.*t876*t877*var4[16] + 20.*t1735*t720*t757*var4[24] + 80.*t652*t720*t784*var4[24] - 60.*t757*t769*t784*var4[24] - 60.*t1735*t769*t784*t843*var4[24] - 90.*t757*t769*t852*var4[24] + 60.*t687*t843*t852*var4[24] + 25.*t1621*t1671*var4[32] - 20.*t652*t720*var4[32] - 20.*t1735*t720*t757*var4[32] - 80.*t652*t720*t784*var4[32] + 60.*t757*t769*t784*var4[32] - 25.*t1621*t1671*var4[40] + 20.*t652*t720*var4[40];
  p_output1[11]=-5.*t1218*t876*var4[0] + 20.*t687*t843*t877*var4[0] + 60.*t757*t769*t852*var4[8] + 5.*t1218*t876*var4[8] - 60.*t687*t843*t877*var4[8] + 60.*t652*t720*t784*var4[16] - 150.*t757*t769*t852*var4[16] + 40.*t687*t843*t877*var4[16] + 20.*t1621*t1671*var4[24] - 140.*t652*t720*t784*var4[24] + 90.*t757*t769*t852*var4[24] - 45.*t1621*t1671*var4[32] + 80.*t652*t720*t784*var4[32] + 25.*t1621*t1671*var4[40];
  p_output1[12]=-20.*t552*t876*t877*var4[1] - 60.*t552*t687*t843*t852*var4[9] + 40.*t552*t876*t877*var4[9] - 60.*t552*t757*t769*t784*var4[17] + 120.*t552*t687*t843*t852*var4[17] - 20.*t552*t876*t877*var4[17] - 20.*t552*t652*t720*var4[25] + 120.*t552*t757*t769*t784*var4[25] - 60.*t552*t687*t843*t852*var4[25] + 40.*t552*t652*t720*var4[33] - 60.*t552*t757*t769*t784*var4[33] - 20.*t552*t652*t720*var4[41];
  p_output1[13]=-20.*t38*t383*t876*t877*var4[1] - 60.*t38*t383*t687*t843*t852*var4[9] + 40.*t38*t383*t876*t877*var4[9] - 60.*t38*t383*t757*t769*t784*var4[17] + 120.*t38*t383*t687*t843*t852*var4[17] - 20.*t38*t383*t876*t877*var4[17] - 20.*t38*t383*t652*t720*var4[25] + 120.*t38*t383*t757*t769*t784*var4[25] - 60.*t38*t383*t687*t843*t852*var4[25] + 40.*t38*t383*t652*t720*var4[33] - 60.*t38*t383*t757*t769*t784*var4[33] - 20.*t38*t383*t652*t720*var4[41];
  p_output1[14]=-1.;
  p_output1[15]=1.;
  p_output1[16]=t1230;
  p_output1[17]=t1275;
  p_output1[18]=t1579;
  p_output1[19]=t1584;
  p_output1[20]=t1647;
  p_output1[21]=t1657;
  p_output1[22]=5.*t1218*t876*var4[1] + 20.*t1735*t778*t877*var4[1] - 5.*t1218*t876*var4[9] + 60.*t1735*t687*t852*t876*var4[9] - 20.*t1735*t778*t877*var4[9] + 40.*t687*t843*t877*var4[9] - 20.*t876*t877*var4[9] + 60.*t1735*t769*t784*t843*var4[17] + 90.*t757*t769*t852*var4[17] - 60.*t687*t843*t852*var4[17] - 60.*t1735*t687*t852*t876*var4[17] - 40.*t687*t843*t877*var4[17] + 20.*t876*t877*var4[17] + 20.*t1735*t720*t757*var4[25] + 80.*t652*t720*t784*var4[25] - 60.*t757*t769*t784*var4[25] - 60.*t1735*t769*t784*t843*var4[25] - 90.*t757*t769*t852*var4[25] + 60.*t687*t843*t852*var4[25] + 25.*t1621*t1671*var4[33] - 20.*t652*t720*var4[33] - 20.*t1735*t720*t757*var4[33] - 80.*t652*t720*t784*var4[33] + 60.*t757*t769*t784*var4[33] - 25.*t1621*t1671*var4[41] + 20.*t652*t720*var4[41];
  p_output1[23]=-5.*t1218*t876*var4[1] + 20.*t687*t843*t877*var4[1] + 60.*t757*t769*t852*var4[9] + 5.*t1218*t876*var4[9] - 60.*t687*t843*t877*var4[9] + 60.*t652*t720*t784*var4[17] - 150.*t757*t769*t852*var4[17] + 40.*t687*t843*t877*var4[17] + 20.*t1621*t1671*var4[25] - 140.*t652*t720*t784*var4[25] + 90.*t757*t769*t852*var4[25] - 45.*t1621*t1671*var4[33] + 80.*t652*t720*t784*var4[33] + 25.*t1621*t1671*var4[41];
  p_output1[24]=-20.*t552*t876*t877*var4[2] - 60.*t552*t687*t843*t852*var4[10] + 40.*t552*t876*t877*var4[10] - 60.*t552*t757*t769*t784*var4[18] + 120.*t552*t687*t843*t852*var4[18] - 20.*t552*t876*t877*var4[18] - 20.*t552*t652*t720*var4[26] + 120.*t552*t757*t769*t784*var4[26] - 60.*t552*t687*t843*t852*var4[26] + 40.*t552*t652*t720*var4[34] - 60.*t552*t757*t769*t784*var4[34] - 20.*t552*t652*t720*var4[42];
  p_output1[25]=-20.*t38*t383*t876*t877*var4[2] - 60.*t38*t383*t687*t843*t852*var4[10] + 40.*t38*t383*t876*t877*var4[10] - 60.*t38*t383*t757*t769*t784*var4[18] + 120.*t38*t383*t687*t843*t852*var4[18] - 20.*t38*t383*t876*t877*var4[18] - 20.*t38*t383*t652*t720*var4[26] + 120.*t38*t383*t757*t769*t784*var4[26] - 60.*t38*t383*t687*t843*t852*var4[26] + 40.*t38*t383*t652*t720*var4[34] - 60.*t38*t383*t757*t769*t784*var4[34] - 20.*t38*t383*t652*t720*var4[42];
  p_output1[26]=0.5;
  p_output1[27]=0.5;
  p_output1[28]=t1230;
  p_output1[29]=t1275;
  p_output1[30]=t1579;
  p_output1[31]=t1584;
  p_output1[32]=t1647;
  p_output1[33]=t1657;
  p_output1[34]=5.*t1218*t876*var4[2] + 20.*t1735*t778*t877*var4[2] - 5.*t1218*t876*var4[10] + 60.*t1735*t687*t852*t876*var4[10] - 20.*t1735*t778*t877*var4[10] + 40.*t687*t843*t877*var4[10] - 20.*t876*t877*var4[10] + 60.*t1735*t769*t784*t843*var4[18] + 90.*t757*t769*t852*var4[18] - 60.*t687*t843*t852*var4[18] - 60.*t1735*t687*t852*t876*var4[18] - 40.*t687*t843*t877*var4[18] + 20.*t876*t877*var4[18] + 20.*t1735*t720*t757*var4[26] + 80.*t652*t720*t784*var4[26] - 60.*t757*t769*t784*var4[26] - 60.*t1735*t769*t784*t843*var4[26] - 90.*t757*t769*t852*var4[26] + 60.*t687*t843*t852*var4[26] + 25.*t1621*t1671*var4[34] - 20.*t652*t720*var4[34] - 20.*t1735*t720*t757*var4[34] - 80.*t652*t720*t784*var4[34] + 60.*t757*t769*t784*var4[34] - 25.*t1621*t1671*var4[42] + 20.*t652*t720*var4[42];
  p_output1[35]=-5.*t1218*t876*var4[2] + 20.*t687*t843*t877*var4[2] + 60.*t757*t769*t852*var4[10] + 5.*t1218*t876*var4[10] - 60.*t687*t843*t877*var4[10] + 60.*t652*t720*t784*var4[18] - 150.*t757*t769*t852*var4[18] + 40.*t687*t843*t877*var4[18] + 20.*t1621*t1671*var4[26] - 140.*t652*t720*t784*var4[26] + 90.*t757*t769*t852*var4[26] - 45.*t1621*t1671*var4[34] + 80.*t652*t720*t784*var4[34] + 25.*t1621*t1671*var4[42];
  p_output1[36]=-20.*t552*t876*t877*var4[3] - 60.*t552*t687*t843*t852*var4[11] + 40.*t552*t876*t877*var4[11] - 60.*t552*t757*t769*t784*var4[19] + 120.*t552*t687*t843*t852*var4[19] - 20.*t552*t876*t877*var4[19] - 20.*t552*t652*t720*var4[27] + 120.*t552*t757*t769*t784*var4[27] - 60.*t552*t687*t843*t852*var4[27] + 40.*t552*t652*t720*var4[35] - 60.*t552*t757*t769*t784*var4[35] - 20.*t552*t652*t720*var4[43];
  p_output1[37]=-20.*t38*t383*t876*t877*var4[3] - 60.*t38*t383*t687*t843*t852*var4[11] + 40.*t38*t383*t876*t877*var4[11] - 60.*t38*t383*t757*t769*t784*var4[19] + 120.*t38*t383*t687*t843*t852*var4[19] - 20.*t38*t383*t876*t877*var4[19] - 20.*t38*t383*t652*t720*var4[27] + 120.*t38*t383*t757*t769*t784*var4[27] - 60.*t38*t383*t687*t843*t852*var4[27] + 40.*t38*t383*t652*t720*var4[35] - 60.*t38*t383*t757*t769*t784*var4[35] - 20.*t38*t383*t652*t720*var4[43];
  p_output1[38]=-1.;
  p_output1[39]=1.;
  p_output1[40]=t1230;
  p_output1[41]=t1275;
  p_output1[42]=t1579;
  p_output1[43]=t1584;
  p_output1[44]=t1647;
  p_output1[45]=t1657;
  p_output1[46]=5.*t1218*t876*var4[3] + 20.*t1735*t778*t877*var4[3] - 5.*t1218*t876*var4[11] + 60.*t1735*t687*t852*t876*var4[11] - 20.*t1735*t778*t877*var4[11] + 40.*t687*t843*t877*var4[11] - 20.*t876*t877*var4[11] + 60.*t1735*t769*t784*t843*var4[19] + 90.*t757*t769*t852*var4[19] - 60.*t687*t843*t852*var4[19] - 60.*t1735*t687*t852*t876*var4[19] - 40.*t687*t843*t877*var4[19] + 20.*t876*t877*var4[19] + 20.*t1735*t720*t757*var4[27] + 80.*t652*t720*t784*var4[27] - 60.*t757*t769*t784*var4[27] - 60.*t1735*t769*t784*t843*var4[27] - 90.*t757*t769*t852*var4[27] + 60.*t687*t843*t852*var4[27] + 25.*t1621*t1671*var4[35] - 20.*t652*t720*var4[35] - 20.*t1735*t720*t757*var4[35] - 80.*t652*t720*t784*var4[35] + 60.*t757*t769*t784*var4[35] - 25.*t1621*t1671*var4[43] + 20.*t652*t720*var4[43];
  p_output1[47]=-5.*t1218*t876*var4[3] + 20.*t687*t843*t877*var4[3] + 60.*t757*t769*t852*var4[11] + 5.*t1218*t876*var4[11] - 60.*t687*t843*t877*var4[11] + 60.*t652*t720*t784*var4[19] - 150.*t757*t769*t852*var4[19] + 40.*t687*t843*t877*var4[19] + 20.*t1621*t1671*var4[27] - 140.*t652*t720*t784*var4[27] + 90.*t757*t769*t852*var4[27] - 45.*t1621*t1671*var4[35] + 80.*t652*t720*t784*var4[35] + 25.*t1621*t1671*var4[43];
  p_output1[48]=-20.*t552*t876*t877*var4[4] - 60.*t552*t687*t843*t852*var4[12] + 40.*t552*t876*t877*var4[12] - 60.*t552*t757*t769*t784*var4[20] + 120.*t552*t687*t843*t852*var4[20] - 20.*t552*t876*t877*var4[20] - 20.*t552*t652*t720*var4[28] + 120.*t552*t757*t769*t784*var4[28] - 60.*t552*t687*t843*t852*var4[28] + 40.*t552*t652*t720*var4[36] - 60.*t552*t757*t769*t784*var4[36] - 20.*t552*t652*t720*var4[44];
  p_output1[49]=-20.*t38*t383*t876*t877*var4[4] - 60.*t38*t383*t687*t843*t852*var4[12] + 40.*t38*t383*t876*t877*var4[12] - 60.*t38*t383*t757*t769*t784*var4[20] + 120.*t38*t383*t687*t843*t852*var4[20] - 20.*t38*t383*t876*t877*var4[20] - 20.*t38*t383*t652*t720*var4[28] + 120.*t38*t383*t757*t769*t784*var4[28] - 60.*t38*t383*t687*t843*t852*var4[28] + 40.*t38*t383*t652*t720*var4[36] - 60.*t38*t383*t757*t769*t784*var4[36] - 20.*t38*t383*t652*t720*var4[44];
  p_output1[50]=0.5;
  p_output1[51]=0.5;
  p_output1[52]=t1230;
  p_output1[53]=t1275;
  p_output1[54]=t1579;
  p_output1[55]=t1584;
  p_output1[56]=t1647;
  p_output1[57]=t1657;
  p_output1[58]=5.*t1218*t876*var4[4] + 20.*t1735*t778*t877*var4[4] - 5.*t1218*t876*var4[12] + 60.*t1735*t687*t852*t876*var4[12] - 20.*t1735*t778*t877*var4[12] + 40.*t687*t843*t877*var4[12] - 20.*t876*t877*var4[12] + 60.*t1735*t769*t784*t843*var4[20] + 90.*t757*t769*t852*var4[20] - 60.*t687*t843*t852*var4[20] - 60.*t1735*t687*t852*t876*var4[20] - 40.*t687*t843*t877*var4[20] + 20.*t876*t877*var4[20] + 20.*t1735*t720*t757*var4[28] + 80.*t652*t720*t784*var4[28] - 60.*t757*t769*t784*var4[28] - 60.*t1735*t769*t784*t843*var4[28] - 90.*t757*t769*t852*var4[28] + 60.*t687*t843*t852*var4[28] + 25.*t1621*t1671*var4[36] - 20.*t652*t720*var4[36] - 20.*t1735*t720*t757*var4[36] - 80.*t652*t720*t784*var4[36] + 60.*t757*t769*t784*var4[36] - 25.*t1621*t1671*var4[44] + 20.*t652*t720*var4[44];
  p_output1[59]=-5.*t1218*t876*var4[4] + 20.*t687*t843*t877*var4[4] + 60.*t757*t769*t852*var4[12] + 5.*t1218*t876*var4[12] - 60.*t687*t843*t877*var4[12] + 60.*t652*t720*t784*var4[20] - 150.*t757*t769*t852*var4[20] + 40.*t687*t843*t877*var4[20] + 20.*t1621*t1671*var4[28] - 140.*t652*t720*t784*var4[28] + 90.*t757*t769*t852*var4[28] - 45.*t1621*t1671*var4[36] + 80.*t652*t720*t784*var4[36] + 25.*t1621*t1671*var4[44];
  p_output1[60]=-20.*t552*t876*t877*var4[5] - 60.*t552*t687*t843*t852*var4[13] + 40.*t552*t876*t877*var4[13] - 60.*t552*t757*t769*t784*var4[21] + 120.*t552*t687*t843*t852*var4[21] - 20.*t552*t876*t877*var4[21] - 20.*t552*t652*t720*var4[29] + 120.*t552*t757*t769*t784*var4[29] - 60.*t552*t687*t843*t852*var4[29] + 40.*t552*t652*t720*var4[37] - 60.*t552*t757*t769*t784*var4[37] - 20.*t552*t652*t720*var4[45];
  p_output1[61]=-20.*t38*t383*t876*t877*var4[5] - 60.*t38*t383*t687*t843*t852*var4[13] + 40.*t38*t383*t876*t877*var4[13] - 60.*t38*t383*t757*t769*t784*var4[21] + 120.*t38*t383*t687*t843*t852*var4[21] - 20.*t38*t383*t876*t877*var4[21] - 20.*t38*t383*t652*t720*var4[29] + 120.*t38*t383*t757*t769*t784*var4[29] - 60.*t38*t383*t687*t843*t852*var4[29] + 40.*t38*t383*t652*t720*var4[37] - 60.*t38*t383*t757*t769*t784*var4[37] - 20.*t38*t383*t652*t720*var4[45];
  p_output1[62]=-1.;
  p_output1[63]=1.;
  p_output1[64]=t1230;
  p_output1[65]=t1275;
  p_output1[66]=t1579;
  p_output1[67]=t1584;
  p_output1[68]=t1647;
  p_output1[69]=t1657;
  p_output1[70]=5.*t1218*t876*var4[5] + 20.*t1735*t778*t877*var4[5] - 5.*t1218*t876*var4[13] + 60.*t1735*t687*t852*t876*var4[13] - 20.*t1735*t778*t877*var4[13] + 40.*t687*t843*t877*var4[13] - 20.*t876*t877*var4[13] + 60.*t1735*t769*t784*t843*var4[21] + 90.*t757*t769*t852*var4[21] - 60.*t687*t843*t852*var4[21] - 60.*t1735*t687*t852*t876*var4[21] - 40.*t687*t843*t877*var4[21] + 20.*t876*t877*var4[21] + 20.*t1735*t720*t757*var4[29] + 80.*t652*t720*t784*var4[29] - 60.*t757*t769*t784*var4[29] - 60.*t1735*t769*t784*t843*var4[29] - 90.*t757*t769*t852*var4[29] + 60.*t687*t843*t852*var4[29] + 25.*t1621*t1671*var4[37] - 20.*t652*t720*var4[37] - 20.*t1735*t720*t757*var4[37] - 80.*t652*t720*t784*var4[37] + 60.*t757*t769*t784*var4[37] - 25.*t1621*t1671*var4[45] + 20.*t652*t720*var4[45];
  p_output1[71]=-5.*t1218*t876*var4[5] + 20.*t687*t843*t877*var4[5] + 60.*t757*t769*t852*var4[13] + 5.*t1218*t876*var4[13] - 60.*t687*t843*t877*var4[13] + 60.*t652*t720*t784*var4[21] - 150.*t757*t769*t852*var4[21] + 40.*t687*t843*t877*var4[21] + 20.*t1621*t1671*var4[29] - 140.*t652*t720*t784*var4[29] + 90.*t757*t769*t852*var4[29] - 45.*t1621*t1671*var4[37] + 80.*t652*t720*t784*var4[37] + 25.*t1621*t1671*var4[45];
  p_output1[72]=-20.*t552*t876*t877*var4[6] - 60.*t552*t687*t843*t852*var4[14] + 40.*t552*t876*t877*var4[14] - 60.*t552*t757*t769*t784*var4[22] + 120.*t552*t687*t843*t852*var4[22] - 20.*t552*t876*t877*var4[22] - 20.*t552*t652*t720*var4[30] + 120.*t552*t757*t769*t784*var4[30] - 60.*t552*t687*t843*t852*var4[30] + 40.*t552*t652*t720*var4[38] - 60.*t552*t757*t769*t784*var4[38] - 20.*t552*t652*t720*var4[46];
  p_output1[73]=-20.*t38*t383*t876*t877*var4[6] - 60.*t38*t383*t687*t843*t852*var4[14] + 40.*t38*t383*t876*t877*var4[14] - 60.*t38*t383*t757*t769*t784*var4[22] + 120.*t38*t383*t687*t843*t852*var4[22] - 20.*t38*t383*t876*t877*var4[22] - 20.*t38*t383*t652*t720*var4[30] + 120.*t38*t383*t757*t769*t784*var4[30] - 60.*t38*t383*t687*t843*t852*var4[30] + 40.*t38*t383*t652*t720*var4[38] - 60.*t38*t383*t757*t769*t784*var4[38] - 20.*t38*t383*t652*t720*var4[46];
  p_output1[74]=0.5;
  p_output1[75]=0.5;
  p_output1[76]=t1230;
  p_output1[77]=t1275;
  p_output1[78]=t1579;
  p_output1[79]=t1584;
  p_output1[80]=t1647;
  p_output1[81]=t1657;
  p_output1[82]=5.*t1218*t876*var4[6] + 20.*t1735*t778*t877*var4[6] - 5.*t1218*t876*var4[14] + 60.*t1735*t687*t852*t876*var4[14] - 20.*t1735*t778*t877*var4[14] + 40.*t687*t843*t877*var4[14] - 20.*t876*t877*var4[14] + 60.*t1735*t769*t784*t843*var4[22] + 90.*t757*t769*t852*var4[22] - 60.*t687*t843*t852*var4[22] - 60.*t1735*t687*t852*t876*var4[22] - 40.*t687*t843*t877*var4[22] + 20.*t876*t877*var4[22] + 20.*t1735*t720*t757*var4[30] + 80.*t652*t720*t784*var4[30] - 60.*t757*t769*t784*var4[30] - 60.*t1735*t769*t784*t843*var4[30] - 90.*t757*t769*t852*var4[30] + 60.*t687*t843*t852*var4[30] + 25.*t1621*t1671*var4[38] - 20.*t652*t720*var4[38] - 20.*t1735*t720*t757*var4[38] - 80.*t652*t720*t784*var4[38] + 60.*t757*t769*t784*var4[38] - 25.*t1621*t1671*var4[46] + 20.*t652*t720*var4[46];
  p_output1[83]=-5.*t1218*t876*var4[6] + 20.*t687*t843*t877*var4[6] + 60.*t757*t769*t852*var4[14] + 5.*t1218*t876*var4[14] - 60.*t687*t843*t877*var4[14] + 60.*t652*t720*t784*var4[22] - 150.*t757*t769*t852*var4[22] + 40.*t687*t843*t877*var4[22] + 20.*t1621*t1671*var4[30] - 140.*t652*t720*t784*var4[30] + 90.*t757*t769*t852*var4[30] - 45.*t1621*t1671*var4[38] + 80.*t652*t720*t784*var4[38] + 25.*t1621*t1671*var4[46];
  p_output1[84]=-20.*t552*t876*t877*var4[7] - 60.*t552*t687*t843*t852*var4[15] + 40.*t552*t876*t877*var4[15] - 60.*t552*t757*t769*t784*var4[23] + 120.*t552*t687*t843*t852*var4[23] - 20.*t552*t876*t877*var4[23] - 20.*t552*t652*t720*var4[31] + 120.*t552*t757*t769*t784*var4[31] - 60.*t552*t687*t843*t852*var4[31] + 40.*t552*t652*t720*var4[39] - 60.*t552*t757*t769*t784*var4[39] - 20.*t552*t652*t720*var4[47];
  p_output1[85]=-20.*t38*t383*t876*t877*var4[7] - 60.*t38*t383*t687*t843*t852*var4[15] + 40.*t38*t383*t876*t877*var4[15] - 60.*t38*t383*t757*t769*t784*var4[23] + 120.*t38*t383*t687*t843*t852*var4[23] - 20.*t38*t383*t876*t877*var4[23] - 20.*t38*t383*t652*t720*var4[31] + 120.*t38*t383*t757*t769*t784*var4[31] - 60.*t38*t383*t687*t843*t852*var4[31] + 40.*t38*t383*t652*t720*var4[39] - 60.*t38*t383*t757*t769*t784*var4[39] - 20.*t38*t383*t652*t720*var4[47];
  p_output1[86]=-1.;
  p_output1[87]=1.;
  p_output1[88]=t1230;
  p_output1[89]=t1275;
  p_output1[90]=t1579;
  p_output1[91]=t1584;
  p_output1[92]=t1647;
  p_output1[93]=t1657;
  p_output1[94]=5.*t1218*t876*var4[7] + 20.*t1735*t778*t877*var4[7] - 5.*t1218*t876*var4[15] + 60.*t1735*t687*t852*t876*var4[15] - 20.*t1735*t778*t877*var4[15] + 40.*t687*t843*t877*var4[15] - 20.*t876*t877*var4[15] + 60.*t1735*t769*t784*t843*var4[23] + 90.*t757*t769*t852*var4[23] - 60.*t687*t843*t852*var4[23] - 60.*t1735*t687*t852*t876*var4[23] - 40.*t687*t843*t877*var4[23] + 20.*t876*t877*var4[23] + 20.*t1735*t720*t757*var4[31] + 80.*t652*t720*t784*var4[31] - 60.*t757*t769*t784*var4[31] - 60.*t1735*t769*t784*t843*var4[31] - 90.*t757*t769*t852*var4[31] + 60.*t687*t843*t852*var4[31] + 25.*t1621*t1671*var4[39] - 20.*t652*t720*var4[39] - 20.*t1735*t720*t757*var4[39] - 80.*t652*t720*t784*var4[39] + 60.*t757*t769*t784*var4[39] - 25.*t1621*t1671*var4[47] + 20.*t652*t720*var4[47];
  p_output1[95]=-5.*t1218*t876*var4[7] + 20.*t687*t843*t877*var4[7] + 60.*t757*t769*t852*var4[15] + 5.*t1218*t876*var4[15] - 60.*t687*t843*t877*var4[15] + 60.*t652*t720*t784*var4[23] - 150.*t757*t769*t852*var4[23] + 40.*t687*t843*t877*var4[23] + 20.*t1621*t1671*var4[31] - 140.*t652*t720*t784*var4[31] + 90.*t757*t769*t852*var4[31] - 45.*t1621*t1671*var4[39] + 80.*t652*t720*t784*var4[39] + 25.*t1621*t1671*var4[47];
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

  double *var1,*var2,*var3,*var4,*var5,*var6,*var7;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 7)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Seven input(s) required (var1,var2,var3,var4,var5,var6,var7).");
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
    ( !(mrows == 48 && ncols == 1) && 
      !(mrows == 1 && ncols == 48))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var4 is wrong.");
    }
  mrows = mxGetM(prhs[4]);
  ncols = mxGetN(prhs[4]);
  if( !mxIsDouble(prhs[4]) || mxIsComplex(prhs[4]) ||
    ( !(mrows == 2 && ncols == 1) && 
      !(mrows == 1 && ncols == 2))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var5 is wrong.");
    }
  mrows = mxGetM(prhs[5]);
  ncols = mxGetN(prhs[5]);
  if( !mxIsDouble(prhs[5]) || mxIsComplex(prhs[5]) ||
    ( !(mrows == 1 && ncols == 1) && 
      !(mrows == 1 && ncols == 1))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var6 is wrong.");
    }
  mrows = mxGetM(prhs[6]);
  ncols = mxGetN(prhs[6]);
  if( !mxIsDouble(prhs[6]) || mxIsComplex(prhs[6]) ||
    ( !(mrows == 1 && ncols == 1) && 
      !(mrows == 1 && ncols == 1))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var7 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
  var3 = mxGetPr(prhs[2]);
  var4 = mxGetPr(prhs[3]);
  var5 = mxGetPr(prhs[4]);
  var6 = mxGetPr(prhs[5]);
  var7 = mxGetPr(prhs[6]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 96, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3,var4,var5,var6,var7);


}

#else // MATLAB_MEX_FILE

#include "J_d1y_output_BackStance.hh"

namespace BackStance
{

void J_d1y_output_BackStance_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4,const double *var5,const double *var6,const double *var7)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4, var5, var6, var7);

}

}

#endif // MATLAB_MEX_FILE
