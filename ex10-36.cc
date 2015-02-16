/*
 * Exercise 10.36: Use find to find the last element in a list of ints with value 0.
 */

#include <list>
#include <iostream>
#include <algorithm>

int main()
{
    std::list<int> li{1, 2, 3, 0, 4};
    auto riter = std::find(li.crbegin(), li.crend(), 0);
    std::cout << *riter << std::endl;
    return 0;
}
