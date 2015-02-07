/*
 * Exercise 2.41: Use your Sales_data class to rewrite the exercises in § 1.5.1 (p. 22), § 1.5.2 (p. 24), and § 1.6 (p. 25). For now, you should define your Sales_data class in the same file as your main function.
 */

#include <iostream>
#include <string>

struct Sales_data
{
    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};

int func1_5_1()
{
    Sale_datas book;
    double price;
    std::cin >> book.bookNo >> book.units_sold >> price;
    book.revenue = book.units_sold * price;
    std::cout << book.bookNo << " " << book.units_sold << " " << book.revenue << " " << price;
    return 0;
}

int func1_5_2()
{
    Sale_datas book1, book2;
    double price1, price2;
    std::cin >> book1.bookNo >> book1.units_sold >> price1;
    std::cin >> book2.bookNo >> book2.units_sold >> price2;
    book1.revenue = book1.units_sold * price1;
    book2.revenue = book2.units_sold * price2;

    if (book1.bookNo == book2.bookNo)
    {
        unsigned total_cnt = book1.units_sold + book2.units_sold;
        double total_revenue = book1.revenue + book2.revenue;
        std::cout << book1.bookNo << " " << total_cnt << " " << total_revenue << " ";
        if (totalCnt != 0)
            std::cout << total_revenue/total_cnt << std::endl;
        else
            std::cout << "(no sales)" << std::endl;

        return 0;
    }
    else
    {
        std::cerr << "Data must refer to same ISBN" << std::endl;
        return -1;  // indicate failure
    }
}

int func1_5_3()
{
    Sale_datas total;
    double total_price;
    if (std::cin >> total.bookNo >> total.units_sold >> total_price)
    {
        total.revenue = total.units_sold * total_price;

        Sale_data trans;
        double trans_price;
        while (std::cin >> trans.bookNo >> trans.units_sold >> trans_price)
        {
            trans.revenue = trans.units_sold * trans_price;

            if (total.bookNo == trans.bookNo)
            {
                total.units_sold += trans.units_sold;
                total.revenue += trans.revenue;
            }
            else
            {
                std::cout << total.bookNo << " " << total.units_sold << " " << total.revenue << " ";
                if (total.units_sold != 0)
                    std::cout << total.revenue/total.units_sold << std::endl;
                else
                    std::cout << "(no sales)" << std::endl;

                total.bookNo = trans.bookNo;
                total.units_sold = trans.units_sold;
                total.revenue = trans.revenue;
            }
        }

        std::cout << total.bookNo << " " << total.units_sold << " " << total.revenue << " ";
        if (total.units_sold != 0)
            std::cout << total.revenue/total.units_sold << std::endl;
        else
            std::cout << "(no sales)" << std::endl;

        return 0;
    }
    else
    {
        std::cerr << "No data?!" << std::endl;
        return -1;  // indicate failure
    }
}

int main()
{
    func1_5_1();
    func1_5_2();
    func1_5_3();

    return 0;
}
