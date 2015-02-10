/*
 * Exercise 3.43: Write three different versions of a program to print the elements of ia. One version should use a range for to manage the iteration, the other two should use an ordinary for loop in one case using subscripts and in the other using pointers. In all three programs write all the types directly. That is, do not use a type alias, auto, or decltype to simplify the code.
 */

#include <iostream>

int main()
{
    int ia[3][4] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};

    for (const int (&p)[4] : ia)
        for (int q : p)
            std::cout << q << " ";
    std::cout << std::endl;

    for (size_t i = 0; i != 3; ++i)
        for (size_t j = 0; j != 4; ++j)
            std::cout << ia[i][j] << " ";
    std::cout << std::endl;

    for (int (*p)[4] = ia; p != ia + 3; ++p)
        for (int *q = *p; q != *p + 4; ++q)
            std::cout << *q << " ";
    std::cout << std::endl;
    return 0;
}
