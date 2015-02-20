/*
 * Exercise 15.28: Define a vector to hold Quote objects but put Bulk_quote objects into that vector. Compute the total net_price of all the elements in the vector.
 */

#include <iostream>
#include <vector>
#include <memory>
#include "Bulk_quote.h"
#include "Quote.h"

int main()
{
    std::vector<std::shared_ptr<Quote>> quote_vec;
    double total_price = 0.0;
    Bulk_quote bq1("book1", 100.0, 5, 0.5);
    Bulk_quote bq2("book2", 50.0, 5, 0.8);
    Bulk_quote bq3("book3", 80.0, 5, 0.7);
    quote_vec.push_back(std::make_shared<Bulk_quote>(bq1));
    quote_vec.push_back(std::make_shared<Bulk_quote>(bq2));
    quote_vec.push_back(std::make_shared<Bulk_quote>(bq3));
    for (const auto& bq : quote_vec)
    {
        total_price += bq->net_price(10);
    }
    std::cout << total_price << std::endl;
    return 0;
}
