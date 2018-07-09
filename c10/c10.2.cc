/**
 * Exercise 10.2: Repeat the previous program, but read values into a list of strings.
 */

#include <algorithm>
#include <list>
#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    list<string> vec{"aa", "aa", "aa","bb","cc"};
    cout << count(vec.begin(), vec.end(), "aa") << endl;
}