/*
 * Automatically Generated from Mathematica.
 * Thu 30 May 2019 00:02:58 GMT-04:00
 */

#ifndef IMPACT_VELOCITY_RIGHTBACKFOOT_HH
#define IMPACT_VELOCITY_RIGHTBACKFOOT_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace Flight2
{

  void impact_velocity_RightBackFoot_raw(double *p_output1, const double *var1,const double *var2);

  inline void impact_velocity_RightBackFoot(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1,const Eigen::VectorXd &var2)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 22, 1);
    assert_size_matrix(var2, 22, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 3, 1);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    impact_velocity_RightBackFoot_raw(p_output1.data(), var1.data(),var2.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // IMPACT_VELOCITY_RIGHTBACKFOOT_HH
