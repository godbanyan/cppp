/*
 * Exercise 8.10 : The program in this section defined its istringstream object inside
 * the outer while loop. What changes would you need to make if record were defined
 * outside that loop? Rewrite the program, moving the definition of record outside the
 * while, and see whether you thought of all the changes that are needed.
 */

#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
using namespace std;


struct PersonInfo {
    string name;
    vector<string> phones;
};

int main(int argc, char *argv[])
{
    string line, word;
    vector<PersonInfo> people;
    vector<int> ss(10);
    cout << ss.size() << endl;

    istringstream record("");
    while (getline(cin, line)) {
        PersonInfo info;
        record.str(line);
        record >> info.name;
        while (record >> word)
            info.phones.push_back(word);
        people.push_back(info);
    }
}