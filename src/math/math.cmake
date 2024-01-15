# The math library
add_library(libmath STATIC src/math/math.cpp)
target_include_directories(libmath PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/src/math/include)
target_compile_features(libmath PUBLIC cxx_std_20)