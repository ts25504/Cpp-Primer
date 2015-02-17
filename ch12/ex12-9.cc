/*
 * Exercise 12.9: Explain what happens in the following code:
 */

#include <iostream>
#include <memory>

int main()
{
    int *q = new int(42), *r = new int(100);
    r = q;
    std::cout << *r << " " << *q << std::endl;
    auto q2 = std::make_shared<int>(42), r2 = std::make_shared<int>(100);
    r2 = q2;
    std::cout << *r2 << " " << *q2 << std::endl;
    if (q)
    {
        delete q;
        q = NULL;
    }
    if (r)
    {
        delete r;
        r = NULL;
    }
    return 0;
}
