/*
 * Exercise 8.6: Rewrite the bookstore program from § 7.1.1 (p. 256) to read its transactions from a file. Pass the name of the file as an argument to main (§ 6.2.5, p. 218).
 */

#include <iostream>
#include <fstream>
#include "../ch07/ex7-26.h"

int main(int argc, char** argv)
{
    std::ifstream input(argv[1]);
    Sales_data total;
    if (read(input, total))
    {
        Sales_data trans;
        while (read(input, trans))
        {
            if (total.isbn() == trans.isbn())
                total.combine(trans);
            else
            {
                print(std::cout, total);
                total = trans;
            }
        }
        print(std::cout, total);
    }
    else
    {
        std::cerr << "No data?!" << std::endl;
    }
    return 0;
}
