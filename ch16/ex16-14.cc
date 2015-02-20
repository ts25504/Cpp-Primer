/*
 * Exercise 16.14: Write a Screen class template that uses nontype parameters to define the height and width of the Screen.
 */

#include <iostream>
#include "Screen.h"

int main()
{
    Screen<5, 5> scr('c');
    char c0 = 'b', c1;
    scr.move(2, 2);
    scr << c0;
    scr >> c1;
    std::cout << c1 << std::endl;
    return 0;
}
