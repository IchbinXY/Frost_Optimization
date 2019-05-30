/*
 * Automatically Generated from Mathematica.
 * Wed 29 May 2019 23:44:41 GMT-04:00
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
static void output1(double *p_output1,const double *var1,const double *var2,const double *var3,const double *var4)
{
  double t15719;
  double t16342;
  double t16354;
  double t17711;
  double t17819;
  double t17833;
  double t17837;
  double t17855;
  double t17857;
  double t18613;
  double t19509;
  double t19524;
  double t19572;
  double t19608;
  double t19614;
  double t19623;
  double t19624;
  double t19630;
  double t16918;
  double t17797;
  double t17804;
  double t17818;
  double t17906;
  double t17914;
  double t19527;
  double t19589;
  double t19593;
  double t19594;
  double t19642;
  double t19648;
  double t16071;
  double t19508;
  double t19732;
  double t19788;
  double t17230;
  double t17690;
  double t17692;
  double t17707;
  double t20233;
  double t19544;
  double t19546;
  double t19566;
  double t19567;
  double t20496;
  double t19838;
  double t20281;
  double t20296;
  double t20302;
  double t20373;
  double t20541;
  double t20544;
  double t20580;
  double t20651;
  double t20845;
  double t20915;
  double t20953;
  double t20958;
  double t21045;
  double t21202;
  double t21203;
  double t21206;
  double t21208;
  double t21245;
  double t21321;
  double t21341;
  double t21397;
  double t21562;
  double t21694;
  double t21798;
  double t21807;
  double t21808;
  double t21811;
  double t20972;
  double t21114;
  double t21141;
  double t21155;
  double t21287;
  double t21293;
  double t21401;
  double t21632;
  double t21670;
  double t21671;
  double t21905;
  double t21915;
  double t20929;
  double t21329;
  double t22161;
  double t22242;
  double t21014;
  double t21021;
  double t21037;
  double t21044;
  double t22585;
  double t21416;
  double t21469;
  double t21476;
  double t21507;
  double t22647;
  double t22442;
  double t22597;
  double t22610;
  double t22614;
  double t22635;
  double t22739;
  double t22742;
  double t22747;
  double t23074;
  double t23101;
  double t23326;
  double t23431;
  double t23479;
  double t23519;
  double t23758;
  double t24012;
  double t24029;
  double t24142;
  double t24209;
  double t24354;
  double t24371;
  double t24439;
  double t24568;
  double t24746;
  double t24763;
  double t24779;
  double t24798;
  double t24921;
  double t23488;
  double t23616;
  double t23633;
  double t23712;
  double t24256;
  double t24263;
  double t24492;
  double t24583;
  double t24678;
  double t24696;
  double t25007;
  double t25021;
  double t23416;
  double t24370;
  double t25363;
  double t25470;
  double t23489;
  double t23492;
  double t23507;
  double t23513;
  double t26762;
  double t24501;
  double t24539;
  double t24551;
  double t24557;
  double t27411;
  double t26008;
  double t27022;
  double t27024;
  double t27025;
  double t27297;
  double t27457;
  double t27581;
  double t27625;
  double t28189;
  double t28293;
  double t28435;
  double t28464;
  double t28466;
  double t28508;
  double t28531;
  double t28534;
  double t28549;
  double t28553;
  double t28561;
  double t28582;
  double t28593;
  double t28598;
  double t28625;
  double t28709;
  double t28717;
  double t28719;
  double t28723;
  double t28726;
  double t28495;
  double t28520;
  double t28524;
  double t28528;
  double t28574;
  double t28576;
  double t28603;
  double t28657;
  double t28681;
  double t28686;
  double t28873;
  double t28894;
  double t28460;
  double t28586;
  double t28980;
  double t29007;
  double t28496;
  double t28498;
  double t28502;
  double t28506;
  double t29090;
  double t28604;
  double t28606;
  double t28607;
  double t28624;
  double t29146;
  double t29040;
  double t29097;
  double t29101;
  double t29102;
  double t29126;
  double t29150;
  double t29153;
  double t29155;
  double t29227;
  double t29276;
  t15719 = Cos(var1[14]);
  t16342 = var1[14] + var1[16];
  t16354 = Cos(t16342);
  t17711 = -0.1*var2[16]*t16354;
  t17819 = Sin(var1[14]);
  t17833 = -0.05*t17819;
  t17837 = Sin(t16342);
  t17855 = -0.1*t17837;
  t17857 = t17833 + t17855;
  t18613 = Cos(var1[15]);
  t19509 = var1[15] + var1[17];
  t19524 = Cos(t19509);
  t19572 = 0.1*var2[17]*t19524;
  t19608 = Sin(var1[15]);
  t19614 = 0.05*t19608;
  t19623 = Sin(t19509);
  t19624 = 0.1*t19623;
  t19630 = t19614 + t19624;
  t16918 = 0.1*t16354;
  t17797 = -0.1*var2[14]*t16354;
  t17804 = t17797 + t17711;
  t17818 = var2[16]*t17804;
  t17906 = -0.1*var3[16]*t17837;
  t17914 = -0.1*var2[16]*t17837;
  t19527 = -0.1*t19524;
  t19589 = 0.1*var2[15]*t19524;
  t19593 = t19589 + t19572;
  t19594 = var2[17]*t19593;
  t19642 = 0.1*var3[17]*t19623;
  t19648 = 0.1*var2[17]*t19623;
  t16071 = 0.05*t15719;
  t19508 = -0.05*t18613;
  t19732 = -0.2*var2[16]*t17837;
  t19788 = 0.2*var2[17]*t19623;
  t17230 = -0.05*t15719;
  t17690 = -0.1*t16354;
  t17692 = t17230 + t17690;
  t17707 = var2[14]*t17692;
  t20233 = 0.1*var2[16]*t17837;
  t19544 = 0.05*t18613;
  t19546 = 0.1*t19524;
  t19566 = t19544 + t19546;
  t19567 = var2[15]*t19566;
  t20496 = -0.1*var2[17]*t19623;
  t19838 = -0.1*var3[16]*t16354;
  t20281 = 0.1*var2[14]*t17837;
  t20296 = t20281 + t20233;
  t20302 = var2[16]*t20296;
  t20373 = 0.1*var3[17]*t19524;
  t20541 = -0.1*var2[15]*t19623;
  t20544 = t20541 + t20496;
  t20580 = var2[17]*t20544;
  t20651 = -0.2*var2[16]*t16354;
  t20845 = 0.2*var2[17]*t19524;
  t20915 = Cos(var1[6]);
  t20953 = var1[6] + var1[8];
  t20958 = Cos(t20953);
  t21045 = -0.1*var2[8]*t20958;
  t21202 = Sin(var1[6]);
  t21203 = -0.05*t21202;
  t21206 = Sin(t20953);
  t21208 = -0.1*t21206;
  t21245 = t21203 + t21208;
  t21321 = Cos(var1[7]);
  t21341 = var1[9] + var1[7];
  t21397 = Cos(t21341);
  t21562 = 0.1*var2[9]*t21397;
  t21694 = Sin(var1[7]);
  t21798 = 0.05*t21694;
  t21807 = Sin(t21341);
  t21808 = 0.1*t21807;
  t21811 = t21798 + t21808;
  t20972 = 0.1*t20958;
  t21114 = -0.1*var2[6]*t20958;
  t21141 = t21114 + t21045;
  t21155 = var2[8]*t21141;
  t21287 = -0.1*var3[8]*t21206;
  t21293 = -0.1*var2[8]*t21206;
  t21401 = -0.1*t21397;
  t21632 = 0.1*var2[7]*t21397;
  t21670 = t21562 + t21632;
  t21671 = var2[9]*t21670;
  t21905 = 0.1*var3[9]*t21807;
  t21915 = 0.1*var2[9]*t21807;
  t20929 = 0.05*t20915;
  t21329 = -0.05*t21321;
  t22161 = -0.2*var2[8]*t21206;
  t22242 = 0.2*var2[9]*t21807;
  t21014 = -0.05*t20915;
  t21021 = -0.1*t20958;
  t21037 = t21014 + t21021;
  t21044 = var2[6]*t21037;
  t22585 = 0.1*var2[8]*t21206;
  t21416 = 0.05*t21321;
  t21469 = 0.1*t21397;
  t21476 = t21416 + t21469;
  t21507 = var2[7]*t21476;
  t22647 = -0.1*var2[9]*t21807;
  t22442 = -0.1*var3[8]*t20958;
  t22597 = 0.1*var2[6]*t21206;
  t22610 = t22597 + t22585;
  t22614 = var2[8]*t22610;
  t22635 = 0.1*var3[9]*t21397;
  t22739 = -0.1*var2[7]*t21807;
  t22742 = t22647 + t22739;
  t22747 = var2[9]*t22742;
  t23074 = -0.2*var2[8]*t20958;
  t23101 = 0.2*var2[9]*t21397;
  t23326 = Cos(var1[18]);
  t23431 = var1[18] + var1[20];
  t23479 = Cos(t23431);
  t23519 = -0.1*var2[20]*t23479;
  t23758 = Sin(var1[18]);
  t24012 = -0.05*t23758;
  t24029 = Sin(t23431);
  t24142 = -0.1*t24029;
  t24209 = t24012 + t24142;
  t24354 = Cos(var1[19]);
  t24371 = var1[19] + var1[21];
  t24439 = Cos(t24371);
  t24568 = 0.1*var2[21]*t24439;
  t24746 = Sin(var1[19]);
  t24763 = 0.05*t24746;
  t24779 = Sin(t24371);
  t24798 = 0.1*t24779;
  t24921 = t24763 + t24798;
  t23488 = 0.1*t23479;
  t23616 = -0.1*var2[18]*t23479;
  t23633 = t23616 + t23519;
  t23712 = var2[20]*t23633;
  t24256 = -0.1*var3[20]*t24029;
  t24263 = -0.1*var2[20]*t24029;
  t24492 = -0.1*t24439;
  t24583 = 0.1*var2[19]*t24439;
  t24678 = t24583 + t24568;
  t24696 = var2[21]*t24678;
  t25007 = 0.1*var3[21]*t24779;
  t25021 = 0.1*var2[21]*t24779;
  t23416 = 0.05*t23326;
  t24370 = -0.05*t24354;
  t25363 = -0.2*var2[20]*t24029;
  t25470 = 0.2*var2[21]*t24779;
  t23489 = -0.05*t23326;
  t23492 = -0.1*t23479;
  t23507 = t23489 + t23492;
  t23513 = var2[18]*t23507;
  t26762 = 0.1*var2[20]*t24029;
  t24501 = 0.05*t24354;
  t24539 = 0.1*t24439;
  t24551 = t24501 + t24539;
  t24557 = var2[19]*t24551;
  t27411 = -0.1*var2[21]*t24779;
  t26008 = -0.1*var3[20]*t23479;
  t27022 = 0.1*var2[18]*t24029;
  t27024 = t27022 + t26762;
  t27025 = var2[20]*t27024;
  t27297 = 0.1*var3[21]*t24439;
  t27457 = -0.1*var2[19]*t24779;
  t27581 = t27457 + t27411;
  t27625 = var2[21]*t27581;
  t28189 = -0.2*var2[20]*t23479;
  t28293 = 0.2*var2[21]*t24439;
  t28435 = Cos(var1[10]);
  t28464 = var1[10] + var1[12];
  t28466 = Cos(t28464);
  t28508 = -0.1*var2[12]*t28466;
  t28531 = Sin(var1[10]);
  t28534 = -0.05*t28531;
  t28549 = Sin(t28464);
  t28553 = -0.1*t28549;
  t28561 = t28534 + t28553;
  t28582 = Cos(var1[11]);
  t28593 = var1[11] + var1[13];
  t28598 = Cos(t28593);
  t28625 = 0.1*var2[13]*t28598;
  t28709 = Sin(var1[11]);
  t28717 = 0.05*t28709;
  t28719 = Sin(t28593);
  t28723 = 0.1*t28719;
  t28726 = t28717 + t28723;
  t28495 = 0.1*t28466;
  t28520 = -0.1*var2[10]*t28466;
  t28524 = t28520 + t28508;
  t28528 = var2[12]*t28524;
  t28574 = -0.1*var3[12]*t28549;
  t28576 = -0.1*var2[12]*t28549;
  t28603 = -0.1*t28598;
  t28657 = 0.1*var2[11]*t28598;
  t28681 = t28657 + t28625;
  t28686 = var2[13]*t28681;
  t28873 = 0.1*var3[13]*t28719;
  t28894 = 0.1*var2[13]*t28719;
  t28460 = 0.05*t28435;
  t28586 = -0.05*t28582;
  t28980 = -0.2*var2[12]*t28549;
  t29007 = 0.2*var2[13]*t28719;
  t28496 = -0.05*t28435;
  t28498 = -0.1*t28466;
  t28502 = t28496 + t28498;
  t28506 = var2[10]*t28502;
  t29090 = 0.1*var2[12]*t28549;
  t28604 = 0.05*t28582;
  t28606 = 0.1*t28598;
  t28607 = t28604 + t28606;
  t28624 = var2[11]*t28607;
  t29146 = -0.1*var2[13]*t28719;
  t29040 = -0.1*var3[12]*t28466;
  t29097 = 0.1*var2[10]*t28549;
  t29101 = t29097 + t29090;
  t29102 = var2[12]*t29101;
  t29126 = 0.1*var3[13]*t28598;
  t29150 = -0.1*var2[11]*t28719;
  t29153 = t29150 + t29146;
  t29155 = var2[13]*t29153;
  t29227 = -0.2*var2[12]*t28466;
  t29276 = 0.2*var2[13]*t28598;
  p_output1[0]=t16071 + t16918 + t17818 + t17906 + t17914 + (t17707 + t17711)*var2[14] + t17857*var2[14] + t17857*var3[14];
  p_output1[1]=t19508 + t19527 + t19594 + t19642 + t19648 + (t19567 + t19572)*var2[15] + t19630*var2[15] + t19630*var3[15];
  p_output1[2]=t16918 + t17818 + t17906 + t17914 + t17804*var2[14] - 0.1*t17837*var2[14] - 0.1*t17837*var3[14];
  p_output1[3]=t19527 + t19594 + t19642 + t19648 + t19593*var2[15] + 0.1*t19623*var2[15] + 0.1*t19623*var3[15];
  p_output1[4]=t16071 + t16918 + t19732 + 2.*t17857*var2[14];
  p_output1[5]=t19508 + t19527 + t19788 + 2.*t19630*var2[15];
  p_output1[6]=t16918 + t19732 - 0.2*t17837*var2[14];
  p_output1[7]=t19527 + t19788 + 0.2*t19623*var2[15];
  p_output1[8]=t16071 + t16918;
  p_output1[9]=t19508 + t19527;
  p_output1[10]=t16918;
  p_output1[11]=t19527;
  p_output1[12]=-1.;
  p_output1[13]=t17707 + t17711 + t17833 + t17855 + t19838 + t20302 + var2[14]*(t20233 + (0.05*t17819 + 0.1*t17837)*var2[14]) + t17692*var3[14];
  p_output1[14]=t19567 + t19572 + t19614 + t19624 + t20373 + t20580 + var2[15]*(t20496 + (-0.05*t19608 - 0.1*t19623)*var2[15]) + t19566*var3[15];
  p_output1[15]=t17711 + t17797 + t17855 + t19838 + t20302 + t20296*var2[14] - 0.1*t16354*var3[14];
  p_output1[16]=t19572 + t19589 + t19624 + t20373 + t20580 + t20544*var2[15] + 0.1*t19524*var3[15];
  p_output1[17]=t17833 + t17855 + t20651 + 2.*t17692*var2[14];
  p_output1[18]=t19614 + t19624 + t20845 + 2.*t19566*var2[15];
  p_output1[19]=t17855 + t20651 - 0.2*t16354*var2[14];
  p_output1[20]=t19624 + t20845 + 0.2*t19524*var2[15];
  p_output1[21]=t17857;
  p_output1[22]=t19630;
  p_output1[23]=t17855;
  p_output1[24]=t19624;
  p_output1[25]=-1.;
  p_output1[26]=t20929 + t20972 + t21155 + t21287 + t21293 + (t21044 + t21045)*var2[6] + t21245*var2[6] + t21245*var3[6];
  p_output1[27]=t21329 + t21401 + t21671 + t21905 + t21915 + (t21507 + t21562)*var2[7] + t21811*var2[7] + t21811*var3[7];
  p_output1[28]=t20972 + t21155 + t21287 + t21293 + t21141*var2[6] - 0.1*t21206*var2[6] - 0.1*t21206*var3[6];
  p_output1[29]=t21401 + t21671 + t21905 + t21915 + t21670*var2[7] + 0.1*t21807*var2[7] + 0.1*t21807*var3[7];
  p_output1[30]=t20929 + t20972 + t22161 + 2.*t21245*var2[6];
  p_output1[31]=t21329 + t21401 + t22242 + 2.*t21811*var2[7];
  p_output1[32]=t20972 + t22161 - 0.2*t21206*var2[6];
  p_output1[33]=t21401 + t22242 + 0.2*t21807*var2[7];
  p_output1[34]=t20929 + t20972;
  p_output1[35]=t21329 + t21401;
  p_output1[36]=t20972;
  p_output1[37]=t21401;
  p_output1[38]=-1.;
  p_output1[39]=t21044 + t21045 + t21203 + t21208 + t22442 + t22614 + var2[6]*(t22585 + (0.05*t21202 + 0.1*t21206)*var2[6]) + t21037*var3[6];
  p_output1[40]=t21507 + t21562 + t21798 + t21808 + t22635 + t22747 + var2[7]*(t22647 + (-0.05*t21694 - 0.1*t21807)*var2[7]) + t21476*var3[7];
  p_output1[41]=t21045 + t21114 + t21208 + t22442 + t22614 + t22610*var2[6] - 0.1*t20958*var3[6];
  p_output1[42]=t21562 + t21632 + t21808 + t22635 + t22747 + t22742*var2[7] + 0.1*t21397*var3[7];
  p_output1[43]=t21203 + t21208 + t23074 + 2.*t21037*var2[6];
  p_output1[44]=t21798 + t21808 + t23101 + 2.*t21476*var2[7];
  p_output1[45]=t21208 + t23074 - 0.2*t20958*var2[6];
  p_output1[46]=t21808 + t23101 + 0.2*t21397*var2[7];
  p_output1[47]=t21245;
  p_output1[48]=t21811;
  p_output1[49]=t21208;
  p_output1[50]=t21808;
  p_output1[51]=-1.;
  p_output1[52]=t23416 + t23488 + t23712 + t24256 + t24263 + (t23513 + t23519)*var2[18] + t24209*var2[18] + t24209*var3[18];
  p_output1[53]=t24370 + t24492 + t24696 + t25007 + t25021 + (t24557 + t24568)*var2[19] + t24921*var2[19] + t24921*var3[19];
  p_output1[54]=t23488 + t23712 + t24256 + t24263 + t23633*var2[18] - 0.1*t24029*var2[18] - 0.1*t24029*var3[18];
  p_output1[55]=t24492 + t24696 + t25007 + t25021 + t24678*var2[19] + 0.1*t24779*var2[19] + 0.1*t24779*var3[19];
  p_output1[56]=t23416 + t23488 + t25363 + 2.*t24209*var2[18];
  p_output1[57]=t24370 + t24492 + t25470 + 2.*t24921*var2[19];
  p_output1[58]=t23488 + t25363 - 0.2*t24029*var2[18];
  p_output1[59]=t24492 + t25470 + 0.2*t24779*var2[19];
  p_output1[60]=t23416 + t23488;
  p_output1[61]=t24370 + t24492;
  p_output1[62]=t23488;
  p_output1[63]=t24492;
  p_output1[64]=-1.;
  p_output1[65]=t23513 + t23519 + t24012 + t24142 + t26008 + t27025 + var2[18]*(t26762 + (0.05*t23758 + 0.1*t24029)*var2[18]) + t23507*var3[18];
  p_output1[66]=t24557 + t24568 + t24763 + t24798 + t27297 + t27625 + var2[19]*(t27411 + (-0.05*t24746 - 0.1*t24779)*var2[19]) + t24551*var3[19];
  p_output1[67]=t23519 + t23616 + t24142 + t26008 + t27025 + t27024*var2[18] - 0.1*t23479*var3[18];
  p_output1[68]=t24568 + t24583 + t24798 + t27297 + t27625 + t27581*var2[19] + 0.1*t24439*var3[19];
  p_output1[69]=t24012 + t24142 + t28189 + 2.*t23507*var2[18];
  p_output1[70]=t24763 + t24798 + t28293 + 2.*t24551*var2[19];
  p_output1[71]=t24142 + t28189 - 0.2*t23479*var2[18];
  p_output1[72]=t24798 + t28293 + 0.2*t24439*var2[19];
  p_output1[73]=t24209;
  p_output1[74]=t24921;
  p_output1[75]=t24142;
  p_output1[76]=t24798;
  p_output1[77]=-1.;
  p_output1[78]=t28460 + t28495 + t28528 + t28574 + t28576 + (t28506 + t28508)*var2[10] + t28561*var2[10] + t28561*var3[10];
  p_output1[79]=t28586 + t28603 + t28686 + t28873 + t28894 + (t28624 + t28625)*var2[11] + t28726*var2[11] + t28726*var3[11];
  p_output1[80]=t28495 + t28528 + t28574 + t28576 + t28524*var2[10] - 0.1*t28549*var2[10] - 0.1*t28549*var3[10];
  p_output1[81]=t28603 + t28686 + t28873 + t28894 + t28681*var2[11] + 0.1*t28719*var2[11] + 0.1*t28719*var3[11];
  p_output1[82]=t28460 + t28495 + t28980 + 2.*t28561*var2[10];
  p_output1[83]=t28586 + t28603 + t29007 + 2.*t28726*var2[11];
  p_output1[84]=t28495 + t28980 - 0.2*t28549*var2[10];
  p_output1[85]=t28603 + t29007 + 0.2*t28719*var2[11];
  p_output1[86]=t28460 + t28495;
  p_output1[87]=t28586 + t28603;
  p_output1[88]=t28495;
  p_output1[89]=t28603;
  p_output1[90]=-1.;
  p_output1[91]=t28506 + t28508 + t28534 + t28553 + t29040 + t29102 + var2[10]*(t29090 + (0.05*t28531 + 0.1*t28549)*var2[10]) + t28502*var3[10];
  p_output1[92]=t28624 + t28625 + t28717 + t28723 + t29126 + t29155 + var2[11]*(t29146 + (-0.05*t28709 - 0.1*t28719)*var2[11]) + t28607*var3[11];
  p_output1[93]=t28508 + t28520 + t28553 + t29040 + t29102 + t29101*var2[10] - 0.1*t28466*var3[10];
  p_output1[94]=t28625 + t28657 + t28723 + t29126 + t29155 + t29153*var2[11] + 0.1*t28598*var3[11];
  p_output1[95]=t28534 + t28553 + t29227 + 2.*t28502*var2[10];
  p_output1[96]=t28717 + t28723 + t29276 + 2.*t28607*var2[11];
  p_output1[97]=t28553 + t29227 - 0.2*t28466*var2[10];
  p_output1[98]=t28723 + t29276 + 0.2*t28598*var2[11];
  p_output1[99]=t28561;
  p_output1[100]=t28726;
  p_output1[101]=t28553;
  p_output1[102]=t28723;
  p_output1[103]=-1.;
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

  double *var1,*var2,*var3,*var4;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 4)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Four input(s) required (var1,var2,var3,var4).");
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
    ( !(mrows == 8 && ncols == 1) && 
      !(mrows == 1 && ncols == 8))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var4 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
  var3 = mxGetPr(prhs[2]);
  var4 = mxGetPr(prhs[3]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 104, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3,var4);


}

#else // MATLAB_MEX_FILE

#include "J_ddh_fourBar_minitaur.hh"

namespace FrontStance
{

void J_ddh_fourBar_minitaur_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4);

}

}

#endif // MATLAB_MEX_FILE
