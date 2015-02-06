#include <iostream>

int main()
{
    int left = 0, right = 0;

    std::cin >> left >> right;
    while (left <= right)
    {
        std::cout << left++ << std::endl;
    }

    return 0;
}
