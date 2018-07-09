/**
 * Give the second parameter of make_plural (§ 6.3.2) a
 * default argument of ’s’. Test your program by printing singular
 * and plural versions of the words success and failure.
*/

#include <string>
#include <iostream>

using namespace std;

string make_plural(size_t ctr, const string &word, const string &ending="s")
{
    return (ctr > 1) ? word + ending : word;
}

int main(int argc, char const *argv[])
{
    string word = "hoho";
    cout << make_plural(2, word);

    return 0;
}
