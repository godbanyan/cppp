/**
 * Exercise 11.10: Could we define a map from vector<int>::iterator to int?
 * What about from list<int>::iterator to int? In each case, if not, why not?
 */

#include <iostream>
#include <list>
#include <map>
#include <vector>

using namespace std;

int main(void)
{
    map<vector<int>::iterator, int> vi;
    map<list<int>::iterator, int> li;
}