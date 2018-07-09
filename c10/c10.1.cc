/**
 * Exercise 10.1: The algorithm header defines a function named count that, like
 * find, takes a pair of iterators and a value. count returns a count of how often that
 * value appears. Read a sequence of ints into a vector and print the count of how
 * many elements have a given value.
 */

#include <algorithm>
#include <vector>
#include <iostream>

using namespace std;

int main(void)
{
    vector<int> vec{1,2,2,2,3,5,6};
    cout << count(vec.begin(), vec.end(), 2) << endl;
}