/**
 * Exercise 11.3: Write your own version of the word-counting program.
 */

#include <map>
#include <iostream>

using namespace std;

int main(void)
{
    map<string, int> dict;
    string word;
    while (cin >> word)
        ++dict[word];
    for (auto const &word : dict)
        cout << "word " << word.first << " occurs " << word.second << endl;
}