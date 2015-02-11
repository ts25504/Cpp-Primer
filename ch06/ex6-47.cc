/*
 * Exercise 6.47: Revise the program you wrote in the exercises in § 6.3.2 (p. 228) that used recursion to print the contents of a vector to conditionally print information about its execution. For example, you might print the size of the vector on each call. Compile and run the program with debugging turned on and again with it turned off.
 */

#include <iostream>
#include <vector>
#include <iterator>

template<typename Iter>
void print_vector_recursive(Iter beg_iter, Iter end_iter)
{
    if (beg_iter != end_iter)
    {
#ifndef NDEBUG
        std::cout << "size of vec: " << end_iter - beg_iter << std::endl;
#endif
        std::cout << *beg_iter << std::endl;
        print_vector_recursive(std::next(beg_iter), end_iter);
    }
}

template<typename T>
void print_vector_recursive2(const std::vector<T>& vec)
{
    static typename std::vector<T>::const_iterator iter = vec.begin();
#ifndef NDEBUG
    std::cout << "size of vec: " << vec.end() - iter << std::endl;
#endif
    std::cout << *iter++ << std::endl;
    if (iter != vec.end())
        print_vector_recursive2(vec);
}

template<typename Iter>
void print_vector_recursive3(Iter beg_iter, Iter end_iter)
{
    if (beg_iter != end_iter)
    {
        print_vector_recursive3(beg_iter, std::prev(end_iter));
#ifndef NDEBUG
        std::cout << "size of vec: " << end_iter - beg_iter << std::endl;
#endif
        std::cout << *(end_iter-1) << std::endl;
    }
}

int main()
{
    std::vector<int> ivec{1, 2, 3, 4, 5};
    std::vector<int>::iterator beg_iter = ivec.begin();
    std::vector<int>::iterator end_iter = ivec.end();
    print_vector_recursive(beg_iter, end_iter);
    print_vector_recursive2(ivec);
    print_vector_recursive3(beg_iter, end_iter);
    return 0;
}
