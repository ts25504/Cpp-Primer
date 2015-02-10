/*
 * Exercise 5.19: Write a program that uses a do while loop to repetitively request two strings from the user and report which string is less than the other.
 */

#include <iostream>
#include <string>

int main()
{
    std::string s1, s2;

    std::cin >> s1 >> s2;
    do
    {
        if (s1 < s2)
            std::cout << "s1 is less than s2." << std::endl;
        else if (s1 > s2)
            std::cout << "s2 is less than s1." << std::endl;
        else
            std::cout << "equal." << std::endl;
    } while (std::cin >> s1 >> s2);
    return 0;
}
