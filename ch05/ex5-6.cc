/*
 * Exercise 5.6: Rewrite your grading program to use the conditional operator (§ 4.7, p. 151) in place of the if–else statement.
 */

#include <iostream>
#include <string>
#include <vector>

int main()
{
    std::vector<std::string> scores = {"F", "D", "C", "B", "A", "A++"};
    int grade = 0;
    while (std::cin >> grade)
    {
        if (grade < 0 || grade > 100)
        {
            std::cout << "error grade." << std::endl;
            continue;
        }
        std::string lettergrade;
        grade < 60 ? lettergrade = scores[0]
                   : lettergrade = scores[(grade-50)/10];
        if (grade != 100)
            grade % 10 > 7 ? lettergrade += "+"
                           : lettergrade += "-";
        std::cout << lettergrade << std::endl;
    }
    return 0;
}
