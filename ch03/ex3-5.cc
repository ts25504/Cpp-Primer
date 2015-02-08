/*
 * Exercise 3.5: Write a program to read strings from the standard input, concatenating what is read into one large string. Print the concatenated string. Next, change the program to separate adjacent input strings by a space.
 */

#include <iostream>
#include <string>

int main()
{
    std::string line, total_line;

    while (getline(std::cin, line))
    {
        if (total_line.empty())
            total_line += line;
        else
            total_line += (" " + line);
    }

    std::cout << total_line << std::endl;
    return 0;
}
