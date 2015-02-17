/*
 * Exercise 11.23: Rewrite the map that stored vectors of children’s names with a key that is the family last name for the exercises in § 11.2.1 (p. 424) to use a multimap.
 */

#include <map>
#include <string>
#include <iostream>

int main()
{
    std::multimap<std::string, std::string> family_map;
    for (std::string last_name, child_name; std::cin >> child_name >> last_name;
            family_map.emplace(last_name, child_name));
    for (const auto& s : family)
        std::cout << s.second << " " << s.first << std::endl;
    return 0;
}
