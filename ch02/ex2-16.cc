/*
 * Exercise 2.16: Which, if any, of the following assignments are invalid? If they are valid, explain what they do.
 */

#include <iostream>

int main()
{
    int i = 0, &r1 = i;
    double d = 0, &r2 = d;

    std::cout << i << " " << r1 << " " << d << " " << r2 << std::endl;
    r2 = 3.14159;
    std::cout << i << " " << r1 << " " << d << " " << r2 << std::endl;
    r2 = r1;
    std::cout << i << " " << r1 << " " << d << " " << r2 << std::endl;
    i = r2;
    std::cout << i << " " << r1 << " " << d << " " << r2 << std::endl;
    r1 = d;
    std::cout << i << " " << r1 << " " << d << " " << r2 << std::endl;
    return 0;
}
