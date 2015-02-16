/*
 * Exercise 10.32: Rewrite the bookstore problem from § 1.6 (p. 24) using a vector to hold the transactions and various algorithms to do the processing. Use sort with your compareIsbn function from § 10.3.1 (p. 387) to arrange the transactions in order, and then use find and accumulate to do the sum.
 */

#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include "../include/Sales_item.h"

int main()
{
    std::istream_iterator<Sales_item> in_iter(std::cin), eof;
    std::vector<Sales_item> si_vec(in_iter, eof);
    std::vector<Sales_item>::iterator curr_iter, end_iter;

    std::sort(si_vec.begin(), si_vec.end(), compareIsbn);
    curr_iter = si_vec.begin();

    while (curr_iter != si_vec.end())
    {
        end_iter = std::find_if(curr_iter, si_vec.end(),
                [curr_iter](const Sales_item& item)
                    { return item.isbn() != curr_iter->isbn(); });
        std::cout <<
            std::accumulate(curr_iter, end_iter, Sales_item(curr_iter->isbn()))
            << std::endl;
        curr_iter = end_iter;
    }
    return 0;
}
