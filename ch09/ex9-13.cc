/*
 * Exercise 9.13: How would you initialize a vector<double> from a
 * list<int>? From a vector<int>? Write code to check your answers.
 */

#include <vector>
#include <list>
#include <iostream>

int main()
{
    std::list<int> li{1, 2, 3, 4, 5};
    std::vector<int> ivec{6, 7, 8, 9, 10};
    std::vector<double> dvec;

    for (auto iter = li.cbegin(); iter != li.cend(); ++iter)
        dvec.push_back(*iter);

    for (auto iter = ivec.cbegin(); iter != ivec.cend(); ++iter)
        dvec.push_back(*iter);

    for (auto d : dvec)
        std::cout << d << " ";
    std::cout << std::endl;

    return 0;
}

