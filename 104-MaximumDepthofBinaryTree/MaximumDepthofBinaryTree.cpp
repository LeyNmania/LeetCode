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

/* BFS is the following
Runtime: 8 ms, faster than 96.00% of C++ online submissions for Maximum Depth of Binary Tree.
Memory Usage: 19.4 MB, less than 58.15% of C++ online submissions for Maximum Depth of Binary Tree.
*/
class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(!root)
            return 0;
        queue<TreeNode*> q;
        int count = 0; 
        q.push(root);
        
        while(!q.empty())
        {
            ++count;
            for(int i = 0 , n = q.size();i<n;i++)
            {
                TreeNode* p = q.front();
                q.pop();
                
                if(p->left)
                    q.push(p->left);
                if(p->right)
                    q.push(p->right);
            }
        }
        return count;
    }
};
