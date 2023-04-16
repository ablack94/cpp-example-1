cmake_minimum_required(VERSION 3.16 FATAL_ERROR)
project(bubblesort)

set(CMAKE_CXX_STANDARD 17)

enable_testing()
include(GoogleTest)

add_subdirectory(./modules)
