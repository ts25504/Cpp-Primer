/*
 * Exercise 3.17: Read a sequence of words from cin and store the values a vector. After you’ve read all the words, process the vector and change each word to uppercase. Print the transformed elements, eight words to a line.
 */

#include <iostream>
#include <string>
#include <vector>
#include <ctype.h>

int main()
{
    std::string word;
    std::vector<std::string> svec;

    while (std::cin >> word)
        svec.push_back(word);
    for (auto& s : svec)
        for (auto& c : s)
            c = toupper(c);

    for (decltype(svec.size()) i = 0; i != svec.size(); ++i)
    {
        if (0 == i % 8)
            std::cout << std::endl;
        std::cout << svec[i] << " ";
    }
    std::cout << std::endl;
    return 0;
}
