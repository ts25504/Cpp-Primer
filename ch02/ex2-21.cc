/*
 * Exercise 2.21: Explain each of the following definitions. Indicate whether 
 * any are illegal and, if so, why.
 * int i = 0;
 * (a) double* dp = &i;
 * (b) int *ip = i;
 * (c) int *p = &i;
 */

#include <iostream>

int main()
{
    int i = 0;

    double* dp = &i; // error: cannot initialize a variable of type 'double *' with an rvalue of type 'int *'
    int *ip = i; // error: cannot initialize a variable of type 'int *' with an lvalue of type 'int'
    int *p = &i;

    return 0;
}
