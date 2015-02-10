/*
 * Exercise 5.23: Write a program that reads two integers from the standard input and prints the result of dividing the first number by the second.
 */

#include <iostream>

int main()
{
    int num1, num2;
    std::cin >> num1 >> num2;

    std::cout << static_cast<double>(num1) / num2 << std::endl;
    return 0;
}
