/*
 * Exercise 6.54: Write a declaration for a function that takes two int parameters and returns an int, and declare a vector whose elements have this function pointer type.
 */

#include <vector>

int func(int a, int b);

using p_func1 = int (*)(int, int);
using p_func2 = decltype(p_func1);
using p_func3 = decltype(func) *;
typedef int (*p_func4)(int, int);
typedef decltype(func) *p_func5;

int main()
{
    std::vector<p_func1> vec1;
    std::vector<p_func2> vec2;
    std::vector<p_func3> vec3;
    std::vector<p_func4> vec4;
    std::vector<p_func5> vec5;
    return 0;
}
