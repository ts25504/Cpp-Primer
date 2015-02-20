/*
 * Exercise 16.5: Write a template version of the print function from § 6.2.4 (p. 217) that takes a reference to an array and can handle arrays of any size and any element type.
 */

#include <iostream>

template <typename Arr>
void print(const Arr& arr)
{
    for (const auto& elem : arr)
        std::cout << elem << std::endl;
}


int main()
{
    int ia[] = {1, 2, 3, 4, 5};
    print(ia);
    char ca[] = {'a', 'b', 'c'};
    print(ca);
    return 0;
}
