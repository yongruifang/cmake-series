cmake_minimum_required(VERSION 3.5)
project(HelloApp VERSION 0.0.1 DESCRIPTION "The leading Hello World App" LANGUAGES CXX)
add_executable(HelloAppBinary main.cpp)
target_compile_features(HelloAppBinary PRIVATE cxx_std_20)
include(cmake/ClangFormat.cmake) # 引入依赖
message("项目源目录: ${PROJECT_SOURCE_DIR}")
add_clang_format_target(format-code ${PROJECT_SOURCE_DIR}) # 执行函数