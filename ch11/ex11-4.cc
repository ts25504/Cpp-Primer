/*
 * Exercise 11.4: Extend your program to ignore case and punctuation. For example, “example.” “example,” and “Example” should all increment the same counter.
 */

#include <map>
#include <string>
#include <iostream>
#include <cctype>
#include <algorithm>

int main()
{
    std::map<std::string, size_t> word_count;
    std::string word;
    while (std::cin >> word)
    {
        for (auto& ch : word)
            ch = tolower(ch);
        word.erase(std::find_if(word.begin(), word.end(),
                    [](char ch) { return ispunct(ch); }));
        ++word_count[word];
    }
    for (const auto& w : word_count)
        std::cout << w.first << " occurs " << w.second
                  << ((w.second > 1) ? " times." : " time.") << std::endl;
    return 0;
}
