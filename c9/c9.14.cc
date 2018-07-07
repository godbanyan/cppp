/*
 * Exercise 9.14 : Write a program to assign the elements from a list of char*
 * pointers to C-style character strings to a vector of strings.
 */

#include <string>
#include <list>
#include <vector>
using namespace std;

int main(void)
{
    list<const char *> lst = {"123", "456"};
    vector<string> vec;
    vec.assign(lst.begin(), lst.end());
}