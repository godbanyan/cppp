/**
 * Exercise 10.35: Now print the elements in reverse order using ordinary iterators.
 */

#include <list>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(void)
{
    vector<int> vec{1, 2, 3, 4, 5, 6, 7, 8, 9};

    auto begin = vec.cbegin(), end = vec.cend();
    
    for (; --end >= begin;)
        cout << *end << " ";
    return 0;
}