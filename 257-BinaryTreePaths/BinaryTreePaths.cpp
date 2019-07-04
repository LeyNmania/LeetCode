/*
Runtime: 4 ms, faster than 85.10% of C++ online submissions for Binary Tree Paths.
Memory Usage: 11.7 MB, less than 47.62% of C++ online submissions for Binary Tree Paths.
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
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> res;
        if(!root)
            return res;
        dfs(res, root, to_string(root->val));
        return res;
        
    }
    void dfs(vector<string>& res, TreeNode* root, string s)
    {
        if(!root->left && !root->right)
        {
            res.push_back(s);
            return ;
        }
        if(root->left)
            dfs(res, root->left, s+"->"+to_string(root->left->val));
        if(root->right)
            dfs(res, root->right, s+"->"+to_string(root->right->val));
    }
};
