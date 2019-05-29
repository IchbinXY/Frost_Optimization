/*
 * Automatically Generated from Mathematica.
 * Wed 29 May 2019 15:13:00 GMT-04:00
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
  double t147;
  double t157;
  double t167;
  double t246;
  double t398;
  double t470;
  double t477;
  double t545;
  double t546;
  double t67;
  double t105;
  double t231;
  double t278;
  double t621;
  double t622;
  double t824;
  double t559;
  double t576;
  double t8208;
  double t717;
  double t755;
  double t760;
  double t767;
  double t772;
  double t773;
  double t11114;
  double t11558;
  double t11676;
  double t12114;
  double t12592;
  double t12718;
  double t12845;
  double t12980;
  double t12994;
  double t13394;
  double t13483;
  double t16139;
  double t16970;
  double t15637;
  double t10096;
  double t13636;
  double t17887;
  double t169;
  double t184;
  double t185;
  double t209;
  double t317;
  double t503;
  double t602;
  double t653;
  double t677;
  double t848;
  double t10341;
  double t10359;
  double t10479;
  double t10493;
  double t12157;
  double t12203;
  double t12237;
  double t12385;
  double t12518;
  double t27766;
  double t27790;
  double t27809;
  double t15877;
  double t28251;
  double t28252;
  double t28394;
  double t28528;
  double t28544;
  double t28645;
  double t19302;
  double t24540;
  double t25335;
  double t29982;
  double t30060;
  double t30061;
  double t30103;
  double t30105;
  double t30106;
  double t30179;
  double t30180;
  double t30205;
  double t30207;
  double t30211;
  double t30212;
  double t30619;
  double t30620;
  double t30561;
  double t30562;
  double t30650;
  double t30626;
  double t30627;
  double t30628;
  double t30636;
  double t30656;
  double t30657;
  double t30658;
  double t30667;
  double t30668;
  double t30671;
  double t30682;
  double t30674;
  double t30704;
  double t30708;
  double t30706;
  double t30709;
  double t30710;
  double t30712;
  double t30714;
  double t30715;
  double t30840;
  double t30904;
  double t30941;
  double t31013;
  double t32409;
  double t33655;
  double t33924;
  double t33927;
  double t33932;
  double t33933;
  double t33934;
  double t33935;
  double t35272;
  double t35277;
  double t35417;
  double t35463;
  double t35828;
  double t35877;
  double t35971;
  double t36078;
  double t36238;
  double t36347;
  double t36348;
  double t36349;
  double t36757;
  double t36758;
  double t36759;
  double t36796;
  double t36815;
  double t36890;
  double t36939;
  double t36967;
  double t36969;
  double t37062;
  double t37063;
  double t37065;
  double t37082;
  double t37117;
  double t37130;
  double t37218;
  double t37219;
  double t37230;
  double t37286;
  double t37506;
  double t37524;
  double t37678;
  double t37750;
  double t37810;
  double t37812;
  double t37846;
  double t37853;
  double t37854;
  double t37859;
  double t37863;
  double t30617;
  double t30621;
  double t30622;
  double t30624;
  double t30648;
  double t30651;
  double t30652;
  double t30653;
  double t30654;
  double t30661;
  double t30662;
  double t30663;
  double t30664;
  double t30665;
  double t38132;
  double t38139;
  double t38143;
  double t38144;
  double t38152;
  double t38153;
  double t38163;
  double t30676;
  double t38165;
  double t38166;
  double t30696;
  double t38393;
  double t38397;
  double t38400;
  double t38402;
  double t38406;
  double t38407;
  double t38520;
  double t38522;
  double t38558;
  double t38599;
  double t38600;
  double t38601;
  double t39149;
  double t39150;
  double t39192;
  double t39194;
  double t39196;
  double t39197;
  double t39374;
  double t39376;
  double t39381;
  double t39383;
  double t39384;
  double t39573;
  double t39575;
  double t39580;
  double t39584;
  double t39585;
  double t39586;
  double t39587;
  double t39589;
  double t39591;
  double t39592;
  double t39593;
  double t39595;
  double t39596;
  double t39597;
  double t39598;
  double t39696;
  double t39697;
  double t39698;
  double t39699;
  double t39701;
  double t39703;
  double t39706;
  double t39708;
  double t39709;
  t147 = Cos(var1[10]);
  t157 = -1.*t147;
  t167 = 1. + t157;
  t246 = Sin(var1[4]);
  t398 = Cos(var1[12]);
  t470 = -1.*t398;
  t477 = 1. + t470;
  t545 = -3.e-6*t477;
  t546 = Sin(var1[12]);
  t67 = Cos(var1[4]);
  t105 = Sin(var1[10]);
  t231 = Cos(var1[5]);
  t278 = Sin(var1[5]);
  t621 = 3.e-6*t546;
  t622 = t545 + t621;
  t824 = 3.e-13*var1[12];
  t559 = -3.e-6*t546;
  t576 = t545 + t559;
  t8208 = -9.e-12*t477;
  t717 = -3.e-6*t67*t105;
  t755 = -3.e-6*t167*t231*t246;
  t760 = -9.e-12*t167;
  t767 = 1. + t760;
  t772 = t767*t246*t278;
  t773 = t717 + t755 + t772;
  t11114 = t67*t105;
  t11558 = -1.*t147*t231*t246;
  t11676 = 3.e-6*t167*t246*t278;
  t12114 = t11114 + t11558 + t11676;
  t12592 = -1.000000000009*t167;
  t12718 = 1. + t12592;
  t12845 = t12718*t67;
  t12980 = t231*t105*t246;
  t12994 = 3.e-6*t105*t246*t278;
  t13394 = t12845 + t12980 + t12994;
  t13483 = 3.e-6*t477;
  t16139 = -1.000000000009*t477;
  t16970 = 1. + t16139;
  t15637 = 9.e-12*t477;
  t10096 = -1.*t546;
  t13636 = t13483 + t559;
  t17887 = t13483 + t621;
  t169 = -1.8e-12*t167;
  t184 = -1. + t147;
  t185 = 0.2*t184;
  t209 = t169 + t185;
  t317 = 1.e-7*var1[12];
  t503 = 5.4e-18*t477;
  t602 = -0.200000000003*t576;
  t653 = 0.100000000003*t622;
  t677 = t317 + t503 + t602 + t653;
  t848 = -0.2000000000048*t477;
  t10341 = t8208 + t10096;
  t10359 = 0.100000000003*t10341;
  t10479 = 3.e-7*t622;
  t10493 = t824 + t848 + t10359 + t10479;
  t12157 = 0.1000000000039*t477;
  t12203 = 3.e-7*t576;
  t12237 = t8208 + t546;
  t12385 = -0.200000000003*t12237;
  t12518 = t824 + t12157 + t12203 + t12385;
  t27766 = -1.*t767*t67*t231;
  t27790 = -3.e-6*t167*t67*t278;
  t27809 = t27766 + t27790;
  t15877 = t15637 + t546;
  t28251 = -3.e-6*t167*t67*t231;
  t28252 = -1.*t147*t67*t278;
  t28394 = t28251 + t28252;
  t28528 = -3.e-6*t67*t231*t105;
  t28544 = t67*t105*t278;
  t28645 = t28528 + t28544;
  t19302 = t15637 + t10096;
  t24540 = -1.8e-11*t477;
  t25335 = 1. + t24540;
  t29982 = -1.*t147*t67*t231;
  t30060 = -1.000000000009*t105*t246;
  t30061 = -3.e-6*t147*t67*t278;
  t30103 = t29982 + t30060 + t30061;
  t30105 = -1.*t67*t231*t105;
  t30106 = t147*t246;
  t30179 = -3.e-6*t67*t105*t278;
  t30180 = t30105 + t30106 + t30179;
  t30205 = 3.e-6*t67*t231*t105;
  t30207 = -3.e-6*t147*t246;
  t30211 = 9.e-12*t67*t105*t278;
  t30212 = t30205 + t30207 + t30211;
  t30619 = 3.e-6*t398;
  t30620 = t30619 + t559;
  t30561 = -3.e-6*t398;
  t30562 = t30561 + t559;
  t30650 = -9.e-12*t546;
  t30626 = 3.e-6*t167*t67*t231;
  t30627 = -3.e-6*t105*t246;
  t30628 = -1.*t767*t67*t278;
  t30636 = t30626 + t30627 + t30628;
  t30656 = t147*t67*t231;
  t30657 = t105*t246;
  t30658 = t30656 + t30657 + t27790;
  t30667 = t12718*t246;
  t30668 = t30105 + t30667 + t30179;
  t30671 = t30619 + t621;
  t30682 = t30561 + t621;
  t30674 = 9.e-12*t546;
  t30704 = Cos(var1[3]);
  t30708 = Sin(var1[3]);
  t30706 = t30704*t231*t246;
  t30709 = -1.*t30708*t278;
  t30710 = t30706 + t30709;
  t30712 = -1.*t231*t30708;
  t30714 = -1.*t30704*t246*t278;
  t30715 = t30712 + t30714;
  t30840 = 3.e-6*t30704*t67*t105;
  t30904 = 3.e-6*t167*t30710;
  t30941 = t767*t30715;
  t31013 = t30840 + t30904 + t30941;
  t32409 = -1.*t30704*t67*t105;
  t33655 = t147*t30710;
  t33924 = 3.e-6*t167*t30715;
  t33927 = t32409 + t33655 + t33924;
  t33932 = -1.*t12718*t30704*t67;
  t33933 = -1.*t105*t30710;
  t33934 = 3.e-6*t105*t30715;
  t33935 = t33932 + t33933 + t33934;
  t35272 = 3.e-6*t167*t67*t231*t30708;
  t35277 = -3.e-6*t105*t30708*t246;
  t35417 = -1.*t767*t67*t30708*t278;
  t35463 = t35272 + t35277 + t35417;
  t35828 = t147*t67*t231*t30708;
  t35877 = t105*t30708*t246;
  t35971 = -3.e-6*t167*t67*t30708*t278;
  t36078 = t35828 + t35877 + t35971;
  t36238 = -1.*t67*t231*t105*t30708;
  t36347 = t12718*t30708*t246;
  t36348 = -3.e-6*t67*t105*t30708*t278;
  t36349 = t36238 + t36347 + t36348;
  t36757 = -1.*t231*t30708*t246;
  t36758 = -1.*t30704*t278;
  t36759 = t36757 + t36758;
  t36796 = t30704*t231;
  t36815 = -1.*t30708*t246*t278;
  t36890 = t36796 + t36815;
  t36939 = t767*t36759;
  t36967 = 3.e-6*t167*t36890;
  t36969 = t36939 + t36967;
  t37062 = 3.e-6*t167*t36759;
  t37063 = t147*t36890;
  t37065 = t37062 + t37063;
  t37082 = 3.e-6*t105*t36759;
  t37117 = -1.*t105*t36890;
  t37130 = t37082 + t37117;
  t37218 = t231*t30708*t246;
  t37219 = t30704*t278;
  t37230 = t37218 + t37219;
  t37286 = 1.000000000009*t67*t105*t30708;
  t37506 = -1.*t147*t37230;
  t37524 = 3.e-6*t147*t36890;
  t37678 = t37286 + t37506 + t37524;
  t37750 = 3.e-6*t147*t67*t30708;
  t37810 = 3.e-6*t105*t37230;
  t37812 = -9.e-12*t105*t36890;
  t37846 = t37750 + t37810 + t37812;
  t37853 = -1.*t147*t67*t30708;
  t37854 = -1.*t105*t37230;
  t37859 = 3.e-6*t105*t36890;
  t37863 = t37853 + t37854 + t37859;
  t30617 = -0.200000000003*t30562;
  t30621 = 0.100000000003*t30620;
  t30622 = 5.4e-18*t546;
  t30624 = 1.e-7 + t30617 + t30621 + t30622;
  t30648 = 3.e-7*t30620;
  t30651 = t470 + t30650;
  t30652 = 0.100000000003*t30651;
  t30653 = -0.2000000000048*t546;
  t30654 = 3.e-13 + t30648 + t30652 + t30653;
  t30661 = 3.e-7*t30562;
  t30662 = t398 + t30650;
  t30663 = -0.200000000003*t30662;
  t30664 = 0.1000000000039*t546;
  t30665 = 3.e-13 + t30661 + t30663 + t30664;
  t38132 = 3.e-6*t67*t105*t30708;
  t38139 = 3.e-6*t167*t37230;
  t38143 = t767*t36890;
  t38144 = t38132 + t38139 + t38143;
  t38152 = -1.*t67*t105*t30708;
  t38153 = t147*t37230;
  t38163 = t38152 + t38153 + t36967;
  t30676 = t470 + t30674;
  t38165 = -1.*t12718*t67*t30708;
  t38166 = t38165 + t37854 + t37859;
  t30696 = t398 + t30674;
  t38393 = -3.e-6*t167*t30704*t67*t231;
  t38397 = 3.e-6*t30704*t105*t246;
  t38400 = t767*t30704*t67*t278;
  t38402 = t38393 + t38397 + t38400;
  t38406 = -1.*t147*t30704*t67*t231;
  t38407 = -1.*t30704*t105*t246;
  t38520 = 3.e-6*t167*t30704*t67*t278;
  t38522 = t38406 + t38407 + t38520;
  t38558 = t30704*t67*t231*t105;
  t38599 = -1.*t12718*t30704*t246;
  t38600 = 3.e-6*t30704*t67*t105*t278;
  t38601 = t38558 + t38599 + t38600;
  t39149 = t231*t30708;
  t39150 = t30704*t246*t278;
  t39192 = t39149 + t39150;
  t39194 = t767*t30710;
  t39196 = 3.e-6*t167*t39192;
  t39197 = t39194 + t39196;
  t39374 = t147*t39192;
  t39376 = t30904 + t39374;
  t39381 = 3.e-6*t105*t30710;
  t39383 = -1.*t105*t39192;
  t39384 = t39381 + t39383;
  t39573 = -1.*t30704*t231*t246;
  t39575 = t30708*t278;
  t39580 = t39573 + t39575;
  t39584 = -1.000000000009*t30704*t67*t105;
  t39585 = -1.*t147*t39580;
  t39586 = 3.e-6*t147*t39192;
  t39587 = t39584 + t39585 + t39586;
  t39589 = -3.e-6*t147*t30704*t67;
  t39591 = 3.e-6*t105*t39580;
  t39592 = -9.e-12*t105*t39192;
  t39593 = t39589 + t39591 + t39592;
  t39595 = t147*t30704*t67;
  t39596 = -1.*t105*t39580;
  t39597 = 3.e-6*t105*t39192;
  t39598 = t39595 + t39596 + t39597;
  t39696 = -3.e-6*t30704*t67*t105;
  t39697 = 3.e-6*t167*t39580;
  t39698 = t767*t39192;
  t39699 = t39696 + t39697 + t39698;
  t39701 = t30704*t67*t105;
  t39703 = t147*t39580;
  t39706 = t39701 + t39703 + t39196;
  t39708 = t12718*t30704*t67;
  t39709 = t39708 + t39596 + t39597;
  p_output1[0]=1.;
  p_output1[1]=t10493*t12114 + t12518*t13394 - 1.*t209*t231*t246 + 6.000000000054e-7*t167*t246*t278 + 0.2000000000018*t105*t67 + t677*t773 - 0.3*(t12114*t15877 + t13394*t16970 + t13636*t773) + 0.2*(-1.*t12114*t16970 - 1.*t13394*t19302 - 1.*t17887*t773) + 0.100001*(t12114*t13636 + t13394*t17887 + t25335*t773);
  p_output1[2]=t10493*t28394 + t12518*t28645 - 0.3*(t13636*t27809 + t15877*t28394 + t16970*t28645) + 0.100001*(t25335*t27809 + t13636*t28394 + t17887*t28645) + 0.2*(-1.*t17887*t27809 - 1.*t16970*t28394 - 1.*t19302*t28645) - 6.000000000054e-7*t167*t231*t67 - 1.*t209*t278*t67 + t27809*t677;
  p_output1[3]=0.2000000000018*t147*t246 + t12518*t30103 + t10493*t30180 - 0.3*(t16970*t30103 + t15877*t30180 + t13636*t30212) + 0.2*(-1.*t19302*t30103 - 1.*t16970*t30180 - 1.*t17887*t30212) + 0.100001*(t17887*t30103 + t13636*t30180 + t25335*t30212) - 0.2000000000018*t105*t231*t67 - 6.000000000054e-7*t105*t278*t67 + t30212*t677;
  p_output1[4]=t30624*t30636 + t30654*t30658 + t30665*t30668 + 0.100001*(t30668*t30671 + t30658*t30682 - 1.8e-11*t30636*t546) + 0.2*(-1.*t30636*t30671 - 1.*t30668*t30676 + 1.000000000009*t30658*t546) - 0.3*(t30636*t30682 + t30658*t30696 - 1.000000000009*t30668*t546);
  p_output1[5]=-1.;
  p_output1[6]=1.;
  p_output1[7]=t209*t30710 + 6.000000000054e-7*t167*t30715 + t10493*t33927 + t12518*t33935 - 0.3*(t13636*t31013 + t15877*t33927 + t16970*t33935) + 0.100001*(t25335*t31013 + t13636*t33927 + t17887*t33935) + 0.2*(-1.*t17887*t31013 - 1.*t16970*t33927 - 1.*t19302*t33935) - 0.2000000000018*t105*t30704*t67 + t31013*t677;
  p_output1[8]=0.2000000000018*t105*t246*t30708 + t10493*t36078 + t12518*t36349 - 0.3*(t13636*t35463 + t15877*t36078 + t16970*t36349) + 0.100001*(t25335*t35463 + t13636*t36078 + t17887*t36349) + 0.2*(-1.*t17887*t35463 - 1.*t16970*t36078 - 1.*t19302*t36349) + t209*t231*t30708*t67 - 6.000000000054e-7*t167*t278*t30708*t67 + t35463*t677;
  p_output1[9]=6.000000000054e-7*t167*t36759 + t209*t36890 + t10493*t37065 + t12518*t37130 - 0.3*(t13636*t36969 + t15877*t37065 + t16970*t37130) + 0.100001*(t25335*t36969 + t13636*t37065 + t17887*t37130) + 0.2*(-1.*t17887*t36969 - 1.*t16970*t37065 - 1.*t19302*t37130) + t36969*t677;
  p_output1[10]=6.000000000054e-7*t105*t36890 - 0.2000000000018*t105*t37230 + t12518*t37678 + t10493*t37863 + 0.100001*(t17887*t37678 + t25335*t37846 + t13636*t37863) - 0.3*(t16970*t37678 + t13636*t37846 + t15877*t37863) + 0.2*(-1.*t19302*t37678 - 1.*t17887*t37846 - 1.*t16970*t37863) - 0.2000000000018*t147*t30708*t67 + t37846*t677;
  p_output1[11]=t30624*t38144 + t30654*t38163 + t30665*t38166 + 0.100001*(t30682*t38163 + t30671*t38166 - 1.8e-11*t38144*t546) + 0.2*(-1.*t30671*t38144 - 1.*t30676*t38166 + 1.000000000009*t38163*t546) - 0.3*(t30682*t38144 + t30696*t38163 - 1.000000000009*t38166*t546);
  p_output1[12]=-1.;
  p_output1[13]=1.;
  p_output1[14]=6.000000000054e-7*t167*t36890 + t209*t37230 + t10493*t38163 + t12518*t38166 - 0.3*(t13636*t38144 + t15877*t38163 + t16970*t38166) + 0.100001*(t25335*t38144 + t13636*t38163 + t17887*t38166) + 0.2*(-1.*t17887*t38144 - 1.*t16970*t38163 - 1.*t19302*t38166) - 0.2000000000018*t105*t30708*t67 + t38144*t677;
  p_output1[15]=-0.2000000000018*t105*t246*t30704 + t10493*t38522 + t12518*t38601 - 0.3*(t13636*t38402 + t15877*t38522 + t16970*t38601) + 0.100001*(t25335*t38402 + t13636*t38522 + t17887*t38601) + 0.2*(-1.*t17887*t38402 - 1.*t16970*t38522 - 1.*t19302*t38601) - 1.*t209*t231*t30704*t67 + 6.000000000054e-7*t167*t278*t30704*t67 + t38402*t677;
  p_output1[16]=6.000000000054e-7*t167*t30710 + t209*t39192 + t10493*t39376 + t12518*t39384 - 0.3*(t13636*t39197 + t15877*t39376 + t16970*t39384) + 0.100001*(t25335*t39197 + t13636*t39376 + t17887*t39384) + 0.2*(-1.*t17887*t39197 - 1.*t16970*t39376 - 1.*t19302*t39384) + t39197*t677;
  p_output1[17]=6.000000000054e-7*t105*t39192 - 0.2000000000018*t105*t39580 + t12518*t39587 + t10493*t39598 + 0.100001*(t17887*t39587 + t25335*t39593 + t13636*t39598) - 0.3*(t16970*t39587 + t13636*t39593 + t15877*t39598) + 0.2*(-1.*t19302*t39587 - 1.*t17887*t39593 - 1.*t16970*t39598) + 0.2000000000018*t147*t30704*t67 + t39593*t677;
  p_output1[18]=t30624*t39699 + t30654*t39706 + t30665*t39709 + 0.100001*(t30682*t39706 + t30671*t39709 - 1.8e-11*t39699*t546) + 0.2*(-1.*t30671*t39699 - 1.*t30676*t39709 + 1.000000000009*t39706*t546) - 0.3*(t30682*t39699 + t30696*t39706 - 1.000000000009*t39709*t546);
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
