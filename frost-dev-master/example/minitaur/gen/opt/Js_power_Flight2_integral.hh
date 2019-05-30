/*
 * Automatically Generated from Mathematica.
 * Wed 29 May 2019 23:43:37 GMT-04:00
 */

#ifndef JS_POWER_FLIGHT2_INTEGRAL_HH
#define JS_POWER_FLIGHT2_INTEGRAL_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace Flight2
{

  void Js_power_Flight2_integral_raw(double *p_output1, const double *var1);

  inline void Js_power_Flight2_integral(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 1, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 18, 2);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    Js_power_Flight2_integral_raw(p_output1.data(), var1.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // JS_POWER_FLIGHT2_INTEGRAL_HH
