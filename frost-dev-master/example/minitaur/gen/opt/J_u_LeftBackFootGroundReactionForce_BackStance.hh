/*
 * Automatically Generated from Mathematica.
 * Tue 28 May 2019 22:46:05 GMT-04:00
 */

#ifndef J_U_LEFTBACKFOOTGROUNDREACTIONFORCE_BACKSTANCE_HH
#define J_U_LEFTBACKFOOTGROUNDREACTIONFORCE_BACKSTANCE_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace BackStance
{

  void J_u_LeftBackFootGroundReactionForce_BackStance_raw(double *p_output1, const double *var1);

  inline void J_u_LeftBackFootGroundReactionForce_BackStance(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 3, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 1, 1);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    J_u_LeftBackFootGroundReactionForce_BackStance_raw(p_output1.data(), var1.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // J_U_LEFTBACKFOOTGROUNDREACTIONFORCE_BACKSTANCE_HH
