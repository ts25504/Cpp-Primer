/*
 * Exercise 5.17: Given two vectors of ints, write a program to determine whether one vector is a prefix of the other. For vectors of unequal length, compare the number of elements of the smaller vector. For example, given the vectors containing 0, 1, 1, and 2 and 0, 1, 1, 2, 3, 5, 8, respectively your program should return true.
 */

#include <iostream>
#include <vector>

int main()
{
    std::vector<int> vec1 = {0, 1, 2};
    std::vector<int> vec2 = {0, 1, 1, 2, 3, 5, 8};
    bool is_prefix = true;
    int len = vec1.size() < vec2.size() ? vec1.size() : vec2.size();
    for (int i = 0; i != len; ++i)
    {
        if (vec1[i] != vec2[i])
        {
            is_prefix = false;
            break;
        }
        is_prefix = true;
    }
    std::cout << is_prefix << std::endl;
    return 0;
}
