cmake_minimum_required(VERSION 3.13)
set(PROJECT_ID sample_cpp)

project(${PROJECT_ID})

set(CMAKE_CXX_STANDARD 17)

add_compile_options(-Wall -Wextra -Werror -Wpedantic -pedantic-errors -Wconversion)

add_executable(${PROJECT_ID}__debug main.cpp)
