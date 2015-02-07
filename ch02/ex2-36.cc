/*
 * Exercise 2.36: In the following code, determine the type of each variable
 * and the value each variable has when the code finishes:
 * int a = 3, b = 4; decltype(a) c = a; decltype((b)) d = a;
 * ++c;
 * ++d;
 */

#include <iostream>

int main()
{
    int a = 3, b = 4;
    decltype(a) c = a;
    decltype((b)) d = a;
    ++c;
    ++d;

    std::cout << "a: " << a << std::endl; // a = 4.
    std::cout << "b: " << b << std::endl; // b = 4.
    std::cout << "c: " << c << std::endl; // c = 4.
    std::cout << "d: " << d << std::endl; // d = 4.

    return 0;
}
