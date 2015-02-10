/*
 * Exercise 6.17: Write a function to determine whether a string contains any capital letters. Write a function to change a string to all lowercase. Do the parameters you used in these functions have the same type? If so, why? If not, why not?
 */

#include <iostream>
#include <string>
#include <cctype>

bool check_capital_letters(const std::string& s)
{
    for (auto c : s)
    {
        if (std::isupper(c))
            return true;
    }
    return false;
}

void change_to_lowercase(std::string& s)
{
    for (auto& c : s)
    {
        if (std::isupper(c))
            c = std::tolower(c);
    }
}

int main()
{
    std::string s = "Hello, World.";
    if (check_capital_letters(s))
        change_to_lowercase(s);
    std::cout << s << std::endl;
    return 0;
}
