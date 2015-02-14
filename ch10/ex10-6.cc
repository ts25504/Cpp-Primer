/*
 * Exercise 10.6: Using fill_n, write a program to set a sequence of int
 * values to 0.
 */

#include <algorithm>
#include <vector>
#include <iostream>

int main()
{
    std::vector<int> ivec(10);
    std::fill_n(ivec.begin(), 10, 0);
    for (auto i : ivec)
        std::cout << i << " ";
    std::cout << std::endl;
    return 0;
}
