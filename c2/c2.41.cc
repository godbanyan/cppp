/*
 * Exercise 2-41 Use your Sales_data class to rewrite the exercises 1-22.
 * the same file as your main function.
 */
#include <iostream>
#include <string>
#include <include/Sales_data.h>


int main()
{
    Sales_data books;
    Sales_data book;
    int price;
    if (std::cin >> books.bookNo >> books.units_sold >> price) {
        books.revenue = books.units_sold * price;
        while (std::cin >> book.bookNo >> book.units_sold >> price) {
            book.revenue = book.units_sold * price;
            if (books.bookNo == book.bookNo) {
                books.units_sold += book.units_sold;
                books.revenue += book.revenue;
            }
            else {
                std::cout << books.bookNo << " " << books.units_sold << " " << books.revenue << std::endl;
                books = book;
            }
        }
        std::cout << books.bookNo << " " << books.units_sold << " " << books.revenue << std::endl;
    }
    
    return 0;
}
