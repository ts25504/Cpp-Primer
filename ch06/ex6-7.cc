/*
 * Exercise 6.7: Write a function that returns 0 when it is first called and then generates numbers in sequence each time it is called again.
 */

#include <iostream>

int func()
{
    static int called_times = 0;
    return called_times++;
}
int main()
{
    for (int i = 0; i < 5; ++i)
        std::cout << func() << std::endl;
    return 0;
}
