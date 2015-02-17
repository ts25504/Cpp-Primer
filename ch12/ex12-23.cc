/*
 * Exercise 12.23: Write a program to concatenate two string literals, putting the result in a dynamically allocated array of char. Write a program to concatenate two library strings that have the same value as the literals used in the first program.
 */

#include <iostream>
#include <string>
#include <cstring>

int main()
{
    char* concatenate_string = new char[255];
    strcat(concatenate_string, "hello ");
    strcat(concatenate_string, "world");
    std::cout << concatenate_string << std::endl;
    delete[] concatenate_string;

    std::string s1{"hello "}, s2{"world"};
    std::cout << s1 + s2 << std::endl;
    return 0;
}
