/*
 * Exercise 10.20: The library defines an algorithm named count_if. Like find_if, this function takes a pair of iterators denoting an input range and a predicate that it applies to each element in the given range. count_if returns a count of how often the predicate is true. Use count_if to rewrite the portion of our program that counted how many words are greater than length 6.
 */

#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

int main()
{
    std::vector<std::string> words{"library", "define", "name", "like", "if"};
    auto c = std::count_if(words.begin(), words.end(),
                [](const std::string& s)
                    { return s.size() > 6; });
    std::cout << c << std::endl;
    return 0;
}
