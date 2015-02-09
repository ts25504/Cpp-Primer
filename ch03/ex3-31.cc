/*
 * Exercise 3.31: Write a program to define an array of ten ints. Give each
 * element the same value as its position in the array.
 */

#include <iostream>

int main()
{
    int a[10] = {0};

    for (int i = 0; i < 10; ++i)
        a[i] = i;

    for (auto i : a)
        std::cout << i << " ";
    std::cout << std::endl;
    return 0;
}
