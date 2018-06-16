/**
 * Exercise 1.19:
 *      Revise the program you wrote for the exercises in § 1.4.1 that
 *      printed a range of numbers so that it handles input in which the first
 *      number is smaller than the second.
 **/

#include <iostream>

int main(void)
{
    int begin, end;
    std::cout << "please input two numbers specifing a range." << std::endl;
    std::cin >> begin >> end;

    if (begin > end) {
        int tmp = begin;
        begin = end;
        end = tmp;
    }

    while (begin <= end) {
        std::cout << begin << " ";
        ++begin;
    }
}