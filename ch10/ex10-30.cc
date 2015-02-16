/*
 * Exercise 10.30: Use stream iterators, sort, and copy to read a sequence of integers from the standard input, sort them, and then write them back to the standard output.
 */

#include <iostream>
#include <algorithm>
#include <vector>

int main()
{
    std::istream_iterator<int> in_iter(std::cin), eof;
    std::ostream_iterator<int> out_iter(std::cout, " ");
    std::vector<int> ivec(in_iter, eof);

    std::sort(ivec.begin(), ivec.end());
    for (auto i : ivec)
        out_iter = i;
    std::cout << std::endl;
    return 0;
}
