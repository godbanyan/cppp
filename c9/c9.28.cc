/*
 * Exercise 9.26 : Write a function that takes a forward_list<string> and two additional
 * string arguments. The function should find the first string and insert the second
 * immediately following the first. If the first string is not found, then insert the
 * second string at the end of the list.
 */

#include <forward_list>
#include <iostream>
using namespace std;

void insert(forward_list<string> &lst, string a, string b)
{
    auto prev = lst.before_begin();
    for (auto cur = lst.begin(); cur != lst.end(); ++cur, ++prev) {
        if (*cur == a) {
            lst.insert_after(cur, b);
            return;
        }
    }

    lst.insert_after(prev, b);
}

int main(void)
{
    forward_list<string> lst = {"hoho", "haha", "heihei"};
    insert(lst, "ququ", "tete");
    insert(lst, "hoho", "tete");

    for (auto &str : lst)
        cout << str << " ";
}