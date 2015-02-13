/*
 * Exercise 9.11: Show an example of each of the six ways to create and
 * initialize a vector. Explain what values each vector contains.
 */

#include <vector>

int main()
{
    std::vector<int> ivec1;
    std::vector<int> ivec2{1, 2, 3, 4, 5};
    std::vector<int> ivec3(10, 1);
    std::vector<int> ivec4 = ivec2;
    std::vector<int> ivec5(ivec3);
    std::vector<int> ivec6(10);
    return 0;
}
