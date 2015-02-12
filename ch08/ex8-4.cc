/*
 * Exercise 8.4: Write a function to open a file for input and read its contents into a vector of strings, storing each line as a separate element in the vector.
 */

#include <iostream>
#include <fstream>
#include <vector>
#include <string>

int main()
{
    std::ifstream infile("input");
    std::vector<std::string> s_vec;
    std::string line;

    while (getline(infile, line))
        s_vec.push_back(line);

    for (auto s : s_vec)
        std::cout << s << std::endl;

    return 0;
}
