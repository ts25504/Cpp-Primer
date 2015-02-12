/*
 * Exercise 8.5: Rewrite the previous program to store each word in a
 * separate element.
 */

#include <iostream>
#include <fstream>
#include <vector>
#include <string>

int main()
{
    std::ifstream infile("input");
    std::vector<std::string> s_vec;
    std::string word;

    while (infile >> word)
        s_vec.push_back(word);

    for (auto s : s_vec)
        std::cout << s << std::endl;

    return 0;
}
