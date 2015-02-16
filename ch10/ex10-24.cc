/*
 * Exercise 10.24: Use bind and check_size to find the first element in a vector of ints that has a value greater than the length of a specified string value.
 */

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <functional>

bool check_size(const std::string& s, int sz)
{
    return static_cast<int>(s.size()) < sz;
}

int main()
{
    std::vector<int> ivec{1, 2, 3, 4, 5, 6, 7};
    std::string s = "ts";
    auto iter = std::find_if(ivec.begin(), ivec.end(),
        std::bind(check_size, s, std::placeholders::_1));
    std::cout << *iter << std::endl;
    return 0;
}
