/*
 * Exercise 11.10: Could we define a map from vector<int>::iterator to int?
 * What about from list<int>::iterator to int? In each case, if not, why not?
 */

#include <iostream>
#include <map>
#include <string>
#include <list>
#include <algorithm>
#include <vector>

int main()
{
    std::map<std::vector<int>::iterator, int> vi_map;
    std::map<std::list<int>::iterator, int> li_map;
    std::vector<int> v;
    vi_map.insert(std::pair<std::vector<int>::iterator, int>(v.begin(), 0));
    std::list<int> l;
    li_map.insert(std::pair<std::list<int>::iterator, int>(l.begin(), 0));
    return 0;
}
