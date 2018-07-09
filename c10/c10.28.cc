/**
 * Exercise 10.28: Copy a vector that holds the values from 1 to 9 inclusive, into three
 * other containers. Use an inserter, a back_inserter, and a front_inserter,
 * respectivly to add elements to these containers. Predict how the output sequence varies
 * by the kind of inserter and verify your predictions by running your programs.
 */

#include <list>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(void)
{
    vector<int> vec{1, 2, 3, 4, 5, 6, 7, 8, 9};
    list<int> lst1, lst2, lst3;
    copy(vec.cbegin(), vec.cend(), back_inserter(lst1));
    copy(vec.cbegin(), vec.cend(), front_inserter(lst2));
    copy(vec.cbegin(), vec.cend(), inserter(lst3, lst3.begin()));

    for (auto &num : lst1)
        cout << num << " ";
    cout << endl;

    for (auto &num : lst2)
        cout << num << " ";
    cout << endl;

    for (auto &num : lst3)
        cout << num << " ";
    cout << endl;

    return 0;
}