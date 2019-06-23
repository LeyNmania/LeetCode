/* As the description of this question : It doesn't matter what you leave beyond the new length.
Runtime: 20 ms, faster than 96.04% of C++ online submissions for Remove Duplicates from Sorted Array.
Memory Usage: 10.1 MB, less than 29.78% of C++ online submissions for Remove Duplicates from Sorted Array.
*/
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size()<2)
            return nums.size();
        int j = 1;
        for(int i = 1;i<nums.size();++i)
        {
            if(nums[i]!=nums[i-1])
                nums[j++] = nums[i];
        }
        return j;
    }
};

/* Another way using STL
Runtime: 24 ms, faster than 80.43% of C++ online submissions for Remove Duplicates from Sorted Array.
Memory Usage: 9.9 MB, less than 71.90% of C++ online submissions for Remove Duplicates from Sorted Array.
*/
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        nums.resize(unique(nums.begin(),nums.end())-nums.begin());
        return nums.size();
    }
};
