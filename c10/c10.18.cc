/**
 * Exercise 10.18: Rewrite biggies to use partition instead of find_if.
 * We described the partition algorithm in exercise 10.13 in § 10.3.1 
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
    auto wc = partition(words.begin(), words.end(),
            [sz](const string &a){return a.size() >= sz;});

    auto count = wc - words.begin();
    cout << count << " " << make_plural(count, "word") << " of length " << sz << " or longer " << endl;
    for_each(words.begin(), wc, [](const string &s){cout << s << " ";});
    cout << endl;
}

int main(void)
{
    vector<string> words{"beautiful", "appropriate", "start", "end"};

    biggies(words, 5);
}