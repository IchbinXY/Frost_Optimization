/*
 * Automatically Generated from Mathematica.
 * Tue 28 May 2019 22:39:25 GMT-04:00
 */

#ifndef XMINUSCONT_BACKIMPACT_HH
#define XMINUSCONT_BACKIMPACT_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace BackImpact
{

  void xMinusCont_BackImpact_raw(double *p_output1, const double *var1,const double *var2);

  inline void xMinusCont_BackImpact(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1,const Eigen::VectorXd &var2)
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
    xMinusCont_BackImpact_raw(p_output1.data(), var1.data(),var2.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // XMINUSCONT_BACKIMPACT_HH
