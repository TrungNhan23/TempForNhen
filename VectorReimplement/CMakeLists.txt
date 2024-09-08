cmake_minimum_required(VERSION 3.10)
project(TempForNhen)

add_compile_options(
    -Wall 
    -Wextra 
    -Wno-unused-parameter
)

include_directories(
        ${PROJECT_SOURCE_DIR}/inc
        ${PROJECT_SOURCE_DIR}/src
)

file(GLOB all_SRCS
        "${PROJECT_SOURCE_DIR}/inc/*.h"
        "${PROJECT_SOURCE_DIR}/inc/*.hpp"
        "${PROJECT_SOURCE_DIR}/src/*.cpp"
        "${PROJECT_SOURCE_DIR}/src/*.c"
        )

add_executable(main ${PROJECT_SOURCE_DIR}/src/main.cpp)       
