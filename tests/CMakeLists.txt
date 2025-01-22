project(tests)

# Add test executable with source files
add_executable(${PROJECT_NAME}
  main_test_runner.cpp 
  test_math_utils.cpp 
  test_string_utils.cpp 
  test_file_utils.cpp 
  test_account.cpp
  test_fixture_account.hpp
  test_fixture_account.cpp
  mock_basic.cpp
)

# Include directories (including the math, string, and file directories inside src)
target_include_directories(${PROJECT_NAME} PRIVATE
    ${SRC_DIR}/features/math_utils
    ${SRC_DIR}/features/string_utils
    ${SRC_DIR}/features/file_utils
    ${SRC_DIR}/features/account
    ${SRC_DIR}/features/math_service
    ${SRC_DIR}/features/calculator
)

# Link the features library
target_link_libraries(${PROJECT_NAME} PRIVATE features)

# Link both GoogleTest and GoogleMock
target_link_libraries(${PROJECT_NAME} PRIVATE GTest::gtest_main GTest::gmock GTest::gmock_main)

# Automatically discover and add tests to CTest
gtest_discover_tests(${PROJECT_NAME})
