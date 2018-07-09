/**
 * Exercise 10.5: Implement your own version of elimDups. Test your program by
 * printing the vector after you read the input, after the call to unique, and
 * after the call to erase.
 */

#include <algorithm>
#include <numeric>
#include <vector>
#include <iostream>

using namespace std;

void elimDups(vector<int> &vec)
{
    sort(vec.begin(), vec.end());
    auto end_unique = unique(vec.begin(), vec.end());
    vec.erase(end_unique, vec.end());
}

int main(void)
{
    vector<int> vec {1, 5, 3, 2, 3, 4, 5};

    elimDups(vec);

    for (auto &n : vec)
        cout << n << " ";
}