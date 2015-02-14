/*
 * Exercise 10.1: The algorithm header defines a function named count that, like find, takes a pair of iterators and a value. count returns a count of how often that value appears. Read a sequence of ints into a vector and print the count of how many elements have a given value.
 */

#include <algorithm>
#include <vector>
#include <iostream>

int main()
{
    std::vector<int> ivec{1, 2, 2, 3, 3, 3, 4, 4, 4, 4};
    std::cout << std::count(ivec.cbegin(), ivec.cend(), 3) << std::endl;
    return 0;
}
