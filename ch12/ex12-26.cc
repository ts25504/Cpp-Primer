/*
 * Exercise 12.26: Rewrite the program on page 481 using an allocator.
 */

#include <iostream>
#include <string>
#include <memory>

int main()
{
    const int n = 10;
    std::allocator<std::string> alloc;
    auto const p = alloc.allocate(n);
    std::string s;
    auto q = p;
    while (std::cin >> s && q != p + n)
        alloc.construct(q++, s);
    while (q != p)
    {
        std::cout << *--q << " ";
        alloc.destroy(q);
    }
    alloc.deallocate(p, n);
    std::cout << std::endl;
    return 0;
}
