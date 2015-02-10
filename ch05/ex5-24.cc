/*
 * Exercise 5.24: Revise your program to throw an exception if the second number is zero. Test your program with a zero input to see what happens on your system if you don’t catch an exception.
 */

#include <iostream>
#include <stdexcept>

int main()
{
    int num1, num2;
    std::cin >> num1 >> num2;
    if (num2 == 0)
        throw std::runtime_error("divisor is 0");
    std::cout << static_cast<double>(num1) / num2 << std::endl;
    return 0;
}
