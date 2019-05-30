/*
 * Automatically Generated from Mathematica.
 * Thu 30 May 2019 00:05:56 GMT-04:00
 */

#ifndef JS_XPARTIALDISCRETEMAPFRONTIMPACT_HH
#define JS_XPARTIALDISCRETEMAPFRONTIMPACT_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace FrontImpact
{

  void Js_xPartialDiscreteMapFrontImpact_raw(double *p_output1, const double *var1);

  inline void Js_xPartialDiscreteMapFrontImpact(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 1, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 32, 2);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    Js_xPartialDiscreteMapFrontImpact_raw(p_output1.data(), var1.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // JS_XPARTIALDISCRETEMAPFRONTIMPACT_HH
