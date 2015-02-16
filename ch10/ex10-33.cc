/*
 * Exercise 10.33: Write a program that takes the names of an input file and two output files. The input file should hold integers. Using an istream_iterator read the input file. Using ostream_iterators, write the odd numbers into the first output file. Each value should be followed by a space. Write the even numbers into the second file. Each of these values should be placed on a separate line.
 */

#include <fstream>
#include <vector>

int main()
{
    std::ifstream infile("input_num");
    std::ofstream out_odd("odd_num"), out_even("even_num");
    std::istream_iterator<int> in_iter(infile), eof;
    std::ostream_iterator<int> out_odd_iter(out_odd, "\n");
    std::ostream_iterator<int> out_even_iter(out_even, "\n");
    std::vector<int> ivec(in_iter, eof);

    for (auto i : ivec)
        i & 0x1 ? out_odd_iter = i : out_even_iter = i;

    return 0;
}

