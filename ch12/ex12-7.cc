/*
 * Exercise 12.7: Redo the previous exercise, this time using shared_ptr.
 */

#include <iostream>
#include <vector>
#include <memory>

std::shared_ptr<std::vector<int>> allocate()
{
    return std::make_shared<std::vector<int>>();
}

void read_data(std::shared_ptr<std::vector<int>> vec_ptr)
{
    int i = 0;
    while (std::cin >> i)
        vec_ptr->push_back(i);
}

void print_data(std::shared_ptr<std::vector<int>> vec_ptr)
{
    for (auto i : *vec_ptr)
        std::cout << i << " ";
    std::cout << std::endl;
}
int main()
{
    std::shared_ptr<std::vector<int>> vec_ptr = allocate();
    read_data(vec_ptr);
    print_data(vec_ptr);
    return 0;
}
