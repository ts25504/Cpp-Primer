/*
 * Exercise 6.10: Using pointers, write a function to swap the values of two ints. Test the function by calling it and printing the swapped values.
 */

#include <iostream>

void swap(int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

int main()
{
    int a = 5, b = 4;
    std::cout << "Before swap." << std::endl;
    std::cout << "a = " << a << " b = " << b << std::endl;
    swap(&a, &b);
    std::cout << "After swap." << std::endl;
    std::cout << "a = " << a << " b = " << b << std::endl;
    return 0;
}
