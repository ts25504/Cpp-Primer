/*
 * Exercise 9.43: Write a function that takes three strings, s, oldVal, and newVal. Using iterators, and the insert and erase functions replace all instances of oldVal that appear in s by newVal. Test your function by using it to replace common abbreviations, such as “tho” by “though” and “thru” by “through”.
 */

#include <string>
#include <iostream>

void func(std::string& s, const std::string& oldVal, const std::string& newVal)
{
    for (auto i = 0; i != s.size(); ++i)
    {
        if (s.substr(i, oldVal.size()) == oldVal)
        {
            s.erase(i, oldVal.size());
            s.insert(i, newVal);
        }
    }
}

int main()
{
    std::string s{"To drive straight thru is a foolish, tho courageous act."};
    func(s, "tho", "though");
    func(s, "thru", "though");
    std::cout << s << std::endl;
    return 0;
}
