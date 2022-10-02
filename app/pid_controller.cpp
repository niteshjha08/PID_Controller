/**
 * @copyright Copyright (c) 2022
 * @file pid_controller.cpp
 * @author Part 1: Nitesh Jha (Driver), Smit Dumore (Navigator)
 *
 * @brief Class definition of PIDController Class
 *
 * @version 0.1
 * @date 2022-10-01
 *
 */

#include "pid_controller.hpp"

#include <iostream>

// Construct a new PIDController::PIDController object

PIDController::PIDController(double Kp, double Kd, double Ki) {
  K_p_ = Kp;
  K_d_ = Kd;
  K_i_ = Ki;
  // Initialize velocity, error, and total error with 0.0
  current_velocity_ = 0.0;
  prev_error_ = 0.0;
  total_integral_error_ = 0.0;
  // Set sampling rate to 0.1s = 10Hz
  sampling_rate_ = 0.1;
}

// Desturctor
PIDController::~PIDController() {}
// Compute new velocity given current and target velocities
double PIDController::compute(double curr_vel, double target_vel) {
  current_velocity_ = 1.0;
  return 1.0;
}
// Return current velocity
double PIDController::get_current_velocity() { return current_velocity_; }
