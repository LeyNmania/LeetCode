/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 
 // Iterative solution first
 /*
 Runtime: 8 ms, faster than 84.32% of C++ online submissions for Symmetric Tree.
 Memory Usage: 15.1 MB, less than 49.32% of C++ online submissions for Symmetric Tree.
 */
 
class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        if(!root)
            return true;
        queue<TreeNode*> q;
        q.push(root->left);
        q.push(root->right);
        
        TreeNode* left,* right;
        
        while(!q.empty())
        {
            left = q.front();
            q.pop();
            right = q.front();
            q.pop();
            if(left == NULL && right == NULL)
                continue;
            if(left == NULL || right == NULL)
                return false;
            if(left->val!=right->val)
                return false;
            q.push(left->left);
            q.push(right->right);
            q.push(left->right);
            q.push(right->left);
        }
        return true;
    }
};

// Recursive solution next 
/*
Runtime: 8 ms, faster than 83.88% of C++ online submissions for Symmetric Tree.
Memory Usage: 14.8 MB, less than 63.21% of C++ online submissions for Symmetric Tree.
*/

class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        return isMirror(root,root);
    }
    bool isMirror(TreeNode* t1, TreeNode* t2)
    {
        if(!t1 && !t2)
            return true;
        if(!t1 || !t2)
            return false;
        return (t1->val == t2->val) 
            && isMirror(t1->left,t2->right) 
            && isMirror(t1->right,t2->left);
    }
};
