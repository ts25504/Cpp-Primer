/*
 * Exercise 13.14: Assume that numbered is a class with a default constructor that generates a unique serial number for each object, which is stored in a data member named mysn. Assuming numbered uses the synthesized copy- control members and given the following function:
 * Code:
 * void f (numbered s) { cout << s.mysn << endl; }
 * what output does the following code produce?
 * Code:
 * numbered a, b = a, c = b; f(a); f(b); f(c);
 *
 * Exercise 13.15: Assume numbered has a copy constructor that generates a new serial number. Does that change the output of the calls in the previous exercise? If so, why? What output gets generated?
 *
 * Exercise 13.16: What if the parameter in f were const numbered&? Does that change the output? If so, why? What output gets generated?
 *
 * Exercise 13.17: Write versions of numbered and f corresponding to the previous three exercises and check whether you correctly predicted the output.
 */

#ifndef numbered_h
#define numbered_h

#include <iostream>
struct numbered {
    numbered()
    {
        static int i = 0;
        ++i;
        mysn = i;
    }

    numbered(const numbered& rhs)
    {
        static int j = 0;
        ++j;
        mysn = j;
    }

    int mysn = 0;
};

#endif
