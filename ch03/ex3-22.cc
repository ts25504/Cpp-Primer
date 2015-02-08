/*
 * Exercise 3.22: Revise the loop that printed the first paragraph in text to instead change the elements in text that correspond to the first paragraph to all uppercase. After you’ve updated text, print its contents.
 */

#include <iostream>
#include <string>
#include <vector>

int main()
{
    std::vector<std::string> vec;
    std::string s;
    while (getline(std::cin, s))
        if (!s.empty())
            vec.push_back(s);

    auto beg_iter = vec.begin();
    for (auto& c : *beg_iter)
        c = toupper(c);

    for (auto iter = vec.begin(); iter != vec.end(); ++iter)
        std::cout << *iter << std::endl;
    return 0;
}

