/*
 * Exercise 10.22: Rewrite the program to count words of size 6 or less
 * using functions in place of the lambdas.
 */

#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <functional>

bool is_less_than_6(const std::string& s, std::string::size_type sz)
{
    return s.size() <= sz;
}

int main()
{
    std::vector<std::string> words{"library", "define", "name", "like", "if"};
    std::cout << std::count_if(words.begin(), words.end(),
        std::bind(is_less_than_6, std::placeholders::_1, 6)) << std::endl;
    return 0;
}
