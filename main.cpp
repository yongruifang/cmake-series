#include <iostream>
#include "foo.h"
#include "operations.h"

int main(){
    foo();
    std::cout << "5 + 10" << " = " << add(5,10) << std::endl;
    std::cout << "5.2 + 10.2" << " = " << add(5.2,10.2) << std::endl;
    std::cout << "5 - 10" << " = " << subtract(5,10) << std::endl;
    std::cout << "5 * 10" << " = " << multiply(5,10) << std::endl;
    std::cout << "5 / 10" << " = " << divide(5,10) << std::endl;
    std::cout << "5 / 0" << " = " << divide(5, 0) << std::endl;
    return 0;
}