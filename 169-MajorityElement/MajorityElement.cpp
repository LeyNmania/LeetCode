/*
Runtime: 24 ms
Memory Usage: 11.2 MB
*/
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        nth_element(nums.begin(),nums.begin() + (n/2), nums.end());
        return nums[n/2];
    }
};
