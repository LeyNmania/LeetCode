/*
Runtime: 4 ms, faster than 89.71% of C++ online submissions for Sum of Left Leaves.
Memory Usage: 13.5 MB, less than 46.95% of C++ online submissions for Sum of Left Leaves.
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
    int sumOfLeftLeaves(TreeNode* root) {
        if(!root)
            return 0;
        if(root->left && !root->left->left && !root->left->right)
            return root->left->val + sumOfLeftLeaves(root->right);
        return sumOfLeftLeaves(root->left) + sumOfLeftLeaves(root->right);
            
    }
};
