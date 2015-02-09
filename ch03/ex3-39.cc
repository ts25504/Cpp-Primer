/*
 * Exercise 3.39: Write a program to compare two strings. Now write a program to compare the values of two C-style character strings.
 */

#include <iostream>
#include <string>
#include <cstring>

int main()
{
    std::string s1("Hello");
    std::string s2("World");

    if (s1 == s2)
        std::cout << "s1 == s2" << std::endl;
    else if (s1 > s2)
        std::cout << "s1 > s2" << std::endl;
    else
        std::cout << "s1 < s2" << std::endl;

    const char* cs1 = "Hello";
    const char* cs2 = "World";

    auto res = strcmp(cs1, cs2);
    if (res == 0)
        std::cout << "cs1 == cs2" << std::endl;
    else if (res > 0)
        std::cout << "cs1 > cs2" << std::endl;
    else
        std::cout << "cs1 < cs2" << std::endl;
    return 0;
}
