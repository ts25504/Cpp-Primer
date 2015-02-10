/*
 * Exercise 5.25: Revise your program from the previous exercise to use a try block to catch the exception. The catch clause should print a message to the user and ask them to supply a new number and repeat the code inside the try.
 */

#include <iostream>
#include <stdexcept>

int main()
{
    int num1, num2;
    while (std::cin >> num1 >> num2)
    {
        try {
            if (num2 == 0)
                throw std::runtime_error("divisor is 0");
            std::cout << static_cast<double>(num1) / num2 << std::endl;
            break;
        } catch (std::runtime_error err) {
            std::cout << err.what() << std::endl;
            std::cout << "Please try again." << std::endl;
        }
    }
    return 0;
}
