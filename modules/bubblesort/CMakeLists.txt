#
# Create bubblesort library
#
add_library(
    bubblesort
    ./bubblesort.cpp
)
target_include_directories(
    bubblesort
    PUBLIC
        ./
)

#
# Tests
#
find_package(Threads)
add_executable(
    bubblesort_unit
    ./bubblesort.t.cpp
)
target_link_libraries(
    bubblesort_unit
    PUBLIC
        Threads::Threads
        gtest
        gmock
        gtest_main
)
gtest_discover_tests(bubblesort_unit)
