/**
 * Exercise 10.3: Use accumulate to sum the elements in a vector<int>.
 */

#include <numeric>
#include <vector>
#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    vector<int> vec{1, 2, 3, 4, 5};
    cout << accumulate(vec.cbegin(), vec.cend(), 0) << endl;
}