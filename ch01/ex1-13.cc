#include <iostream>

void ex1_9()
{
    int sum = 0;

    for (int num = 50; num <= 100; ++num)
        sum += num;
    std::cout << sum << std::endl;
}

void ex1_10()
{
    for (int i = 10; i >= 0; --i)
        std::cout << i << std::endl;
}

void ex1_11()
{
    int left = 0, right = 0;

    std::cin >> left >> right;
    if (left > right)
    {
        int temp = left;
        left = right;
        right = temp;
    }

    for (int i = left; i <= right; ++i)
        std::cout << i << std::endl;
}
int main()
{
    ex1_9();
    ex1_10();
    ex1_11();

    return 0;
}
