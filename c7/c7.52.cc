/*
 * Exercise 7.52: Using our first version of Sales_data from § 2.6.1 (p. 72), explain the
 * following initialization. Identify and fix any problems.
 * Sales_data item = {"978-0590353403", 25, 15.99};
*/

#include <string>
using namespace std;

//brace initialization only for aggregate class

struct Sales_data {
    string bookNo;
    unsigned units_sold;// = 0;
    double revenue;// = 0.0;
};

int main(void)
{
    Sales_data item = {"978-0590353403", 25, 15.99};
    return 0;
}