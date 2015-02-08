/*
 * Exercise 3.4: Write a program to read two strings and report whether the strings are equal. If not, report which of the two is larger. Now, change the program to report whether the strings have the same length, and if not, report which is longer.
 */

#include <iostream>
#include <string>

void func1(const std::string& st1, const std::string& st2)
{
    if (st1 == st2)
        std::cout << "the two strings are equal." << std::endl;
    else if (st1 > st2)
        std::cout << "the first string is larger." << std::endl;
    else
        std::cout << "the second string is larger." << std::endl;
}

void func2(const std::string& st1, const std::string& st2)
{
    if (st1.size() == st2.size())
        std::cout << "the two strings have the same length." << std::endl;
    else if (st1.size() > st2.size())
        std::cout << "the first string is longer." << std::endl;
    else
        std::cout << "the second string is longer." << std::endl;
}

int main()
{
    std::string st1, st2;

    std::cin >> st1 >> st2;

    func1(st1, st2);
    func2(st1, st2);

    return 0;
}
