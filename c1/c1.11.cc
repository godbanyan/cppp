/**
 * Exercise 1.11:
 *      Write a program that prompts the user for two integers. Print each
 *      number in the range specified by those two integers.
 **/

#include <iostream>

int main(void)
{
    int begin, end;
    std::cout << "please input two numbers specifing a range." << std::endl;
    std::cin >> begin >> end;

    while (begin <= end) {
        std::cout << begin << " ";
        ++begin;
    }
}