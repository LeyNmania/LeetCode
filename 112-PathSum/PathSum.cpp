/*
Runtime: 8 ms, faster than 97.70% of C++ online submissions for Path Sum.
Memory Usage: 19.9 MB, less than 28.65% of C++ online submissions for Path Sum.
*/
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    bool hasPathSum(TreeNode* root, int sum) {
        if(!root)
            return false;
        if(!root->left && !root->right && sum == root->val)
            return true;
        return hasPathSum(root->left, sum-root->val) || hasPathSum(root->right, sum-root->val);
    }
};
