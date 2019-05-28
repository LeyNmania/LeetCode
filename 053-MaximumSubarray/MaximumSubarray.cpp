/*Runtime: 8 ms, faster than 94.53% of C++ online submissions for Maximum Subarray.
  Memory Usage: 9.2 MB, less than 83.66% of C++ online submissions for Maximum Subarray.
*/

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int len = nums.size();
        if(len == 0)
            return 0;
        else if(len == 1)
            return nums[0];
        
        int global_max = nums[0];
        int local_max = nums[0];
        for(int i=1;i<nums.size();++i)
        {
            local_max = max(local_max+nums[i],nums[i]);
            global_max = max(local_max,global_max);
        }
        return global_max;
    }
};

/*
Runtime: 4 ms, faster than 99.80% of C++ online submissions for Maximum Subarray.
Memory Usage: 9.5 MB, less than 55.82% of C++ online submissions for Maximum Subarray.
*/

//OP solution

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int res = nums[0] , sum = 0;
        for(int i=0;i<nums.size();++i)
        {
            sum += nums[i];
            res = (sum>res?sum:res);
            sum = (sum<=0?0:sum);
        }
        return res;
    }
};
