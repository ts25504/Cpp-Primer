/*
 * Exercise 15.15: Define your own versions of Disc_quote and Bulk_quote.
 */

#ifndef Disc_quote_h
#define Disc_quote_h

#include "Quote.h"

class Disc_quote : public Quote {
public:
    Disc_quote() = default;
    Disc_quote(const std::string& book, double price,
               std::size_t qty, double disc) :
        Quote(book, price), quantity(qty), discount(disc) { }
    double net_price(std::size_t) const = 0;
    void debug() const override;
protected:
    std::size_t quantity = 0;
    double discount = 0.0;
};

void Disc_quote::debug() const
{
    std::cout << "ISBN: " << isbn() << std::endl
              << "Price: " << price << std::endl
              << "Quantity: " << quantity << std::endl
              << "Discount: " << discount << std::endl;
}
#endif
