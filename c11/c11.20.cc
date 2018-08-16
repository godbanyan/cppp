/**
 * Exercise 11.20: Rewrite the word-counting program from § 11.1 (p. 421) to use
 * insert instead of subscripting. Which program do you think is easier to write and
 * read? Explain your reasoning.
 */

#include <map>
#include <iostream>

using namespace std;

int main(void)
{
    map<string, int> dict;
    string word;
    while (cin >> word) {
        auto ret = dict.insert({word, 1});
        if (!ret.second)
            ++ret.first->second;
    }

    for (auto const &word : dict)
        cout << "word " << word.first << " occurs " << word.second << endl;
}