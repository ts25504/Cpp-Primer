/*
 * Exercise 5.12: Modify our vowel-counting program so that it counts the number of occurrences of the following two-character sequences: ff, fl, and fi.
 */

#include <iostream>
#include <string>
#include <map>

int main()
{
    char c, prec;
    std::map<std::string, int> vowels_map;
    vowels_map["a(A)"] = 0;
    vowels_map["e(E)"] = 0;
    vowels_map["i(I)"] = 0;
    vowels_map["o(O)"] = 0;
    vowels_map["u(U)"] = 0;
    vowels_map["blanks"] = 0;
    vowels_map["tabs"] = 0;
    vowels_map["newlines"] = 0;
    vowels_map["fl"] = 0;
    vowels_map["ff"] = 0;
    vowels_map["fi"] = 0;

    while (std::cin >> std::noskipws >> c)
    {
        switch (c)
        {
            case 'a':
            case 'A':
                ++vowels_map["a(A)"];
                break;
            case 'e':
            case 'E':
                ++vowels_map["e(E)"];
                break;
            case 'i':
                if (prec == 'f')
                    ++vowels_map["fi"];
            case 'I':
                ++vowels_map["i(I)"];
                break;
            case 'o':
            case 'O':
                ++vowels_map["o(O)"];
                break;
            case 'u':
            case 'U':
                ++vowels_map["u(U)"];
                break;
            case ' ':
                ++vowels_map["blanks"];
                break;
            case '\t':
                ++vowels_map["tabs"];
                break;
            case '\n':
                ++vowels_map["newlines"];
                break;
            case 'f':
                if (prec == 'f')
                    ++vowels_map["ff"];
                break;
            case 'l':
                if (prec == 'f')
                    ++vowels_map["fl"];
                break;
        }
        prec = c;
    }
    for (auto p : vowels_map)
        std::cout << p.first << ": " << p.second << std::endl;

    return 0;
}
