/*
 * Exercise 1.17: What happens in the program presented in this section if
 * the input values are all equal? What if there are no duplicated values?
 *
 * Exercise 1.18: Compile and run the program from this section giving it only equal values as input. Run it again giving it values in which no number is repeated.
 */

#include <iostream>

int main()
{
    int currVal = 0, val = 0;
    if (std::cin >> currVal) {
        int cnt = 1;
        // break loop, Linux: Ctrl + D, Windows: Ctrl + Z
        while (std::cin >> val) {
            if (val == currVal)
                ++cnt;
            else {
                std::cout << currVal << " occurs "
                          << cnt << " times" << std::endl;
                currVal = val;
                cnt = 1;
            }
        }
        std::cout << currVal << " occurs "
                  << cnt << " times" << std::endl;
    }
    return 0;
}
