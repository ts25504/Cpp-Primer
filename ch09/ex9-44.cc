/*
 * Exercise 9.44: Rewrite the previous function using an index and replace.
 */

#include <string>
#include <iostream>

void func(std::string& s, const std::string& oldVal, const std::string& newVal)
{
    for (auto i = 0; i != s.size(); ++i)
    {
        if (s.substr(i, oldVal.size()) == oldVal)
        {
            s.replace(i, oldVal.size(), newVal);
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
