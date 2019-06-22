/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

/* Recursive, and one thing need to know is 'start + distance/2' , otherwise if you use (end+start)/2 may cause overflow.
Runtime: 16 ms, faster than 93.61% of C++ online submissions for Convert Sorted Array to Binary Search Tree.
Memory Usage: 21.1 MB, less than 50.05% of C++ online submissions for Convert Sorted Array to Binary Search Tree.
*/

class Solution {
public:
    TreeNode* sortedArray2BST(int start, int end, vector<int>& nums)
    {
        if(start > end)
            return NULL;
        int mid = start + (end - start)/2;
        TreeNode* temp = new TreeNode(nums[mid]);
        temp->left = sortedArray2BST(start, mid-1, nums);
        temp->right = sortedArray2BST(mid+1, end, nums);
        
        return temp;
    }
    
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return sortedArray2BST(0,nums.size()-1,nums);
    }
};
