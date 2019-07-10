/*
Runtime: 16 ms, faster than 71.83% of C++ online submissions for Single Number III.
Memory Usage: 9.9 MB, less than 29.57% of C++ online submissions for Single Number III.
*/
class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int diff = 0;
        int n = nums.size();
        int sum = nums[0];
        vector<int> res(2,0);
        for(int i = 1; i < n; ++i)
            sum ^= nums[i];
        diff = sum & (~(sum-1));
        for(int i = 0; i < n; ++i)
        {
            if((nums[i] & diff) == 0)
                res[0] ^= nums[i];
            else
                res[1] ^= nums[i];
        }
        return res;          
    }
};
