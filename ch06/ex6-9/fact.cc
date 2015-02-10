/*
 * Exercise 6.9: Write your own versions of the fact.cc and factMain.cc files. These files should include your Chapter6.h from the exercises in the previous section. Use these files to understand how your compiler supports separate compilation.
 */

#include "../Chapter.h"

int fact(int val)
{
    if (val == 0 || val == 1)
        return 1;
    return val * fact(val - 1);
}
