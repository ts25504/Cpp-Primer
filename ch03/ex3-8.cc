/*
 * Exercise 3.8: Rewrite the program in the first exercise, first using a while and again using a traditional for loop. Which of the three approaches do you prefer and why?
 */

#include <iostream>
#include <string>

void func_while(std::string& st)
{
    decltype(st.size()) i = 0;
    while (i < st.size())
    {
        st[i] = 'X';
        ++i;
    }
    std::cout << st << std::endl;
}

void func_for(std::string& st)
{
    for (decltype(st.size()) i = 0; i < st.size(); ++i)
    {
        st[i] = 'Y';
    }
    std::cout << st << std::endl;
}

int main()
{
    std::string st;

    std::cin >> st;
    func_while(st);
    func_for(st);
    return 0;
}


