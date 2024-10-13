cmake_minimum_required(VERSION 3.28)
project(demo_01)

set(CMAKE_CXX_STANDARD 17)

add_executable(demo_01 statistic.cpp
        bubble_out.cpp
        math_combination.cpp
)
add_executable(bubble_out bubble_out.cpp)
add_executable(math_combination math_combination.cpp)


add_executable(statistic statistic.cpp)