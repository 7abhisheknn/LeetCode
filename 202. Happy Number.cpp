#include <bits/stdc++.h>
using namespace std;

class Solution {
   public:
    bool isHappy(int n) {
        unordered_map<int, bool> m;

        while ((n != 1) && (!m[n])) {
            m[n] = true;
            int res = 0;
            while (n) {
                int rem = n % 10;
                res += rem * rem;
                n /= 10;
            }
            n = res;
        }
        if (n == 1) return true;
        return false;
    }
};

int main() {
    return 0;
}