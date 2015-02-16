/*
 * Exercise 10.29: Write a program using stream iterators to read a text file
 * into a vector of strings.
 */

#include <iostream>
#include <fstream>
#include <string>
#include <vector>

int main()
{
    std::ifstream infile("input");
    std::istream_iterator<std::string> in_iter(infile), eof;
    std::vector<std::string> vec(in_iter, eof);
    for (auto s : vec)
        std::cout << s << std::endl;
    return 0;
}
