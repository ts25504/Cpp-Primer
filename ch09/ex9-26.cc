/*
 * Exercise 9.26: Using the following definition of ia, copy ia into a vector and into a list. Use the single-iterator form of erase to remove the elements with odd values from your list and the even values from your vector.
 * Code:
 * int ia[] = { 0, 1, 1, 2, 3, 5, 8, 13, 21, 55, 89 };
 */

#include <iostream>
#include <vector>
#include <list>

int main()
{
    int ia[] = {0, 1, 1, 2, 3, 5, 8, 13, 21, 55, 89};
    std::vector<int> vec(std::begin(ia), std::end(ia));
    std::list<int> li(vec.begin(), vec.end());

    for (auto iter = li.begin(); iter != li.end();)
        if (*iter & 0x1)
            iter = li.erase(iter);
        else
            ++iter;

    for (auto iter = vec.begin(); iter != vec.end();)
        if (!(*iter & 0x1))
            iter = vec.erase(iter);
        else
            ++iter;

    for (auto i : li)
        std::cout << i << " ";
    std::cout << std::endl;

    for (auto i : vec)
        std::cout << i << " ";
    std::cout << std::endl;

    return 0;
}
