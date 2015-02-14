/*
 * Exercise 10.19: Rewrite the previous exercise to use stable_partition, which like stable_sort maintains the original element order in the paritioned sequence.
 */

#include <algorithm>
#include <iostream>
#include <vector>
#include <string>

void elimDups(std::vector<std::string>& words)
{
    std::sort(words.begin(), words.end());
    auto end_unique = std::unique(words.begin(), words.end());
    words.erase(end_unique, words.end());
}

void biggies(std::vector<std::string>& words,
             std::vector<std::string>::size_type sz)
{
    elimDups(words);
    auto iter = std::stable_partition(words.begin(), words.end(),
                    [](const std::string& s)
                        { return s.size() >= 5; });
    std::for_each(words.begin(), iter,
        [](const std::string& s) { std::cout << s << " "; });
    std::cout << std::endl;
}

int main()
{
    std::vector<std::string> words{"fox", "jumps", "over", "quick", "red",
        "red", "slow", "the", "the", "turtle"};
    biggies(words, 5);
    return 0;
}
