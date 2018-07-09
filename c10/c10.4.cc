/**
 * Exercise 10.4: Assuming v is a vector<double>, what, if anything,
 * is wrong with calling accumulate(v.cbegin(), v.cend(), 0)?
 */

#include <numeric>
#include <vector>
#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    vector<double> vec{1.0, 2.1, 3.3, 4.4, 5.5};
    cout << accumulate(vec.cbegin(), vec.cend(), 0.0) << endl;
}