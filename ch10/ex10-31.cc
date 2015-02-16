/*
 * Exercise 10.31: Update the program from the previous exercise so that it prints only the unique elements. Your program should use unqiue_copy (§ 10.4.1, p. 403).
 */

#include <iostream>
#include <vector>
#include <list>
#include <algorithm>

int main()
{
    std::vector<int> ivec{1, 2, 2, 3, 3, 3, 4, 4, 5, 6, 7};
    std::list<int> li;
    std::ostream_iterator<int> out_iter(std::cout, " ");

    std::unique_copy(ivec.cbegin(), ivec.cend(), std::inserter(li, li.begin()));
    for (auto i : li)
        out_iter = i;
    std::cout << std::endl;
    return 0;
}
