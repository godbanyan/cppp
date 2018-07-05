/*
 * Exercise 7.6: Define your own versions of the add, read, and print functions.
 */

#include <string>
#include <iostream>

struct Sales_data {
    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
    double avg_price() const { return revenue / units_sold; }
    Sales_data &combine(const Sales_data &book);
    std::string isbn(void) const { return bookNo; };
};

Sales_data & Sales_data::combine(const Sales_data &book)
{
    units_sold += book.units_sold;
    revenue += book.revenue;
    return *this;
}

std::istream &read(std::istream &is, Sales_data &item)
{
    double price = 0;
    is >> item.bookNo >> item.units_sold >> price;
    item.revenue = price * item.units_sold;
    return is;
}

std::ostream &print(std::ostream &os, const Sales_data &item)
{
    os << item.isbn() << " " << item.units_sold << " "
       << item.revenue << " " << item.avg_price();
    
    return os;
}

int main(void)
{
    return 0;
}