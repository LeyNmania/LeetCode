/* Recursive
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

/* Iterative
Runtime: 4 ms, faster than 89.71% of C++ online submissions for Sum of Left Leaves.
Memory Usage: 13.3 MB, less than 94.91% of C++ online submissions for Sum of Left Leaves.
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
        int sum = 0;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty())
        {
            TreeNode* c = q.front();
            q.pop();
            if(c->left && !c->left->left && !c->left->right)
                sum += c->left->val;
            if(c->left)
                q.push(c->left);
            if(c->right)
                q.push(c->right);
        }
        return sum;
    }
};
