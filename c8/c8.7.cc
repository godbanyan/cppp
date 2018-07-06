/*
 * Exercise 8-7 Revise the bookstoreprogram from the previous section to write
 * its output to a file. Pass the name of that file as a second argument to main.
 */
#include <fstream>
#include <string>
#include <include/Sales_data.h>
using namespace std;

int main(int argc, char *argv[])
{
    string inFile = "../data/book_sales";
    string outFile = "sales.log";
    ifstream input(inFile);
    ofstream output(outFile);
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
                output << books.bookNo << " " << books.units_sold << " " << books.revenue << std::endl;
                books = book;
            }
        }
        output << books.bookNo << " " << books.units_sold << " " << books.revenue << std::endl;
    }
    
    return 0;
}
