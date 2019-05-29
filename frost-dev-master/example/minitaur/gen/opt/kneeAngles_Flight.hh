/*
 * Automatically Generated from Mathematica.
 * Wed 29 May 2019 15:17:36 GMT-04:00
 */

#ifndef KNEEANGLES_FLIGHT_HH
#define KNEEANGLES_FLIGHT_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace Flight2
{

  void kneeAngles_Flight_raw(double *p_output1, const double *var1);

  inline void kneeAngles_Flight(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 22, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 4, 1);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    kneeAngles_Flight_raw(p_output1.data(), var1.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // KNEEANGLES_FLIGHT_HH
