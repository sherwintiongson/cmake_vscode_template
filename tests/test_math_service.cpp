#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "math_service.hpp"

TEST(MathService_TestSuite, Add_TestTwoPositiveNumbers) {
  MathService _math_service;
  EXPECT_EQ(_math_service.add(3, 4), 7);
}

TEST(MathService_TestSuite, Add_TestTwoNegativeNumbers) {
  MathService _math_service;
  EXPECT_EQ(_math_service.add(-3, -4), -7);
}

TEST(MathService_TestSuite, Add_TestPositiveAndNegativeNumbers) {
  MathService _math_service;
  EXPECT_EQ(_math_service.add(-3, 4), 1);
}

TEST(MathService_TestSuite, Add_TestTwoZero) {
  MathService _math_service;
  EXPECT_EQ(_math_service.add(0, 0), 0);
}

TEST(MathService_TestSuite, Subtract_TestTwoPositiveNumbers) {
  MathService _math_service;
  EXPECT_EQ(_math_service.subtract(40, 10), 30);
}

TEST(MathService_TestSuite, Subtract_TestTwoNegativeNumbers) {
  MathService _math_service;
  EXPECT_EQ(_math_service.subtract(-40, -10), -30);
}