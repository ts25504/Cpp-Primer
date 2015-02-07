/*
 * Exercise 2.37: Assignment is an example of an expression that yields a reference type. The type is a reference to the type of the left-hand operand. That is, if i is an int, then the type of the expression i = x is int&. Using that knowledge, determine the type and value of each variable in this code:
 * int a = 3, b = 4;
 * decltype(a) c = a;
 * decltype(a = b) d = a;
 */

#include <iostream>

int main()
{
    int a = 3, b = 4;
    decltype(a) c = a;
    decltype(a = b) d = a; // the type of a = b is int&.

    std::cout << "a: " << a << std::endl; // a = 3.
    std::cout << "b: " << b << std::endl; // b = 4.
    std::cout << "c: " << c << std::endl; // c = 3.
    std::cout << "d: " << d << std::endl; // d = 3.

    return 0;
}
