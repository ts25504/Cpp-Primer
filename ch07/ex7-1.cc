/*
Exercise 7.1: Write a version of the transaction-processing program from § 1.6 (p. 24) using the Sales_data class you defined for the exercises in § 2.6.1 (p. 72).
 */

#include <iostream>
#include <string>
using std::cin; using std::cout; using std::endl; using std::string;

struct Sales_data{
    string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};

int main()
{
    Sales_data total;
    if (cin >> total.bookNo >> total.units_sold >> total.revenue)
    {
        Sales_data trans;
        while (cin >> trans.bookNo >> trans.units_sold >> trans.revenue) {
            if (total.bookNo == trans.bookNo) {
                total.units_sold += trans.units_sold;
                total.revenue += trans.revenue;
            }
            else {
                cout << total.bookNo << " " << total.units_sold << " " << total.revenue << endl;
                total = trans;
            }
        }
        cout << total.bookNo << " " << total.units_sold << " " << total.revenue << endl;
    }
    else
    {
        std::cerr << "No data?!" << std::endl;
        return -1;
    }
    return 0;
}
