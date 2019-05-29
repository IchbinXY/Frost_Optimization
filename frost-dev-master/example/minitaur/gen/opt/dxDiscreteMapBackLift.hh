/*
 * Automatically Generated from Mathematica.
 * Tue 28 May 2019 22:47:16 GMT-04:00
 */

#ifndef DXDISCRETEMAPBACKLIFT_HH
#define DXDISCRETEMAPBACKLIFT_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace BackLift
{

  void dxDiscreteMapBackLift_raw(double *p_output1, const double *var1,const double *var2);

  inline void dxDiscreteMapBackLift(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1,const Eigen::VectorXd &var2)
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
    dxDiscreteMapBackLift_raw(p_output1.data(), var1.data(),var2.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // DXDISCRETEMAPBACKLIFT_HH
