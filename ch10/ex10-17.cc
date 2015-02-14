/*
 * Exercise 10.17: Rewrite exercise 10.12 from § 10.3.1 (p. 387) to use a lambda in the call to sort instead of the compareIsbn function.
 */

#include <iostream>
#include <numeric>
#include <vector>
#include "../ch07/ex7-26.h"

int main()
{
    std::vector<Sales_data> sales_data_vec{Sales_data("0-101-78345"),
        Sales_data("0-101-78356"), Sales_data("0-101-78347"),
        Sales_data("0-101-78348"), Sales_data("0-101-78349")};
    std::sort(sales_data_vec.begin(), sales_data_vec.end(),
            [](const Sales_data& item1, const Sales_data& item2)
                { return item1.isbn() < item2.isbn(); });
    for (const auto& item : sales_data_vec)
        print(std::cout ,item);
    return 0;
}
