cmake_minimum_required(VERSION 3.13)
set(PROJECT_ID sample_c_unittests)

project(${PROJECT_ID})

add_compile_options(-Wall -Wextra -Werror -Wpedantic -pedantic-errors -Wconversion)

include_directories(include)

set(SOURCE_FILES
        src/mylib.c
        )

set(EXEC_DEBUG ${PROJECT_ID}__debug)
add_executable(${EXEC_DEBUG} ${SOURCE_FILES} main.c)

# Wymuś stosowanie standardu C11 dla plików w języku C (z rozszerzeniem m.in. ".c")
set_property(TARGET ${EXEC_DEBUG} PROPERTY C_STANDARD 11)


# == Unit testing using Google Testing Framework ==

set(SOURCES_FILES_TESTS
        test/test_mylib.cpp
        )

set(EXEC_TEST ${PROJECT_ID}__test)
add_executable(${EXEC_TEST} ${SOURCE_FILES} ${SOURCES_FILES_TESTS} test/main_gtest.cpp)

# Wymuś stosowanie standardu C11 dla plików w języku C (z rozszerzeniem m.in. ".c")
set_property(TARGET ${EXEC_TEST} PROPERTY C_STANDARD 11)

set(GTEST_ROOT ../../googletest-master)
target_include_directories(${EXEC_TEST} PUBLIC
        ${GTEST_ROOT}/googlemock/include
        ${GTEST_ROOT}/googletest/include
        )

add_subdirectory(${GTEST_ROOT} googletest-master)

target_link_libraries(${EXEC_TEST} gmock)

# Wyświetlaj więcej informacji o przebiegu budowania.
set(CMAKE_VERBOSE_MAKEFILE ON)
# Powyższa flaga pomoże Ci zobrazować różnicę w przypadku
