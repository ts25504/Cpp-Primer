/*
 * Exercise 10.15: Write a lambda that captures an int from its enclosing function and takes an int parameter. The lambda should return the sum of the captured int and the int parameter.
 */

#include <algorithm>
#include <iostream>

int main()
{
    int i1 = 1;
    auto f = [i1] (int i2) { return i1+i2; };
    std::cout << f(2) << std::endl;
    return 0;
}
