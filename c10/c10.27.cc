/**
 * Exercise 10.27: In addition to unique (§ 10.2.3), the library defines function
 * named unique_copy that takes a third iterator denoting a destination into which
 * to copy the unique elements. Write a program that uses unique_copy to copy the
 * unique elements from a vector into an initially empty list.
 */

#include <list>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(void)
{
    vector<int> vec{1, 2, 2, 3, 3, 5};
    list<int> lst;
    unique_copy(vec.cbegin(), vec.cend(), back_inserter(lst));

    for (auto &num : lst)
        cout << num << " ";

    return 0;
}