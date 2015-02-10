/*
 * Exercise 6.25: Write a main function that takes two arguments.
 * Concatenate the supplied arguments and print the resulting string.
 */

#include <iostream>
#include <string>

int main(int argc, char* argv[])
{
    std::string result;
    for (int i = 0; i != argc; ++i)
    {
        result += argv[i];
        if (i != argc - 1)
            result += " ";
    }
    std::cout << result << std::endl;
    return 0;
}
