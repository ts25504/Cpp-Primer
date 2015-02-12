/*
 * Exercise 8.10: Write a program to store each line from a file in a vector<string>. Now use an istringstream to read each element from the vector a word at a time.
 */

#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>

int main()
{
    std::ifstream infile("input");
    std::vector<std::string> s_vec;
    std::string line;
    while (getline(infile, line))
    {
        s_vec.push_back(line);
    }

    for (auto s : s_vec)
    {
        std::istringstream iss(s);
        iss >> line;
        std::cout << line << std::endl;
    }
    return 0;
}
