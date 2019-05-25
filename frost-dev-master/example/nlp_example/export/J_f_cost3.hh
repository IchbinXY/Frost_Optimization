/*
 * Automatically Generated from Mathematica.
 * Fri 3 May 2019 15:41:00 GMT-04:00
 */

#ifndef J_F_COST3_HH
#define J_F_COST3_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace nlp051
{

  void J_f_cost3_raw(double *p_output1, const double *var1);

  inline void J_f_cost3(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 2, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 2, 1);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    J_f_cost3_raw(p_output1.data(), var1.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // J_F_COST3_HH
