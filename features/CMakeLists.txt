project(features)

# Grouping source and header files into variables for better readability and reuse
set(SRC_FILES
    math_utils/math_utils.cpp
    string_utils/string_utils.cpp
    file_utils/file_utils.cpp
    account/account.cpp
    math_service/math_service.cpp
    calculator/calculator.cpp
)

set(HEADER_FILES
    math_utils/math_utils.hpp
    string_utils/string_utils.hpp
    file_utils/file_utils.hpp
    account/account.hpp
    math_service/imath_service.hpp
    math_service/math_service.hpp
    calculator/calculator.hpp
)

# Define the library target
add_library(${PROJECT_NAME} ${SRC_FILES} ${HEADER_FILES})

# Organize include directories properly
target_include_directories(${PROJECT_NAME}
    PUBLIC 
        ${CMAKE_CURRENT_SOURCE_DIR}/math_utils
        ${CMAKE_CURRENT_SOURCE_DIR}/string_utils
        ${CMAKE_CURRENT_SOURCE_DIR}/file_utils
        ${CMAKE_CURRENT_SOURCE_DIR}/account
        ${CMAKE_CURRENT_SOURCE_DIR}/math_service
        ${CMAKE_CURRENT_SOURCE_DIR}/calculator
)

# Link required libraries
target_link_libraries(${PROJECT_NAME}
    PRIVATE PrivateLibrary
)