/* Top-Down solution
Runtime: 20 ms, faster than 33.79% of C++ online submissions for Balanced Binary Tree.
Memory Usage: 17.3 MB, less than 52.03% of C++ online submissions for Balanced Binary Tree.
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
    int depth(TreeNode* root)
    {
        if(!root)
            return 0;
        else
            return max(depth(root->left),depth(root->right))+1;
    }
    bool isBalanced(TreeNode* root) {
        if(!root)
            return true;
        int left = depth(root->left);
        int right = depth(root->right);
        return abs(left-right)<=1 &&  isBalanced(root->left) && isBalanced(root->right);
    }
};

/* DFS down-Top
Details 
Runtime: 16 ms, faster than 72.94% of C++ online submissions for Balanced Binary Tree.
Memory Usage: 17.2 MB, less than 80.09% of C++ online submissions for Balanced Binary Tree.
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
    int dfs(TreeNode* root)
    {
        if (root == NULL) return 0;
        
        int leftHeight = dfs(root -> left);
        if (leftHeight == -1) 
            return -1;
        int rightHeight = dfs(root -> right);
        if (rightHeight == -1) 
            return -1;
        
        if (abs(leftHeight - rightHeight) > 1)  
            return -1;
        return max (leftHeight, rightHeight) + 1;
    }
    bool isBalanced(TreeNode* root) {
        return dfs(root) != -1;
    }
};
