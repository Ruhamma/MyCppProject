#include <iostream>
#include "math_functions.h"
#include "string_functions.h"

int main() {
    int num1 = 10, num2 = 5;
    std::cout << "Addition: " << add(num1, num2) << std::endl;
    std::cout << "Subtraction: " << subtract(num1, num2) << std::endl;

    std::string str1 = "Hello, ";
    std::string str2 = "World!";
    std::cout << "Concatenation: " << concatenate(str1, str2) << std::endl;
    std::cout << "String Length: " << stringLength(str1) << std::endl;

    return 0;
}
