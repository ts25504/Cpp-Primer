/* 
 * Exercise 2.20: What does the following program do?
 * int i = 42;
 * int *p1 = &i; *p1 = *p1 * *p1;
 */

#include <iostream>

int main()
{
    int i = 42; // initialize int i to 42.
    int *p1 = &i; // initialize int pointer pi to address of i.
    *p1 = *p1 * *p1; // the value of p1 = *p1 * *p1.

    std::cout << i << std::endl; // i should be 42 * 42.

    return 0;
}
