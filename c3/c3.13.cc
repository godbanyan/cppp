/*
 * Exercise 3-13 How many elements are there in each of the following vectors? What
 * are the values of the elements?
 * (a) vector<int> v1; (b) vector<int> v2(10);
 * (c) vector<int> v3(10, 42); (d) vector<int> v4{10};
 * (e) vector<int> v5{10, 42}; (f) vector<string> v6{10};
 * (g) vector<string> v7{10, "hi"};
 */

#include <string>
#include <iostream>
#include <vector>
#include <cctype>

using namespace std;

int main()
{
    vector<int> v1;
    cout << "v1 size: " << v1.size() << endl;
    vector<int> v2(10);
    cout << "v2 size: " << v2.size() << endl;
    vector<int> v3(10, 42);
    cout << "v3 size: " << v3.size() << endl;
    vector<int> v4{10};
    cout << "v4 size: " << v4.size() << endl;
    vector<int> v5{10, 42};
    cout << "v5 size: " << v5.size() << endl;
    vector<string> v6{10};
    cout << "v6 size: " << v6.size() << endl;
    vector<string> v7{10, "hi"};
    cout << "v7 size: " << v7.size() << endl;
}
