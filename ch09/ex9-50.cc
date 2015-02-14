/*
 * Exercise 9.50: Write a program to process a vector<string>s whose elements represent integral values. Produce the sum of all the elements in that vector. Change the program so that it sums of strings that represent floating-point values.
 */

#include <iostream>
#include <string>
#include <vector>

int sum_i(const std::vector<std::string>& v)
{
    int sum = 0;
    for (auto& s : v)
    {
        sum += std::stoi(s);
    }
    return sum;
}

double sum_f(const std::vector<std::string>& v)
{
    double sum = 0;
    for (auto& s: v)
    {
        sum += std::stod(s);
    }
    return sum;
}

int main()
{
    std::vector<std::string> svec{"1", "2", "3", "4", "5"};
    std::cout << sum_i(svec) << std::endl;
    std::cout << sum_f(svec) << std::endl;
    return 0;
}
