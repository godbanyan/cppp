/**
 * Exercise 11.13: There are at least three ways to create the pairs in the program for
 * the previous exercise. Write three versions of that program, creating the pairs in each
 * way. Explain which form you think is easiest to write and understand, and why.
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
        vec.push_back(pair<string, int>(str, num));
        // vec.push_back(make_pair(str, num));
        // vec.push_back({str, num});

    for (auto &ele : vec)
        cout << ele.first << " " << ele.second << endl;
}