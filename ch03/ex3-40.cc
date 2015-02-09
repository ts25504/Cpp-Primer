/*
 * Exercise 3.40: Write a program to define two character arrays initialized from string literals. Now define a third character array to hold the concatenation of the two arrays. Use strcpy and strcat to copy the two arrays into the third.
 */

#include <iostream>
#include <cstring>
#include <cstdlib>

int main()
{
    const char* str1 = "Hello ";
    const char* str2 = "World";
    char* str3 = (char*)malloc(strlen(str1) + strlen(str2) + 1);
    strcpy(str3, str1);
    strcat(str3, str2);
    std::cout << str3 << std::endl;
    return 0;
}
