/*
 * Exercise 15.3: Define your own versions of the Quote class and the print_total function.
 */

#ifndef Quote_h
#define Quote_h

#include <string>
#include <iostream>

class Quote {
public:
    Quote() = default;
    Quote(const std::string& book, double sales_price) :
        bookNo(book), price(sales_price) { }
    std::string isbn() const { return bookNo; }
    virtual double net_price(std::size_t n) const { return n * price; }
    virtual void debug() const;
    virtual ~Quote() = default;
private:
    std::string bookNo;
protected:
    double price = 0.0;
};

void Quote::debug() const
{
    std::cout << "ISBN: " << bookNo << std::endl
              << "Price: " << price << std::endl;
}

#endif
