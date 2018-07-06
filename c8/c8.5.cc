/*
 * Exercise 8.4 : Rewrite the previous program to store each word in a separate element.
 */

#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

int main(int argc, char *argv[])
{
    ifstream input(argv[1]);
    vector<string> files;
    string word;
    while (input >> word)
        files.push_back(word);

    for (auto word : files)
        cout << word << endl;
}