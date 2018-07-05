/*
 * Exercise 7.2: Add the combine and isbn members to the Sales_data class you
 * wrote for the exercises in 2.41.
 */

#include <string>

struct Sales_data {
    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
    Sales_data &combine(const Sales_data &book);
    std::string isbn(void) const { return bookNo; };
};


Sales_data & Sales_data::combine(const Sales_data &book)
{
    units_sold += book.units_sold;
    revenue += book.revenue;
    return *this;
}

int main(void)
{
    return 0;
}