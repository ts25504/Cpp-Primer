/*
 * Exercise 14.2: Write declarations for the overloaded input, output, addition, and compound-assignment operators for Sales_data.
 * Exercise 14.6: Define an output operator for your Sales_data class.
 * Exercise 14.9: Define an input operator for your Sales_data class.
 * ......
 */

#ifndef EX_7_26_H
#define EX_7_26_H

#include <string>
#include <iostream>

class Sales_data {
    friend Sales_data add(const Sales_data& lhs, const Sales_data& rhs);
    friend std::istream& read(std::istream& is, Sales_data& item);
    friend std::ostream& print(std::ostream& os, const Sales_data& item);
    friend Sales_data operator+(const Sales_data& lhs, const Sales_data& rhs);
    friend std::istream& operator>>(std::istream& is, Sales_data& item);
    friend std::ostream& operator<<(std::ostream& os, const Sales_data& item);
    friend bool operator==(const Sales_data& lhs, const Sales_data& rhs);
    friend bool operator!=(const Sales_data& lhs, const Sales_data& rhs);
public:
    Sales_data() = default;
    Sales_data(const std::string& s) : bookNo(s) { }
    Sales_data(const std::string& s, unsigned n, double p) :
               bookNo(s), units_sold(n), revenue(p*n) { }
    Sales_data(std::istream&);
    std::string isbn() const { return bookNo; };
    Sales_data& combine(const Sales_data&);
    Sales_data& operator+=(const Sales_data& rhs);
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
    return os;
}

Sales_data& Sales_data::operator+=(const Sales_data& rhs)
{
    units_sold += rhs.units_sold;
    revenue += rhs.revenue;
    return *this;
}

Sales_data operator+(const Sales_data& lhs, const Sales_data& rhs)
{
    Sales_data sum = lhs;
    sum.combine(rhs);
    return sum;
}
std::istream& operator>>(std::istream& is, Sales_data& item)
{
    double price = 0;
    is >> item.bookNo >> item.units_sold >> price;
    item.revenue = price * item.units_sold;
    return is;
}

std::ostream& operator<<(std::ostream& os, const Sales_data& item)
{
    os << item.isbn() << " " << item.units_sold << " "
       << item.revenue << std::endl;
    return os;
}

bool operator==(const Sales_data& lhs, const Sales_data& rhs)
{
    return lhs.isbn() == rhs.isbn() &&
           lhs.units_sold == rhs.units_sold &&
           lhs.revenue == rhs.revenue;
}

bool operator!=(const Sales_data& lhs, const Sales_data& rhs)
{
    return !(lhs == rhs);
}

Sales_data::Sales_data(std::istream& is)
{
    read(is, *this);


inline double Sales_data::avg_price() const
{
    return units_sold ? revenue / units_sold : 0;
}
#endif
