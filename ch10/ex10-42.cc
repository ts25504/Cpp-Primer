/*
 * Exercise 10.42: Reimplement the program that eliminated duplicate
 * words that we wrote in § 10.2.3 (p. 383) to use a list instead of a vector.
 */

#include <iostream>
#include <string>
#include <list>

void elimDups(std::list<std::string>& words)
{
    words.sort();
    words.unique();
}

int main()
{
    std::list<std::string> li = {"aa", "aa", "aa", "aa", "aassss", "aa"};
    elimDups(li);
    for (const auto& s : li)
        std::cout << s << " ";
    std::cout << std::endl;
    return 0;
}
