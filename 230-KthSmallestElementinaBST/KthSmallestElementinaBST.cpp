/*
Runtime: 16 ms, faster than 97.10% of C++ online submissions for Kth Smallest Element in a BST.
Memory Usage: 21.6 MB, less than 45.72% of C++ online submissions for Kth Smallest Element in a BST.
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
    int kthSmallest(TreeNode* root, int k) {
        stack<TreeNode*> s;
        TreeNode* p = root;
        while(p || !s.empty())
        {
            while(p)
            {
                s.push(p);
                p = p->left;
            }
            p = s.top();
            if(!--k)
                return p->val;
            s.pop();
            p = p->right;
        }
        return -1;
    }
};
