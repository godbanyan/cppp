/* 
 * Exercise 9.52: Use a stack to process parenthesized expressions. When you see an
 * open parenthesis, note that it was seen. When you see a close parenthesis after an open
 * parenthesis, pop elements down to and including the open parenthesis off the stack.
 * push a value onto the stack to indicate that a parenthesized expression was replaced.
*/


#include <iostream>
#include <vector>
#include <stack>
#include <string>
#include <bits/basic_string.h>

using namespace std;

int compute(int lVal, int rVal, const string &str)
{
    if (str == "+")
        return rVal + lVal;
    else if (str == "-")
        return rVal - lVal;
    else if (str == "*")
        return rVal * lVal;
    else if (str == "/")
        return rVal / lVal;

    return 0;
}

int main(void)
{
    vector<string> expr{"(", "(", "1", "+", "2", ")" , "*", "3", ")"};
    stack<string> stk;
    stack<string> tmpStk;

    bool rb = false;

    for (auto iter = expr.begin(); iter != expr.end(); ++iter) {
        if (*iter == ")") {
            int rValue = stoi(stk.top());
            stk.pop();

            string op = stk.top();
            stk.pop();

            int lValue = stoi(stk.top());
            stk.pop();

            int result = compute(lValue, rValue, op);
            stk.pop();

            string re = to_string(result);
            stk.push(re);
        }
        else
            stk.push(*iter);
    }

    cout << stod(stk.top()) << endl;
    
    return 0;
}