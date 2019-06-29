/*
Runtime: 20 ms, faster than 87.78% of C++ online submissions for Top K Frequent Elements.
Memory Usage: 13 MB, less than 10.64% of C++ online submissions for Top K Frequent Elements.
*/

class Solution {
public:
     vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> m;
        for (int num : nums)
            ++m[num];
        
        vector<vector<int>> buckets(nums.size() + 1); 
        for (auto p : m)
            buckets[p.second].push_back(p.first);
        
        vector<int> ans;
        for (int i = buckets.size() - 1; i >= 0 && ans.size() < k; --i) {
            for (int num : buckets[i]) {
                ans.push_back(num);
                if (ans.size() == k)
                    break;
            }
        }
        return ans;
     }
};
