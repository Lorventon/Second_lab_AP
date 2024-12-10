cmake_minimum_required(VERSION 3.29)
project(second_lab_AP)

set(CMAKE_CXX_STANDARD 20)

add_subdirectory(googletest)

add_executable(second_lab_AP main.cpp tests/Tests.cpp)

target_include_directories(second_lab_AP PRIVATE googletest/googletest/include)

target_link_libraries(second_lab_AP gtest gtest_main)

add_subdirectory(tests)