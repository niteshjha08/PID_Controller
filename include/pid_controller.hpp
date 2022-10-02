/**
 *
 * @copyright Copyright (c) 2022
 * @file pid_controller.hpp
 * @author Part 1: Nitesh Jha (Driver), Smit Dumore (Navigator)
 *
 * @brief Header file for the PID Controller class
 * @section DESCRIPTION
 * This file contains the class declaration of PID Controller, member variables
 * and methods
 *
 * @version 0.1
 * @date 2022-10-01
 *
 *
 */
#ifndef PID_CONTROLLER_
#define PID_CONTROLLER_

/**
 * @brief Class declaration of PID controller
 *
 */
class PIDController {
 public:
  /**
   * @brief Constructor to create a new PID Controller instance with PID
   * parameters
   *
   * @param Kp Proportional gain of the controller
   * @param Kd Derivative gain of the controller
   * @param Ki Integral gain of the controller
   */
  PIDController(double Kp, double Kd, double Ki);
  /**
   * @brief Destructor for the PIDController object
   *
   */
  ~PIDController();
  /**
   * @brief Compute the new velocity given the target velocity, current velocity
   * and PID gains
   *
   * @param curr_vel Current velocity
   * @param target_vel Target velocity
   * @return double : new velocity
   */

  double compute(double curr_vel, double target_vel);
  /**
   * @brief Get the current velocity
   *
   * @return double
   */
  double get_current_velocity();

 private:
  // Proportional, Derivative, and Integral gain constant members
  double K_p_, K_d_, K_i_;
  // member to save current velocity
  double current_velocity_;
  // member to save error in last compute step
  double prev_error_;
  // member to save total error in all past compute steps
  double total_integral_error_;
  // Time difference between two compute steps, in seconds
  double sampling_rate_;
};

#endif