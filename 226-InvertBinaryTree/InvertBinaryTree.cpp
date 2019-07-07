/*
Runtime: 0 ms, faster than 100.00% of C++ online submissions for Invert Binary Tree.
Memory Usage: 9 MB, less than 80.37% of C++ online submissions for Invert Binary Tree.
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
    TreeNode* invertTree(TreeNode* root) {
        if(root)
        {
            invertTree(root->left);
            invertTree(root->right);
            swap(root->left,root->right);
        }
        return root;   
    }
};
