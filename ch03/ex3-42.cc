/*
 * Exercise 3.42: Write a program to copy a vector of ints into an array of
 * ints.
 */

#include <iostream>
#include <vector>

int main()
{
    std::vector<int> vec(10, 1);
    int a[10] = {0};
    for (int i = 0; i < vec.size(); ++i)
        a[i] = vec[i];
    for (auto i : a)
        std::cout << i << " ";
    std::cout << std::endl;
    return 0;
}
