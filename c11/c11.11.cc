/**
 * Exercise 11.12: Write a program to read a sequence of strings and ints, storing each
 * into a pair. Store the pairs in a vector.
 */

#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
    vector<pair<string, int>> vec;

    string str;
    int num;
    while (cin >> str >> num)
        vec.push_back({str, num});

    for (auto &ele : vec)
        cout << ele.first << " " << ele.second << endl;
}