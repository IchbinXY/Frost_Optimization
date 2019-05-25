/*
 * Automatically Generated from Mathematica.
 * Fri 3 May 2019 15:40:27 GMT-04:00
 */

#ifndef J_F_CONSTR3_HH
#define J_F_CONSTR3_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace nlp051
{

  void J_f_constr3_raw(double *p_output1, const double *var1,const double *var2);

  inline void J_f_constr3(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1,const Eigen::VectorXd &var2)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 3, 1);
    assert_size_matrix(var2, 2, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 2, 1);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    J_f_constr3_raw(p_output1.data(), var1.data(),var2.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // J_F_CONSTR3_HH
