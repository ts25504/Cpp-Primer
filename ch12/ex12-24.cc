/*
 * Exercise 12.24: Write a program that reads a string from the standard input into a dynamically allocated character array. Describe how your program handles varying size inputs. Test your program by giving it a string of data that is longer than the array size you’ve allocated.
 */

#include <iostream>

int main()
{
    int size = 0;
    std::cin >> size;
    char* st = new char[size+1]();
    std::cin.ignore();
    std::cin.get(st, size+1);
    std::cout << st << std::endl;
    delete[] st;
    return 0;
}
