/*
 * Exercise 12.6: Write a function that returns a dynamically allocated vector of ints. Pass that vector to another function that reads the standard input to give values to the elements. Pass the vector to another function to print the values that were read. Remember to delete the vector at the appropriate time.
 */

#include <iostream>
#include <vector>

std::vector<int>* allocate()
{
    std::vector<int> *vec_ptr = new std::vector<int>;
    return vec_ptr;
}

void read_data(std::vector<int> *vec)
{
    int i = 0;
    while (std::cin >> i)
        vec->push_back(i);
}

void print_data(std::vector<int> *vec)
{
    for (auto i : *vec)
        std::cout << i << " ";
    std::cout << std::endl;
}
int main()
{
    std::vector<int> *vec_ptr = allocate();
    read_data(vec_ptr);
    print_data(vec_ptr);
    if (vec_ptr)
    {
        delete vec_ptr;
        vec_ptr = NULL;
    }
    return 0;
}
