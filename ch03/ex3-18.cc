/*
 * Exercise 3.18: Is the following program legal? If not, how might you fix
 * it?
 * vector<int> ivec; ivec[0] = 42;
 */

#include <vector>

int main()
{
    std::vector<int> ivec{0};
    ivec[0] = 42;
    return 0;
}
