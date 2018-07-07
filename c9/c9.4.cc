/*
 * Exercise 9.4 : Write a function that takes a pair of iterators to a vector<int>
 * and an int value. Look for that value in the range and return a bool indicating
 * whether it was found.
 */

#include <iostream>
#include <vector>
using namespace std;

bool find_num(vector<int>::iterator begin, vector<int>::iterator end, int num)
{
    while (begin != end) {
        if (*begin++ == num)
            return true;
    }

    return false;
}

int main(void)
{

}