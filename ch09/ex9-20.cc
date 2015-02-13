/*
 * Exercise 9.20: Write a program to copy elements from a list<int> into two deques. The even-valued elements should go into one deque and the odd ones into the other.
 */

#include <iostream>
#include <deque>
#include <list>

int main()
{
    std::list<int> li{1, 2, 3, 4, 5, 6, 7, 8};
    std::deque<int> even_deq, odd_deq;

    for (auto iter = li.cbegin(); iter != li.cend(); ++iter)
    {
        if (*iter % 2 == 0)
            odd_deq.push_back(*iter);
        else
            even_deq.push_back(*iter);
    }

    for (auto iter = odd_deq.cbegin(); iter != odd_deq.cend(); ++iter)
        std::cout << *iter << " ";
    std::cout << std::endl;

    for (auto iter = even_deq.cbegin(); iter != even_deq.cend(); ++iter)
        std::cout << *iter << " ";
    std::cout << std::endl;

    return 0;
}
