/*
 * Exercise 3.16: Write a program to print the size and contents of the vectors from exercise 3.13. Check whether your answers to that exercise were correct. If not, restudy § 3.3.1 (p. 97) until you understand why you were wrong.
 */

#include <iostream>
#include <vector>
#include <string>

template <typename T>
void print_size_and_content(const std::vector<T>& vec)
{
    std::cout << "size: " << vec.size() << std::endl;
    std::cout << "content: ";
    for (auto& item : vec)
        std::cout << item << " ";
    std::cout << std::endl;
}

int main()
{
    std::vector<int> v1;
    std::vector<int> v2(10);
    std::vector<int> v3(10, 42);
    std::vector<int> v4{10};
    std::vector<int> v5{10, 42};
    std::vector<std::string> v6{10};
    std::vector<std::string> v7{10, "h1"};

    print_size_and_content(v1);
    print_size_and_content(v2);
    print_size_and_content(v3);
    print_size_and_content(v4);
    print_size_and_content(v5);
    print_size_and_content(v6);
    print_size_and_content(v7);
    return 0;
}
