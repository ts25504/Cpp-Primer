/*
 * Exercise 5.14: Write a program to read strings from standard input looking for duplicated words. The program should find places in the input where one word is followed immediately by itself. Keep track of the largest number of times a single repetition occurs and which word is repeated. Print the maximum number of duplicates, or else print a message saying that no word was repeated. For example, if the input is
 * how now now now brown cow cow
 * the output should indicate that the word now occurred three times.
 */

#include <iostream>
#include <string>
#include <map>

int main()
{
    std::string word;
    std::map<std::string, int> words_map;
    bool is_exist_repeat = false;
    int max_duplicates = 0;
    std::string max_duplicates_word;
    while (std::cin >> word)
    {
        ++words_map[word];
    }
    for (auto p : words_map)
    {
        if (p.second > max_duplicates)
        {
            max_duplicates = p.second;
            max_duplicates_word = p.first;
        }
    }
    if (max_duplicates == 1)
        std::cout << "no word was repeated." << std::endl;
    else
        std::cout << max_duplicates_word << ": " << max_duplicates << " times."
                  << std::endl;
    return 0;
}
