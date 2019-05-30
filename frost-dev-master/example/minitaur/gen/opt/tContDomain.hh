/*
 * Automatically Generated from Mathematica.
 * Wed 29 May 2019 23:53:20 GMT-04:00
 */

#ifndef TCONTDOMAIN_HH
#define TCONTDOMAIN_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace BackImpact
{

  void tContDomain_raw(double *p_output1, const double *var1,const double *var2);

  inline void tContDomain(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1,const Eigen::VectorXd &var2)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 2, 1);
    assert_size_matrix(var2, 2, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 1, 1);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    tContDomain_raw(p_output1.data(), var1.data(),var2.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // TCONTDOMAIN_HH
