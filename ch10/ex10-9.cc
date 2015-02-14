/*
 * Exercise 10.9: Implement your own version of elimDups. Test your program by printing the vector after you read the input, after the call to unique, and after the call to erase.
 */

#include <vector>
#include <string>
#include <iostream>
#include <algorithm>

void elimDups(std::vector<std::string>& words)
{
    std::sort(words.begin(), words.end());
    auto end_unique = std::unique(words.begin(), words.end());
    words.erase(end_unique, words.end());
}

int main()
{
    std::vector<std::string> svec{"fox", "jumps", "over", "quick", "red",
        "red", "slow", "the", "the", "turtle"};
    elimDups(svec);
    for (const auto& s : svec)
    {
        std::cout << s << " ";
    }
    std::cout << std::endl;
    return 0;
}

