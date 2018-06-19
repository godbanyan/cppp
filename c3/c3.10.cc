/*
 * Exercise 3-11 Is the following range for legal? If so, what is the type of c?
 * const string s = "Keep out!";
 * for (auto &c : s) { ... }
 */

#include <string>
#include <iostream>
#include <cctype>

using namespace std;

int main()
{
    const string str = "hoo,haha";

    for (auto &c : str) {
        if (!ispunct(c))
            cout << c;
    }
    cout << endl;
}
