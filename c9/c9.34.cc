/*
 * Exercise 9.31 : Assuming vi is a container of ints that includes even and odd values,
 * predict the behavior of the following loop. After you’ve analyzed this loop, write a
 * program to test whether your expectations were correct.
    iter = vi.begin();
    while (iter != vi.end())
    if (*iter % 2)
    iter = vi.insert(iter, *iter);
    ++iter;
 */

#include <vector>
#include <forward_list>
#include <list>
#include <iostream>
using namespace std;

int main(void)
{
    vector<int> vi{1, 2, 3, 4, 5, 6, 7, 8, 9};
    auto iter = vi.begin();

    while (iter != vi.end())
        if (*iter % 2)
            iter = vi.insert(iter, *iter); // iter move backward
    ++iter;
}