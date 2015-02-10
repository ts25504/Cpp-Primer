/*
 * Exercise 6.4: Write a function that interacts with the user, asking for a number and generating the factorial of that number. Call this function from main.
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
    int val = 0;
    int res = 0;
    std::cin >> val;
    res = fact(val);
    std::cout << val << "! = " << res << std::endl;
    return 0;
}
