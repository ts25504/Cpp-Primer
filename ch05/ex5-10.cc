/*
 * Exercise 5.10: There is one problem with our vowel-counting program as we’ve implemented it: It doesn’t count capital letters as vowels. Write a program that counts both lower- and uppercase letters as the appropriate vowel—that is, your program should count both 'a' and 'A' as part of aCnt, and so forth.
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
    }
    for (auto p : vowels_map)
        std::cout << p.first << ": " << p.second << std::endl;

    return 0;
}
