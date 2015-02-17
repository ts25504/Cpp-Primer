/*
 * Exercise 11.13: There are at least three ways to create the pairs in the program for the previous exercise. Write three versions of that program, creating the pairs in each way. Explain which form you think is easiest to write and understand, and why.
 */

#include <iostream>
#include <utility>
#include <vector>
#include <string>

int main()
{
    std::vector<std::pair<std::string, int> > pvec;
    std::string s;
    int i = 0;
    std::pair<std::string, int> p;
    while (std::cin >> s >> i)
    {
        // p = make_pair(s, i);
        // p.first = s; p.second = i;
        p = {s, i};
        pvec.push_back(p);
    }
    for (const auto& pp : pvec)
        std::cout << pp.first << " " << pp.second << std::endl;
    return 0;
}

