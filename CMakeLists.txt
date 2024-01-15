cmake_minimum_required(VERSION 3.5)
project(HelloApp VERSION 0.0.1 DESCRIPTION "The leading Hello World App" LANGUAGES CXX)

add_library(operations STATIC src/operations.cpp)
target_compile_features(operations PUBLIC cxx_std_20)
target_include_directories(operations PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)

add_executable(HelloAppBinary main.cpp src/foo.cpp src/log.cpp)
target_compile_features(HelloAppBinary PRIVATE cxx_std_20)
target_include_directories(HelloAppBinary PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include)
target_link_libraries(HelloAppBinary PUBLIC operations)