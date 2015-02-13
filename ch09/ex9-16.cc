/*
 * Exercise 9.16: Repeat the previous program, but compare elements in a
 * list<int> to a vector<int>.
 */

#include <vector>
#include <list>
#include <iostream>

int main()
{
    std::vector<int> vec{1, 2, 3, 4, 5};
    std::list<int> li{1, 2, 3, 4, 5};
    std::vector<int>::const_iterator vec_iter = vec.cbegin();
    std::list<int>::const_iterator li_iter = li.cbegin();
    bool is_equal = true;

    if (vec.size() == li.size())
    {
        for (int i = 0; i < vec.size(); ++i)
        {
            if (*vec_iter++ != *li_iter++)
            {
                is_equal = false;
                break;
            }
            is_equal = true;
        }
    }
    else
    {
        is_equal = false;
    }

    if (is_equal)
        std::cout << "equal" << std::endl;
    else
        std::cout << "not equal" << std::endl;
    return 0;
}
