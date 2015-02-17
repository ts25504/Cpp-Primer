/*
 * Exercise 11.12: Write a program to read a sequence of strings and ints,
 * storing each into a pair. Store the pairs in a vector.
 */

#include <string>
#include <utility>
#include <vector>
#include <iostream>

int main()
{
    std::vector<std::pair<std::string, int> > pvec;
    std::string s;
    int i = 0;
    std::pair<std::string, int> p;
    while (std::cin >> s >> i)
    {
        p = make_pair(s, i);
        pvec.push_back(p);
    }
    for (const auto& pp : pvec)
        std::cout << pp.first << " " << pp.second << std::endl;
    return 0;
}

