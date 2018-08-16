/**
 * Exercise 11.21: Assuming word_count is a map from string to size_t and word
 * is a string, explain the following loop:
 * while (cin >> word)
 * ++word_count.insert({word, 0}).first->second;
 */

#include <map>
#include <iostream>

using namespace std;

int main(void)
{
    map<string, int> dict;
    string word;
    while (cin >> word) {
        ++dict.insert({word, 0}).first->second;
    }

    for (auto const &word : dict)
        cout << "word " << word.first << " occurs " << word.second << endl;
    
    int const &b = 2;
}