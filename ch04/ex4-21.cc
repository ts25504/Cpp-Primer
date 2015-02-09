/*
 * Exercise 4.21: Write a program to use a conditional operator to find the elements in a vector<int> that have odd value and double the value of each such element.
 */

#include <iostream>
#include <vector>

int main()
{
    std::vector<int> ivec{1, 2, 3, 4, 5, 6, 7, 8, 9};
    for (auto& i : ivec)
        i = (i % 2) ? (i * 2) : i;
    for (auto i : ivec)
        std::cout << i << " ";
    std::cout << std::endl;
    return 0;
}
