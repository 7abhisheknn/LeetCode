#include <bits/stdc++.h>
using namespace std;

class MinStack {
    vector<pair<int, int>> v;

   public:
    MinStack() {
    }

    void push(int val) {
        int min = INT_MAX;
        if (v.size() == 0) {
            min = val;
        } else {
            int pre = v.at(v.size() - 1).second;
            min = (pre < val) ? pre : val;
        }
        v.push_back({val, min});
    }

    void pop() {
        v.pop_back();
    }

    int top() {
        return v.at(v.size() - 1).first;
    }

    int getMin() {
        return v.at(v.size() - 1).second;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */

/*

[null,null,null,null,2147483647,null,2147483646,null,2147483646,null,null,2147483647,2147483646,null,-2147483648,-2147483648,null,2147483646]
[null,null,null,null,2147483647,null,2147483646,null,2147483646,null,null,2147483647,2147483647,null,-2147483648,-2147483648,null,2147483647]
*/

int main() {
}