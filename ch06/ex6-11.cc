/*
 * Exercise 6.11: Write and test your own version of reset that takes a
 * reference.
 */

#include <iostream>

void reset(int& i)
{
    i = 0;
}

int main()
{
    int i = 255;
    reset(i);
    std::cout << i << std::endl;
    return 0;
}
