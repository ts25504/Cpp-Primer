/*
 * Exercise 8.7: Revise the bookstore program from the previous section to write its output to a file. Pass the name of that file as a second argument to main.
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
