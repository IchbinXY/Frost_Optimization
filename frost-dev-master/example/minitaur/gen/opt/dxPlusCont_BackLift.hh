/*
 * Automatically Generated from Mathematica.
 * Thu 30 May 2019 00:00:20 GMT-04:00
 */

#ifndef DXPLUSCONT_BACKLIFT_HH
#define DXPLUSCONT_BACKLIFT_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace BackLift
{

  void dxPlusCont_BackLift_raw(double *p_output1, const double *var1,const double *var2);

  inline void dxPlusCont_BackLift(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1,const Eigen::VectorXd &var2)
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
    dxPlusCont_BackLift_raw(p_output1.data(), var1.data(),var2.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // DXPLUSCONT_BACKLIFT_HH
