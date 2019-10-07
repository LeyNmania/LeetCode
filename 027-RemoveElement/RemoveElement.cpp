/*
Runtime: 4 ms, faster than 70.71% of C++ online submissions for Remove Element.
Memory Usage: 8.7 MB, less than 38.23% of C++ online submissions for Remove Element.
*/
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int count = 0;
        int len = nums.size();
        for (int i = 0; i < len; ++i)
        {
            if (nums[i] == val)
                ++count;
            else
            {
                nums[i-count] = nums[i];
            }
        }
        return len-count;
    }
};
