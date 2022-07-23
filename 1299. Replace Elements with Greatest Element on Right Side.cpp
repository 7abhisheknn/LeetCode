#include <bits/stdc++.h>
using namespace std;
class Solution {
   public:
    vector<int> replaceElements(vector<int>& arr) {
        int max = -1;
        for (int i = (arr.size() - 1); i >= 0; i--) {
            int val = arr[i];
            arr[i] = max;
            if (val > max) max = val;
        }
        return arr;
    }
};
int main() {
    return 0;
}