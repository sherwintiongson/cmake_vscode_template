#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "C:\00_VISUAL_STUDIO_CODE\cmake_vscode_template\features\string_utils\string_utils.hpp"

// String Utilities Tests
TEST(StringUtilsTest, ToUpperFunction) {
    EXPECT_EQ(to_upper("hello"), "HELLO");
    EXPECT_EQ(to_upper("Test"), "TEST");
}

TEST(StringUtilsTest, ToLowerFunction) {
    EXPECT_EQ(to_lower("HELLO"), "hello");
    EXPECT_EQ(to_lower("TeSt"), "test");
}
