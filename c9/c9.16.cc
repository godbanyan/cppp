/*
 * Exercise 9.15 : Repeat the previous program, but compare
 * elements in a list<int> to a vector<int>.
 */

#include <vector>
#include <iostream>
#include <list>
using namespace std;

int compare(list<int> va, vector<int> vb)
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

    if (va.size() < vb.size())
        return -1;
    
    if (va.size() > vb.size())
        return 1;

    return 0;
}

int main(void)
{
    list<int> va{1, 3, 5, 7, 9, 12};
    vector<int> vb{1, 3, 5};
    cout << compare(va, vb) << endl;
}