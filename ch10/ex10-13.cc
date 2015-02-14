/*
 * Exercise 10.13: The library defines an algorithm named partition that takes a predicate and partitions the container so that values for which the predicate is true appear in the first part and those for which the predicate is false appear in the second part. The algorithm returns an iterator just past the last element for which the predicate returned true. Write a function that takes a string and returns a bool indicating whether the string has five characters or more. Use that function to partition words. Print the elements that have five or more characters.
 */

#include <algorithm>
#include <iostream>
#include <vector>
#include <string>

bool is_more_than_five(const std::string& s)
{
    return s.size() >= 5;
}

int main()
{
    std::vector<std::string> words{"fox", "jumps", "over", "quick", "red",
        "red", "slow", "the", "the", "turtle"};
    std::vector<std::string>::iterator iter =
        std::partition(words.begin(), words.end(), is_more_than_five);
    for (auto it = words.begin(); it != iter; ++it)
        std::cout << *it << " ";
    std::cout << std::endl;
    return 0;
}
