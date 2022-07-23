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
    TreeNode *mergeTrees(TreeNode *root1, TreeNode *root2) {
        if (!root1 && !root2) return NULL;
        int v1 = root1 ? root1->val : 0;
        int v2 = root2 ? root2->val : 0;
        TreeNode *root = new TreeNode(v1 + v2);
        root->left = mergeTrees(root1 ? root1->left : NULL, root2 ? root2->left : NULL);
        root->right = mergeTrees(root1 ? root1->right : NULL, root2 ? root2->right : NULL);
        return root;
    }
};
// insted new, i merged
class Solution2 {
   public:
    TreeNode *mergeTrees(TreeNode *root1, TreeNode *root2) {
        if (!root1 && !root2) return root1;
        if (root1 && !root2) return root1;
        if (!root1 && root2) return root2;

        root1->val += root2->val;

        if (root1->left && root2->left) mergeTrees(root1->left, root2->left);
        if (root1->right && root2->right) mergeTrees(root1->right, root2->right);
        if (!root1->left && root2->left) root1->left = root2->left;
        if (!root1->right && root2->right) root1->right = root2->right;

        delete root2;
        return root1;
    }
};
int main() {
    return 0;
}