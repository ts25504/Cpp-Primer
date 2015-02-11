/*
 * Exercise 7.7: Rewrite the transaction-processing program you wrote for the exercises in § 7.1.2 (p. 260) to use these new functions.
 */

#include <iostream>
#include "ex7-6.h"

int main()
{
    Sales_data total;

    if (read(std::cin, total))
    {
        Sales_data trans;
        while (read(std::cin, trans))
        {
            if (total.isbn() == trans.isbn())
            {
                add(total, trans);
            }
            else
            {
                print(std::cout, total);
                total = trans;
            }
        }
        print(std::cout, total);
    }
    else
    {
        std::cerr << "No data?!" << std::endl;
        return -1;
    }
    return 0;
}
