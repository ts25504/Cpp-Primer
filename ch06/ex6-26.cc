/*
 * Exercise 6.26: Write a program that accepts the options presented in this
 * section. Print the values of the arguments passed to main.
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
