/*
 * Exercise 3-6 Use a range for to change all the characters in a string to X.
 */

#include <string>
#include <iostream>
#include <cctype>

using namespace std;

int main()
{
    string str = "hoo";

    for (auto &c : str)
        c = toupper(c);
    
    for (auto &c : str)
        cout << c << endl;
}
