/*
 * Exercise 10.12: Write a function named compareIsbn that compares the isbn() members of two Sales_data objects. Use that function to sort a vector that holds Sales_data objects.
 */

#include <iostream>
#include <numeric>
#include <vector>
#include "../ch07/ex7-26.h"

bool compareIsbn(const Sales_data& item1, const Sales_data& item2)
{
    return item1.isbn() == item2.isbn();
}

int main()
{
    std::vector<Sales_data> sales_data_vec{Sales_data("0-101-78345"),
        Sales_data("0-101-78356"), Sales_data("0-101-78347"),
        Sales_data("0-101-78348"), Sales_data("0-101-78349")};
    std::sort(sales_data_vec.begin(), sales_data_vec.end(), compareIsbn);
    for (const auto& item : sales_data_vec)
        print(std::cout ,item);
    return 0;
}
