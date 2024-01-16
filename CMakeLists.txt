cmake_minimum_required(VERSION 3.5)
if(WIN32)
    # error: could not open 'kernel32.lib': no such file or directory
    # Clang默认尝试在Windows上使用MSVC的标准库，因为Clang自己的标准库还不能在Windows上工作。
    # 在 Windows 上使用 MinGW 标准库
    set(CMAKE_CXX_COMPILER x86_64-w64-mingw32-g++)
    set(CMAKE_C_COMPILER x86_64-w64-mingw32-gcc)
    message("Clang默认尝试在Windows上使用MSVC的标准库,因为Clang自己的标准库还不能在Windows上工作")
endif()
project(HelloApp VERSION 0.0.1 DESCRIPTION "The leading Hello World App" LANGUAGES CXX)
enable_testing()
list(APPEND CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/cmake")
add_subdirectory(src)
add_subdirectory(test) 
add_executable(HelloAppBinary main.cpp)
target_compile_features(HelloAppBinary PRIVATE cxx_std_20)