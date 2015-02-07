#include <iostream>

int main()
{
    int* pi = NULL;
    int i = 10;

    pi = &i;
    std::cout << *pi << " " << pi << " " << i << " " << &i << std::endl;
    *pi = 100;
    std::cout << *pi << " " << pi << " " << i << " " << &i << std::endl;

    return 0;
}
