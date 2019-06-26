/*
Runtime: 8 ms, faster than 76.85% of C++ online submissions for Two Sum II - Input array is sorted.
Memory Usage: 9.5 MB, less than 47.82% of C++ online submissions for Two Sum II - Input array is sorted.
*/

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int l = 0;
        int r = numbers.size()-1;
        while(l<r)
        {
            int temp = numbers[l]+numbers[r];
            if(temp == target)
                return {l+1,r+1};
            else if(temp < target)
                ++l;
            else
                --r;
        }
        return {};
    }
};
