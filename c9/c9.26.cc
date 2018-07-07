/*
 * Exercise 9.26 : Using the following definition of ia, copy ia into a vector and into a
 * list. Use the single-iterator form of erase to remove the elements with odd values
 * from your list and the even values from your vector.
 * int ia[] = { 0, 1, 1, 2, 3, 5, 8, 13, 21, 55, 89 };
 */

#include <vector>
#include <list>
#include <iostream>
using namespace std;

int main(void)
{
    int ia[] = { 0, 1, 1, 2, 3, 5, 8, 13, 21, 55, 89 };
    vector<int> vec(begin(ia), end(ia));
    list<int> lst(begin(ia), end(ia));

    for (auto begin = vec.begin(); begin != vec.end();) {
        if (*begin % 2 == 0)
            begin = vec.erase(begin);
    }

    for (auto begin = lst.begin(); begin != lst.end();) {
        if (*begin % 2 != 0)
            begin = lst.erase(begin);
    }
}