/**
 * Exercise Exercise 12.7: Redo the previous exercise, this time using shared_ptr.
 */
#include <iostream>
#include <memory>
#include <vector>

using namespace std;

shared_ptr<vector<int>> get_vec(void)
{
    return make_shared<vector<int>>();
}

void fill_vec(shared_ptr<vector<int>> vec)
{
    int tmp = 0;
    while (cin >> tmp)
    {
        vec->push_back(tmp);
    }
}

void print_vec(shared_ptr<vector<int>> vec)
{
    for (auto const i : *vec)
        cout << i << endl;
}

int main(void)
{
    shared_ptr<vector<int>> vec = get_vec();
    fill_vec(vec);
    print_vec(vec);
}