/*
 * Exercise 9.20 : Write a program to copy elements from a list<int> into two deques.
 * The even-valued elements should go into one deque and the odd ones into the other.
 */

#include <list>
#include <deque>
#include <iostream>
using namespace std;

int main(void)
{
    list<int> nums;
    deque<int> even;
    deque<int> odd;

    int num;
    while (cin >> num) {
        if (num % 2 == 0)
            even.push_back(num);
        else
            odd.push_back(num);
    }

    for (auto begin = even.begin(); begin != even.end(); ++begin)
        cout << *begin << " ";
    
    cout << endl;

    for (auto begin = odd.begin(); begin != odd.end(); ++begin)
        cout << *begin << " ";
}