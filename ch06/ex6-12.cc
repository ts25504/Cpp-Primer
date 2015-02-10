/*
 * Exercise 6.12: Rewrite the program from exercise 6.10 in § 6.2.1 (p. 210) to use references instead of pointers to swap the value of two ints. Which version do you think would be easier to use and why?
 */

#include <iostream>

void swap(int& a, int& b)
{
    int t = a;
    a = b;
    b = t;
}
int main()
{
    int a = 5, b = 4;
    std::cout << "Before swap." << std::endl;
    std::cout << "a = " << a << " b = " << b << std::endl;
    swap(a, b);
    std::cout << "After swap." << std::endl;
    std::cout << "a = " << a << " b = " << b << std::endl;
    return 0;
}
