/*
 * Exercise 3.35: Using pointers, write a program to set the elements in an array to zero.
 */

#include <iostream>

int main()
{
    int a[10];
    int* beg_ptr = std::begin(a);
    int* end_ptr = std::end(a);

    for (auto i = beg_ptr; i != end_ptr; ++i)
        *i = 0;

    for (auto i : a)
        std::cout << i << " ";
    std::cout << std::endl;
    return 0;
}
