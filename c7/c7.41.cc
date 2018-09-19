/*
 * Exercise 7.39: Rewrite your own version of the Sales_data class to use delegating
 * constructors. Add a statement to the body of each of the constructors that prints a
 * message whenever it is executed. Write declarations to construct a Sales_data object
 * in every way possible. Study the output until you are certain you understand the order
 * of execution among delegating constructors.
*/

#include <string>
#include <iostream>
using namespace std;

class Sales_data
{
  public:
    Sales_data(string str = "") : Sales_data(1) { cout << "this is Sales_data(string str)" << endl; }
    Sales_data(int a) { cout << "this is Sales_data(int a)" << endl; }
    Sales_data(istream &is = cin) {}
};

constexpr int test(int a)
{
    return a * 2;
}

int main(int argc, char const *argv[])
{
    Sales_data("aa");
    return 0;
}
