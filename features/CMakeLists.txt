project(features)

add_library(${PROJECT_NAME} 
    math_utils/math_utils.hpp 
    math_utils/math_utils.cpp
    string_utils/string_utils.hpp  
    string_utils/string_utils.cpp  
    file_utils/file_utils.hpp  
    file_utils/file_utils.cpp  
)

target_include_directories(${PROJECT_NAME}
    PUBLIC ./
    PRIVATE ./
)

target_link_libraries(${PROJECT_NAME} PRIVATE PrivateLibrary)