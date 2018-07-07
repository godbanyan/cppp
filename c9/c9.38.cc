/*
 * Exercise 9.38 : Write a program to explore how vectors grow in the library you use.
 */

#include <vector>
#include <iostream>
using namespace std;

int main(void)
{
    int full_count = 10;
    vector<int> vec;
    cout << vec.capacity() << endl;

    while (full_count--) {
        vec.push_back(1);
        cout << vec.capacity() << endl;
    }
}