/*
 * Exercise 11.18: Write the type of map_it from the loop on page 430 without using auto or decltype.
 */

#include <map>
#include <iostream>
#include <string>

int main()
{
    std::map<std::string, size_t> word_count;
    std::map<std::string, size_t>::const_iterator map_it = word_count.cbegin();
    while (map_it != word_count.cend())
    {
        std::cout << map_it->first << " occurs "
                  << map_it->second << " times" << std::endl;
        ++map_it;
    }
    return 0;
}
