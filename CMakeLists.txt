cmake_minimum_required(VERSION 3.17)
project(Targets)

# Don't override compiler settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)

# Add GoogleTest and GoogleMock
add_subdirectory(googletest)
include(GoogleTest)

# Link GoogleMock and GoogleTest together
set(GMOCK_LIBRARIES gmock gmock_main gtest gtest_main)

# Add your project subdirectories
add_subdirectory(PrivateLibrary)
add_subdirectory(features)
add_subdirectory(tests)
add_subdirectory(Main)

enable_testing()
