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
