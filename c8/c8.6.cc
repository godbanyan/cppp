/*
 * Exercise 8-6 Use your Sales_data class to rewrite the exercises 1-22.
 * the same file as your main function.
 */
#include <iostream>
#include <fstream>
#include <string>
#include <include/Sales_data.h>
using namespace std;

int main(int argc, char *argv[])
{
    string inFile = "../data/book_sales";
    ifstream input(inFile);
    Sales_data books;
    Sales_data book;
    double price;
    if (input >> books.bookNo >> books.units_sold >> price) {
        books.revenue = books.units_sold * price;
        while (input >> book.bookNo >> book.units_sold >> price) {
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
