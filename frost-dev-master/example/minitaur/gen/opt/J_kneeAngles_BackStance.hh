/*
 * Automatically Generated from Mathematica.
 * Wed 29 May 2019 23:59:05 GMT-04:00
 */

#ifndef J_KNEEANGLES_BACKSTANCE_HH
#define J_KNEEANGLES_BACKSTANCE_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace BackStance
{

  void J_kneeAngles_BackStance_raw(double *p_output1, const double *var1);

  inline void J_kneeAngles_BackStance(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 22, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 8, 1);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    J_kneeAngles_BackStance_raw(p_output1.data(), var1.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // J_KNEEANGLES_BACKSTANCE_HH
