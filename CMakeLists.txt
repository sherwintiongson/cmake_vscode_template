message(STATUS "--------- Main CMakeList.txt (START)------------")
cmake_minimum_required(VERSION 3.17)

# Specifies the C++ standard to be used and compiler
set(CMAKE_CXX_COMPILER "C:/MinGW/bin/g++.exe")
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED True)
message("Compiling using " ${CMAKE_CXX_COMPILER})
message("C++ Language Standard: C++" ${CMAKE_CXX_STANDARD})

# Sets the name and version of your project.
set(PROJECT_VERSION 1.0)
project(PROJROOT VERSION ${PROJECT_VERSION})


# Debug and Release configurations
if(NOT CMAKE_BUILD_TYPE)
  set(CMAKE_BUILD_TYPE "Release" CACHE STRING "Choose the type of build (Debug or Release)" FORCE)
endif()

# Debug build options
if(CMAKE_BUILD_TYPE MATCHES Debug)
  message("Building in Debug mode")
  add_definitions(-DDEBUG)
  set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -g")
endif()

# Release build options
if(CMAKE_BUILD_TYPE MATCHES Release)
  message("Building in Release mode")
  set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -O3")
endif()

# Define the executable and lists the source and header files.
add_executable(main ./main.h 
                    ./main.cpp 
                    ./folder1/folder1.h 
                    ./folder1/folder1.cpp
					          ./folder2/folder2.h 
                    ./folder2/folder2.cpp)

# Specifies the directories that contain header files to be included in the project.
target_include_directories(main PUBLIC 
							./folder1
							./folder2)    

# Set CMake policies
cmake_policy(SET CMP0074 NEW)               

message(STATUS "--------- Main CMakeList.txt (END) ------------")

# Cmake Configuration
# cmake -S ./ -B ./build

# Generic Build
#cmake --build ./build

# To clean
# cmake --build ./build --target clean

# To Build in Release mode
#cmake -DCMAKE_BUILD_TYPE=Release

# To Build in Debug mode
#cmake -DCMAKE_BUILD_TYPE=Debug

