/*
 * Exercise 7.39: Would it be legal for both the constructor that takes a string and the
 * one that takes an istream& to have default arguments? If not, why not?
*/

#include <string>
#include <iostream>
using namespace std;

class Sales_data
{
    Sales_data(string str = "") {}
    Sales_data(istream &is = cin) {}
};

int main(int argc, char const *argv[])
{
    
    return 0;
}

