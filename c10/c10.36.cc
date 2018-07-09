/**
 * Exercise 10.36: Use find to find the last element in a list of ints with value 0.
 */

#include <list>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(void)
{
    vector<int> vec{1, 0, 3, 4, 5, 6, 7, 8, 9, 0, 1};

    auto begin = vec.crbegin(), end = vec.crend();
    
    auto num = find(end, begin, 0);
    cout << *num << endl;
    return 0;
}