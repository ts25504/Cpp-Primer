/*
 * Exercise 6.56: Call each element in the vector and print their result.
 */

#include <iostream>
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

    for (auto f : fvec)
    {
        std::cout << f(4, 2) << std::endl;
    }
    return 0;
}
