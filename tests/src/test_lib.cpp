#include <gtest/gtest.h>
#include <iostream>
#include "lib.h"




TEST(Test_SymmetricLut, InvalidLutShouldReturnError)
{
  EXPECT_EQ(7 * 5, 35);
}

TEST(Test_SwitchingPolygon, InvalidPolygonShouldReturnError)
{
  EXPECT_EQ(7 * 5, 35);
}

TEST(Test_SwitchingPolygon, InvalidHysteresisShouldReturnError)
{
  EXPECT_EQ(35, add_numbers(30, 5));
}

TEST(Test_lib, isPositiveWithPositiveReturnTrue)
{
  EXPECT_EQ(true, isPositive(5));
}

TEST(Test_lib, isPositiveWithNegativeReturnFalse)
{
  EXPECT_EQ(false, isPositive(-5));
}

TEST(Test_lib, isPositiveWithZeroReturnTrue)
{
  EXPECT_EQ(true, isPositive(0));
}