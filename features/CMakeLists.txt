project(features)

add_library(${PROJECT_NAME} 
    lib.h 
    lib.cpp
    calcu.h 
    calcu.cpp
)

target_include_directories(${PROJECT_NAME}
    PUBLIC ./
    PRIVATE ./
)

target_link_libraries(${PROJECT_NAME} PRIVATE PrivateLibrary)