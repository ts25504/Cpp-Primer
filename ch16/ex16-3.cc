/*
 * Exercise 16.3: Call your compare function on two Sales_data objects to see how your compiler handles errors during instantiation.
 */

#include <iostream>
#include "../ch14/Sales_data.h"

template <typename T>
int compare(const T& v1, const T& v2)
{
    if (v1 < v2) return -1;
    if (v2 < v1) return 1;
    return 0;
}

int main()
{
    Sales_data item1("0-101-78345");
    Sales_data item2("0-101-78346");
    std::cout << compare(item1, item2) << std::endl;
    return 0;
}
