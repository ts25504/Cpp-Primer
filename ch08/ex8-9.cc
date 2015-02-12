/*
 * Exercise 8.9: Use the function you wrote for the first exercise in § 8.1.2
 * (p. 314) to print the contents of an istringstream object.
 */

#include <iostream>
#include <sstream>
#include <string>

std::istream& func(std::istream& is)
{
    std::string buf;
    while (is >> buf)
        std::cout << buf << std::endl;
    is.clear();
    return is;
}

int main()
{
    std::istringstream iss("hello");
    func(iss);
    return 0;
}
