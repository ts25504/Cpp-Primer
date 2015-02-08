/*
 * Exercise 3.24: Redo the last exercise from § 3.3.3 (p. 105) using
 * iterators.
 */

#include <iostream>
#include <vector>

int main()
{
    std::vector<int> ivec;
    int i = 0;
    while (std::cin >> i)
        ivec.push_back(i);

    if (ivec.empty())
    {
        std::cout << "input at least one integer." << std::endl;
        return -1;
    }
    else if (ivec.size() == 1)
    {
        std::cout << ivec[0] << " don't have any adjacent elements.";
    }
    else
    {
        for (auto it = ivec.begin(); it != ivec.end() - 1; ++it)
            std::cout << *it + *(it+1) << " ";
    }
    std::cout << std::endl;

    for (auto beg_it = ivec.begin(), end_it = ivec.end()-1; beg_it <= end_it;
            ++beg_it, --end_it)
        std::cout << *beg_it + *end_it << " ";
    std::cout << std::endl;
    return 0;
}
