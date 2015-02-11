/*
 * Exercise 7.41: Rewrite your own version of the Sales_data class to use delegating constructors. Add a statement to the body of each of the constructors that prints a message whenever it is executed. Write declarations to construct a Sales_data object in every way possible. Study the output until you are certain you understand the order of execution among delegating constructors.
 */

#ifndef EX_7_41_H
#define EX_7_41_H

#include <string>
#include <iostream>

class Sales_data {
    friend Sales_data add(const Sales_data& lhs, const Sales_data& rhs);
    friend std::istream& read(std::istream& is, Sales_data& item);
    friend std::ostream& print(std::ostream& os, const Sales_data& item);
public:
    Sales_data(const std::string &s, unsigned n, double p):bookNo(s),units_sold(n),revenue(n*p)
    { std::cout << "Sales_data(const std::string&, unsigned, double)" << std::endl; }

    Sales_data() : Sales_data("", 0, 0.0f)
    { std::cout << "Sales_data()" << std::endl; }

    Sales_data(const std::string &s) : Sales_data(s, 0, 0.0f)
    { std::cout << "Sales_data(const std::string&)" << std::endl; }

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
