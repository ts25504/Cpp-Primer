/*
 * Exercise 11.7: Define a map for which the key is the family’s last name and the value is a vector of the children’s names. Write code to add new families and to add new children to an existing family.
 */

#include <map>
#include <vector>
#include <string>
#include <iostream>

void add_new_family(
        const std::string& last_name,
        const std::vector<std::string>& names,
        std::map<std::string, std::vector<std::string> >& family_map)
{
    family_map[last_name] = names;
}

void add_new_children(
        const std::string& last_name,
        const std::string& children_name,
        std::map<std::string, std::vector<std::string> >& family_map)
{
    family_map[last_name].push_back(children_name);
}

int main()
{
    std::map<std::string, std::vector<std::string> > family_map;
    std::vector<std::string> names{"Tang Sheng", "Tang SuiJiang"};
    add_new_family("Tang", names, family_map);
    add_new_children("Tang", "Tang Hai", family_map);
    for (const auto& name : family_map["Tang"])
        std::cout << name << std::endl;
    return 0;
}
