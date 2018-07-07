/*
 * Exercise 9.45 : Write a funtion that takes a string representing a name and two other
 *　strings representing a prefix, such as “Mr.” or “Ms.” and a suffix, such as “Jr.” or
 *　“III”. Using iterators and the insert and append functions, generate and return a
 *　new string with the suffix and prefix added to the given name.
 */

#include <vector>
#include <iostream>
using namespace std;

string modify(string name, string pfx, string sfx)
{
    name.insert(name.begin(), pfx.begin(), pfx.end());
    name.append(sfx.begin(), sfx.end());
    return name;
}

int main(void)
{
    string mine = modify("zhangrong", "Mr.", "Jr.");
    cout << mine << endl;
}