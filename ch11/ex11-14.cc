/*
 * Exercise 11.14: Extend the map of children to their family name that you wrote for the exercises in § 11.2.1 (p. 424) by having the vector store a pair that holds a child’s name and birthday.
 */

#include <map>
#include <vector>
#include <string>
#include <iostream>
#include <utility>

void add_new_family(
        const std::string& last_name,
        const std::vector<std::pair<std::string, std::string> >& names,
        std::map<std::string,
            std::vector<std::pair<std::string, std::string>> >& family_map)
{
    family_map[last_name] = names;
}

void add_new_children(
        const std::string& last_name,
        const std::string& children_name,
        const std::string& birthday,
        std::map<std::string,
            std::vector<std::pair<std::string, std::string>> >& family_map)
{
    family_map[last_name].push_back(make_pair(children_name, birthday));
}

int main()
{
    std::map<std::string,
        std::vector<std::pair<std::string, std::string>> > family_map;
    std::vector<std::pair<std::string, std::string> > names =
        {{"Tang Sheng", "1993-1-18"}, {"Tang SuiJiang", "1956-7-2"}};
    add_new_family("Tang", names, family_map);
    add_new_children("Tang", "Tang Hai", "1991-10-2", family_map);
    for (const auto& name : family_map["Tang"])
        std::cout << name.first << " " << name.second << std::endl;
    return 0;
}
