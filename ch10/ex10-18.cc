/*
 * Exercise 10.18: Rewrite biggies to use partition instead of find_if. We described the partition algorithm in exercise 10.13 in § 10.3.1 (p. 387).
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
    std::stable_sort(words.begin(), words.end(),
                [](const std::string& a, const std::string& b)
                    { return a.size() < b.size(); });
    auto iter = std::partition(words.begin(), words.end(),
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
