/*
 * Exercise 8.8: Revise the program from the previous exercise to append its output to its given file. Run the program on the same output file at least twice to ensure that the data are preserved.
 */

#include <iostream>
#include <fstream>
#include "../ch07/ex7-26.h"

int main(int argc, char** argv)
{
    std::ifstream input(argv[1], std::ofstream:app);
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
