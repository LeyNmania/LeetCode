/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 
 /* A recursive solution is easy to write or understand , but it`s trivial in DFS part .
 Runtime: 12 ms, faster than 87.34% of C++ online submissions for Maximum Depth of Binary Tree.
 Memory Usage: 19.7 MB, less than 5.07% of C++ online submissions for Maximum Depth of Binary Tree.
 */
class Solution {
public:
    int maxDepth(TreeNode* root) {
        return (root==NULL)?0:max(maxDepth(root->left),maxDepth(root->right))+1;
    }
};

