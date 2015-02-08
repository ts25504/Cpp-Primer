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
    int i = 0;

    while (std::cin >> word)
        svec.push_back(word);
    for (auto siter = svec.begin(); siter != svec.end(); ++siter)
        for (auto citer = siter->begin(); citer != siter->end(); ++citer)
            *citer = toupper(*citer);

    for (auto iter = svec.begin(); iter != svec.end(); ++iter, ++i)
    {
        if (0 == i % 8)
            std::cout << std::endl;
        std::cout << *iter << " ";
    }
    std::cout << std::endl;
    return 0;
}
