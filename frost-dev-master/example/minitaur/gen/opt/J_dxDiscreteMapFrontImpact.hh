/*
 * Automatically Generated from Mathematica.
 * Wed 29 May 2019 15:19:14 GMT-04:00
 */

#ifndef J_DXDISCRETEMAPFRONTIMPACT_HH
#define J_DXDISCRETEMAPFRONTIMPACT_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace FrontImpact
{

  void J_dxDiscreteMapFrontImpact_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4,const double *var5,const double *var6);

  inline void J_dxDiscreteMapFrontImpact(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1,const Eigen::VectorXd &var2,const Eigen::VectorXd &var3,const Eigen::VectorXd &var4,const Eigen::VectorXd &var5,const Eigen::VectorXd &var6)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 22, 1);
    assert_size_matrix(var2, 22, 1);
    assert_size_matrix(var3, 22, 1);
    assert_size_matrix(var4, 8, 1);
    assert_size_matrix(var5, 3, 1);
    assert_size_matrix(var6, 3, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 780, 1);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    J_dxDiscreteMapFrontImpact_raw(p_output1.data(), var1.data(),var2.data(),var3.data(),var4.data(),var5.data(),var6.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // J_DXDISCRETEMAPFRONTIMPACT_HH
