/**
 * Exercise 1.20:
 *      Write a program that reads two Sales_item objects that have the
 *      same ISBN and produces their sum.
 **/

#include <iostream>
#include "../include/Sales_item.h"

int main(void)
{
    Sales_item book1, book2;
    std::cin >> book1;
    std::cin >> book2;

    if (book1.isbn() == book2.isbn())
        std::cout << book1 + book2 << std::endl;
    
    return 0;
}