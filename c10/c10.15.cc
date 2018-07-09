/**
 * Exercise 10.15: Write a lambda that captures an int from its enclosing function
 * and takes an int parameter. The lambda should return the sum of the captured
 * int and the int parameter.
 */

#include <algorithm>
#include <numeric>
#include <vector>
#include <iostream>

using namespace std;

int main(void)
{
    int a = 5;
    auto f = [a](int b) { return a + b; };

    cout << f(3) << " ";
}