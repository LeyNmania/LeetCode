/*
Runtime: 16 ms
Memory Usage: 9.5 MB
*/
class Solution {
public:
    int minMoves2(vector<int>& nums) {
        int n = nums.size();
        int res = 0;
        sort(nums.begin(),nums.end());
        for(int i = 0; i < n/2; ++i)
        {
            res += (nums[n-1-i]-nums[i]);
        }
        return res;
    }
};
