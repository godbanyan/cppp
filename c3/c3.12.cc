/*
 * Exercise 3-12 Which, if any, of the following vector definitions are in error? For
 * those that are legal, explain what the definition does. For those that are not legal,
 * explain why they are illegal.
 * (a) vector<vector<int>> ivec; 
 * (b) vector<string> svec = ivec;
 * (c) vector<string> svec(10, "null");
 */

#include <string>
#include <iostream>
#include <vector>
#include <cctype>

using namespace std;

int main()
{
    vector<vector<int>> ivec;           // 对，ivec的元素为vector<int>
    vector<string> svec(10, "null");
}
