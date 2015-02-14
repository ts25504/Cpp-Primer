/*
 * Exercise 10.11: Write a program that uses stable_sort and isShorter to sort a vector passed to your version of elimDups. Print the vector to verify that your program is correct.
 */

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

void elimDups(std::vector<std::string>& words)
{
    std::sort(words.begin(), words.end());
    auto end_unique = std::unique(words.begin(), words.end());
    words.erase(end_unique, words.end());
}

bool isShorter(const std::string& s1, const std::string& s2)
{
    return s1.size() < s2.size();
}

int main()
{
    std::vector<std::string> svec{"fox", "jumps", "over", "quick", "red",
        "red", "slow", "the", "the", "turtle"};
    elimDups(svec);
    std::stable_sort(svec.begin(), svec.end(), isShorter);
    for (const auto& s : svec)
    {
        std::cout << s << " ";
    }
    std::cout << std::endl;
    return 0;
}

