/*
 * Exercise 10.2: Repeat the previous program, but read values into a list of strings.
 */

#include <algorithm>
#include <list>
#include <string>
#include <iostream>

int main()
{
    std::list<std::string> li{"1", "2", "2", "3", "3", "3"};
    std::cout << std::count(li.cbegin(), li.cend(), "3") << std::endl;
    return 0;
}
