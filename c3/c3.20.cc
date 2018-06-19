/*
 * Exercise 3-20 Read a set of integers into a vector. Print the sum of each pair of
 * adjacent elements. Change your program so that it prints the sum of the first and last
 * elements, followed by the sum of the second and second-to-last, and so on.
 */

#include <string>
#include <iostream>
#include <vector>
#include <cctype>

using namespace std;

int main()
{
    vector<int> nums;
    int num;
    
    while (cin >> num) {
        nums.push_back(num);
    }

    for (auto i = 0; i < nums.size(); i += 2)
        cout << nums[i] + nums[i + 1] << endl;

    for (auto i = 0; i < nums.size() / 2; ++i)
        cout << nums[i] + nums[nums.size() - i - 1] << endl;
}
