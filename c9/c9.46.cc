/*
 * Exercise 9.46 :Rewrite the previous exercise using a position and length to manage
the strings. This time use only the insert function.
 */

#include <vector>
#include <iostream>
using namespace std;

string modify(string name, string pfx, string sfx)
{
    name.insert(0, pfx);
    name.append(sfx);
    return name;
}

int main(void)
{
    string mine = modify("zhangrong", "Mr.", "Jr.");
    cout << mine << endl;
}