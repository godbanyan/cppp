/*
 * Exercise 9.24 : Write a program that fetches the first element in a vector using at,
 * the subscript operator, front, and begin. Test your program on an empty vector.
 */

#include <vector>
#include <iostream>
using namespace std;

int main(void)
{
    vector<int> vec;
    int a = vec.at(0);
    int b = vec[0];
    int c = vec.front();
    int d = *vec.begin();
}