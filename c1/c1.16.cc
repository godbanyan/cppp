/**
 * Exercise 1.16:
 *      Write a program that prompts the user for two integers. Print each
 *      number in the range specified by those two integers.
 **/

#include <iostream>

int main(void)
{
    int sum = 0;
    int num;
    std::cout << "please input some numbers" << std::endl;

    while (std::cin >> num) {
        sum += num;
    }

    std::cout << "the sum of numbers you input is " << sum << std::endl;
}