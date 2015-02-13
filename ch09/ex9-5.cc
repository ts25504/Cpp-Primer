/*
 * Exercise 9.5: Rewrite the previous program to return an iterator to the requested element. Note that the program must handle the case where the element is not found.
 */

#include <iostream>
#include <vector>
#include <iterator>

std::vector<int>::iterator func(const std::vector<int>::iterator& beg_iter,
                                const std::vector<int>::iterator& end_iter,
                                int val)
{
    for (auto iter = beg_iter; iter != end_iter; ++iter)
        if (*iter == val)
            return iter;
    return end_iter;
}

int main()
{
    std::vector<int> ivec{1, 2, 3, 4, 5, 6, 7};
    std::cout << *func(ivec.begin(), ivec.end(), 5) << std::endl;
    std::cout << *func(ivec.begin(), ivec.end(), 0) << std::endl;
    return 0;
}
