/**
 * @copyright Copyright (c) 2022
 * @file main.cpp
 * @author Part 1: Nitesh Jha (Driver), Smit Dumore (Navigator)
 * @author Part 2: Dhanush Babu Allam (Driver), Naveen Mangla (Navigator)
 * @brief Test Driven Development - Part 1
 * @version 0.1
 * @date 2022-10-01
 *
 *
 */
// Includes
#include <cmath>
#include <iostream>
// Header file for PIDController class
#include <pid_controller.hpp>

int main() {
  PIDController controller(0.6, 0.01, 0.05);
  double k = controller.compute(-4, -20);
  double s = controller.get_current_velocity();
  std::cout << "the velocity is " << k << std::endl;
  return 0;
}
