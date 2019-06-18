/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 
/*  First is recursive solution . It`s easy to understand and write , but it`s trivial
Runtime: 0 ms, faster than 100.00% of C++ online submissions for Binary Tree Inorder Traversal.
Memory Usage: 11.5 MB, less than 5.10% of C++ online submissions for Binary Tree Inorder Traversal.
*/
class Solution {
public:
    vector<int> n;
    vector<int> inorderTraversal(TreeNode* root) {
        if(root)
        {
            inorderTraversal(root->left);
            n.push_back(root->val);
            inorderTraversal(root->right);
        }
        return n;
    }
};

/* Next is a iterative solution.
Runtime: 4 ms, faster than 83.68% of C++ online submissions for Binary Tree Inorder Traversal.
Memory Usage: 9.2 MB, less than 59.97% of C++ online submissions for Binary Tree Inorder Traversal.
*/
class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> n;
        stack<TreeNode*> p;
        while( root || !p.empty())
        {
            while(root)
            {
                p.push(root);
                root = root->left;
            }
            root = p.top();
            n.push_back(root->val);
            p.pop();
            root = root->right;
        }
        return n;
    }
};
