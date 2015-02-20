/*
 * Exercise 17.4: Write and test your own version of the findBook function.
 */

#include <tuple>
#include <vector>
#include <algorithm>
#include "../ch14/Sales_data.h"

typedef std::tuple<std::vector<Sales_data>::size_type,
                    std::vector<Sales_data>::const_iterator,
                    std::vector<Sales_data>::const_iterator> matches;

std::vector<matches> findBook(
        const std::vector<std::vector<Sales_data>>& files,
        const std::string& book)
{
    std::vector<matches> ret;
    for (auto it = files.cbegin(); it != files.cend(); ++it)
    {
        auto found = std::equal_range(it->cbegin(), it->cend(), book,
                                      compareIsbn);
        if (found.first != found.second)
            ret.push_back(std::make_tuple(it - files.cbegin(),
                          found.first, found.second));
    }
    return ret;
}

int main()
{
    return 0;
}
