/*
 * Automatically Generated from Mathematica.
 * Tue 28 May 2019 22:29:47 GMT-04:00
 */

#ifndef DDH_FOURBAR_MINITAUR_HH
#define DDH_FOURBAR_MINITAUR_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace FrontStance
{

  void ddh_fourBar_minitaur_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4);

  inline void ddh_fourBar_minitaur(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1,const Eigen::VectorXd &var2,const Eigen::VectorXd &var3,const Eigen::VectorXd &var4)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 22, 1);
    assert_size_matrix(var2, 22, 1);
    assert_size_matrix(var3, 22, 1);
    assert_size_matrix(var4, 8, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 8, 1);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    ddh_fourBar_minitaur_raw(p_output1.data(), var1.data(),var2.data(),var3.data(),var4.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // DDH_FOURBAR_MINITAUR_HH
