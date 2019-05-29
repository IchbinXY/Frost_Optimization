/*
 * Automatically Generated from Mathematica.
 * Wed 29 May 2019 15:13:26 GMT-04:00
 */

#ifndef J_U_FRICTION_CONE_LEFTBACKFOOT_HH
#define J_U_FRICTION_CONE_LEFTBACKFOOT_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace BackStance
{

  void J_u_friction_cone_LeftBackFoot_raw(double *p_output1, const double *var1,const double *var2);

  inline void J_u_friction_cone_LeftBackFoot(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1,const Eigen::VectorXd &var2)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 3, 1);
    assert_size_matrix(var2, 1, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 9, 1);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    J_u_friction_cone_LeftBackFoot_raw(p_output1.data(), var1.data(),var2.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // J_U_FRICTION_CONE_LEFTBACKFOOT_HH
