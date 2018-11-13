class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int a=0;
        int b=0;
        
        for(a=0;a<nums.size();a++)
        {
            for(b=a+1;b<nums.size();b++)
            {
                if((nums[a]+nums[b])==target)
                    return vector<int> {a,b};
            }
        }
        exit(1);
    }
};
