/*
 * Automatically Generated from Mathematica.
 * Wed 29 May 2019 15:08:06 GMT-04:00
 */

#ifndef DXPLUSCONT_FRONTLIFT_HH
#define DXPLUSCONT_FRONTLIFT_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace FrontLift
{

  void dxPlusCont_FrontLift_raw(double *p_output1, const double *var1,const double *var2);

  inline void dxPlusCont_FrontLift(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1,const Eigen::VectorXd &var2)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 22, 1);
    assert_size_matrix(var2, 22, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 22, 1);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    dxPlusCont_FrontLift_raw(p_output1.data(), var1.data(),var2.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // DXPLUSCONT_FRONTLIFT_HH
