/*
 * Exercise 6.55: Write four functions that add, subtract, multiply, and divide two int values. Store pointers to these values in your vector from the previous exercise.
 */

#include <vector>

using p_func = int (*)(int, int);

int add(int a, int b)
{
    return a + b;
}

int subtract(int a, int b)
{
    return a - b;
}

int multiply(int a, int b)
{
    return a * b;
}

int divide(int a, int b)
{
    return b != 0 ? a / b : 0;
}

int main()
{
    std::vector<p_func> fvec;
    fvec.push_back(add);
    fvec.push_back(subtract);
    fvec.push_back(multiply);
    fvec.push_back(divide);
    return 0;
}
