/*
 * Exercise 10.16: Write your own version of the biggies function using lambdas.
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
    auto wc = std::find_if(words.begin(), words.end(),
                [sz](const std::string& a) { return a.size() >= sz; });
    std::for_each(wc, words.end(),
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
