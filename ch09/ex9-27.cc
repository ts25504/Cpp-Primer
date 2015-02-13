/*
 * Exercise 9.27: Write a program to find and remove the odd-valued elements in a forward_list<int>.
 */

#include <iostream>
#include <forward_list>

int main()
{
    std::forward_list<int> flst = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    for (auto prev = flst.before_begin(), curr = flst.begin(); curr != flst.end();)
        if (*curr & 0x1)
            curr = flst.erase_after(prev);
        else
            prev = curr++;

    for (auto i : flst)
        std::cout << i << " ";
    std::cout << std::endl;
    return 0;
}
