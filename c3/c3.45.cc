/*
 * Exercise 3-45 Rewrite the programs again, this time using auto.
 */

#include <string>
#include <iostream>
#include <vector>
#include <cctype>

using namespace std;

int main()
{
    int ia[3][4];

    for (const auto &it : ia)
        for (const int num : it)
            cout << num << " ";
    cout << endl;

    for (int i = 0; i < sizeof(ia) / sizeof(int[4]); ++i)
        for (int j = 0; j < sizeof(int[4]) / sizeof(int); ++j)
            cout << ia[i][j] << " ";
    cout << endl;

    for (auto i = ia; i < ia + 3; ++i)
        for (auto j = *i; j < *i + 4 ; ++j)
            cout << *j << " ";

    cout << endl;
}
