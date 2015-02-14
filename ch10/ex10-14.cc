/*
 * Exercise 10.14: Write a lambda that takes two ints and returns their
 * sum.
 */

#include <algorithm>
#include <iostream>

int main()
{
    auto f = [] (int a, int b) -> int { return a+b; };
    std::cout << f(1, 2) << std::endl;
    return 0;
}
