/*
 * Exercise 3-10 Write a program that reads a string of characters including 
 * punctuation and writes what was read but with the punctuation removed.
 */

#include <string>
#include <iostream>
#include <cctype>

using namespace std;

int main()
{
    string str = "hoo,haha";

    for (auto &c : str) {
        if (!ispunct(c))
            cout << c;
    }
    cout << endl;
}
