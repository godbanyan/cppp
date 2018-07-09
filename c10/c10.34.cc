/**
 * Exercise 10.34: Use reverse_iterators to print a vector in reverse order.
 */

#include <list>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(void)
{
    vector<int> vec{1, 2, 3, 4, 5, 6, 7, 8, 9};

    auto rbegin = vec.crbegin(), rend = vec.crend();
    
    for (; rbegin != rend; ++rbegin)
        cout << *rbegin << " ";

    return 0;
}