/*
 * Exercise 10.25: In the exercises for § 10.3.2 (p. 392) you wrote a version of biggies that uses partition. Rewrite that function to use check_size and bind.
 */


#include <algorithm>
#include <iostream>
#include <vector>
#include <string>
#include <functional>

bool check_size(const std::string& s, std::string::size_type sz)
{
    return s.size() >= sz;
}

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
            std::bind(check_size, std::placeholders::_1, sz));
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
