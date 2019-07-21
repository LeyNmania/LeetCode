/* DFS
Runtime: 16 ms, faster than 71.88% of C++ online submissions for Find Bottom Left Tree Value.
Memory Usage: 20.5 MB, less than 96.20% of C++ online submissions for Find Bottom Left Tree Value.
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
    int findBottomLeftValue(TreeNode* root) {
        int bot = 0;
        int height = 0;
        dfs(root, 1, height, bot);
        return bot;
    }
private:
    void dfs(TreeNode* root, int depth, int& height, int& res)
    {
        if(root == NULL)
            return ;
        if(depth > height)
        {
            res = root->val;
            height = depth;
        }
        dfs(root->left, depth+1, height, res);
        dfs(root->right, depth+1, height, res);
    }
};

/* BFS
Runtime: 16 ms, faster than 71.88% of C++ online submissions for Find Bottom Left Tree Value.
Memory Usage: 20.8 MB, less than 67.72% of C++ online submissions for Find Bottom Left Tree Value.
*/
class Solution {
public:
    int findBottomLeftValue(TreeNode* root) {
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty())
        {
            root = q.front();
            q.pop();
            if(root->right != NULL)
                q.push(root->right);
            if(root->left != NULL)
                q.push(root->left);
        }
        return root->val;
    }
};
