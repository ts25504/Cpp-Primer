/*
 * Exercise 6.21: Write a function that takes an int and a pointer to an int and returns the larger of the int value or the value to which the pointer points. What type should you use for the pointer?
 */

#include <iostream>

int func(int i, const int* ip)
{
    return i > * ip ? i : *ip;
}

int main()
{
    int a = 6;
    std::cout << func(7, &a) << std::endl;
    return 0;
}
