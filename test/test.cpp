/**
 * @copyright Copyright (c) 2022
 * @file test.cpp
 * @author Part 1: Nitesh Jha(Driver), Smit Dumore (Navigator)
 * @brief Unit tests for PID controller
 * @version 0.1
 * @date 2022-10-01
 *
 *
 */
#include <gtest/gtest.h>

#include "pid_controller.hpp"

/**
 * @brief Test the compute method with PID gain values, target velocity, and
 * current velocity
 *
 */
TEST(ComputeTest1, should_pass) {
  PIDController controller(0.06, 0.01, 0.05);
  ASSERT_NEAR(1.65, controller.compute(0, 10), 0.01);
}

TEST(ComputeTest2, should_pass) {
  PIDController controller(0.6, 0.01, 0.05);
  ASSERT_NEAR(5.64, controller.compute(5, 13), 0.01);
}
