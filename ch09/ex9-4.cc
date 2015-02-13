/*
 * Exercise 9.4: Write a function that takes a pair of iterators to a vector<int> and an int value. Look for that value in the range and return a bool indicating whether it was found.
 */

#include <iostream>
#include <vector>
#include <iterator>

bool func(const std::vector<int>::iterator& beg_iter,
          const std::vector<int>::iterator& end_iter, int val)
{
    for (auto iter = beg_iter; iter != end_iter; ++iter)
        if (*iter == val)
            return true;
    return false;
}

int main()
{
    std::vector<int> ivec{1, 2, 3, 4, 5, 6, 7};
    std::cout << func(ivec.begin(), ivec.end(), 5) << std::endl;
    std::cout << func(ivec.begin(), ivec.end(), 0) << std::endl;
    return 0;
}
