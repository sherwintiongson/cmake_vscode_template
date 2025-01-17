project(LibraryTests)

add_executable(${PROJECT_NAME} src/main.cpp)

target_link_libraries(${PROJECT_NAME} PRIVATE Library)
target_link_libraries(${PROJECT_NAME} PRIVATE GTest::gtest_main)

gtest_discover_tests(${PROJECT_NAME})