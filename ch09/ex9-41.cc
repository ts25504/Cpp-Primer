/*
 * Exercise 9.41: Write a program that initializes a string from a
 * vector<char>.
 */

#include <iostream>
#include <string>
#include <vector>

int main()
{
    std::vector<char> cvec{'h', 'e', 'l', 'l', 'o'};
    std::string s(cvec.begin(), cvec.end());
    std::cout << s << std::endl;
    return 0;
}
