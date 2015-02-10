/*
 * Exercise 3.45: Rewrite the programs again, this time using auto.
 */

#include <iostream>

int main()
{
    int ia[3][4] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};

    for (auto& p : ia)
        for (int q : p)
            std::cout << q << " ";
    std::cout << std::endl;

    for (size_t i = 0; i != 3; ++i)
        for (size_t j = 0; j != 4; ++j)
            std::cout << ia[i][j] << " ";
    std::cout << std::endl;

    for (auto p = ia; p != ia + 3; ++p)
        for (int *q = *p; q != *p + 4; ++q)
            std::cout << *q << " ";
    std::cout << std::endl;
    return 0;
}
