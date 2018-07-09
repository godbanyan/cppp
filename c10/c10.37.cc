/**
 * Exercise 10.37: Given a vector that has ten elements, copy the
 * elements from positions 3 through 7 in reverse order to a list.
 */

#include <list>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(void)
{
    vector<int> vec{0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    list<int> lst;

    auto begin = vec.cbegin() + 3, end = vec.cend() - 3;
    
    copy(begin, end, front_inserter(lst));
    
    for (auto &num : lst)
        cout << num << " ";
    return 0;
}