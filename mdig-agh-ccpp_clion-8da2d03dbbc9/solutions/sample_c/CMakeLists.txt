cmake_minimum_required(VERSION 3.13)
set(PROJECT_ID sample_c)

project(${PROJECT_ID} C)

set(CMAKE_C_STANDARD 11)

add_compile_options(-Wall -Wextra -Werror -Wpedantic -pedantic-errors -Wconversion)

add_executable(${PROJECT_ID}__debug main.c)
