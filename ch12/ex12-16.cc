/*
 * Exercise 12.16: Compilers don’t always give easy-to-understand error messages if we attempt to copy or assign a unique_ptr. Write a program that contains these errors to see how your compiler diagnoses them.
 */

#include <memory>

int main()
{
    std::unique_ptr<int> ip(new int (10));
    std::unique_ptr<int> ip2(ip);
    return 0;
}
