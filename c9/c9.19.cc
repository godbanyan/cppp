/*
 * Exercise 9.19 : Rewrite the program from the previous exercise to use a list.
 * List the changes you needed to make.
 */

#include <list>
#include <iostream>
using namespace std;

int main(void)
{
    list<string> strs;
    string num;
    while (cin >> num)    
        strs.push_back(num);

    for (auto begin = strs.begin(); begin != strs.end(); ++begin)
        cout << *begin << " ";
}