/*
 * Exercise 3-22 Redo the last exercise from § 3.3.3 (3-19) using iterators.
 */

#include <string>
#include <iostream>
#include <vector>
#include <cctype>

using namespace std;

int get_size()
{
    return 2;
}

int main()
{
    vector<int> nums;
    int num;
    
    while (cin >> num) {
        nums.push_back(num);
    }

    for (auto i = nums.begin(); i < nums.end() - 1; i += 2)
        cout << *i + *(i + 1) << endl;

    for (auto i = nums.begin(), j = nums.end() - 1; i < j; ++i, --j)
        cout << *i + *j << endl;
}
