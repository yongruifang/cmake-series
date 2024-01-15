cmake_minimum_required(VERSION 3.5)
project(HelloApp VERSION 0.0.1 DESCRIPTION "The leading Hello World App" LANGUAGES CXX)
# The math library
include(src/math/math.cmake)
# The stats library
include(src/stats/stats.cmake)
add_executable(HelloAppBinary src/main.cpp)
target_compile_features(HelloAppBinary PRIVATE cxx_std_20)
target_link_libraries(HelloAppBinary PUBLIC libstats)