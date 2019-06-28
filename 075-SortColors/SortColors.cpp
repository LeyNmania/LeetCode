/* One easy-understand solution
Runtime: 0 ms, faster than 100.00% of C++ online submissions for Sort Colors.
Memory Usage: 8.7 MB, less than 13.33% of C++ online submissions for Sort Colors.
*/
class Solution {
public:
    void sortColors(vector<int>& nums) {
        if(nums.size()<2)
            return ;           
        int low = 0;
        int high = nums.size()-1;
        for(int i=0;i<=high;)
        {
            if(nums[i]==0)
                swap(nums[i++],nums[low++]);
            else if(nums[i]==2)
                swap(nums[i],nums[high--]);
            else
                ++i;
        }
        
    }
};

/* Another brilliant solution. Though it looks like the first one , but it is not easy to find out this path.
Runtime: 0 ms, faster than 100.00% of C++ online submissions for Sort Colors.
Memory Usage: 8.7 MB, less than 9.49% of C++ online submissions for Sort Colors.
*/
class Solution {
public:
    void sortColors(vector<int>& nums) {         
        int low = 0, i = 0;
        int high = nums.size()-1;
        while(i<=high)
        {
            if(nums[i]==0)
            {
                nums[i++] = 1;
                nums[low++] = 0;
            }
            else if(nums[i] == 2)
            {
                nums[i] = nums[high];
                nums[high--] = 2;
            }
            else
                ++i;
        }
        
    }
};
