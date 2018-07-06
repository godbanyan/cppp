/*
 * Exercise 8.2 : Test your function by calling it, passing cin as an argument.
 */

#include <iostream>
using namespace std;

istream &process_input(istream &is)
{
    auto old_state = is.rdstate();
    cin.clear();
    double number;
    while (is >> number)
        cout << number << endl;
    cin.setstate(old_state);

    return is;
}

int main(void)
{
    process_input(cin);
}