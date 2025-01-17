#include <gtest/gtest.h>
#include <iostream>
#include <cstdint>

uint32_t add_numbers(uint16_t x, uint16_t y)
{
  return x + y;
}

TEST(SymmetricLutTests, SymmetricLutTests_1)
{
  EXPECT_EQ(7 * 5, 35);
}

TEST(SymmetricLutTests, SymmetricLutTests_2)
{
  EXPECT_EQ(7 * 5, 35);
}

TEST(SymmetricLutTests, SymmetricLutTests_3)
{
  EXPECT_EQ(add_numbers(30, 5), 35);
}