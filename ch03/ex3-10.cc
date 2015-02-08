/*
 * Exercise 3.10: Write a program that reads a string of characters including punctuation and writes what was read but with the punctuation removed.
 */

#include <iostream>
#include <string>
#include <ctype.h>

int main()
{
    std::string s;

    std::cin >> s;
    for (auto& c : s)
    {
        if (!ispunct(c))
            std::cout << c;
    }
    std::cout << std::endl;
    return 0;
}
