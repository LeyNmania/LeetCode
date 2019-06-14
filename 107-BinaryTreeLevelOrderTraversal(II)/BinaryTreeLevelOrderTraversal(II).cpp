/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
/* This is a DFS solution
Runtime: 8 ms, faster than 88.23% of C++ online submissions for Binary Tree Level Order Traversal II.
Memory Usage: 15.1 MB, less than 12.55% of C++ online submissions for Binary Tree Level Order Traversal II.
*/
class Solution {
public:
    void recur(vector<vector<int>>& a,TreeNode* n,int i){
        if(!n)
            return ;
        if(i>=a.size())
            a.push_back({});
        a[i].push_back(n->val);
        recur(a,n->left,i+1);
        recur(a,n->right,i+1);
    }
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>> ans;
        recur(ans,root,0);
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
/* This is a BFS solution
Runtime: 4 ms, faster than 97.76% of C++ online submissions for Binary Tree Level Order Traversal II.
Memory Usage: 13.8 MB, less than 70.29% of C++ online submissions for Binary Tree Level Order Traversal II.
*/
class Solution {
public:
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>> res;
        vector<int> n;
        if(!root)
            return res;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty())
        {
            int a = q.size();
            while(a>0)
            {
                auto node = q.front();
                n.push_back(node->val);
                if(node->left)
                    q.push(node->left);
                if(node->right)
                    q.push(node->right);
                q.pop();
                --a;
            }
            res.emplace_back(n);
            n.clear();
        }
        reverse(res.begin(),res.end());
        return res;
    }
};
