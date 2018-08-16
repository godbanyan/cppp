/**
 * Exercise 11.17: Assuming c is a multiset of strings and v is a vector of
 * strings, explain the following calls. Indicate whether each call is legal:
 * copy(v.begin(), v.end(), inserter(c, c.end()));
 * copy(v.begin(), v.end(), back_inserter(c));
 * copy(c.begin(), c.end(), inserter(v, v.end()));
 * copy(c.begin(), c.end(), back_inserter(v));
 */

#include <set>
#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
    vector<int> v{1,2,3};
    multiset<int> c{4,5,6};
    copy(v.begin(), v.end(), inserter(c, c.end()));
    // copy(v.begin(), v.end(), back_inserter(c));
    copy(c.begin(), c.end(), inserter(v, v.end()));
    copy(c.begin(), c.end(), back_inserter(v));
}