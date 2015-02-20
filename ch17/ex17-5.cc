/*
 * Exercise 17.5: Rewrite findBook to return a pair that holds an index and a pair of iterators.
 */

#include <tuple>
#include <vector>
#include <algorithm>
#include <utility>
#include "../ch14/Sales_data.h"

typedef std::tuple<std::vector<Sales_data>::size_type,
                    std::pair<std::vector<Sales_data>::const_iterator,
                    std::vector<Sales_data>::const_iterator> > matches;

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
                          std::make_pair(found.first, found.second)));
    }
    return ret;
}

int main()
{
    return 0;
}
