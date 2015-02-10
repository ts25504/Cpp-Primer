/*
 * Exercise 5.21: Revise the program from the exercise in § 5.5.1 (p. 191) so that it looks only for duplicated words that start with an uppercase letter.
 */

#include <iostream>
#include <string>
#include <cctype>

int main()
{
    std::string word, pre_word;
    bool is_repeated = false;

    while (std::cin >> word)
    {
        if (std::islower(word[0]))
            continue;
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
