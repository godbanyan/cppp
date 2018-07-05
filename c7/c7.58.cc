/*
 * Exercise 7.56:Which, if any, of the following static data member declarations and
 * definitions are errors? Explain why.
 * // example.h
 * class Example {
 * public:
 *      static double rate = 6.5; //need constexpr
 *      static const int vecSize = 20;
 *      static vector<double> vec(vecSize); //recognized as function declaration
 * };
 * // example.C
 * #include "example.h"
 * double Example::rate;
 * vector<double> Example::vec;
*/

#include <vector>
using namespace std;

class Example {
public:
    constexpr static double rate = 6.5;
    static const int vecSize = 20;
};

constexpr double Example::rate;

int main(void)
{
    return 0;
}