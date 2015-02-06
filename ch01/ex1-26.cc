#include <iostream>
#include "../include/Sales_items.h"

int main()
{
    Sales_item total;
    if (std::cin >> total)
    {
        Sale_item trans;
        while (std::cin >> trans)
        {
            if (total.isbn() == trans.isbn())
                total += trans;
            else
            {
                std::cout << total << std::endl;
                total = trans;
            }
        }
        std::cout << total << std::endl;
    }
    else
    {
        std::cout << "No data?!" << std::endl;
        return -1
    }
    return 0;
}
