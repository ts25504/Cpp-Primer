/*
 * Exercise 9.14: Write a program to assign the elements from a list of char* pointers to C-style character strings to a vector of strings.
 */

#include <vector>
#include <list>
#include <iostream>
#include <string>

int main()
{
    std::list<char*> li{"tang", "sheng"};
    std::vector<std::string> svec;

    svec.assign(li.begin(), li.end());
    for (const auto& s : svec)
        std::cout << s << std::endl;
    return 0;
}
