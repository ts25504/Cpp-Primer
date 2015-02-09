/*
 *Exercise 3.32: Copy the array you defined in the previous exercise into
 another array. Rewrite your program to use vectors.
 */

#include <iostream>
#include <vector>

int main()
{
    std::vector<int> vec1, vec2;

    for (int i = 0; i < 10; ++i)
        vec1.push_back(i);
    vec2 = vec1;

    for (auto i : vec2)
        std::cout << i << " ";
    std::cout << std::endl;
    return 0;
}
