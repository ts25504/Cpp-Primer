/*
 * Exercise 3.6: Use a range for to change all the characters in a string to
 * X.
 */

#include <iostream>
#include <string>

int main()
{
    std::string st;

    std::cin >> st;
    for (auto& c : st)
        c = 'X';
    std::cout << st << std::endl;

    return 0;
}
