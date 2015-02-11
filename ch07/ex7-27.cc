/*
 * Exercise 7.27: Add the move, set, and display operations to your version
 * of Screen. Test your class by executing the following code:
 * Code:
 * Screen myScreen(5, 5, 'X');
 * myScreen.move(4,0).set('#').display(cout);
 * cout << "\n";
 * myScreen.display(cout);
 * cout << "\n";
 */

#include <iostream>
#include "ex7-27.h"

int main()
{
    Screen myScreen(5, 5, 'X');
    myScreen.move(4, 0).set('#').display(std::cout);
    std::cout << "\n";
    myScreen.display(std::cout);
    std::cout << "\n";
    return 0;
}
