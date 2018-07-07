/*
 * Exercise 9.50 :Write a program to process a vector<string>s whose elements
 * represent integral values. Produce the sum of all the elements in that vector.
 * Change the program so that it sums of strings that represent floating-point values.
 */

#include <vector>
#include <iostream>
using namespace std;

int sumInt(vector<string> &vec)
{
    int sum = 0;
    for (auto &s : vec)
        sum += stoi(s);
    return sum;
}

double sumDouble(vector<string> &vec)
{
    int sum = 0;
    for (auto &s : vec)
        sum += stod(s);
    return sum;
}

int main(void)
{
    vector<string> vec{"1", "2", "3"};
    cout << sumInt(vec) << endl;
    cout << sumDouble(vec) << endl;
}