/*
 * Exercise 13.30: Write and test a swap function for your valuelike version
 * of HasPtr. Give your swap a print statement that notes when it is executed.
 * Exercise 13.31: Give your class a < operator and define a vector of HasPtrs. Give that vector some elements and then sort the vector. Note when swap is called.
 */

#include <iostream>
#include <vector>
#include <algorithm>
#include "HasPtr.h"

int main()
{
    HasPtr h1("dd");
    HasPtr h2("aa");
    HasPtr h3("bb");

    std::vector<HasPtr> v = {h1, h2, h3};
    std::sort(v.begin(), v.end());
    return 0;
}

