/*
 * Exercise 1.10: In addition to the ++ operator that adds 1 to its operand, there is a decrement operator (--) that subtracts 1. Use the decrement operator to write a while that prints the numbers from ten down to zero.
 */

#include <iostream>

int main()
{
    int num = 11;

    while (num--)
        std::cout << num << std::endl;

    return 0;
}
