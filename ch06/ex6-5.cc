/*
 * Exercise 6.5: Write a function to return the absolute value of its argument.
 */

#include <iostream>

int _abs(int num)
{
    return num >= 0 ? num : num * -1;
}

int main()
{
    int num = 0;
    std::cin >> num;
    std::cout << _abs(num) << std::endl;
    return 0;
}
