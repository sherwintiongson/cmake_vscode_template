project(PrivateLibrary)

add_library(${PROJECT_NAME} 
    include/lib_private.h 
    src/lib_private.cpp
)

target_include_directories(${PROJECT_NAME}
    PUBLIC ./include
    PRIVATE ./src
)