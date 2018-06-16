/**
 * Exercise 1.20:
 *      Write a program that reads several transactions for the same ISBN.
 *      Write the sum of all the transactions that were read.
 **/

#include <iostream>
#include "../include/Sales_item.h"

int main(void)
{
    Sales_item books;
    Sales_item book;
    if (std::cin >> books) {
        while (std::cin >> book) {
            if (books.isbn() == book.isbn())
                books += book;
            else {
                std::cout << books << std::endl;
                books = book;
            }
        }
        std::cout << books << std::endl;
    }
    
    return 0;
}