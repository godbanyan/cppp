/*
 * Exercise 9.26 : Write a program to find and remove the odd-valued
 * elements in a forward_list<int>.
 */

#include <forward_list>
#include <iostream>
using namespace std;

int main(void)
{
    forward_list<int> lst{ 0, 1, 1, 2, 3, 5, 8, 13, 21, 55, 89 };

    for (auto cur = lst.begin(), prev = lst.before_begin(); cur != lst.end();) {
        if (*cur % 2 == 0)
            cur = lst.erase_after(prev);
        else {
            prev = cur;
            ++cur;
        }
    }

    for (const auto &num : lst)
        cout << num << " ";
}