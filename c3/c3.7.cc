/*
 * Exercise 3-7 What would happen if you define the loop control variable 
 * in the previous exercise as type char? Predict the results and then 
 * change your program to use a char to see if you were right.
 */

#include <string>
#include <iostream>
#include <cctype>

using namespace std;

int main()
{
    string str = "hoo";

    for (char &c : str)
        c = toupper(c);
    
    for (char &c : str)
        cout << c << endl;
}
