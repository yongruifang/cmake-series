cmake_minimum_required(VERSION 3.5)
project(HelloApp VERSION 0.0.1 DESCRIPTION "The leading Hello World App" LANGUAGES CXX)
# The math library
add_subdirectory(src/math)
# The stats library
add_subdirectory(src/stats)
add_executable(HelloAppBinary src/main.cpp)
target_link_libraries(HelloAppBinary PUBLIC libstats)