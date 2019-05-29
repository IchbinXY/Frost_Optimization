/*
 * Automatically Generated from Mathematica.
 * Tue 28 May 2019 22:46:13 GMT-04:00
 */

#ifndef XMINUSCONT_BACKLIFT_HH
#define XMINUSCONT_BACKLIFT_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace BackLift
{

  void xMinusCont_BackLift_raw(double *p_output1, const double *var1,const double *var2);

  inline void xMinusCont_BackLift(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1,const Eigen::VectorXd &var2)
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
    xMinusCont_BackLift_raw(p_output1.data(), var1.data(),var2.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // XMINUSCONT_BACKLIFT_HH
