#include <iostream>
#include "Sales_data.h"

int func1_5_1()
{
    Sales_data book;
    double price;
    std::cin >> book.bookNo >> book.units_sold >> price;
    book.CalcRevenue(price);
    book.Print();
}

int func1_5_2()
{
    Sales_data book1, book2;
    double price1, price2;
    std::cin >> book1.bookNo >> book1.units_sold >> price1;
    std::cin >> book2.bookNo >> book2.units_sold >> price2;
    book1.CalcRevenue(price1);
    book2.CalcRevenue(price2);

    if (book1.bookNo == book2.bookNo)
    {
        book1.AddData(book2);
        book1.Print();

        return 0;
    }
    else
    {
        std::cerr << "Data must refer to same ISBN" << std::endl;
        return -1;
    }
}

int func1_5_3()
{
    Sales_data total;
    double total_price = 0.0;
    if (std::cin >> total.bookNo >> total.units_sold >> total_price)
    {
        total.CalcRevenue(total_price);

        Sales_data trans;
        double trans_price = 0.0;
        while (std::cin >> trans.bookNo >> trans.units_sold >> trans_price)
        {
            trans.CalcRevenue(trans_price);

            if (total.bookNo == trans.bookNo)
            {
                total.AddData(trans);
            }
            else
            {
                total.Print();
                total.SetData(trans);
            }
        }
        total.Print();
        return 0;
    }
    else
    {
        std::cerr << "No data?!" << std::endl;
        return -1;
    }
}
int main()
{
    func1_5_1();
    func1_5_2();
    func1_5_3();
    return 0;
}
