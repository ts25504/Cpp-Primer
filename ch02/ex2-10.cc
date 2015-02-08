/*
 * Exercise 2.10: What are the initial values, if any, of each of the following variables?
 */

#include <iostream>
#include <string>

std::string global_str;
int global_int;

int main()
{
    int local_int;
    std::string local_str;

    std::cout << global_str << std::endl << global_int << std::endl
              << local_int << std::endl << local_str << std::endl;
    return 0;
}
