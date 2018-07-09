/**
 * Exercise 10.21: Write a lambda that captures a local int variable and decrements that
 * variable until it reaches 0. Once the variable is 0 additional calls should no longer
 * decrement the variable. The lambda should return a bool that indicates whether the
 * captured variable is 0.
 */

#include <iostream>

using namespace std;

int main(void)
{
    int var = 5;
    auto f = [&var]{ if (var >= 0) --var; return (var == 0);};
    
    for (int i = 0; i < 5; i++) {
        cout << f() << endl;
    }

    return 0;
}