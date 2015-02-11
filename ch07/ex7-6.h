/*
 * Exercise 7.6: Define your own versions of the add, read, and print
 * functions.
 */

#ifndef EX_7_6_H
#define EX_7_6_H

#include <string>
#include <iostream>

struct Sales_data {
    std::string isbn() const { return bookNo; };
    Sales_data& combine(const Sales_data&);

    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};

Sales_data& Sales_data::combine(const Sales_data& rhs)
{
    units_sold += rhs.units_sold;
    revenue += rhs.revenue;
    return *this;
}

Sales_data add(const Sales_data& lhs, const Sales_data& rhs)
{
    Sales_data sum = lhs;
    sum.combine(rhs);
    return sum;
}

std::istream& read(std::istream& is, Sales_data& item)
{
    double price = 0;
    is >> item.bookNo >> item.units_sold >> price;
    item.revenue = price * item.units_sold;
    return is;
}

std::ostream& print(std::ostream& os, Sales_data& item)
{
    os << item.isbn() << " " << item.units_sold << " "
       << item.revenue << std::endl;
}
#endif
