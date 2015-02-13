/*
 * Exercise 9.18: Write a program to read a sequence of strings from the standard input into a deque. Use iterators to write a loop to print the elements in the deque.
 */

#include <deque>
#include <iostream>
#include <string>

int main()
{
    std::deque<std::string> s_deque;
    std::string s;

    while (std::cin >> s)
    {
        s_deque.push_back(s);
    }

    for (auto iter = s_deque.cbegin(); iter != s_deque.cend(); ++iter)
        std::cout << *iter << std::endl;
    return 0;
}
