// Runtime: 112 ms, faster than 86.03% of C++ online submissions for Range Sum Query - Immutable.

class NumArray {
public:
    vector<int> dp;
    NumArray(vector<int> nums) {
        int sum=0;
        for(int i=0;i<nums.size();++i)
        {
            sum += nums[i];
            dp.push_back(sum);
        }
    }
    
    int sumRange(int i, int j) {
        return i==0 ? dp[j]:dp[j]-dp[i-1];
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray obj = new NumArray(nums);
 * int param_1 = obj.sumRange(i,j);
 */
 
