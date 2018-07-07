/*
 * Exercise 9.43 : Write a function that takes three strings, s, oldVal, and newVal.
 * Using iterators, and the insert and erase functions replace all instances of oldVal
 * that appear in s by newVal. Test your function by using it to replace common
 * abbreviations, such as “tho” by ”though” and ”thru” by “through”.
 */

#include <vector>
#include <iostream>
using namespace std;

void replace(string &s, string ov, string nv)
{
    if (s.size() < ov.size())
        return;

    auto sz = ov.size();
    for (auto i = 0; i + sz <= s.size();) {
        if (s.substr(i, i + sz) == ov) {
            s.erase(i, i + sz);
            s.insert(i, nv);
            i += nv.size();
        } else {
            ++i;
        }
    }


}

int main(void)
{
    string h = "thohatho";
    replace(h, "tho", "though");
    cout << h << endl;
}