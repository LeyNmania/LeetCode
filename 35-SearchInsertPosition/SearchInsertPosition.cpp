// Not binary search but 4ms beats 98%
// In fact it`s a competitive solution instead of a practice
// I`ll post 2 solutions , the first is mine , the other is binary search O(logn)
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int pos;
        if(target<nums[0])
            return 0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==target)
                return i;
            else if(target > nums[i-1])
            {
                if(target < nums[i])
                    pos=i;
                else
                    pos=i+1;
            }
        }
        return pos;
    }
};
// Binary Search : 8ms beats 31%. I don`t know why could this happen , hope for a check.
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int low = 0, high = nums.size()-1;

        while (low <= high) 
        {
            int mid = (high+low)/2;
            if (nums[mid] < target)
                low = mid+1;
            else
                high = mid-1;
        }
        return low;
    }
};
