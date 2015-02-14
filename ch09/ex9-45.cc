/*
 * Exercise 9.45: Write a funtion that takes a string representing a name and two other strings representing a prefix, such as “Mr.” or “Ms.” and a suffix, such as “Jr.” or “III”. Using iterators and the insert and append functions, generate and return a new string with the suffix and prefix added to the given name.
 */

#include <iostream>
#include <string>

void func(std::string& name, const std::string& prefix, const std::string& suffix)
{
    name.insert(0, prefix);
    name.append(suffix);
}

int main()
{
    std::string name{"James"};
    func(name, "Mr.", "III");
    std::cout << name << std::endl;
    return 0;
}
