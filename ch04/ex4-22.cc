/*
 * Exercise 4.22: Extend the program that assigned high pass, pass, and fail grades to also assign low pass for grades between 60 and 75 inclusive. Write two versions: One version that uses only conditional operators; the other should use one or more if statements. Which version do you think is easier to understand and why?
 */

#include <iostream>

int main()
{
    unsigned grade;
    while (std::cin >> grade)
    {
        std::cout << ((grade > 90) ? "hign pass"
                                   : (grade < 60) ? "fail"
                                                  : (grade < 75) ? "low pass"
                                                                 : "pass");
        std::cout << endl;
        if (grade > 90)
            std::cout << "high pass";
        else if (grade < 60)
            std::cout << "fail";
        else if (grade < 75)
            std::cout << "low pass";
        else
            std::cout << "pass";
        std::cout << std::endl;
    }
    return 0;
}
