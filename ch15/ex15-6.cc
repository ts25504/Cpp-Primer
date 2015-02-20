/*
 * Exercise 15.6: Test your print_total function from the exercises in § 15.2.1 (p. 595) by passing both Quote and Bulk_quote objects o that function.
 */

#include <iostream>
#include "Bulk_quote.h"

double print_total(std::ostream& os, const Quote& item, size_t n)
{
    double ret = item.net_price(n);
    os << "ISBN: " << item.isbn() << " # sold: " << n << " total due: "
       << ret << std::endl;
    return ret;
}

int main()
{
    Quote quote("ts", 100.0);
    Bulk_quote bulk_quote("tss", 50.0, 10, 0.5);
    print_total(std::cout, quote, 10);
    print_total(std::cout, bulk_quote, 10);
    return 0;
}
