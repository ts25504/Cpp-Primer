/*
 * Exercise 10.27: In addition to unique (§ 10.2.3, p. 384), the library defines function named unique_copy that takes a third iterator denoting a destination into which to copy the unique elements. Write a program that uses unique_copy to copy the unique elements from a vector into an initially empty list.
 */

#include <iostream>
#include <vector>
#include <list>
#include <algorithm>

int main()
{
    std::vector<int> ivec{1, 2, 2, 3, 3, 3, 4, 4, 5, 6, 7};
    std::list<int> li;

    std::unique_copy(ivec.cbegin(), ivec.cend(), std::inserter(li, li.begin()));
    for (auto i : li)
        std::cout << i << std::endl;
    return 0;
}
