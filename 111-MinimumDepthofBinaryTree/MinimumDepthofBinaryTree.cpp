/* DFS
Runtime: 16 ms, faster than 64.44% of C++ online submissions for Minimum Depth of Binary Tree.
Memory Usage: 19.8 MB, less than 57.74% of C++ online submissions for Minimum Depth of Binary Tree.
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
    int minDepth(TreeNode* root) {
        if(!root) 
            return 0;
        int L = 0, R = 0;
        L = minDepth(root->left);
        R = minDepth(root->right);
        return 1 + (min(L, R) ? min(L, R) : max(L, R));
    }  
};

/* BFS

*/
