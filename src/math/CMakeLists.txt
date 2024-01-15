# The math library
add_library(libmath STATIC math.cpp)
target_include_directories(libmath PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)
target_compile_features(libmath PUBLIC cxx_std_20)