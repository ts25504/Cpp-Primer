/*
 * Exercise 11.31: Write a program that defines a multimap of authors and their works. Use find to find an element in the multimap and erase that element. Be sure your program works correctly if the element you look for is not in the map.
 */

#include <map>
#include <iostream>
#include <string>

int main()
{
    std::multimap<std::string, std::string> authors{
        {"kr", "C"},
        {"mayer", "effectiveCPP"},
        {"lcx", "SanTi"}
    };
    std::string author = "lcx";
    std::string work = "SanTi";

    auto found = authors.find(author);
    auto cnt = authors.count(author);
    while (cnt)
    {
        if (found->second == work)
        {
            authors.erase(found);
            break;
        }
        ++found;
        --cnt;
    }

    for (const auto& author : authors)
        std::cout << author.first << " " << author.second << std::endl;
    return 0;
}
