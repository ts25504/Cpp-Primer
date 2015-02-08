/*
 * Exercise 1.16: Write your own version of a program that prints the sum
 * of a set of integers read from cin.
 */

#include <iostream>

int main()
{
    int limit = 0, num = 0, sum = 0;

    std::cin >> limit;
    for (int i = 0; i < limit; ++i)
    {
        std::cin >> num;
        sum += num;
    }
    std::cout << sum << std::endl;

    return 0;
}
