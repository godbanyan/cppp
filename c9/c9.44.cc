/*
 * Exercise 9.44 : Rewrite the previous function using an index and replace.
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
            s.replace(i, i + sz, nv);
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