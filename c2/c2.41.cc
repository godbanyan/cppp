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
    if (std::cin >> book.bookNo >> book.units_sold >> book.revenue) {
        while (std::cin >> book.bookNo) {
            if (books.bookNo == book.bookNo)
                ++books.units_sold;
            else {
                std::cout << books.revenue * books.units_sold << std::endl;
                books = book;
            }
        }
        std::cout << books.revenue * books.units_sold << std::endl;
    }
    
    return 0;
}
