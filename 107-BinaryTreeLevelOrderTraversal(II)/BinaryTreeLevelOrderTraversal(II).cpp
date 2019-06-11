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
