/*
 * Exercise 5.9: Write a program using a series of if statements to count the number of vowels in text read from cin.
 */

#include <iostream>
#include <string>
#include <map>

int main()
{
    std::string line;
    std::map<std::string, int> vowels_map;
    vowels_map["a"] = 0;
    vowels_map["e"] = 0;
    vowels_map["i"] = 0;
    vowels_map["o"] = 0;
    vowels_map["u"] = 0;

    std::cin >> line;
    for (auto& c : line)
    {
        if (c == 'a')
            ++vowels_map["a"];
        else if (c == 'e')
            ++vowels_map["e"];
        else if (c == 'i')
            ++vowels_map["i"];
        else if (c == 'o')
            ++vowels_map["o"];
        else if (c == 'u')
            ++vowels_map["u"];
    }
    for (auto p : vowels_map)
        std::cout << p.first << ": " << p.second << std::endl;

    return 0;
}
