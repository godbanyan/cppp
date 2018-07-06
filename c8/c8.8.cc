/*
 * Exercise 8-8 Revise the program from the previous exercise to append its
 * output to its given file. Run the program on the same output file at least
 * twice to ensure that the data are preserved.
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
    ofstream output(outFile, ofstream::app);
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
