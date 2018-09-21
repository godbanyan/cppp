/**
 * Exercise Exercise 12.6: Write a function that returns a dynamically allocated vector of ints.
 * Pass that vector to another function that reads the standard input to give values to
 * the elements. Pass the vector to another function to print the values that were read.
 * Remember to delete the vector at the appropriate time
 */
#include <iostream>
#include <memory>
#include <vector>

using namespace std;

vector<int> *get_vec()
{
    return new vector<int>();
}

void fill_vec(vector<int> *vec)
{
    int tmp = 0;
    while (cin >> tmp)
    {
        vec->push_back(tmp);
    }
}

void print_vec(vector<int> *vec)
{
    for (auto const i : *vec)
        cout << i << endl;
}

int main(void)
{
    vector<int> *vec = get_vec();
    fill_vec(vec);
    print_vec(vec);
}