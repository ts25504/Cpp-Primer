/*
 * Exercise 9.15: Write a program to determine whether two vector<int>s
 * are equal.
 */

#include <vector>
#include <iostream>

int main()
{
    std::vector<int> vec1{1, 2, 3, 4, 5, 6};
    std::vector<int> vec2{1, 2, 3, 4, 5};

    std::cout << (vec1 == vec2) << std::endl;
    return 0;
}
