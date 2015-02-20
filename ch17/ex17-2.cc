/*
 * Exercise 17.2: Define a tuple that holds a string, a vector<string>, and a pair<string, int>.
 */

#include <tuple>
#include <string>
#include <vector>
#include <utility>

int main()
{
    std::tuple<std::string, std::pair<std::string, int>,
        std::pair<std::string, int> > tp;
    return 0;
}
