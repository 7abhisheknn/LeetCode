#include <bits/stdc++.h>
using namespace std;

class Solution {
   public:
    bool isValid(string s) {
        stack<char> stk;
        for (char c : s) {
            if (c == '(' || c == '[' || c == '{')
                stk.push(c);
            else if ((c == ')' && stk.top() == '(') || (c == ']' && stk.top() == '[') || (c == '}' && stk.top() == '{'))
                stk.pop();
            else
                return false;
        }
        if (stk.empty())
            return true;
        return false;
    }
};

int main() {
    return 0;
}