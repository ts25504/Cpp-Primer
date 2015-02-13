/*
 * Exercise 9.19: Rewrite the program from the previous exercise to use a list. List the changes you needed to make.
 */

#include <iostream>
#include <string>
#include <list>

int main()
{
    std::list<std::string> s_li;
    for (std::string s; std::cin >> s; s_li.push_back(s));
    for (auto iter = s_li.cbegin(); iter != s_li.cend(); ++iter)
        std::cout << *iter << std::endl;
    return 0;
}

