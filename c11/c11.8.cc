/**
 * Exercise 11.8: Write a program that stores the excluded words in a vector instead of
 * in a set. What are the advantages to using a set?
 */

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
    vector<string> words;
    string word;

    while (cin >> word) {
        if (find(words.begin(), words.end(), word) == words.end())
            words.push_back(word);
    }

    for (auto &word : words)
        cout << word << " ";
}