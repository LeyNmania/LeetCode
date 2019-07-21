/* DFS recursive
Runtime: 4 ms, faster than 68.83% of C++ online submissions for Binary Tree Preorder Traversal.
Memory Usage: 9.2 MB, less than 68.18% of C++ online submissions for Binary Tree Preorder Traversal.
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
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> res;
        dfs(root, res);
        return res;
    }
private:
    void dfs(TreeNode* root, vector<int>& a)
    {
        if(!root)
            return;
        a.push_back(root->val);
        dfs(root->left, a);
        dfs(root->right, a);
    }
};

/* BFS iterative
Runtime: 4 ms, faster than 68.83% of C++ online submissions for Binary Tree Preorder Traversal.
Memory Usage: 9 MB, less than 95.69% of C++ online submissions for Binary Tree Preorder Traversal.
*/
class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> res;
        if(!root)
            return res;
        stack<TreeNode*> q;
        q.push(root);
        while(!q.empty())
        {
            root = q.top();
            q.pop();
            res.push_back(root->val);
            if(root->right != NULL)
                q.push(root->right);
            if(root->left != NULL)
                q.push(root->left);
        }
        return res;
    }
};
