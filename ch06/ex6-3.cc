/*
 * Exercise 6.3: Write and test your own version of fact.
 */

#include <iostream>

int fact(int val)
{
    if (val == 0 || val == 1)
        return 1;
    else
        return val * fact(val -1);
}

int main()
{
    int res = fact(5);
    std::cout << "5!: " << res << std::endl;
    return 0;
}
