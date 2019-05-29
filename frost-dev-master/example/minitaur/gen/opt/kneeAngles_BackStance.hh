/*
 * Automatically Generated from Mathematica.
 * Tue 28 May 2019 22:45:23 GMT-04:00
 */

#ifndef KNEEANGLES_BACKSTANCE_HH
#define KNEEANGLES_BACKSTANCE_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace BackStance
{

  void kneeAngles_BackStance_raw(double *p_output1, const double *var1);

  inline void kneeAngles_BackStance(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 22, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 4, 1);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    kneeAngles_BackStance_raw(p_output1.data(), var1.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // KNEEANGLES_BACKSTANCE_HH
