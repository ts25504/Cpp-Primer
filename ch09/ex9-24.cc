/*
 * Exercise 9.24: Write a program that fetches the first element in a vector using at, the subscript operator, front, and begin. Test your program on an empty vector.
 */

#include <iostream>
#include <vector>

int main()
{
    std::vector<int> ivec(10);
    int i1 = ivec.at(0);
    int i2 = ivec[0];
    int i3 = ivec.front();
    int i4 = *ivec.begin();
    std::cout << i1 << " " << i2 << " " << i3 << " " << i4 << std::endl;
    return 0;
}
