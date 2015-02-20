/*
 * Exercise 16.4: Write a template that acts like the library find algorithm. The function will need two template type parameters, one to represent the function’s iterator parameters and the other for the type of the value. Use your function to find a given value in a vector<int> and in a list<string>.
 */

#include <iostream>
#include <vector>
#include <list>
#include <string>

template <typename Iter, typename Value>
Iter _find(const Iter& beg_iter, const Iter& end_iter, const Value& val)
{
    for (auto iter = beg_iter; iter != end_iter; ++iter)
        if (*iter == val)
            return iter;
    return end_iter;
}

int main()
{
    std::vector<int> vec{1, 2, 3, 4, 5};
    std::list<std::string> li{"a", "b", "c", "d", "e"};
    auto vec_iter = _find(vec.cbegin(), vec.cend(), 3);
    auto li_iter = _find(li.cbegin(), li.cend(), "c");
    std::cout << *vec_iter << " " << *li_iter << std::endl;
    return 0;
}
