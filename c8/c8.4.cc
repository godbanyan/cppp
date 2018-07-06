/*
 * Exercise 8.4 : Write a function to open a file for input and read its contents into a
 * vector of strings, storing each line as a separate element in the vector.
 */

#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

int main(int argc, char *argv[])
{
    ifstream input(argv[1]);
    vector<string> files;
    string line;
    while (getline(input, line))
        files.push_back(line);

    for (auto li : files)
        cout << li << endl;
}