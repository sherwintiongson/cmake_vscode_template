#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "C:\00_VISUAL_STUDIO_CODE\cmake_vscode_template\features\math_utils\math_utils.hpp"  // Adjusted path to the header file

TEST(MathUtilsTest, AddFunction) {
    EXPECT_EQ(add(3, 4), 7);
    EXPECT_EQ(add(-1, 1), 0);
}

TEST(MathUtilsTest, MultiplyFunction) {
    EXPECT_EQ(multiply(2, 5), 10);
    EXPECT_EQ(multiply(0, 10), 0);
}
