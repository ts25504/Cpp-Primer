/*
 * Exercise 10.28: Copy a vector that holds the values from 1 to 9 inclusive, into three other containers. Use an inserter, a back_inserter, and a front_inserter, respectivly to add elements to these containers. Predict how the output sequence varies by the kind of inserter and verify your predictions by running your programs.
 */

#include <iostream>
#include <vector>
#include <deque>
#include <algorithm>

int main()
{
    std::vector<int> ivec{1, 2, 3, 4, 5, 6, 7, 8, 9};
    std::deque<int> iv1, iv2, iv3;

    std::copy(ivec.cbegin(), ivec.cend(), std::inserter(iv1, iv1.begin()));
    std::copy(ivec.cbegin(), ivec.cend(), std::back_inserter(iv2));
    std::copy(ivec.cbegin(), ivec.cend(), std::front_inserter(iv3));

    std::cout << "iv1: (use inserter)" << std::endl;
    for (auto i : iv1)
        std::cout << i << " ";
    std::cout << std::endl;

    std::cout << "iv1: (use back_inserter)" << std::endl;
    for (auto i : iv2)
        std::cout << i << " ";
    std::cout << std::endl;

    std::cout << "iv1: (use front_inserter)" << std::endl;
    for (auto i : iv3)
        std::cout << i << " ";
    std::cout << std::endl;

    return 0;
}
