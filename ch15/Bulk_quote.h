/*
 * Exercise 15.5: Define your own version of the Bulk_quote class.
 * Exercise 15.15: Define your own versions of Disc_quote and Bulk_quote.
 */

#ifndef Bulk_quote_h
#define Bulk_quote_h

#include "Disc_quote.h"

class Bulk_quote : public Disc_quote {
public:
    Bulk_quote() = default;
    Bulk_quote(const std::string&, double, std::size_t, double);
    double net_price(std::size_t) const override;
    void debug() const override;
private:
    std::size_t min_qty = 0;
    double discount = 0.0;
};

Bulk_quote::Bulk_quote(const std::string& book, double p, std::size_t qty,
                       double disc) :
    Disc_quote(book, p, qty, disc), min_qty(qty), discount(disc) { }

double Bulk_quote::net_price(std::size_t cnt) const
{
    if (cnt >= min_qty)
        return cnt * (1 - discount) * price;
    else
        return cnt * price;
}

void Bulk_quote::debug() const
{
    std::cout << "ISBN: " << isbn() << std::endl
              << "Price: " << price << std::endl
              << "Discount: " << discount << std::endl
              << "Min qty: " << min_qty << std::endl;
}

#endif
