/*
 * Exercise 9.31 : In the program onpage 354 would it be legal to write the
 * call to insert as follows? If not, why not?
 * iter = vi.insert(iter, *iter++);
 */

#include <vector>
#include <forward_list>
#include <list>
#include <iostream>
using namespace std;

int main(void)
{
    vector<int> vi{0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    auto iter = vi.begin();

    while (iter != vi.end()) {
        if (*iter % 2) {
            // iter = vi.insert(iter, *iter);
            // iter += 2;
            iter = vi.insert(iter, *iter++); // no good
            ++iter;
        } else {
            iter = vi.erase(iter);
        }
    }

    for (auto num : vi)
        cout << num << " ";
}