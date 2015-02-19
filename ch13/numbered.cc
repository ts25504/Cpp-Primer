#include <iostream>
#include "numbered.h"

void f(numbered s)
{
    std::cout << s.mysn << std::endl;
}

void f2(const numbered& s)
{
    std::cout << s.mysn << std::endl;
}

int main()
{
    /* ex13-14 ex13-15 */
    numbered a, b = a, c = b;
    f(a); f(b); f(c);

    /* ex13-15 */
    numbered aa, bb(aa), cc(bb);
    f(aa), f(bb), f(cc);

    /* ex13-16 */
    f2(a), f2(b), f2(c);
    return 0;
}
