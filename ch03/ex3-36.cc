/*
 * Exercise 3.36: Write a program to compare two arrays for equality. Write a similar program to compare two vectors.
 */

#include <iostream>
#include <vector>

int main()
{
    std::vector<int> vec1 = {0, 1, 2, 3, 4};
    std::vector<int> vec2 = {0, 1, 2, 3, 4};

    if (vec1 == vec2)
        std::cout << "equal." << std::endl;
    else
        std::cout << "not equal." << std::endl;
    return 0;
}
