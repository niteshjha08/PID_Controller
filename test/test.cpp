/**
 * @copyright Copyright (c) 2022
 * @file test.cpp
 * @author Part 1: Nitesh Jha(Driver), Smit Dumore (Navigator)
 * @author Part 2: Dhanush Babu Allam(Driver), Naveen Mangla(Navigator)

 * @brief Unit tests for PID controller
 * @version 0.1
 * @date 2022-10-01
 */
#include <gtest/gtest.h>

#include <pid_controller.hpp>

/**
 * @brief Test the compute method with PID gain values, target velocity, and
 * current velocity
 *
 */
TEST(PIDController, should_pass) {
  PIDController controller(0.06, 0.01, 0.05);
  ASSERT_FLOAT_EQ(1.65, controller.compute(0, 10));
}

TEST(PIDController, should_pass1) {
  PIDController controller(0.6, 0.01, 0.05);
  ASSERT_FLOAT_EQ(5.64, controller.compute(5, 13));
}

TEST(PIDController, should_pass2) {
  PIDController controller(0.6, 0.01, 0.05);
  ASSERT_FLOAT_EQ(0, controller.compute(0, 0));
}

// test case for negative velocity
TEST(PIDController, should_pass3) {
  PIDController controller(0.6, 0.01, 0.05);
  ASSERT_FLOAT_EQ(4.23, controller.compute(-4, 2));
}

// test case for negative target velocity
TEST(PIDController, should_pass4) {
  PIDController controller(0.6, 0.01, 0.05);
  ASSERT_FLOAT_EQ(-11.28, controller.compute(-4, -20));
}

// test case for the get_velocity function
TEST(PIDController, should_pass5) {
  PIDController controller(0.6, 0.01, 0.05);
  ASSERT_FLOAT_EQ(0, controller.get_current_velocity());
}
