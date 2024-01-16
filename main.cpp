#include <iostream>
#include <concepts>
#include <fmt/format.h>

template <typename T>
requires std::integral<T>
T add (T a, T b) {
    return a + b;
}

int main(){
    std::cout << "Hello from C++ 20 with CMake on Linux/Windows" << std::endl;
    int b = add(7,5);
    std::cout << fmt::format("7 plus 5 equals to {}.", b)<< std::endl;
    return 0;
}