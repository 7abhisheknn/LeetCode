#include <bits/stdc++.h>
using namespace std;

class Solution {
   public:
    int reverse(int x) {
        int n1 = 214748364, n2 = -214748364;
        int res = 0;
        while (x) {
            int r = x % 10;
            if (x > 0) {
                if (res > n1 ||
                    ((res == n1) && (r > 7)))
                    return 0;
            } else {
                if (res < n2 ||
                    ((res == n2) && (r < -8)))
                    return 0;
            }
            x /= 10;
            res = res * 10 + r;
        }
        return res;
    }
};

class Solution2 {
   public:
    int reverse(int x) {
        string str = to_string(x);
        int l = 0, r = str.length() - 1;
        if (str[0] == '-') l++;
        while (l < r) swap(str[l++], str[r--]);

        x = 0;
        try {
            x = stoi(str);
        } catch (exception e) {
        }
        return x;
    }
};

int main() {
    return 0;
}