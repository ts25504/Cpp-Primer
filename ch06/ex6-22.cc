/*
 * Exercise 6.22: Write a function to swap two int pointers.
 */

#include <iostream>

void swap(int*& a, int*& b)
{
    int *t = a;
    a = b;
    b = t;
}

int main()
{
    int xa = 5;
    int xb = 6;
    int* a = &xa;
    int* b = &xb;
    std::cout << "Before swap." << std::endl;
    std::cout << "a = " << a << " b = " << b << std::endl;
    swap(a, b);
    std::cout << "After swap." << std::endl;
    std::cout << "a = " << a << " b = " << b << std::endl;
    return 0;
}
