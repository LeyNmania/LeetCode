/*
Runtime: 16 ms, faster than 93.63% of C++ online submissions for Merge Intervals.
Memory Usage: 12.2 MB, less than 100.00% of C++ online submissions for Merge Intervals.
*/
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        if (intervals.empty())
            return intervals;
        sort(intervals.begin(),intervals.end());
        
        int len = intervals.size();
        
        vector<vector<int>> res {intervals[0]};
        for(int i = 1; i < len; ++i)
        {
            if (res.back()[1] < intervals[i][0])
                res.push_back(intervals[i]);
            else
                res.back()[1] = max(res.back()[1], intervals[i][1]);
        }
        return res;
    }
};
