/*
 * Exercise 10.35: Now print the elements in reverse order using ordinary iterators.
 */

#include <iostream>
#include <vector>

int main()
{
    std::vector<int> ivec{1, 2, 3, 4, 5};
    for (auto iter = ivec.cend(); iter != ivec.cbegin(); --iter)
        std::cout << *(iter-1) << " ";
    std::cout << std::endl;
    return 0;
}
