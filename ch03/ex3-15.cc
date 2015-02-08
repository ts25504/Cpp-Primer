/*
 * Exercise 3.15: Repeat the previous program but read strings this time.
 */

#include <iostream>
#include <vector>
#include <string>

int main()
{
    std::vector<std::string> svec;
    std::string s;

    while (std::cin >> s)
        svec.push_back(s);

    for (auto iter = svec.begin(); iter != svec.end(); ++iter)
        std::cout << *iter << " ";
    std::cout << std::endl;
    return 0;
}
