/*
 * Exercise 3-43 Write three different versions of a program to print the elements of ia.
 * One version should use a range for to manage the iteration, the other two should use
 * an ordinary for loop in one case using subscripts and in the other using pointers. In
 * all three programs write all the types directly. That is, do not use a type alias, auto, or
 * decltype to simplify the code.
 */

#include <string>
#include <iostream>
#include <vector>
#include <cctype>

using namespace std;

int main()
{
    int ia[3][4];

    for (int (&i)[4] : ia)
        for (int num : i)
            cout << num << " ";
    cout << endl;

    for (int i = 0; i < sizeof(ia) / sizeof(int[4]); ++i)
        for (int j = 0; j < sizeof(int[4]) / sizeof(int); ++j)
            cout << ia[i][j] << " ";

    cout << endl;
}
