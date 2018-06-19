/*
 * Exercise 3-21 Redo the first exercise from § 3.3.3 (3-16) using iterators.
 */

#include <string>
#include <iostream>
#include <vector>
#include <iterator>

using namespace std;

int main()
{
    vector<int> v1;
    cout << "v1 size: " << v1.size() << endl;
    for (auto it = v1.begin(); it != v1.end(); ++it)
        cout << *it << " ";
    cout << endl;
    vector<int> v2(10);
    cout << "v2 size: " << v2.size() << endl;
    for (auto it = v2.begin(); it != v2.end(); ++it)
        cout << *it << " ";
    cout << endl;
    vector<int> v3(10, 42);
    cout << "v3 size: " << v3.size() << endl;
    for (auto it = v3.begin(); it != v3.end(); ++it)
        cout << *it << " ";
    cout << endl;
    vector<int> v4{10};
    cout << "v4 size: " << v4.size() << endl;
    for (auto it = v4.begin(); it != v4.end(); ++it)
        cout << *it << " ";
    cout << endl;
    vector<int> v5{10, 42};
    cout << "v5 size: " << v5.size() << endl;
    for (auto it = v5.begin(); it != v5.end(); ++it)
        cout << *it << " ";
    cout << endl;
    vector<string> v6{10};
    cout << "v6 size: " << v6.size() << endl;
    for (auto it = v6.begin(); it != v6.end(); ++it)
        cout << *it << " ";
    cout << endl;
    vector<string> v7{10, "hi"};
    cout << "v7 size: " << v7.size() << endl;
    for (auto it = v7.begin(); it != v7.end(); ++it)
        cout << *it << " ";
    cout << endl;
}
