/*
 * Exercise 17.6: Rewrite findBook so that it does not use tuple or pair.
 */

#include <tuple>
#include <vector>
#include <algorithm>
#include <utility>
#include "../ch14/Sales_data.h"

typedef struct {
    std::vector<Sales_data>::size_type sz_type;
    std::vector<Sales_data>::const_iterator first_iter;
    std::vector<Sales_data>::const_iterator second_iter;
} matches;

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
        {
            matches m = {
                static_cast<std::vector<Sales_data>::size_type>
                    (it - files.cbegin()),
                found.first, found.second };
            ret.push_back(m);
        }
    }
    return ret;
}

int main()
{
    return 0;
}
