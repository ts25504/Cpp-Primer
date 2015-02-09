/*
 * Exercise 3.41: Write a program to initialize a vector from an array of
 * ints.
 */

#include <iostream>
#include <vector>

int main()
{
    int a[10] = {0};
    for (int i = 0; i < 10; ++i)
        a[i] = i;
    std::vector<int> vec(std::begin(a), std::end(a));
    for (auto i : vec)
        std::cout << i << " ";
    std::cout << std::endl;
    return 0;
}
