#pragma once

#include <iostream>
#include <concepts>

template<typename T>
concept operation = requires(T a, T b) {
    // 是一种约束，要求类型T必须支持这四种运算符
    { a + b } -> std::convertible_to<T>; // 如，对于给定的类型T，表达式a+b必须产生一个可转换为T的结果
    { a - b } -> std::convertible_to<T>;
    { a * b } -> std::convertible_to<T>;
    { a / b } -> std::convertible_to<T>;
};

template<typename T>
requires operation<T> // 复用约束
T add(T a, T b) {
    return a + b;
}

template<typename T>
requires operation<T>
T subtract(T a, T b) {
    return a - b;
}

template<typename T>
requires operation<T>
T multiply(T a, T b) {
    return a * b;
}

template<typename T>
requires operation<T>
T divide(T a, T b) {
    if (b != 0) {
        return a / b;
    } else {
        throw std::invalid_argument("Division by zero");
    }
}