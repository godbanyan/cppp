/*
 * Exercise 9.18 : Write a program to read a sequence of strings from the standard input
 * into a deque. Use iterators to write a loop to print the elements in the deque.
 */

#include <deque>
#include <iostream>
using namespace std;

int main(void)
{
    deque<string> strs;
    string num;
    while (cin >> num)    
        strs.push_back(num);

    for (auto begin = strs.begin(); begin != strs.end(); ++begin)
        cout << *begin << " ";
}