/**
 * Exercise 10.5: Using fill_n, write a program to set a sequence of int values to 0.
 */

#include <numeric>
#include <vector>
#include <iostream>

using namespace std;

int main(void)
{
    vector<int> vec {1, 2, 3, 4, 5};

    fill_n(vec.begin(), vec.size(), 0);

    for (auto &n : vec)
        cout << n << " ";
}