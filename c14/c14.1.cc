#include <iostream>

using namespace std;

class Sales_data
{
  public:
    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
    double avg_price() const { return revenue / units_sold; }
    Sales_data &combine(const Sales_data &book);
    std::string isbn(void) const { return bookNo; };
    Sales_data &operator+=(const Sales_data &book);
};

ostream &operator<<(ostream &os, const Sales_data &sa)
{
    os << sa.isbn() << " " << sa.units_sold << " "
       << sa.revenue << " " << sa.avg_price();
    return os;
}

istream &operator>>(istream &is, Sales_data &sa)
{
    double price = 0;
    is >> sa.bookNo >> sa.units_sold >> price;
    sa.revenue = price * sa.units_sold;
    return is;
}

Sales_data &Sales_data::operator+=(const Sales_data &sa)
{
    units_sold += sa.units_sold;
    revenue += sa.revenue;
    return *this;
}

int main(void)
{
}