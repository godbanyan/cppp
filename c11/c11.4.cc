/**
 * Exercise 11.4 : Extend your program to ignore case and punctuation. For example,
 * “example.” “example,” and “Example” should all increment the same counter.
 */

#include <map>
#include <iostream>

using namespace std;

int main(void)
{
    map<string, int> dict;
    string word;
    while (cin >> word) {
        for (auto cur = word.begin(); cur != word.end();) {
            if (ispunct(*cur))
                cur = word.erase(cur);
            else {
                *cur = tolower(*cur);
                ++cur;
            }
        }
        ++dict[word];
    }

    for (auto const &word : dict)
        cout << "word " << word.first << " occurs " << word.second << endl;
}