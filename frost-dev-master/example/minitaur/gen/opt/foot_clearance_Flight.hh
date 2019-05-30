/*
 * Automatically Generated from Mathematica.
 * Thu 30 May 2019 00:02:24 GMT-04:00
 */

#ifndef FOOT_CLEARANCE_FLIGHT_HH
#define FOOT_CLEARANCE_FLIGHT_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace Flight2
{

  void foot_clearance_Flight_raw(double *p_output1, const double *var1);

  inline void foot_clearance_Flight(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 22, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 1, 1);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    foot_clearance_Flight_raw(p_output1.data(), var1.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // FOOT_CLEARANCE_FLIGHT_HH
