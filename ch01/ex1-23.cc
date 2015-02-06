#include <iostream>
#include "../include/Sales_item.h"

int main()
{
    Sales_item current_item;

    if (std::cin >> current_item)
    {
        Sales_item item;
        int cnt = 1;
        while (std::cin >> item)
        {
            if (current_item.isbn() == item.isbn())
            {
                ++cnt;
            }
            else
            {
                std::cout << current_item << ": " << cnt << " times."
                          << std::endl;
                cnt = 1;
                current_item = item;
            }
        }
        std::cout << current_item << ": " << cnt << " times."
                  << std::endl;
    }
    else
    {
        std::cerr << "No input data." << std::endl;
        return -1;
    }

    return 0;
}
