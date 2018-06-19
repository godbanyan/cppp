/*
 * Exercise 3-41 Write a program to initialize a vector from an array of ints.
 */

#include <string>
#include <iostream>
#include <vector>
#include <cctype>

using namespace std;

int main()
{
    int num[] = {1, 2, 3, 4};

    vector<int> a(begin(num), end(num));
    vector<int> b(num, num + 4);
}
