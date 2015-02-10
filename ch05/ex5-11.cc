/*
 * Exercise 5.11: Modify our vowel-counting program so that it also counts the number of blank spaces, tabs, and newlines read.
 */

#include <iostream>
#include <string>
#include <map>

int main()
{
    char c;
    std::map<std::string, int> vowels_map;
    vowels_map["a(A)"] = 0;
    vowels_map["e(E)"] = 0;
    vowels_map["i(I)"] = 0;
    vowels_map["o(O)"] = 0;
    vowels_map["u(U)"] = 0;
    vowels_map["blanks"] = 0;
    vowels_map["tabs"] = 0;
    vowels_map["newlines"] = 0;

    while (std::cin >> std::noskipws >> c)
    {
        if (c == 'a' || c == 'A')
            ++vowels_map["a(A)"];
        else if (c == 'e' || c == 'E')
            ++vowels_map["e(E)"];
        else if (c == 'i' || c == 'I')
            ++vowels_map["i(I)"];
        else if (c == 'o' || c == 'O')
            ++vowels_map["o(O)"];
        else if (c == 'u' || c == 'U')
            ++vowels_map["u(U)"];
        else if (c == ' ')
            ++vowels_map["blanks"];
        else  if (c == '\t')
            ++vowels_map["tabs"];
        else if (c == '\n')
            ++vowels_map["newlines"];
    }
    for (auto p : vowels_map)
        std::cout << p.first << ": " << p.second << std::endl;

    return 0;
}
