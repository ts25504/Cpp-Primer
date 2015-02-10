/*
 * Exercise 6.23: Write your own versions of each of the print functions presented in this section. Call each of these functions to print i and j defined as follows:
 * int i = 0, j[2] = {0, 1};
 */

#include <iostream>

void print(const int* pi)
{
    if (pi)
        std::cout << *pi << std::endl;
}

void print(const char* p)
{
    if (p)
        while (*p)
            std::cout << *p++;
    std::cout << std::endl;
}

void print(const int* beg, const int* end)
{
    while (beg != end)
        std::cout << *beg++ << std::endl;
}

void print(const int ia[], size_t size)
{
    for (size_t i = 0; i != size; ++i)
        std::cout << ia[i] << std::endl;
}

void print(int (&arr)[2])
{
    for (auto i : arr)
        std::cout << i << std::endl;
}

int main()
{
    int i = 0, j[2] = {0, 1};
    print(j);
    print(&i);
    print(std::begin(j), std::end(j));
    print(j, std::end(j) - std::begin(j));
    return 0;
}
