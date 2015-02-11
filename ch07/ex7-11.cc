/*
 * Exercise 7.11: Add constructors to your Sales_data class and write a
 * program to use each of the constructors.
 */

#include "ex7-12.h"

int main()
{
    Sales_data item1;
    print(std::cout, item1);

    Sales_data item2("0-201-78345-X");
    print(std::cout, item2);

    Sales_data item3("0-201-78345-X", 3, 20.00);
    print(std::cout, item3);

    Sales_data item4(std::cin);
    print(std::cout, item4);

    return 0;
}
