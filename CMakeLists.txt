cmake_minimum_required(VERSION 3.17)
project(Targets)

#include(CTest)

# Don't override compiler
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
add_subdirectory(googletest)
include(GoogleTest)

add_subdirectory(PrivateLibrary)
add_subdirectory(features)
add_subdirectory(tests)
add_subdirectory(main)

enable_testing()
