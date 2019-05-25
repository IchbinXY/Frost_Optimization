/*
 * Automatically Generated from Mathematica.
 * Fri 3 May 2019 15:40:12 GMT-04:00
 */

#ifndef J_F_CONSTR1_HH
#define J_F_CONSTR1_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace nlp051
{

  void J_f_constr1_raw(double *p_output1, const double *var1);

  inline void J_f_constr1(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 3, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 2, 1);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    J_f_constr1_raw(p_output1.data(), var1.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // J_F_CONSTR1_HH
