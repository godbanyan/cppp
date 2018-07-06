/*
 * Exercise 8.10 : Write a program to store each line from a file in a vector<string>.
 * Now use an istringstream to read each element from the vector a word at a time.
 */

#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
using namespace std;

int main(int argc, char *argv[])
{
    ifstream input(argv[1]);
    vector<string> files;
    string line;
    while (getline(input, line)) {
        files.push_back(line);
    }

    for (auto li : files) {
        string word;
        istringstream istr(li);
        while (istr >> word)
            cout << word << " ";
        cout << endl;
    }
}