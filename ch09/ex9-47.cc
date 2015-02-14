/*
 * Exercise 9.47: Write a program that finds each numeric character and then each alphabetic character in the string "ab2c3d7R4E6". Write two versions of the program. The first should use find_first_of, and the second find_first_not_of.
 */

#include <iostream>
#include <string>

int main()
{
    std::string numbers{"1234567890"};
    std::string alphabet{"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    std::string s{"ab2c3d7R4E6"};

    for (std::string::size_type pos = 0;
         (pos = s.find_first_of(numbers, pos)) != std::string::npos; ++pos)
        std::cout << s[pos] << std::endl;

    for (std::string::size_type pos = 0;
         (pos = s.find_first_of(alphabet, pos)) != std::string::npos; ++pos)
        std::cout << s[pos] << std::endl;

    for (std::string::size_type pos = 0;
         (pos = s.find_first_not_of(alphabet, pos)) != std::string::npos; ++pos)
        std::cout << s[pos] << std::endl;

    for (std::string::size_type pos = 0;
         (pos = s.find_first_not_of(alphabet, pos)) != std::string::npos; ++pos)
        std::cout << s[pos] << std::endl;

    return 0;
}
