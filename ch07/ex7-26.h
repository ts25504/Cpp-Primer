/*
 * Exercise 7.26: Define Sales_data::avg_price as an inline function.
 */

#ifndef EX_7_26_H
#define EX_7_26_H

#include <string>
#include <iostream>

class Sales_data {
    friend Sales_data add(const Sales_data& lhs, const Sales_data& rhs);
    friend std::istream& read(std::istream& is, Sales_data& item);
    friend std::ostream& print(std::ostream& os, const Sales_data& item);
public:
    Sales_data() = default;
    Sales_data(const std::string& s) : bookNo(s) { }
    Sales_data(const std::string& s, unsigned n, double p) :
               bookNo(s), units_sold(n), revenue(p*n) { }
    Sales_data(std::istream&);
    std::string isbn() const { return bookNo; };
    Sales_data& combine(const Sales_data&);
private:
    double avg_price() const;
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

std::ostream& print(std::ostream& os, const Sales_data& item)
{
    os << item.isbn() << " " << item.units_sold << " "
       << item.revenue << std::endl;
}

Sales_data::Sales_data(std::istream& is)
{
    read(is, *this);
}

inline double Sales_data::avg_price() const
{
    return units_sold ? revenue / units_sold : 0;
}
#endif
