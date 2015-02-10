/*
 * Exercise 6.27: Write a function that takes an initializer_list<int> and
 * produces the sum of the elements in the list.
 */

#include <iostream>
#include <initializer_list>

int sum(std::initializer_list<int> init_list)
{
    int res = 0;
    for (auto elem : init_list)
        res += elem;
    return res;
}

int main()
{
    std::cout << sum({1, 2, 3, 4, 5, 6}) << std::endl;
    return 0;
}
