/*
 * Exercise 7.13: Rewrite the program from page 255 to use the istream
constructor.
 */

#include "ex7-12.h"

int main()
{
    Sales_data total(std::cin);
    if (!total.isbn().empty())
    {
        std::istream& is = std::cin;
        while (is) {
            Sales_data trans(is);
            if (total.isbn() == trans.isbn())
                total.combine(trans);
            else {
                print(std::cout, total) << std::endl;
                total = trans;
            }
        }
    }
    else
    {
        std::cerr << "No data?!" << std::endl;
        return -1;
    }

    return 0;
}
