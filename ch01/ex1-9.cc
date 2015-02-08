/*
 * Exercise 1.9: Write a program that uses a while to sum the numbers
 * from 50 to 100.
 */

#include <iostream>

int main()
{
    int sum = 0;
    int num = 50;

    while (num <= 100)
    {
        sum += num;
        num++;
    }

    std::cout << "The sum is " << sum << std::endl;

    return 0;
}
