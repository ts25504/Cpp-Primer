/*
 * Exercise 3.14: Write a program to read a sequence of ints from cin and
 * store those values in a vector.
 */

#include <iostream>
#include <vector>

int main()
{
    std::vector<int> ivec;
    int i;

    while (std::cin >> i)
        ivec.push_back(i);

    for (auto iter = ivec.begin(); iter != ivec.end(); ++iter)
        std::cout << *iter << " ";
    std::cout << std::endl;
    return 0;
}
