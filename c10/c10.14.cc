/**
 * Exercise 10.14: Write a lambda that takes two ints and returns their sum.
 */

#include <algorithm>
#include <numeric>
#include <vector>
#include <iostream>

using namespace std;

int main(void)
{
    auto f = [](int a, int b) { return a + b; };

    cout << f(1, 3) << " ";
}