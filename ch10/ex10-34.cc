/*
 * Exercise 10.34: Use reverse_iterators to print a vector in reverse order.
 */

#include <iostream>
#include <vector>

int main()
{
    std::vector<int> ivec{1, 2, 3, 4, 5};
    for (auto riter = ivec.crbegin(); riter != ivec.crend(); ++riter)
        std::cout << *riter << " ";
    std::cout << std::endl;
    return 0;
}
