/*
 * Exercise 16.6: How do you think the library begin and end functions that take an array argument work? Define your own versions of these functions.
 */

#include <iostream>

template <typename T, unsigned sz>
T* _begin(T (&arr)[sz])
{
    return arr;
}

template <typename T, unsigned sz>
T* _end(T (&arr)[sz])
{
    return arr + sz;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    std::cout << *_begin(arr) << std::endl;
    std::cout << *(_end(arr)-1) << std::endl;
    return 0;
}
