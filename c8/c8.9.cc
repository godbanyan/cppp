/*
 * Exercise 8.9 : Use the function you wrote for the first exercise 8.1
 * to print the contents of an istringstream object.
 */

#include <iostream>
#include <sstream>
using namespace std;

istream &process_input(istream &is)
{
    auto old_state = is.rdstate();
    cin.clear();
    double number;
    while (is >> number)
        cout << number << " ";
    cin.setstate(old_state);

    return is;
}

int main(void)
{
    string test = "12 23 45";

    istringstream is(test);
    process_input(is);
}