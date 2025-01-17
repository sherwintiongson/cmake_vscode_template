project(main)

add_executable(${PROJECT_NAME} 
    src/main.cpp
)

target_include_directories(${PROJECT_NAME}
    PRIVATE ./src
)

target_link_libraries(${PROJECT_NAME} PUBLIC features)

# Disable optimization for debug builds and add compiler warnings
if(CMAKE_CXX_COMPILER_ID STREQUAL "GNU" OR CMAKE_CXX_COMPILER_ID STREQUAL "Clang")
    target_compile_options(${PROJECT_NAME} PRIVATE -Wall -O0 -g)
endif()
