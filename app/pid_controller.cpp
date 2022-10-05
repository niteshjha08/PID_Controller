/**
 * @copyright Copyright (c) 2022
 * @file pid_controller.cpp
 * @author Part 1: Nitesh Jha (Driver), Smit Dumore (Navigator)
 * @brief Class definition of PIDController Class
 * @version 0.1
 * @date 2022-10-01
 *
 */
#include <iostream>
#include <pid_controller.hpp>

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
  double error = target_vel - curr_vel;             // error calculations
  total_integral_error_ += error * sampling_rate_;  // integral error calc.

  double updated_velocity = K_p_ * error +
                            K_d_ * (error - prev_error_) / sampling_rate_ +
                            K_i_ * total_integral_error_;

  // current_velocity_ = 1.0;
  // return 1.0;
  prev_error_ = error;
  current_velocity_ = updated_velocity;  // updating current valocity
  return updated_velocity;
}
// Return current velocity
double PIDController::get_current_velocity() { return current_velocity_; }
