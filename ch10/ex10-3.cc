/*
 * Exercise 10.3: Use accumulate to sum the elements in a vector<int>.
 */

#include <vector>
#include <iostream>
#include <numeric>

int main()
{
    std::vector<int> ivec{1, 2, 2, 3, 3, 3, 4, 4, 4, 4};
    std::cout << std::accumulate(ivec.cbegin(), ivec.cend(), 0) << std::endl;
    return 0;
}
