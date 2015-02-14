/*
 * Exercise 9.46: Rewrite the previous exercise using a position and length string insert to manage the s. This time use only the function.
 */

#include <iostream>
#include <string>

void func(std::string& name, const std::string& prefix, const std::string& suffix)
{
    name.insert(0, prefix);
    name.insert(name.size(), suffix);
}

int main()
{
    std::string name{"James"};
    func(name, "Mr.", "III");
    std::cout << name << std::endl;
    return 0;
}
