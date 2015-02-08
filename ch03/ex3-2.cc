/*
 * Exercise 3.2: Write a program to read the standard input a line at a time.
 * Modify your program to read a word at a time.
 */

#include <iostream>
#include <string>

using std::string;
using std::cin;
using std::cout;
using std::endl;

int func1()
{
    string line;

    while (getline(cin, line))
        cout << line << endl;

    return 0;
}

int func2()
{
    string word;

    while (cin >> word)
        cout << word << endl;

    return 0;
}

int main()
{
    func2();
    return 0;
}
