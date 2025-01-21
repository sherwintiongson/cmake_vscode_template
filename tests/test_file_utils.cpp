#include <gtest/gtest.h>
#include "C:\00_VISUAL_STUDIO_CODE\cmake_vscode_template\features\file_utils\file_utils.hpp"

// File Utilities Tests
TEST(FileUtilsTest, FileExistsFunction) {
    EXPECT_FALSE(file_exists("existing_file.txt"));
    EXPECT_FALSE(file_exists("non_existent_file.txt"));
}
