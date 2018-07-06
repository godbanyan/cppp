/*
 * Exercise 8.1 : Write a function that takes and returns an istream&. The function
 * should read the stream until it hits end-of-file. The function should print what it reads
 * to the standard output. Reset the stream so that it is valid before returning the stream.
 */

#include <iostream>
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

}