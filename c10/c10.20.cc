/**
 * Exercise 10.20: The library defines an algorithm named count_if. Like find_if,
 * this function takes a pair of iterators denoting an input range and a predicate that it
 * applies to each element in the given range. count_if returns a count of how often the
 * predicate is true. Use count_if to rewrite the portion of our program that counted
 * how many words are greater than length 6.
 */

#include <algorithm>
#include <numeric>
#include <vector>
#include <iostream>

using namespace std;

//from c6.42
string make_plural(size_t ctr, const string &word, const string &ending="s")
{
    return (ctr > 1) ? word + ending : word;
}

//from c10.9
void elimDups(vector<string> &vec)
{
    sort(vec.begin(), vec.end());
    auto end_unique = unique(vec.begin(), vec.end());
    vec.erase(end_unique, vec.end());
}

void biggies(vector<string> &words, vector<string>::size_type sz)
{
    elimDups(words);
    stable_sort(words.begin(), words.end(),
            [](const string &str1, const string &str2){return str1.size() < str2.size();});
    auto wc = stable_partition(words.begin(), words.end(),
            [sz](const string &a){return a.size() >= sz;});

    auto count = count_if(words.begin(), words.end(), [sz](const string &a){return a.size() >= sz;});
    cout << count << " " << make_plural(count, "word") << " of length " << sz << " or longer " << endl;
    for_each(words.begin(), wc, [](const string &s){cout << s << " ";});
    cout << endl;
}

int main(void)
{
    vector<string> words{"beautiful", "appropriate", "start", "end"};

    biggies(words, 5);
}