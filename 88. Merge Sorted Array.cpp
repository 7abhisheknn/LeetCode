#include <bits/stdc++.h>
using namespace std;
class Solution {
   public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        if (m == 0) {
            nums1 = nums2;
            return;
        }
        int i = m - 1, j = n - 1, k = m + n - 1;
        while (i >= 0 && j >= 0) {
            if (nums1[i] > nums2[j])
                nums1[k--] = nums1[i--];
            else
                nums1[k--] = nums2[j--];
        }
        while (j >= 0)
            nums1[k--] = nums2[j--];
    }
};

int main() {
    vector<int> nums1 = {2, 0};
    int m = 1;
    vector<int> nums2 = {1};
    int n = 1;
    Solution s;
    s.merge(nums1, m, nums2, n);

    for (int x : nums1) {
        cout << x << endl;
    }

    return 0;
}