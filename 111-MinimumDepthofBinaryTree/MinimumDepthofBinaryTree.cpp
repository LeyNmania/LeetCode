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

/* DFS concise
Runtime: 12 ms, faster than 85.12% of C++ online submissions for Minimum Depth of Binary Tree.
Memory Usage: 19.4 MB, less than 91.77% of C++ online submissions for Minimum Depth of Binary Tree.
*/
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
class Solution {
public:
    int minDepth(TreeNode* root) {
        if (root == NULL) return 0;
        int left_minDepth = minDepth(root->left);
        int right_minDepth = minDepth(root->right);
        if (left_minDepth == 0) 
            return right_minDepth + 1;
        if (right_minDepth == 0) 
            return left_minDepth + 1;
        return left_minDepth > right_minDepth?right_minDepth + 1:left_minDepth + 1;
    }  
};

/* BFS
Runtime: 4 ms, faster than 99.92% of C++ online submissions for Minimum Depth of Binary Tree.
Memory Usage: 19.7 MB, less than 65.82% of C++ online submissions for Minimum Depth of Binary Tree.
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
        queue<TreeNode*> Q;
        Q.push(root);
        int i = 0;
        while(!Q.empty())
        {
            ++i;
            int k = Q.size();
            for(int j=0; j<k; j++)
            {
                TreeNode* rt = Q.front();
                if(rt->left) 
                    Q.push(rt->left);
                if(rt->right)
                    Q.push(rt->right);
                Q.pop();
                if(!rt->left && !rt->right)
                    return i;
            }
        }
        return i;
    }  
};

    
    
