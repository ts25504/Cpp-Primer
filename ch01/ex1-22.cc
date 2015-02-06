#include <iostream>
#include "../include/Sales_item.h"

int main()
{
    Sales_item total_item;

    if (std::cin >> total_item)
    {
        Sales_item item;
        while (std::cin >> item)
        {
            if (total_item.isbn() == item.isbn())
                total_item += item;
            else
            {
                std::cout << total_item << std::endl;
                total_item = item;
            }
        }
        std::cout << total_item << std::endl;
    }
    else
    {
        std::cerr << "No input data!" << std::endl;
        return -1;
    }
    return 0;
}

