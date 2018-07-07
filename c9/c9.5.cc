/*
 * Exercise 9.4 : Rewrite the previous program to return an iterator
 * to the requested element. Note that the program must handle the case
 * where the element is not found.
 */

#include <iostream>
#include <vector>
using namespace std;

vector<int>::iterator find_num(vector<int>::iterator begin, vector<int>::iterator end, int num)
{
    for (; begin != end; ++begin) {
        if (*begin == num)
            return begin;
    }

    return end;
}

int main(void)
{

}