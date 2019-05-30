/*
 * Automatically Generated from Mathematica.
 * Wed 29 May 2019 23:55:49 GMT-04:00
 */

#ifndef H_RIGHTBACKFOOT_BACKSTANCE_HH
#define H_RIGHTBACKFOOT_BACKSTANCE_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace BackStance
{

  void h_RightBackFoot_BackStance_raw(double *p_output1, const double *var1,const double *var2);

  inline void h_RightBackFoot_BackStance(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1,const Eigen::VectorXd &var2)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 22, 1);
    assert_size_matrix(var2, 3, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 3, 1);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    h_RightBackFoot_BackStance_raw(p_output1.data(), var1.data(),var2.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // H_RIGHTBACKFOOT_BACKSTANCE_HH
