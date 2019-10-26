/*
Runtime: 16 ms, faster than 62.21% of C++ online submissions for Move Zeroes.
Memory Usage: 9.4 MB, less than 91.67% of C++ online submissions for Move Zeroes.
*/
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int j = 0;
        int size = nums.size();
        while (j < size && nums[j] != 0)
            ++j;
        for (int i = j; i < size; ++i)
        {
            if (nums[i] != 0)
                nums[j++] = nums[i]; 
        }
        for (; j < size; ++j)
        {
            nums[j] = 0;
        }
    }
};
