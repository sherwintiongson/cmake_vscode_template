project(tests)

add_executable(${PROJECT_NAME}
  main_test_runner.cpp 
  test_math_utils.cpp 
  test_string_utils.cpp 
  test_file_utils.cpp 
)

# Include directories (including the math, string, and file directories inside src)
target_include_directories(${PROJECT_NAME} PRIVATE
    ${SRC_DIR}/features/math_utils
    ${SRC_DIR}/features/string_utils
    ${SRC_DIR}/features/file_utils
)

target_link_libraries(${PROJECT_NAME} PRIVATE features)
target_link_libraries(${PROJECT_NAME} PRIVATE GTest::gtest_main)

gtest_discover_tests(${PROJECT_NAME})