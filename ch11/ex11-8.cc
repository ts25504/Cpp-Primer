/*
 * Exercise 11.8: Write a program that stores the excluded words in a vector instead of in a set. What are the advantages to using a set?
 */

#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <iostream>

int main()
{
    std::map<std::string, size_t> word_count;
    std::vector<std::string> exclude = {"The", "But", "And", "Or", "An", "A",
                                        "the", "but", "and", "or", "an", "a"};
    std::string word;
    while(std::cin >> word)
        if (std::find(exclude.begin(), exclude.end(), word) == exclude.end())
            ++word_count[word];
    for (const auto& p : word_count)
        std::cout << p.first << ": " << p.second << std::endl;
    return 0;
}
