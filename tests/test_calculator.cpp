#include <gtest/gtest.h>
#include "calculator.hpp"
#include "mock_math_service.hpp"

using ::testing::Return;
using ::testing::Throw;

TEST(CalculatorTest, AdditionTest) {
    MockMathService mockMathService;
    Calculator calculator(mockMathService);

    EXPECT_CALL(mockMathService, add(10, 5))
        .WillOnce(Return(15));

    EXPECT_EQ(calculator.cal_add(10, 5), 15);
}

TEST(CalculatorTest, SubtractionTest) {
    MockMathService mockMathService;
    Calculator calculator(mockMathService);

    EXPECT_CALL(mockMathService, subtract(10, 5))
        .WillOnce(Return(5));

    EXPECT_EQ(calculator.cal_subtract(10, 5), 5);
}

TEST(CalculatorTest, MultiplicationTest) {
    MockMathService mockMathService;
    Calculator calculator(mockMathService);

    EXPECT_CALL(mockMathService, multiply(10, 5))
        .WillOnce(Return(50));

    EXPECT_EQ(calculator.cal_multiply(10, 5), 50);
}

TEST(CalculatorTest, DivisionTest) {
    MockMathService mockMathService;
    Calculator calculator(mockMathService);

    EXPECT_CALL(mockMathService, divide(10, 2))
        .WillOnce(Return(5.0));

    EXPECT_DOUBLE_EQ(calculator.cal_divide(10, 2), 5.0);
}

/*
TEST(CalculatorTest, DivisionByZeroTest) {
    MockMathService mockMathService;
    Calculator calculator(mockMathService);

    EXPECT_CALL(mockMathService, divide(10, 0))
        .WillOnce(Throw(std::invalid_argument("Division by zero")));

    EXPECT_THROW(calculator.divide(10, 0), std::invalid_argument);
}
*/
