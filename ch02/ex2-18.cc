/*
 * Exercise 2.18: Write code to change the value of a pointer. Write code to
 * change the value to which the pointer points.
 */

#include <iostream>

int main()
{
    int* pi = NULL;
    int i = 10;

    pi = &i;
    std::cout << *pi << " " << pi << " " << i << " " << &i << std::endl;
    *pi = 100;
    std::cout << *pi << " " << pi << " " << i << " " << &i << std::endl;

    return 0;
}
