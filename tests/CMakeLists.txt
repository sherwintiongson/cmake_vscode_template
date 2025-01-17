project(tests)

add_executable(${PROJECT_NAME} src/test_main.cpp)

target_link_libraries(${PROJECT_NAME} PRIVATE features)
target_link_libraries(${PROJECT_NAME} PRIVATE GTest::gtest_main)

gtest_discover_tests(${PROJECT_NAME})