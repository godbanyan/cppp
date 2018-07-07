/*
 * Exercise 9.15 : Write a program to determine whether two vector<int>s are equal.
 */

#include <vector>
#include <iostream>
using namespace std;

int compare(vector<int> va, vector<int> vb)
{
    auto begin_a = va.begin(), end_a = va.end();
    auto begin_b = vb.begin(), end_b = vb.end();
    int re = 0;

    for (; begin_a != end_a, begin_b != end_b; ++begin_a, ++begin_b) {
        if (*begin_a == *begin_b)
            continue;
        if (*begin_a > *begin_b)
            return 1;
        else
            return -1;
    }

    if (begin_a == end_a && begin_b == end_b)
        return 0;
    else if (begin_a == end_a)
        return -1;
    else
        return 1;
}

int main(void)
{
    vector<int> va{1, 3, 5, 7, 9, 12};
    vector<int> vb{1, 3, 5};
    cout << compare(va, vb) << endl;
}