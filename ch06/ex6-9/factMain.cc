/*
 * Exercise 6.9: Write your own versions of the fact.cc and factMain.cc files. These files should include your Chapter6.h from the exercises in the previous section. Use these files to understand how your compiler supports separate compilation.
 */

#include <iostream>
#include "../Chapter.h"

int main()
{
    int val = 0;
    std::cin >> val;
    std::cout << fact(val) << std::endl;
    return 0;
}
