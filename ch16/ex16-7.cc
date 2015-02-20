/*
 * Exercise 16.7: Write a constexpr template that returns the size of a given array.
 */

#include <iostream>

template <typename T, unsigned sz>
constexpr size_t get_size(T (&arr)[sz])
{
    return sz;
}

int main()
{
    int a[] = {1, 2, 3, 4, 5};
    std::cout << get_size(a) << std::endl;
    return 0;
}
