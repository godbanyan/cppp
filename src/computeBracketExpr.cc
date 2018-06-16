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

int test(void)
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
    
    return 0;
}
