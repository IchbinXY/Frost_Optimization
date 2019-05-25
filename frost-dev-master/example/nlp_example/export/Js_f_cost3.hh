/*
 * Automatically Generated from Mathematica.
 * Fri 3 May 2019 15:41:03 GMT-04:00
 */

#ifndef JS_F_COST3_HH
#define JS_F_COST3_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace nlp051
{

  void Js_f_cost3_raw(double *p_output1, const double *var1);

  inline void Js_f_cost3(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 1, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 2, 2);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    Js_f_cost3_raw(p_output1.data(), var1.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // JS_F_COST3_HH
