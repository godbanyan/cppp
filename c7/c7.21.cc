/*
 * Exercise 7.21: Update your Sales_data class to hide its implementation. 
 * The programs you’ve written to use Sales_data operations should still continue to work. 
 * Recompile those programs with your new class definition to verify that they still work.
 */

#include <string>
#include <iostream>

struct Sales_data {
    friend std::istream &read(std::istream &is, Sales_data &item);
    friend std::ostream &print(std::ostream &os, const Sales_data &item);
public:
    Sales_data() = default;
    Sales_data(const std::string &s) : bookNo(s){}
    Sales_data(const std::string &s, unsigned n, double p) 
        : bookNo(s), units_sold(n), revenue(p){}
    Sales_data(std::istream &is);

private:
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
    Sales_data sd("test");

    return 0;
}