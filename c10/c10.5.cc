/**
 * Exercise 10.5: In the call to equal on rosters, what would happen
 * if both rosters held C-style strings, rather than library strings?
 */

#include <numeric>
#include <vector>
#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    vector<const char*> roster1 {"123", "456"};
    vector<const char*> roster2 {"123", "456", "789"};

    bool re = equal(roster1.cbegin(), roster1.cend(), roster2.begin());

    cout << re << endl;
}