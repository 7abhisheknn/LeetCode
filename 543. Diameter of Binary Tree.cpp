#include <bits/stdc++.h>

using namespace std;
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
   public:
    int maxValue = 0;
    int diameterOfBinaryTree(TreeNode *root) {
        if (!root) return 0;
        static int first = 0;
        first++;
        int left = diameterOfBinaryTree(root->left);
        int right = diameterOfBinaryTree(root->right);
        first--;
        int sum = left + right;
        if (sum > maxValue) maxValue = sum;
        if (!first)
            return maxValue;
        else
            return max(left, right);
    }
};
int main() {
    return 0;
}