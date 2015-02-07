/*
 * Exercise 2.35: Determine the types deduced in each of the following
 * definitions. Once you’ve figured out the types, write a program to
 * see whether you were correct.
 */

#include <iostream>
#include <typeinfo>

int main()
{
    const int i = 42;
    auto j = i;
    const auto& k = i;
    auto* p = &i;
    const auto j2 = i, &k2 = i;

    std::cout << "j is " << typeid(j).name() << std::endl
              << "k is " << typeid(k).name() << std::endl
              << "p is " << typeid(k).name() << std::endl
              << "j2 is " << typeid(j2).name() << std::endl
              << "k2 is " << typeid(k2).name() << std::endl;

    return 0;
}
