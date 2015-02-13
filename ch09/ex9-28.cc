/*
 * Exercise 9.28: Write a function that takes a forward_list<string> and two additional string arguments. The function should find the first string and insert the second immediately following the first. If the first string is not found, then insert the second string at the end of the list.
 */

#include <iostream>
#include <forward_list>
#include <string>

void func(std::forward_list<std::string>& flst,
          const std::string& s1,
          const std::string& s2)
{
    auto prev = flst.before_begin();
    for (auto curr = flst.begin(); curr != flst.end(); prev = curr++)
    {
        if (*curr == s1)
        {
            flst.insert_after(curr, s2);
            return;
        }
    }
    flst.insert_after(prev, s2);
}

int main()
{
    std::forward_list<std::string> flst = {"hello", "world", "tang", "sheng"};
    func(flst, "t", "sheng");
    for (const auto& s : flst)
        std::cout << s << std::endl;
    return 0;
}
