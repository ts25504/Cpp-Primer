/*
 * Exercise 10.37: Given a vector that has ten elements, copy the elements from positions 3 through 7 in reverse order to a list.
 */

#include <iostream>
#include <vector>
#include <list>
#include <algorithm>

int main()
{
    std::vector<int> ivec = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    std::list<int> li;

    std::copy(ivec.crbegin() + 3, ivec.crbegin() + 8, std::back_inserter(li));
    for (auto i : li)
        std::cout << i << " ";
    std::cout << std::endl;
    return 0;
}
