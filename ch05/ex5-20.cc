/*
 * Exercise 5.20: Write a program to read a sequence of strings from the standard input until either the same word occurs twice in succession or all the words have been read. Use a while loop to read the text one word at a time. Use the break statement to terminate the loop if a word occurs twice in succession. Print the word if it occurs twice in succession, or else print a message saying that no word was repeated.
 */

#include <string>
#include <iostream>

int main()
{
    std::string word, pre_word;
    bool is_repeated = false;

    while (std::cin >> word)
    {
        if (word == pre_word)
        {
            std::cout << word << std::endl;
            is_repeated = true;
            break;
        }
        pre_word = word;
    }
    if (!is_repeated)
        std::cout << "no word was repeated." << std::endl;
    return 0;
}
